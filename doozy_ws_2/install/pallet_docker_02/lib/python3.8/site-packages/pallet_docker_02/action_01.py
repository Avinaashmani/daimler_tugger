#!/usr/bin/env python3

import rclpy
import time
from std_msgs.msg import Bool, String
from rclpy.action import ActionServer
from rclpy.action.server import ServerGoalHandle
from rclpy.node import Node
from doozy_actions.action import DollyDock

class DockingNode(Node):

    def __init__(self):
        super().__init__("dolly_dock_node")

        self.action_server = ActionServer(self, DollyDock, "dock_to_dolly", self.action_callback)
        self.get_logger().info('Action Node has begun')
        self.create_subscription(Bool, '/dolly_docked', self.callback,10)
        self.result = False

    def action_callback(self, action_msg: ServerGoalHandle):
        
        whether_docked = action_msg.request.reached_point
        index_number = action_msg.request.idx_no

        self.get_logger().info(f"TB3 in Position: {whether_docked}")
        
        self.get_logger().info(f"Dolly Number: {index_number}")
        
        time.sleep(3)
        action_msg.succeed()

        angle_to_dolly = String
        angle_to_dolly.data

        dist_to_dolly = String
        dist_to_dolly.data = '56.2'

        feedback = DollyDock.Feedback()
        feedback.angle_to_dolly = '60.5'
        feedback.distance_to_dolly = '9823.456'
        action_msg.publish_feedback(feedback)

        result = DollyDock.Result()
        result.docked_to_dolly = self.result
        self.get_logger().info(str(result))
        return result
    
    def callback(self, msg):
        self.result = msg.data
        print(msg)

def main():
    rclpy.init()
    docking_node = DockingNode()
    rclpy.spin(docking_node)
    docking_node.destroy_node()
    
if __name__=='__main__':
    main()
        