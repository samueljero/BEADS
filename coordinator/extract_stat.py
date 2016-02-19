#!/usr/bin/python3

"""
Extract performance stat from log and print mean, median, and stdev.

Pattern for switch stat output:
  'stat': {...}

Pattern for controller stat output:
  Controller stat: {...}

Usage:
  extract_perf.py f1.log [f2.log ...]

@author Xiangyu Bu <bu1@purdue.edu>
"""

import re
import statistics
import sys

sw_regex = re.compile(r"'stat': \{[^\}]+\}")
cl_regex = re.compile(r"Controller stat: \{[^\}]+\}")

sw_stat = {}
cl_stat = {}


def parse_record(rec_expr, stat_dict):
  record = eval(rec_expr)
  for k, v in record.items():
    if k not in stat_dict:
      stat_dict[k] = []
    stat_dict[k].append(v)


def print_stat(size_key, stat_dict):
  print('\033[93mSample size: %d.\033[0m\n' % len(stat_dict[size_key]))
  # Print the stat of each key.
  for k, v in stat_dict.items():
    print('\033[1m\033[92m' + k + '\033[0m')
    print('  max:    ' + str(max(v)))
    print('  min:    ' + str(min(v)))
    print('  mean:   ' + str(statistics.mean(v)))
    print('  median: ' + str(statistics.median(v)))
    print('  stdev:  ' + str(statistics.stdev(v)))
    print('  raw:')
    for i in range(0, len(v)):
      if i % 8 == 0:
        print('    ', end='')
      print(str(v[i]), end='  ')
      if i % 8 == 7:
        print()
    print('\n')


for filename in sys.argv[1:]:
  with open(filename, 'r') as f:
    for line in f:
      for p in sw_regex.findall(line):
        parse_record(p[8:], sw_stat)
      for p in cl_regex.findall(line):
        parse_record(p[17:], cl_stat)


if len(sw_stat):
  print()
  print('\033[1m' + '*' * 30 + 'Switch' + '*' * 30 + '\033[0m\n')
  print_stat('cpu_sec', sw_stat)

if len(cl_stat):
  print()
  print('\033[1m' + '*' * 30 + 'Controller' + '*' * 30 + '\033[0m\n')
  print_stat('cpu_sec', cl_stat)
