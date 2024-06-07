#!/usr/bin/env python3

import time
import sys
import serial
import serial.serialutil
import rospy
import py_trees
from py_trees.behaviour import Behaviour
from py_trees.common import Status
from py_trees.composites import Sequence
from py_trees import logging
from move_base_msgs.msg import MoveBaseActionResult

class TugArm():
    def __init__(self) -> None:
        
        rospy.init_node('tug_arm')
        rospy.loginfo_once("Tug arm controller")

        self.turn_tug = '1'
        
        self.tug_port = '/dev/ttyUSB0'
        self.latch_port = '/dev/ttyACM0'

        self.baud_rate = 9600

        self.navigation_result = False

        rospy.Subscriber('/move_base/result', MoveBaseActionResult, self.tug_navigation_callback, queue_size=10)
        rospy.on_shutdown(self.on_shutdown_cb)

        try:
            self.tug_arduino = serial.Serial(self.tug_port, self.baud_rate, timeout=5)
            self.latch_arduino = serial.Serial(self.latch_port, self.baud_rate, timeout=5)

            rospy.loginfo_once(f"Opening port {self.tug_port} with rate {self.baud_rate}")
            rospy.loginfo_once(f"Opening port {self.latch_port} with rate {self.baud_rate}")

        except serial.serialutil.SerialException as e:
            rospy.loginfo_once(e)

        self.root = self.create_behavior_tree()
            
    def create_behavior_tree(self):
        root = Sequence('tugger', memory=True)

        condition = Condition('navigation_status', lambda: self.navigation_result)

        step_1 = Action('Open Tug', self.tug_arduino, lambda: self.navigation_result, self.turn_tug, '1')
        step_2 = Action('Open Latch', self.latch_arduino, lambda: self.navigation_result, self.turn_tug, '1')
        step_3 = Action('Close Latch', self.latch_arduino, lambda: self.navigation_result, self.turn_tug, '2')

        root.add_children([
            condition,
            step_1,
            step_2,
            step_3
        ])

        rospy.loginfo_once("Behavior tree constructed")
        return root

    def tug_navigation_callback(self, msg):
        if msg.status.text:
            self.navigation_result = True
            print(self.navigation_result)

        while self.navigation_result:
            status = self.root.tick_once()
            if status == Status.SUCCESS:
                self.navigation_result = False
    
    def on_shutdown_cb(self):
        rospy.loginfo("Exiting")

class Condition(Behaviour):
    def __init__(self, name, navigation_result):
        super().__init__(name)
        self.name = name
        self.navigation_result = navigation_result

    def setup(self):
        rospy.loginfo_once(f"Condition : Setup {self.name}")
    
    def initialise(self):
        rospy.loginfo_once(f"Condition : Initialization {self.name}")
    
    def update(self):
        rospy.loginfo_once(f"Condition : Update {self.name}")
        return Status.SUCCESS
    
    def terminate(self, new_status):
        rospy.loginfo_once(f"Condition : Terminate {self.name} to {new_status}")

class Action(Behaviour):
    def __init__(self, name, arduino_port, navigation_result, turn_tug, action):
        super().__init__(name)

        self.name = name 
        self.arduino_port = arduino_port
        self.navigation_result = navigation_result
        self.turn_tug = turn_tug
        self.action = action

        self.open_ = '1'
        self.close_ = '2'

        self.status = Status

    def setup(self):
        rospy.loginfo_once(f"Action :: Setup {self.name}")

    def initialise(self):
        rospy.loginfo_once(f"Action :: Initialize {self.name}")
    
    def update(self):

        rospy.loginfo_once(f"Open action called for {self.name}")

        if self.name == 'Open':
            self.open
            return Status.RUNNING

    def open(self):
        
        while self.arduino_port.is_open:
            self.arduino_port.write(self.open_.encode('ascii'))
            rospy.loginfo_once(f"Writing to arduino {self.turn_tug}")
            self.status = Status.RUNNING
            self.read_input = self.arduino_port.readline().decode().strip()
            rospy.loginfo(f"Arduino Feedback {self.read_input}")
                
            if self.read_input == 'OK':
                rospy.loginfo(f"Arduino Feedback {self.read_input}")
                rospy.loginfo_once("Received positive feedback..")
                rospy.on_shutdown(self.on_shutdown_cb)

                self.navigation_result = False  
                self.status = Status.SUCCESS
                break
            else:
                return Status.RUNNING
            
        return Status.SUCCESS
 
    def close(self): 
        if self.name == "Close":

            while self.arduino_port.is_open:
                self.arduino_port.write(self.close_.encode('ascii'))
                rospy.loginfo_once(f"Writing to arduino {self.turn_tug}")

                self.read_input = self.arduino_port.readline().decode().strip()
                rospy.loginfo(f"Arduino Feedback {self.read_input}")
                    
                if self.read_input == 'OK':
                    rospy.loginfo(f"Arduino Feedback {self.read_input}")
                    rospy.loginfo_once("Received positive feedback..")
                    rospy.on_shutdown(self.on_shutdown_cb)

                    self.navigation_result = False  
                    return Status.SUCCESS
       

    def terminate(self, new_status):
        self.logger.debug(f"Action :: Termination {self.name} to {new_status}")

def main():
    tug_arm_controller = TugArm()
    rospy.spin()

if __name__ == '__main__':
    try:
        main()
    except (rospy.ROSInternalException, rospy.ROSInterruptException) as e:
        rospy.logwarn_once(e)
