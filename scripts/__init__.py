import os
import sys


system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
lib_path = os.path.abspath(os.path.join(system_home, 'scripts', 'libs'))
config_path = os.path.abspath(os.path.join(system_home, 'config'))
log_path = os.path.abspath(os.path.join(system_home, 'logs'))
procmon_path = os.path.abspath(os.path.join(system_home, 'monitors', 'api'))
sys.path.insert(1, lib_path)
sys.path.insert(1, procmon_path)
sys.path.insert(0, config_path)


import config
from procmonstat import ProcMonStat

