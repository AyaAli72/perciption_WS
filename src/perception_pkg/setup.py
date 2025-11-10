from setuptools import find_packages, setup

package_name = 'perception_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mido',
    maintainer_email='mido@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'cam_stream = perception_pkg.camera_streamer:cam_stream',
            'object_detector= perception_pkg.object_detector_2d:main',
            'depth_estimator= perception_pkg.depth_estimator:main',
            'perception_processor = perception_pkg.perception_processor:main',
        ],
    },
)
