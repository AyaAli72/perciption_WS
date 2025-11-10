import rclpy
import cv2
import torch
import numpy as np
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import sys

sys.path.append("/home/mido/Pictures/Aya workspace Version 1/aya_ws/src/perception_pkg/perception_pkg/Depth-Anything-V2/metric_depth/")
from depth_anything_v2.dpt import DepthAnythingV2  # type: ignore

class DepthEstimatorNode(Node):
    def __init__(self):
        super().__init__('depth_estimator_node')
        self.bridge = CvBridge()
        self.device = 'cuda' if torch.cuda.is_available() else 'mps' if torch.backends.mps.is_available() else 'cpu'

        encoder = 'vits'
        dataset = "vkitti"
        max_depth = 20
        model_configs = {
            'vits': {'encoder': 'vits', 'features': 64, 'out_channels': [48, 96, 192, 384]},
            'vitb': {'encoder': 'vitb', 'features': 128, 'out_channels': [96, 192, 384, 768]},
            'vitl': {'encoder': 'vitl', 'features': 256, 'out_channels': [256, 512, 1024, 1024]},
            'vitg': {'encoder': 'vitg', 'features': 384, 'out_channels': [1536, 1536, 1536, 1536]}
        }

        self.depth_model = DepthAnythingV2(**{**model_configs[encoder], 'max_depth': max_depth})
        self.depth_model.load_state_dict(torch.load(
            "/home/mido/Pictures/Aya workspace Version 1/aya_ws/src/perception_pkg/perception_pkg/depth_anything_v2_vits.pth",
            map_location='cpu'
        ))
        self.depth_model.cuda()
        self.depth_model.eval()

        self.subscription = self.create_subscription(Image, 'cam_stream', self.depth_estimation_callback, 10)
        self.depth_publisher = self.create_publisher(Image, 'depth_topic', 10)

        self.get_logger().info("DepthEstimatorNode is subscribed to 'cam_stream'")

    def normalize_depthmap(self, depth_map):
        depth_min = np.min(depth_map)
        depth_max = np.max(depth_map)
        if (depth_max - depth_min) > 0:
            depth_vis = 255 * (depth_map - depth_min) / (depth_max - depth_min)
        else:
            depth_vis = np.zeros_like(depth_map)
        return np.clip(depth_vis, 0, 255).astype(np.uint8)

    def depth_estimation_callback(self, image_msg):
        image_msg_header = image_msg.header
        msg_frame_id = image_msg_header.frame_id

        frame = self.bridge.imgmsg_to_cv2(image_msg, desired_encoding="bgr8")
        depth_map = self.depth_model.infer_image(frame)

        self.get_logger().info(f"Depth estimation running on frame ID: {msg_frame_id}")

        # Publish depth map as ROS message
        try:
            ros_depth_msg = self.bridge.cv2_to_imgmsg(depth_map.astype(np.float32), encoding='32FC1')
            ros_depth_msg.header = image_msg_header
            self.depth_publisher.publish(ros_depth_msg)
            self.get_logger().info(f"Published depth frame {msg_frame_id} to depth_topic")
        except Exception as e:
            self.get_logger().error(f"Failed to publish depth: {e}")

        # Optional visualization
        normalized_depth_map = self.normalize_depthmap(depth_map)
        depth_map_colored = cv2.applyColorMap(normalized_depth_map, cv2.COLORMAP_JET)
        depth_resized = cv2.resize(depth_map_colored, (0, 0), fx=0.5, fy=0.5)
        frame_resized = cv2.resize(frame, (0, 0), fx=0.5, fy=0.5)
        combined_view = np.hstack((frame_resized, depth_resized))

        cv2.imshow("Depth Map Estimation", combined_view)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    node = DepthEstimatorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
