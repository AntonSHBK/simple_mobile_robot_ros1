#!/usr/bin/env python

import rospy
import cv2
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError

bridge = CvBridge()

def img_callback(data):
    cv_image =  bridge.imgmsg_to_cv2(data, "bgr8")
    cv2.imshow("Raw image", cv_image)
    cv2.waitKey(3)


def main():
    print('Hello OpenCV ROS!')
    rospy.init_node('camera_cv_converter_node', anonymous=True)
    bridge = CvBridge()
    img_sub = rospy.Subscriber("/camera/image_raw", Image, img_callback)
    rospy.spin()
  



if __name__ == '__main__':
    main()