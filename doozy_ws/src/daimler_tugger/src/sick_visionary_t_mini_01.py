#!/usr/bin/env python3

import rospy

from scripts.msg import SickTMini

import requests

class DollyIdentify:

    def __init__(self):
        rospy.init_node('Robot_controller', anonymous=True)
        
        self.sick_mini_t = SickTMini()
        
        self.sick_vision_t_mini_pub = rospy.Publisher('/sick_vision_t_mini/one', SickTMini, queue_size=10)

    def read_sick_camera(self):

        while not rospy.is_shutdown():
            respond = requests.get("http://192.168.1.10/api/detectionResult") 
            rospy.loginfo(respond)

            dolly = respond.json()['data']['detectionResult']['dollyFound']

            left_corner = respond.json()['data']['detectionResult']['leftCorner']

            left_corner_x = respond.json()['data']['detectionResult']['leftCorner']['X']
            left_corner_y = respond.json()['data']['detectionResult']['leftCorner']['Y']
            left_corner_z = respond.json()['data']['detectionResult']['leftCorner']['Z']

            right_corner = respond.json()['data']['detectionResult']['rightCorner']

            right_corner_x = respond.json()['data']['detectionResult']['rightCorner']['X']
            right_corner_y = respond.json()['data']['detectionResult']['rightCorner']['Y']
            right_corner_z = respond.json()['data']['detectionResult']['rightCorner']['Z']


            if dolly:
                self.sick_mini_t.dolly_found = True
            else : 
                self.sick_mini_t.dolly_found = False

            # rospy.loginfo('Left Pocket ',left_corner)
            # rospy.loginfo('Right Pocket',right_corner)
            # rospy.loginfo('Dolly_Present: ', dolly)

            self.sick_mini_t.left_corners.x = left_corner_x
            self.sick_mini_t.left_corners.y = left_corner_y
            self.sick_mini_t.left_corners.z = left_corner_z

            self.sick_mini_t.right_corners.x = right_corner_x
            self.sick_mini_t.right_corners.y = right_corner_y
            self.sick_mini_t.right_corners.z = float(right_corner_z)
            
            self.sick_mini_t.header.stamp = rospy.Time.now()
            self.sick_mini_t.header.frame_id = 'map'

            self.sick_mini_t.status_of_camera = "OK"

            self.sick_mini_t.corners_distance = respond.json()['data']['detectionResult']['cornersDistance'] / 1000

            x_point = (left_corner_x / 1000 + right_corner_x / 1000) / 2
            y_point = (left_corner_y / 1000 + right_corner_y / 1000) / 2
            z_point = (left_corner_z / 1000 + right_corner_z / 1000) / 2

            self.sick_mini_t.point.x = x_point
            self.sick_mini_t.point.y = y_point
            self.sick_mini_t.point.z = z_point
            
            rospy.loginfo(f"X point ==> {x_point}")
            rospy.loginfo(f"Y point ==> {y_point}")
            rospy.loginfo(f"Z point ==> {z_point}")
            self.sick_vision_t_mini_pub.publish(self.sick_mini_t)

if __name__ == '__main__':
    try:
        dolly_identify = DollyIdentify()
        dolly_identify.read_sick_camera()
    except rospy.ROSInterruptException:
        pass
