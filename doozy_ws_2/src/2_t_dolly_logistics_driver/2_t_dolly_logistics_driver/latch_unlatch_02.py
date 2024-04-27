#!/usr/bin/env python3

import serial.serialutil
import rclpy
import serial
import time
from rclpy.node import Node
from rclpy.time import Time
from tf2_ros import TransformBroadcaster

from geometry_msgs.msg import TransformStamped
from std_msgs.msg import Bool, String

from sick_visionary_t_mini.msg import SickTMini

class Latch_Unlatch(Node):

    def __init__(self):
        super().__init__('latch_function')

        self.navigation_flag = False
        self.dock_flag = False
        self.latch_flag = False
        self.hook_flag = False
        self.tugarm_flag = False
        self.sick_flag = False
        self.reset_flag = False

        self.feed_back = String()

        self.home = '0'
        self.turn_tug = '1'
        self.latch_1 = '2'
        self.latch_2 = '3'

        self.tf_broadcaster = TransformBroadcaster(self)

        self.rightCorner_x = 0.0
        self.rightCorner_y = 0.0
        self.rightCorner_z = 0.0

        self.leftCorner_x = 0.0
        self.leftCorner_y = 0.0
        self.leftCorner_z = 0.0

        self.x_point = 0.0
        self.y_point = 0.0
        self.z_point = 0.0

        self.dolly_found = False

        self.create_subscription(SickTMini, '/sick_vision_t_mini/one', self.sick_broadcast, 10)
        self.create_timer(0.1, self.sick_callback)
        self.base_frame = 'map'

        self.create_subscription(Bool, '/navigation_topic', self.navigation_callback, 10)
        self.create_subscription(Bool, '/dock_topic', self.docked_callback, 10)
        self.create_subscription(Bool, '/latch_topic', self.latch_callback, 10)
        self.create_subscription(Bool, 'hook_topic', self.hook_callback)
        self.create_subscription(Bool, '/tug_arm_center', self.tugarm_callback,10)
        self.create_subscription(Bool, '/sick_topic', self.sick_callback, 10)
        self.create_subscription(Bool, '/rest_topic', self.reset_callback, 10)

        self.latch_feedback_pub = self.create_publisher(String, 'display_topic', 10)

        if self.navigation_flag:
            self.create_timer(0.1, self.active_compute)
        else:
            self.create_timer(0.1, self.normal_compute)

        # self.create_timer(0.1, self.compute_forearm)
        self.serial_port_1 = '/dev/ttyUSB2'
        self.serial_port_2 = '/dev/ttyUSB1'
        # self.serial_port_3 = '/dev/ttyUSB2'

        self.baudrate = 9600

        self.arduino_nano_1 = serial.Serial(port=self.serial_port_1, baudrate=self.baudrate, timeout=0)
        self.arduino_nano_2 = serial.Serial(port=self.serial_port_2, baudrate=self.baudrate, timeout=0)
        # self.arduino_nano_3 = serial.Serial(port=self.serial_port_2, baudrate=self.baudrate, timeout=0)
       
        time.sleep(2)  # Wait for Arduino to initialize
        print(f"Opening port {self.serial_port_1} with baudrate {self.baudrate}")
    
    def normal_compute(self):

        try:
            if self.docked:

                time.sleep(3)
                self.arduino_nano_2.write(self.turn_tug.encode('ascii'))
                print("Turning the Tug Arm")
                time.sleep(5)
                self.arduino_nano_1.write(self.latch_1.encode('ascii'))
                print("Enabling Latch 1")
                time.sleep(10)
                
                latch_feedback = self.arduino_nano_1.readline().decode().strip()

                if latch_feedback == '1':
                    self.feed_back.data = 'SUCCESS'
                else:
                    self.feed_back.data = 'FAILURE'

                self.latch_feedback_pub.publish(self.feed_back)

                # self.arduino_nano_3.write(self.latch_2.encode('ascii'))
                # print("Enabling Latch 2")
                
                time.sleep(5)
                self.docked = False
            
            elif self.latch_flag:
                self.arduino_nano_1.write(self.latch_1.encode('ascii'))
                print("Enabling Latch")
                time.sleep(5)
                self.latch_flag = False
            
            elif self.tug_arm:
                self.arduino_nano_2.write(self.turn_tug.encode('ascii'))
                print("Tug arm Activated")
                time.sleep(5)
                self.tug_arm = False
            
            else:
                print("Setting everything to Default")
                self.arduino_nano_1.write(self.home.encode('ascii'))
                self.arduino_nano_2.write(self.home.encode('ascii'))
                self.arduino_nano_3.write(self.home.encode('ascii'))

        except serial.serialutil.SerialException as e:
            print (e)

    def active_compute(self):
        
        self.latch_flag = True
        self.hook_flag = True

        try:    
            if self.latch_flag and self.hook_flag:
                
                time.sleep(3)
                
                self.arduino_nano_2.write(self.latch_1.encode('ascii'))
                print("enabling Latch")
                
                time.sleep(5)
                self.arduino_nano_3.write(self.latch_2.encode('asacii'))
                print("Enabling Hook")
                
                time.sleep(5)
                self.latch_flag = False
                self.hook_flag = False
            
            else:
                print("setting Everything to Default")
                self.arduino_nano_2.write(self.home.encode('ascii'))
                self.arduino_nano_3.write(self.home.encode('ascii'))

        except serial.serialutil.SerialException as e:
            print(e)
    
    def sick_broadcast(self, msg):

        sick_tf = TransformStamped()
        sick_tf.header.frame_id = self.base_frame
        sick_tf.child_frame_id = 'sick_visionary_t_mini'
        sick_tf.header.stamp = Time().to_msg()
        sick_tf.transform.translation.x = msg.point.z
        sick_tf.transform.translation.y = msg.point.x
        sick_tf.transform.translation.z = 0.0
        sick_tf.transform.rotation.z = 0.0
        sick_tf.transform.rotation.w = 1.0

 
        self.tf_broadcaster.sendTransform(sick_tf)

        self.rightCorner_x = msg.right_corners.x
        self.rightCorner_y = msg.right_corners.y
        self.rightCorner_z = msg.right_corners.z

        self.leftCorner_x = msg.left_corners.x 
        self.leftCorner_y = msg.left_corners.y
        self.leftCorner_z = msg.left_corners.z

        print(msg.point.z)
        print(msg.point.x)

    def navigation_callback(self, msg):
        self.navigation_flag = msg.data
    
    def docked_callback(self, msg):
        self.dock_flag = msg.data

    def latch_callback(self, msg):
        self.latch_flag = msg.data
    
    def hook_callback (self, msg):
        self.hook_flag = msg.data
    
    def tugarm_callback(self, msg):
        self.tugarm_flag = msg.data
    
    def sick_callback(self, msg):
        self.sick_flag = msg.data
    
    def reset_callback(self, msg):
        self.reset_flag = msg.data

def main():
    rclpy.init()
    latch = Latch_Unlatch()
    rclpy.spin(latch)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
