#!/usr/bin/env python3

import rospy
from std_msgs.msg import Bool, String
import sys
from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout, QPushButton, QLabel
from functools import partial

class ROS_GUI(QWidget):
    def __init__(self):
        super().__init__()

        # Initialize ROS node
        rospy.init_node('ros_gui_node')
        
        self.general_diagnostics_msg = 'None'
        self.arduino_tug_arm_diagnostic_msg = 'None'
        self.arduino_latch_arm_diagnostic_msg = 'None'
        self.arduino_hook_arm_diagnostic_msg = 'None'
        self.navigation_diagnostic_msg = 'None'
        self.dock_diagnostic_msg = 'None'

        self.publishers = {
            'Navigation': rospy.Publisher('navigation_topic', Bool, queue_size=10),
            'Dock': rospy.Publisher('dock_topic', Bool, queue_size=10),
            'Latch': rospy.Publisher('latch_topic', Bool, queue_size=10),
            'Hook': rospy.Publisher('hook_topic', Bool, queue_size=10),
            'Tug Arm': rospy.Publisher('tug_arm_center', Bool, queue_size=10),
            'SICK': rospy.Publisher('sick_topic', Bool, queue_size=10),
            'Reset': rospy.Publisher('reset_topic', Bool, queue_size=10)
        }

        # Flags to track toggle switch states
        self.toggle_states = {
            'Navigation': False,
            'Dock': False,
            'Latch': False,
            'Hook': False,
            'Tug Arm': False,
            'SICK': False,
            'Reset': False,
        }

        # GUI setup
        self.init_ui()

        # Subscribers for topics
        rospy.Subscriber('general_diagnostics', String, self.general_diagnostics_callback)
        rospy.Subscriber('arduino_tug_arm_diagnostics', String, self.arduino_tug_callback)
        rospy.Subscriber('arduino_latch_arm_diagnostics', String, self.arduino_latch_callback)
        rospy.Subscriber('arduino_hook_arm_diagnostics', String, self.arduino_hook_callback)
        rospy.Subscriber('navigation_diagnostics', String, self.navigation_callback)
        rospy.Subscriber('dock_diagnostics', String, self.dock_callback)

    def init_ui(self):
        self.setWindowTitle('DAIMLER TUGGER')
        layout = QVBoxLayout()

        self.labels = {
            'General Diagnostics': QLabel("---"),
            'Arduino Tug Arm Diagnostics': QLabel("---"),
            'Arduino Latch Arm Diagnostics': QLabel("---"),
            'Arduino Hook Arm Diagnostics': QLabel("---"),
            'Navigation Diagnostics': QLabel("---"),
            'Dock Diagnostics': QLabel("---"),
        }

        for key, label in self.labels.items():
            layout.addWidget(QLabel(f"{key}:"))
            layout.addWidget(label)

        buttons = ['Navigation','Dock','Latch', 'Hook', 'Tug Arm', 'SICK', 'Reset']
        for button_name in buttons:
            button = QPushButton(button_name)
            button.setCheckable(True)  # Make button toggle switch
            button.clicked.connect(partial(self.send_bool, button_name))
            layout.addWidget(button)

        self.setLayout(layout)

    def send_bool(self, button_name):
        msg = Bool()
        msg.data = not self.toggle_states[button_name]  # Toggle the state
        self.publishers[button_name].publish(msg)
        self.toggle_states[button_name] = msg.data
        rospy.loginfo("Sent boolean value for {}: {}".format(button_name, msg.data))

    def general_diagnostics_callback(self, msg):
        self.general_diagnostics_msg = msg.data
        self.labels['General Diagnostics'].setText(self.general_diagnostics_msg)

    def arduino_tug_callback(self, msg):
        self.arduino_tug_arm_diagnostic_msg = msg.data
        self.labels['Arduino Tug Arm Diagnostics'].setText(self.arduino_tug_arm_diagnostic_msg)

    def arduino_latch_callback(self, msg):
        self.arduino_latch_arm_diagnostic_msg = msg.data
        self.labels['Arduino Latch Arm Diagnostics'].setText(self.arduino_latch_arm_diagnostic_msg)

    def arduino_hook_callback(self, msg):
        self.arduino_hook_arm_diagnostic_msg = msg.data
        self.labels['Arduino Hook Arm Diagnostics'].setText(self.arduino_hook_arm_diagnostic_msg)

    def navigation_callback(self, msg):
        self.navigation_diagnostic_msg = msg.data
        self.labels['Navigation Diagnostics'].setText(self.navigation_diagnostic_msg)

    def dock_callback(self, msg):
        self.dock_diagnostic_msg = msg.data
        self.labels['Dock Diagnostics'].setText(self.dock_diagnostic_msg)

def main():
    app = QApplication(sys.argv)
    gui = ROS_GUI()
    gui.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()
