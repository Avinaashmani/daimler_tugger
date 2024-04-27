from setuptools import setup

package_name = '2_t_dolly_logistics_driver'

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
    maintainer_email='avinaash.mani@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'Navigate_01 = 2_t_dolly_logistics_driver.nav_to_dolly_01:main',
            'Navigate_02 = 2_t_dolly_logistics_driver.nav_to_dolly_02:main',
            'Dock2Dolly_01 = 2_t_dolly_logistics_driver.dock_to_dolly_01:main',
            'Dock2Dolly_02 = 2_t_dolly_logistics_driver.dock_to_dolly_02:main',
            'Dock2Dolly_03 = 2_t_dolly_logistics_driver.dock_to_dolly_03:main',
            'Latch_Unlatch = 2_t_dolly_logistics_driver.latch_unlatch_01:main',
            'Latch_Unlatch_2 = 2_t_dolly_logistics_driver.latch_unlatch_02:main',
            'Latch_Unlatch_3 = 2_t_dolly_logistics_driver.latch_unlatch_03:main',
            'GUI = 2_t_dolly_logistics_driver.gui_01:main',
            'GUI_2 = 2_t_dolly_logistics_driver.gui_02:main',
            'GUI_3 = 2_t_dolly_logistics_driver.gui_03:main',
            'GUI_4 = 2_t_dolly_logistics_driver.gui_04:main',
            'Tf= 2_t_dolly_logistics_driver.pallet_navi_dock_01:main',
            'Test_01= 2_t_dolly_logistics_driver.docking_system_test_01:main',
        ],
    },
)
