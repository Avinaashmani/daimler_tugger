#!/usr/bin/env python3

from time import sleep
from typing import Any
from py_trees.behaviour import Behaviour
from py_trees.common import Status
from py_trees.composites import Sequence
from py_trees import logging as log


class Action(Behaviour):

    def __init__ (self, name):

        super(Action, self).__init__(name)

    def setup(self):
        self.logger.debug(f"Action::Setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Action::Initialized {self.name}")
    
    def update(self):
        self.logger.debug(f"Action::Updated {self.name}")
        sleep(1)
        return Status.SUCCESS

    def terminate(self):
        self.logger.debug(f"Action::Terminated {self.name}")
    
class Condition(Behaviour):

    def __init__ (self, name):

        super(Condition, self).__init__(name)

    def setup(self):
        self.logger.debug(f"Condition::Setup {self.name}")

    def initialise(self):
        self.logger.debug(f"Condition::Initialized {self.name}")
    
    def update(self):
        self.logger.debug(f"Condition::Updated {self.name}")
        sleep(1)
        return Status.SUCCESS

    def terminate(self):
        self.logger.debug(f"Condition::Terminated {self.name}")