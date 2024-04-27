from setuptools import setup

package_name = 'pallet_docker_02'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='avinaash',
    maintainer_email='avinaash@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [

            'pallet_navi_01 = pallet_docker_02.pallet_navi_01:main',
            'pallet_navi_02 = pallet_docker_02.pallet_navi_02:main',
            'pallet_navi_03 = pallet_docker_02.pallet_navi_03:main',
            'pallet_navi_04 = pallet_docker_02.pallet_navi_04:main',
            'pallet_navi = pallet_docker_02.moved_to_position_cli:main', 
            'tb3_cam_node = pallet_docker_02.pallet_detect_01:main',
            'tf_broadcaster = pallet_docker_02.pallet_navi_dock_01:main',
            'get_pallet_tf = pallet_docker_02.pid_controller_01:main',
            'dock_to_dolly = pallet_docker_02.dock_with_dolly_cli:main',
            'dock_to_dolly2 = pallet_docker_02.dolly_navi_server_01:main',
            'sick_visionary_t_mini = pallet_docker_02.sick_mini_t:main',
            'server_01 = pallet_docker_02.action_01:main',
            'client_01 = pallet_docker_02.client_01:main',
            'NAV_to_POSITION = pallet_docker_02.dolly_navi_client_01:main',
            'DOCK_to_DOLLY = pallet_docker_02.dolly_navi_client_01:main',
            'SERVER=pallet_docker_02.dock_tb3_server_01:main',
            'CLIENT=pallet_docker_02.nav_tb3_client_01:main'
        ],
    },
)
