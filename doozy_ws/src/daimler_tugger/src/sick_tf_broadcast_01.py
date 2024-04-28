#!/usr/bin/env python3

import rospy
import tf
from tf.broadcaster import TransformBroadcaster
from scripts.msg import SickTMini

from geometry_msgs.msg import Vector3, TransformStamped
from std_msgs.msg import Bool, String, Header
import requests

class DollyIdentify:

    def __init__(self):

        rospy.init_node('sick_camera_tf', anonymous=False)
        rospy.loginfo ("Sick Visionary T-Mini Tf publisher has begun")

        self.sick_pub = rospy.Publisher('sick_camera_topic', SickTMini, queue_size=10)

        self.right_coner = Vector3
        self.left_corner = Vector3
        self.point = Vector3()
        self.camera_status = String()

        self.header = Header()
        self.dolly_status = String()
        self.dolly_found =  Bool()

        self.sick_data = SickTMini()
        self.read_camera_data()

        self.sick_tf = TransformBroadcaster()        
        self.camera_frame  = "sick_visionary_t_mini"
        self.base_frame = "map"
        self.sick_transform = TransformStamped()

    def read_camera_data(self):

        while True:
            respond = requests.get("http://192.168.1.10/api/detectionResult") 
            print(respond)

            Dolly = respond.json()['data']['detectionResult']['dollyFound']

            leftCorner = respond.json()['data']['detectionResult']['leftCorner']

            self.left_corner.x = respond.json()['data']['detectionResult']['leftCorner']['X']
            self.left_corner.y = respond.json()['data']['detectionResult']['leftCorner']['Y']
            self.left_corner.z = respond.json()['data']['detectionResult']['leftCorner']['Z']

            self.point.x = (self.left_corner.x  / 1000 + self.right_coner.x / 1000) / 2
            self.point.x = (self.left_corner.y  / 1000 + self.right_coner.y / 1000) / 2
            self.point.x = (self.left_corner.z  / 1000 + self.right_coner.z / 1000) / 2

            rightCorner = respond.json()['data']['detectionResult']['rightCorner']

            self.right_coner.x = respond.json()['data']['detectionResult']['rightCorner']['X']
            self.right_coner.y = respond.json()['data']['detectionResult']['rightCorner']['Y']
            self.right_coner.z = respond.json()['data']['detectionResult']['rightCorner']['Z']

            if Dolly == True:
                self.dolly_found.data = True
            else : 
                self.dolly_found.data = False

            self.sick_data.right_corners = self.right_coner
            self.sick_data.left_corners = self.left_corner

            self.sick_data.point = self.point

            self.sick_data.dolly_found = self.dolly_found
            self.sick_data.point = self.point

            # self.sick_transform.header.stamp = rospy.Time().now()
            # self.sick_transform.header.frame_id = self.base_frame
            # self.sick_transform.child_frame_id = self.camera_frame 

            # self.sick_transform.transform.translation.x = self.right_coner.z
            # self.sick_transform.transform.translation.y = self.right_coner.x
            # # self.sick_transform.transform.translation.z = self.right_coner.z

            # self.sick_transform.transform.rotation.z = 0.0
            # self.sick_transform.transform.rotation.w = 1.0

            self.sick_tf.sendTransform((self.sick_transform.transform.translation.x, self.sick_transform.transform.translation.y), 
                                       (self.sick_transform.transform.rotation.z, self.sick_transform.transform.translation.w), 
                                       rospy.Time.now(), self.base_frame, self.camera_frame)

            print(f"X point ==> {self.point.x}")
            print(f"Y point ==> {self.point.y}")
            print(f"Z point ==> {self.point.z}")
            
            self.sick_pub.publish(self.sick_data)

def main():
    while not rospy.is_shutdown():
        
        DollyIdentify()
        rospy.spin()

if __name__=='__main__':
    main()


