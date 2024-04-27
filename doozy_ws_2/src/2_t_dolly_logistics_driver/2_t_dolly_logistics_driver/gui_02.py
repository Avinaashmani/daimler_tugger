#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool, String
import sys
from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout, QPushButton, QLabel
from functools import partial

class ROS_GUI(QWidget):
    def __init__(self):
        super().__init__()

        # Initialize ROS node
        rclpy.init(args=None)
        self.node = rclpy.create_node('ros_gui_node')

        # ROS publishers for boolean values
        self.publishers = {
            
            'Navigation':self.node.create_publisher(Bool, 'navigation_topic', 10),
            'Dock': self.node.create_publisher(Bool, 'dock_topic', 10),
            'Latch': self.node.create_publisher(Bool, 'latch_topic', 10),
            'Hook': self.node.create_publisher(Bool, 'hook_topic', 10),
            'Tug Arm': self.node.create_publisher(Bool, 'tug_arm_center', 10),
            'SICK':self.node.create_publisher(Bool, 'sick_topic', 10),
            'Reset': self.node.create_publisher(Bool, 'reset_topic', 10)
        }
        # ROS subscriber for string values
        self.sub = self.node.create_subscription(String, 'display_topic', self.display_callback, 10)

        # Flags to track toggle switch states
        self.toggle_states = {

            'Navigation':False,
            'Dock': False,
            'Latch': False,
            'Hook':False,
            'Tug Arm':False,
            'SICK':False,
            'Reset': False,
        }
        # GUI setup
        self.init_ui()

    def init_ui(self):
        self.setWindowTitle('DAIMLER TUGGER')
        layout = QVBoxLayout()

        buttons = ['Navigation','Dock','Latch', 'Hook', 'Tug Arm', 'SICK', 'Reset']
        for button_name in buttons:
            button = QPushButton(button_name)
            button.setCheckable(True)  # Make button toggle switch
            button.clicked.connect(partial(self.send_bool, button_name))
            layout.addWidget(button)

        # Display window
        self.display_label = QLabel()
        layout.addWidget(self.display_label)

        self.setLayout(layout)

    def send_bool(self, button_name):
        msg = Bool()
        msg.data = not self.toggle_states[button_name]  # Toggle the state
        self.publishers[button_name].publish(msg)
        self.toggle_states[button_name] = msg.data
        self.node.get_logger().info(f"Sent boolean value for {button_name}: {msg.data}")

    def display_callback(self, msg):
        self.display_label.setText(msg.data)

def main():
    app = QApplication(sys.argv)
    gui = ROS_GUI()
    gui.show()
    sys.exit(app.exec_())
if __name__ == '__main__':

    main()