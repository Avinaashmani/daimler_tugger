from setuptools import find_packages
from setuptools import setup

setup(
    name='doozy_actions',
    version='0.0.0',
    packages=find_packages(
        include=('doozy_actions', 'doozy_actions.*')),
)
