#!/usr/bin/env python3

import requests
import socket
import rospy
from tf.broadcaster import TransformBroadcaster
from geometry_msgs.msg import Vector3, TransformStamped
from std_msgs.msg import Bool, String, Header

class ShareData():
    def __init__(self) -> None:

        self.right_ = Vector3()
        self.left_ = Vector3()
        self.point_ = Vector3()
        self.cam_status_ = String()
        self.sick_transform_ = TransformStamped()

class SendGoal:
    def __init__(self) -> None:
        rospy.init_node('button_goal', anonymous=False)
        rospy.loginfo("ESP32 Test 1")
        rospy.loginfo ("Sick Visionary T-Mini Tf publisher has begun")

        self.left_pub = rospy.Publisher('sick_camera/left', Vector3, queue_size=10)
        self.right_pub = rospy.Publisher('sick_camera/right', Vector3, queue_size=10)
        self.point_pub = rospy.Publisher('sick_camera/point', Vector3, queue_size=10)
        self.camera_status = rospy.Publisher('sick_camera/status', String, queue_size=10)

        self.header = Header()
        self.dolly_status = String()
        self.dolly_found =  Bool()

        self.sick_tf = TransformBroadcaster()        
        self.camera_frame  = "dolly_01"
        self.base_frame = "map"
        self.sick_transform = TransformStamped()

        self.shared_data = ShareData()

        rospy.on_shutdown(self.shutdown_callback)

        self.server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

        self.goal_in_progress = False

        self.sick_camera()

    def sick_camera(self, host='0.0.0.0', port=12345):
        self.server_socket.bind((host, port))
        self.server_socket.listen(5)
        rospy.loginfo(f"Server listening on {host}:{port}")

        while not rospy.is_shutdown():
            client_socket, client_address = self.server_socket.accept()
            rospy.loginfo(f"Connection from {client_address}")

            data = client_socket.recv(1024).decode().strip()
            rospy.loginfo(f"Received data: {data}")

            if data == 'YCAM':
                self.publish()

            elif data == 'NCAM':
                self.unpublish()
            
            client_socket.close()

    def publish(self):
        print(f"X point ==> {self.point.x}")
        print(f"Y point ==> {self.point.y}")
        print(f"Z point ==> {self.point.z}")

        self.left_pub.publish(self.shared_data.left_)
        self.right_pub.publish(self.shared_data.right_)
        self.point_pub.publish(self.shared_data.point_)

    def unpublish(self):
        rospy.loginfo("Unpublishing TF and Camera_info")

    def shutdown_callback(self):
        rospy.logwarn("Shutting down server")
        self.server_socket.close()

class DollyIdentify:

    def __init__(self):

        rospy.init_node('sick_camera_tf', anonymous=False)
        rospy.loginfo ("Sick Visionary T-Mini Tf publisher has begun")

        # self.sick_pub = rospy.Publisher('sick_camera_topic', SickTMini, queue_size=10)

        self.header = Header()
        self.dolly_status = String()
        self.dolly_found =  Bool()

        # self.sick_data = SickTMini()
        self.read_camera_data()
    
        self.camera_frame  = "dolly_01"
        self.base_frame = "map"
        self.sick_transform = TransformStamped()

        self.share_data = ShareData()

        self.left = self.share_data.left_
        self.point = self.share_data.point_
        self.right = self.share_data.right_
        self.sick_tf = self.share_data.sick_transform_

    def read_camera_data(self):

        while True:
            respond = requests.get("http://192.168.1.10/api/detectionResult") 
            print(respond)

            Dolly = respond.json()['data']['detectionResult']['dollyFound']

            leftCorner = respond.json()['data']['detectionResult']['leftCorner']

            self.left.x = respond.json()['data']['detectionResult']['leftCorner']['X']
            self.left.y = respond.json()['data']['detectionResult']['leftCorner']['Y']
            self.left.z = respond.json()['data']['detectionResult']['leftCorner']['Z']

            self.point.x = (self.left_corner.x  / 1000 + self.right_coner.x / 1000) / 2
            self.point.y = (self.left_corner.y  / 1000 + self.right_coner.y / 1000) / 2
            self.point.z = (self.left_corner.z  / 1000 + self.right_coner.z / 1000) / 2

            rightCorner = respond.json()['data']['detectionResult']['rightCorner']

            self.right.x = respond.json()['data']['detectionResult']['rightCorner']['X']
            self.right.y = respond.json()['data']['detectionResult']['rightCorner']['Y']
            self.right.z = respond.json()['data']['detectionResult']['rightCorner']['Z']


            self.sick_tf.header.stamp = rospy.Time().now()
            self.sick_tf.header.frame_id = self.base_frame
            self.sick_tf.child_frame_id = self.camera_frame 

            self.sick_tf.transform.translation.x = self.right_coner.z
            self.sick_tf.transform.translation.y = self.right_coner.x
            # self.sick_transform.transform.translation.z = self.right_coner.z

            self.sick_tf.transform.rotation.z = 0.0
            self.sick_tf.transform.rotation.w = 1.0

def main():
    SendGoal()
    rospy.spin()

if __name__ == '__main__':
    try:
        main()
    except (rospy.ROSInternalException, rospy.ROSInterruptException) as e:
        rospy.logwarn(f"ROS error: {e}")
