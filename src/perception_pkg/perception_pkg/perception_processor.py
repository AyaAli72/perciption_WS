import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from custom_msgs_pkg.msg import BoundingBox, DetectionList, Object3D, Detection3DList
from cv_bridge import CvBridge
import cv2
import numpy as np

class PerceptionProcessor(Node):
    def __init__(self):
        super().__init__('perception_processor_node')

        self.fx, self.fy = 520.0, 520.0
        self.cx, self.cy = 946.0 / 2, 946.0 / 2

        self.object_2d_dict = {}
        self.depth_estimation_dict = {}
        self.cam_stream_dict = {}

        self.bridge = CvBridge()

        self.create_subscription(Image, 'cam_stream', self.image_callback, 10)
        self.create_subscription(Image, 'depth_topic', self.depth_callback, 10)
        self.create_subscription(DetectionList, 'object_list_2D', self.object_detection_callback, 10)

        self.publisher = self.create_publisher(Detection3DList, 'object_3d_output', 10)

        self.create_timer(0.1, self.process)

        self.get_logger().info("PerceptionProcessor node has been started.")

    def image_callback(self, msg):
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        frame_id = int(msg.header.frame_id)
        self.cam_stream_dict[frame_id] = frame

    def depth_callback(self, msg):
        depth_map = self.bridge.imgmsg_to_cv2(msg, desired_encoding='32FC1')
        frame_id = int(msg.header.frame_id)
        self.depth_estimation_dict[frame_id] = depth_map

    def object_detection_callback(self, msg):
        frame_id = int(msg.header.frame_id)
        self.object_2d_dict[frame_id] = msg.detections

    def process(self):
        if not self.object_2d_dict or not self.depth_estimation_dict:
            self.get_logger().info("x1 = {object_2d_dict}, x2= {depth_estimation_dict}")
            self.get_logger().info("Waiting for data...")
            return

        depth_frame_ids = sorted(self.depth_estimation_dict.keys())
        last_depth_id = depth_frame_ids[-1]

        if last_depth_id not in self.object_2d_dict:
            return

        corr_2d_detections = self.object_2d_dict[last_depth_id]
        corr_depth_map = self.depth_estimation_dict[last_depth_id]
        frame = self.cam_stream_dict.get(last_depth_id, None)
        if frame is None:
            return

        object_3d_list_msg = Detection3DList()
        object_3d_list_msg.header.stamp = self.get_clock().now().to_msg()
        object_3d_list_msg.header.frame_id = str(last_depth_id)

        for detection in corr_2d_detections:
            x_min, x_max = detection.x1, detection.x2
            y_min, y_max = detection.y1, detection.y2

            xc_2d = int(x_min + (x_max - x_min) / 2.0)
            yc_2d = int(y_min + (y_max - y_min) / 2.0)

            z = float(corr_depth_map[yc_2d, xc_2d])
            if z == 0.0 or np.isnan(z):
                continue

            xc = (xc_2d - self.cx) * z / self.fx
            yc = (yc_2d - self.cy) * z / self.fy

            obj3d = Object3D()
            obj3d.x1, obj3d.x2 = x_min, x_max
            obj3d.y1, obj3d.y2 = y_min, y_max
            obj3d.xc, obj3d.yc, obj3d.zc = xc, yc, z
            obj3d.confidence = detection.confidence
            obj3d.class_name = detection.class_name

            self.get_logger().info(f"x1 = {obj3d.x1}, x2= {obj3d.x2}")
            self.get_logger().info(f"y1 = {obj3d.y1}, y2= {obj3d.y2}")
            self.get_logger().info(f"xc = {obj3d.xc}, yc= {obj3d.yc}")
            self.get_logger().info(f"z = {obj3d.zc}")

            object_3d_list_msg.detections.append(obj3d)
            cv2.rectangle(frame, (obj3d.x1, obj3d.y1), (obj3d.x2, obj3d.y2), (0, 255, 0), 2)
            cv2.putText(frame, f'{obj3d.zc:.2f}', (obj3d.x1, obj3d.y1 - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 0, 0), 2)

        cv2.imshow("3D Detection", frame)
        cv2.waitKey(1)

        self.publisher.publish(object_3d_list_msg)

def main(args=None):
    rclpy.init(args=args)
    node = PerceptionProcessor()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
if __name__ == '__main__':
    main()