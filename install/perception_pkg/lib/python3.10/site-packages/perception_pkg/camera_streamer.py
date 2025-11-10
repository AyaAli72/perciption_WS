#!/usr/bin/env python3
import rclpy
import cv2
import time
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

def cam_stream():
    rclpy.init()
    node = rclpy.create_node("Camera_node")
    publisher = node.create_publisher(Image, "cam_stream", 10)
    bridge = CvBridge()
    
    #+--------------------------------------------------------------------------------------------------------------------------------------+
    cap = cv2.VideoCapture("/home/mido/Pictures/Aya workspace Version 1/Videos to test/INSANE CAR CRASHES COMPILATION __ Best of USA & Canada Accidents - part 27 (1).mp4") # Pu the video path here
    #+--------------------------------------------------------------------------------------------------------------------------------------+
    
    rate = 1.0  # 2 Hz
    frame_id = 0

    if not cap.isOpened():
        node.get_logger().error("Failed to open video file.")
        rclpy.shutdown()
        return

    while rclpy.ok():
        ret, frame = cap.read()
        if not ret:
            node.get_logger().info("Video is finished.")
            break

        ros_image = bridge.cv2_to_imgmsg(frame, encoding="bgr8")
        ros_image.header.stamp = node.get_clock().now().to_msg()  
        ros_image.header.frame_id = str(frame_id)

        publisher.publish(ros_image)
        node.get_logger().info(f"Published frame ID {frame_id}")
        frame_id += 1

        time.sleep(1.0 / rate)

    cap.release()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    try:
        cam_stream()
    except KeyboardInterrupt:
        pass


