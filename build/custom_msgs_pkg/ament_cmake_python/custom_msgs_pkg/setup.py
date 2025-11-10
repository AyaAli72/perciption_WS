from setuptools import find_packages
from setuptools import setup

setup(
    name='custom_msgs_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('custom_msgs_pkg', 'custom_msgs_pkg.*')),
)
