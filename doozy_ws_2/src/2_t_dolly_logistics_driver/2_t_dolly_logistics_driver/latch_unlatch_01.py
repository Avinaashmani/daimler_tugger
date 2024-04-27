#!/usr/bin/env python3

import serial.serialutil
import rclpy
import serial
import time
from rclpy.node import Node
import py_trees_ros_interfaces
from std_msgs.msg import Bool

class Latch_Unlatch(Node):

    def __init__(self):
        super().__init__('latch_function')

        self.latch_flag = False
        self.unlatch_flag = False

        self.fore_arm = False
        self.tug_arm = False

        self.docked = False
        self.home = '0'
        self.turn_tug = '1'
        self.latch_1 = '2'
        self.latch_2 = '3'

        self.create_subscription(Bool, '/dock_topic', self.docked_callback, 10)
        self.create_subscription(Bool, '/latch_topic', self.latch_hook_cb, 10)
        self.create_subscription(Bool, '/tug_arm_center', self.tug_arm_center,10)
        # self.create_subscription(Bool, '/forearm_latch', self.forearm_cb, 10)

        self.create_timer(0.1, self.docked_compute)
        # self.create_timer(0.1, self.compute_forearm)
        self.serial_port_1 = '/dev/ttyUSB1'
        # self.serial_port_2 = '/dev/ttyUSB2'
        # self.serial_port_3 = '/dev/ttyUSB2'

        self.baudrate = 9600

        self.arduino_nano_1 = serial.Serial(port=self.serial_port_1, baudrate=self.baudrate, timeout=0)
        # self.arduino_nano_2 = serial.Serial(port=self.serial_port_2, baudrate=self.baudrate, timeout=0)
        # self.arduino_nano_3 = serial.Serial(port=self.serial_port_2, baudrate=self.baudrate, timeout=0)
       
        time.sleep(2)  # Wait for Arduino to initialize
        print(f"Opening port {self.serial_port_1} with baudrate {self.baudrate}")
    
    def docked_compute(self):

        try:
            if self.docked:

                time.sleep(3)
                # self.arduino_nano_2.write(self.turn_tug.encode('ascii'))
                # print("Turning the Tug Arm")
                # time.sleep(5)
                self.arduino_nano_1.write(self.latch_1.encode('ascii'))
                print("Enabling Latch 1")
                time.sleep(5)
                msg_read = self.arduino_nano_1.readline().decode().strip()
                if msg_read == '1':
                    print ("SUCCESS")
                else:
                    pass
                # time.sleep(5)
                # # self.arduino_nano_3.write(latch_2.encode('ascii'))
                # # print("Enabling Latch 2")
                time.sleep(5)
                self.docked = False
            
            # elif self.latch_flag:
            #     self.arduino_nano_1.write(self.latch_1.encode('ascii'))
            #     print("Enabling Latch")
            #     time.sleep(5)
            #     self.latch_flag = False
            
            # elif self.tug_arm:
            #     self.arduino_nano_2.write(self.turn_tug.encode('ascii'))
            #     print("Tug arm Activated")
            #     time.sleep(5)
            #     self.tug_arm = False
            
            else:
                print("Setting everything to Default")
                self.arduino_nano_1.write(self.home.encode('ascii'))
                # self.arduino_nano_2.write(self.home.encode('ascii'))
                # self.arduino_nano_3.write(self.home.encode('ascii'))

        except serial.serialutil.SerialException as e:
            print (e)

    # def compute_hook(self):
    #     try:
    #         if self.latch_flag:
    #             send_msg = '1'
    #             self.arduino_nano.write(send_msg.encode('ascii'))
    #             print("Latch activated")
    #         else:
    #             send_msg = '0'
    #             self.arduino_nano.write(send_msg.encode('ascii'))
    #             print("Unlatch activated")

    #     except serial.serialutil.SerialException as e:
    #         print(f"Failed to write to port {self.serial_port_1}. {e}")

    # def compute_forearm(self):

    #     try:
    #         if self.fore_arm:
    #             send_msg = '5'
    #             self.arduino_nano_2.write(send_msg.encode('ascii'))
    #             print('Fore arm Latching')
    #         else:
    #             send_msg = '6'
    #             self.arduino_nano_2.write(send_msg.encode('ascii'))
    #             print('Fore arm Un-Latching')

    #     except serial.serialutil.SerialException as e:
    #         print(f"Failed to write to port {self.serial_port_2}. {e}")

    def latch_hook_cb(self, msg):
        self.latch_flag = msg.data
    
    def tug_arm_center(self, msg):
        self.tug_arm = msg.data
    
    def forearm_cb (self, msg):
        self.fore_arm = msg.data
    
    def docked_callback(self, msg):
        self.docked = msg.data

def main():
    rclpy.init()
    latch = Latch_Unlatch()
    rclpy.spin(latch)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
