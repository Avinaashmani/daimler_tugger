#!/usr/bin/env python3 
import rclpy 
import cv2 as cv
import numpy as np
from cv2 import aruco 
from rclpy import logging
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError

class TB3_Image(Node):

    def __init__(self):
        
        super().__init__("tb3_image_processing_node")
        
        self.bridge__ = CvBridge()
        #self.node = rclpy.create_node()
        
        self.get_logger().info("TB3 CV Study node...")
        self.qos_profile = QoSProfile(reliability=QoSReliabilityPolicy.RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT, 
                                      history=QoSHistoryPolicy.RMW_QOS_POLICY_HISTORY_KEEP_LAST, depth=1)

        self.subs = self.create_subscription(Image, '/camera/image_raw', self.image_callback, qos_profile=self.qos_profile)
        
        self.calib_data_path = '/home/avinaash/doozy_robotics/doozy_ws_2/src/pallet_docker_02/pallet_docker_02/MultiMatrix.npz'
        self.calib_data = np.load(self.calib_data_path)

        print(self.calib_data.files)

        self.cam_mat = self.calib_data["camMatrix"]
        self.dist_coef = self.calib_data["distCoef"]
        self.r_vectors = self.calib_data["rVector"]
        self.t_vectors = self.calib_data["tVector"]

        self.MARKER_SIZE = 6 

        self.marker_dict = aruco.getPredefinedDictionary(aruco.DICT_5X5_250)

        self.param_markers = aruco.DetectorParameters_create()
    
    def image_callback(self, data):
        
        self.get_logger().info('Receiving video frame')
        tb3_frame = self.bridge__.imgmsg_to_cv2(data)
        
        gray_frame = cv.cvtColor(tb3_frame, cv.COLOR_BGR2GRAY)
        marker_corners, marker_IDs, reject = aruco.detectMarkers(gray_frame, self.marker_dict, parameters=self.param_markers)

        if marker_corners is None:  # Check if markers were detected
            rVec, tVec, _ = aruco.estimatePoseSingleMarkers(
                marker_corners, self.MARKER_SIZE, self.cam_mat, self.dist_coef)
            for ids, corners, i in zip(marker_IDs, marker_corners, range(len(marker_corners))):  # Ensure to iterate over a range
                cv.polylines(
                    tb3_frame, [corners.astype(np.int32)], True, (0, 255, 255), 4, cv.LINE_AA)
                corners = corners.reshape(4, 2)
                corners = corners.astype(int)
                top_right = corners[0].ravel()
                top_left = corners[1].ravel()
                bottom_right = corners[2].ravel()
                bottom_left = corners[3].ravel()

                # Calculating the distance
                distance = np.sqrt(
                    tVec[i][0][2] ** 2 + tVec[i][0][0] ** 2 + tVec[i][0][1] ** 2
                )
                text = "Dist: " + str(round(distance, 2))
                #text_2 = str(f"x:{round(tVec[i][0][0], 1)} y: {round(tVec[i][0][1], 1)} ")
                # Draw the pose of the marker
                cv.drawFrameAxes(tb3_frame, self.cam_mat, self.dist_coef, rVec[i], tVec[i], 4, 4)
                cv.putText(tb3_frame,
                           text,
                           (top_right[0], top_right[1]),  # Corrected top_right argument
                           cv.FONT_HERSHEY_PLAIN,
                           1.3,
                           (0, 0, 255),
                           2,
                           cv.LINE_AA
                           )

                print(distance)
                print(ids)
        
        cv.imshow("frame", tb3_frame)
        key = cv.waitKey(1)
        if key == ord("q"):
            cv.destroyAllWindows()
def main(args=None):

    rclpy.init(args=args)

    tb3_cam = TB3_Image()
    rclpy.spin(tb3_cam)

    tb3_cam.destroy_node()

    rclpy.shutdown()

if __name__=='__main__':
    main()
