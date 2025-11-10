import rclpy
import cv2
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from ultralytics import YOLO

from custom_msgs_pkg.msg import BoundingBox, DetectionList  # type: ignore

class ObjectDetector2D(Node):
    def __init__(self):
        super().__init__('object_detector_2d_node')
        
        self.bridge = CvBridge()
        self.detection_model = YOLO('/home/mido/Pictures/Aya workspace Version 1/aya_ws/src/perception_pkg/yolo11n.pt')

        self.subscription = self.create_subscription(
            Image,
            'cam_stream',
            self.detection_callback,
            10
        )

        self.publisher = self.create_publisher(DetectionList, 'object_list_2D', 10)

        self.get_logger().info('object_detector_2d_node is created and subscribed to cam_stream')

    def detection_callback(self, image_msg):
        image_msg_header = image_msg.header
        msg_time_stamp = image_msg_header.stamp
        msg_frame_id = image_msg_header.frame_id

        frame = self.bridge.imgmsg_to_cv2(image_msg, desired_encoding="bgr8")
        detection_result = self.detection_model(frame)[0]

        self.get_logger().info(f"detection is running {msg_frame_id} {frame.shape}")

        detection_list_msg = DetectionList()
        detection_list_msg.header = image_msg_header

        for box in detection_result.boxes:
            x1, y1, x2, y2 = map(int, box.xyxy[0])
            conf = float(box.conf[0])
            class_id = int(box.cls[0])
            class_name = self.detection_model.names[class_id]

            bbox = BoundingBox()
            bbox.x1 = x1
            bbox.y1 = y1
            bbox.x2 = x2
            bbox.y2 = y2
            bbox.confidence = conf
            bbox.class_name = class_name

            detection_list_msg.detections.append(bbox)
            self.publisher.publish(detection_list_msg)

            cv2.rectangle(frame, [x1, y1], [x2, y2], [0, 255, 0], 2)
            cv2.putText(frame, f'{class_name}', (x1, y1 - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 0, 0), 2)

        cv2.imshow("2D Detection", frame)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    node = ObjectDetector2D()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
