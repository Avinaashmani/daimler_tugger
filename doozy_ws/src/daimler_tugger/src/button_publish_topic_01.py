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

class SendGoal:
    def __init__(self) -> None:
        rospy.init_node('button_goal', anonymous=False)
        rospy.loginfo("ESP32 Test 1")
        rospy.loginfo ("Sick Visionary T-Mini Tf publisher has begun")

        self.left_pub = rospy.Publisher('sick_camera/left', Vector3, queue_size=10)
        self.right_pub = rospy.Publisher('sick_camera/right', Vector3, queue_size=10)
        self.point_pub = rospy.Publisher('sick_camera/point', Vector3, queue_size=10)
        self.camera_status = rospy.Publisher('sick_camera/status', String, queue_size=10)

        self.right_coner = Vector3()
        self.left_corner = Vector3()
        self.point = Vector3()
        self.camera_status = String()

        self.header = Header()
        self.dolly_status = String()
        self.dolly_found =  Bool()

        self.sick_tf = TransformBroadcaster()        
        self.camera_frame  = "dolly_01"
        self.base_frame = "map"
        self.sick_transform = TransformStamped()

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
        rospy.loginfo("Publishing TF and Camera_info")

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

        self.right_coner = Vector3()
        self.left_corner = Vector3()
        self.point = Vector3()
        self.camera_status = String()

        self.header = Header()
        self.dolly_status = String()
        self.dolly_found =  Bool()

        # self.sick_data = SickTMini()
        self.read_camera_data()

        self.sick_tf = TransformBroadcaster()        
        self.camera_frame  = "dolly_01"
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


            self.sick_transform.header.stamp = rospy.Time().now()
            self.sick_transform.header.frame_id = self.base_frame
            self.sick_transform.child_frame_id = self.camera_frame 

            self.sick_transform.transform.translation.x = self.right_coner.z
            self.sick_transform.transform.translation.y = self.right_coner.x
            # self.sick_transform.transform.translation.z = self.right_coner.z

            self.sick_transform.transform.rotation.z = 0.0
            self.sick_transform.transform.rotation.w = 1.0

            self.sick_tf.sendTransform((self.sick_transform.transform.translation.x, self.sick_transform.transform.translation.y), 
                                       (self.sick_transform.transform.rotation.z, self.sick_transform.transform.translation.w), 
                                       rospy.Time.now(), self.base_frame, self.camera_frame)

            print(f"X point ==> {self.point.x}")
            print(f"Y point ==> {self.point.y}")
            print(f"Z point ==> {self.point.z}")
            
            self.sick_pub.publish(self.sick_data)

def main():
    SendGoal()
    rospy.spin()

if __name__ == '__main__':
    try:
        main()
    except (rospy.ROSInternalException, rospy.ROSInterruptException) as e:
        rospy.logwarn(f"ROS error: {e}")
