#!/usr/bin env python 

import time
import rclpy

from py_trees.common import Status
from py_trees.behaviour import Behaviour
from py_trees.composites import Sequence
from py_trees import logging

class Tree_Example(Behaviour):
    def __init__(self, name: str):
        super(Tree_Example, self).__init__(name)
    def status(self):
        pass
    def update(self):
        pass