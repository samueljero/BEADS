import os
import sys


system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
lib_path = os.path.abspath(os.path.join(system_home, 'scripts','libs'))
config_path = os.path.abspath(os.path.join(system_home, 'config'))
sys.path.insert(1, lib_path)
sys.path.insert(0, config_path)


import config
