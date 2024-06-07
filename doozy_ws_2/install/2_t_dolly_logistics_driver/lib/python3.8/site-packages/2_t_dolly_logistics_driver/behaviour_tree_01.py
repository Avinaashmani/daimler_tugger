#!/usr/bin/env python3

import time
from py_trees.behaviour import Behaviour
from py_trees.common import Status
from py_trees.composites import Sequence
from py_trees import logging

class TreeAction(Behaviour):
    
    def __init__(self, name):
        super(TreeAction, self).__init__(name)
        
    def setup(self):
        self.logger.debug(f"Action::setup{self.name}")
    
    def initialise(self) -> None:
        self.logger.debug(f"Action::initialise {self.name}")
        
    def update(self):
        self.logger.debug(f"Action::updates {self.name}")
        time.sleep(1)
        return Status.SUCCESS
        
    def terminate(self):
        self.logger.debug(f"Action::terminate {self.name}")
        
class TreeCondition(Behaviour):
    
    def __init__(self, name):
        super(TreeCondition, self).__init__(name)
        
    def setup(self):
        self.logger.debug(f"Condition::setup {self.name}")
    
    def initialise(self):
        self.logger.debug(f"Condition::initialise {self.name}")
        
    def update(self):
        self.logger.debug(f"Condition::update {self.name}")
        time.sleep(1)
        return Status.SUCCESS
    
    def terminate(self):
        self.logger.debug(f"Cpndition::terminate {self.name}")
        
def tree():
    root_node = Sequence(name="sequence_node", memory=True)
    
    check_battery=TreeCondition("check_battery")
    open_gripper = TreeAction("open_gripper")
    
    return root_node
if __name__=='__main__':
    
    logging.level = logging.Level
