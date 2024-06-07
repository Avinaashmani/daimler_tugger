#!/usr/bin/env python3

import serial.serialutil
import rclpy
import serial
import time
from signal import pause
from rclpy.node import Node
import rclpy.node
from std_msgs.msg import Bool, String

class Latch_Unlatch(Node):

    def __init__(self):
        super().__init__('latch_function')

        print("Daimler Tugger")

        self.latch_flag = False
        self.unlatch_flag = False

        self.fore_arm = False
        self.tug_arm = False
        
        self.arm_reset = False

        self.dock_flag = False
        self.navigation_flag = False

        self.home = '0'
        self.turn_tug = '1'
        self.latch_1 = '2'
        self.latch_2 = '3'

        self.load_process_flag = False
        self.unload_process_flag = False

        self.create_subscription(Bool, '/navigation_topic', self.navigation_callback, 10)
        self.create_subscription(Bool, '/dock_topic', self.docked_callback, 10)
        self.create_subscription(Bool, '/loading_topic', self.load_callback, 10)
        
        self.loading_flag = False
        self.unloading_flag = False

        self.diagnostics_msg_pub = self.create_publisher(String, 'display_topic', 10)
        self.diagnostic_msg = String()
        
        if self.loading_flag:
            self.create_timer(0.1, self.docked_compute)
        
        elif self.unloading_flag:
            self.create_timer(0.1, self.docked_compute)
            
        self.diagnostic_msg.data = "DAIMLER TUGGER"
        self.diagnostics_msg_pub.publish(self.diagnostic_msg)
        
        self.serial_port_1 = '/dev/ttyUSB1'  ## TUG ARM ##
        self.serial_port_2 = '/dev/ttyUSB0'  ## LOWER / RISE HOOK ##
        # self.serial_port_3 = '/dev/ttyUSB2' ## HOOK CLOSE / OPEN ##

        self.baudrate = 9600

        self.arduino_nano_1 = serial.Serial(port=self.serial_port_1, baudrate=self.baudrate, timeout=0)
        self.arduino_nano_2 = serial.Serial(port=self.serial_port_2, baudrate=self.baudrate, timeout=0)

        time.sleep(2)
        print(f"Opening port {self.serial_port_1} with baudrate {self.baudrate}")
    
    def docked_compute(self):

        try:
            if self.navigation_flag:

                ## TUG ARM FUNCTION ##
                
                self.load_process_flag = False

                print("Reached Dolly, waiting for Tug arm to Dock..")

                time.sleep(1)
                    
                print ("Turning Tug Arm..")
                self.arduino_nano_1.write(self.turn_tug.encode('ascii'))
                    
                time.sleep(3)
                    
                msg_read_tug = self.arduino_nano_1.readline().decode().strip()

                self.diagnostic_msg.data = "Navigation Complete...Turning Arm :)"
                self.diagnostics_msg_pub.publish(self.diagnostic_msg)


                if self.navigation_flag is True and msg_read_tug == '1':
                    self.load_process_flag = True
                    print (f"Tug Arm Feedback: {msg_read_tug}")

                    self.diagnostic_msg.data = f"Tug Arm Feedback --> {msg_read_tug} || Tug Arm Encoder Reading --> ##"
                    self.diagnostics_msg_pub.publish(self.diagnostic_msg)

                else:
                    self.diagnostic_msg.data = f"Tug Arm Feedback --> {msg_read_tug} || CHECK ARM !!"
                    self.diagnostics_msg_pub.publish(self.diagnostic_msg)
                    self.load_process_flag = False

                self.navigation_flag = False
            
            if self.load_process_flag:
                
                ## HOOK LOWERING FUNCTION ##
                
                if self.dock_flag:

                    print("Lowering Hook")
                    time.sleep(5)
                    self.arduino_nano_2.write(self.latch_1.encode('ascii'))
                    time.sleep(2)
                    msg_latch_read = self.arduino_nano_2.readline().decode().strip()

                    self.diagnostic_msg.data = "DOCKING COMPLETED :)"
                    self.diagnostics_msg_pub.publish(self.diagnostic_msg)
                    time.sleep(3)

                    if msg_latch_read == '1':
                            
                        print("Latching : SUCCESS")
                        
                        self.diagnostic_msg.data = f"HOOK ARM FEEDBACK --> {msg_latch_read}"
                        self.diagnostics_msg_pub.publish(self.diagnostic_msg)
                        time.sleep(3)
                        self.diagnostic_msg.data = "Process : SUCCESS"
                        self.diagnostics_msg_pub.publish(self.diagnostic_msg)

                        self.navigation_flag = False
                        self.dock_flag = False
                        self.load_process_flag = False

                    else:

                        time.sleep(3)
                        self.diagnostic_msg.data = "Check Hook.."
                        self.diagnostics_msg_pub.publish(self.diagnostic_msg)
                        self.navigation_flag = False
                        self.dock_flag = False
                        self.load_process_flag = False
                else:
                    print ("Waiting to Dock...")   
                
        except serial.serialutil.SerialException as e:
            print(e)
            
    def undock_compute(self):
        pass

    def navigation_callback(self, msg):
        self.navigation_flag = msg.data

    def docked_callback(self, msg):
        self.dock_flag = msg.data

    def load_callback(self, msg):
        self.loading_flag = msg.data
        
    def unloading_callback (self, msg):
        self.unloading_flag = msg.data
    
def main():
    rclpy.init()
    latch = Latch_Unlatch()
    rclpy.spin(latch)

if __name__ == '__main__':
    main()
