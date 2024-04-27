#!/usr/bin/env python3 

import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool, Float64
from geometry_msgs.msg import Vector3

from sick_visionary_t_mini.msg import SickTMini

import requests
import json

class Dolly_Identify(Node):

    def __init__(self):
        super().__init__('Robot_controller')
        
        self.sick_mini_t = SickTMini()
        
        self.sick_vision_t_mini_pub = self.create_publisher(SickTMini, '/sick_vision_t_mini/one',10)

    def read_sick_camera(self):

        while True:
            respond = requests.get("http://192.168.1.10/api/detectionResult") 
            print(respond)

            Dolly = respond.json()['data']['detectionResult']['dollyFound']

            leftCorner = respond.json()['data']['detectionResult']['leftCorner']

            leftCorner_x = respond.json()['data']['detectionResult']['leftCorner']['X']
            leftCorner_y = respond.json()['data']['detectionResult']['leftCorner']['Y']
            leftCorner_z = respond.json()['data']['detectionResult']['leftCorner']['Z']

            rightCorner = respond.json()['data']['detectionResult']['rightCorner']

            rightCorner_x = respond.json()['data']['detectionResult']['rightCorner']['X']
            rightCorner_y = respond.json()['data']['detectionResult']['rightCorner']['Y']
            rightCorner_z = respond.json()['data']['detectionResult']['rightCorner']['Z']


            if Dolly == True:
                self.sick_mini_t.dolly_found = True
            else : 
                self.sick_mini_t.dolly_found = False

            # print('Left Pocket ',leftCorner)
            # print('Right Pocket',rightCorner)
            # print('Dolly_Present: ', Dolly)

            self.sick_mini_t.left_corners.x = leftCorner_x
            self.sick_mini_t.left_corners.y = leftCorner_y
            self.sick_mini_t.left_corners.z = leftCorner_z

            self.sick_mini_t.right_corners.x = rightCorner_x
            self.sick_mini_t.right_corners.y = rightCorner_y
            self.sick_mini_t.right_corners.z = float(rightCorner_z)
            
            self.sick_mini_t.header.stamp = self.get_clock().now().to_msg()
            self.sick_mini_t.header.frame_id = 'map'

            self.sick_mini_t.status_of_camera = "OK"

            self.sick_mini_t.corners_distance = respond.json()['data']['detectionResult']['cornersDistance']/ 1000

            x_point = (leftCorner_x/1000 + rightCorner_x/1000) / 2
            y_point = (leftCorner_y/1000 + rightCorner_y/1000) / 2
            z_point = (leftCorner_z/1000 + rightCorner_z/1000) / 2

            self.sick_mini_t.point.x = x_point
            self.sick_mini_t.point.y = y_point
            self.sick_mini_t.point.z = z_point
            
            print(f"X point ==> {x_point}")
            print(f"Y point ==> {y_point}")
            print(f"Z point ==> {z_point}")
            self.sick_vision_t_mini_pub.publish(self.sick_mini_t)

def main():
    rclpy.init()
    sick_camera = Dolly_Identify()
    rclpy.spin(sick_camera.read_sick_camera())


if __name__ == '__main__':
    main()
