#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
import sys
import os
from os import listdir
from os.path import isfile, join
import re
import argparse
from types import NoneType


system_home = os.path.split(os.path.dirname(os.path.realpath(__file__)))[0]
coordinator_path = os.path.abspath(os.path.join(system_home, 'coordinator'))
sys.path.insert(0,coordinator_path)
import strategies


def load_results(flines):
    results = []
        
    i=0
    while i < len(flines):
        if flines[i][0] == "#":
            i += 1
            continue
        try:
            record = eval(flines[i])
            strats = eval(record[3])
            string = ""
            for s in strats:
                string += strategies.StrategyGenerator.pretty_print_switch_strat(s)
            results.append(string)
        except Exception as e:
            print e
            i += 1
            continue
        i += 1

    return results

def load_categories(lines):
    results = []
    for l in lines:
        if l.find("POX") > 0 or l.find("ONOS") > 0 or l.find("Ryu") > 0:
            results.append(l.strip())
    return results
        

def main(args):
        files = []
        results = []

	#Parse Args
        if len(args) != 4:
            print "Usage: filter.py categories.txt results.log controller"
            return -1

        f = open(args[1],"r")
        cat_lines = f.readlines()
        f.close()
        f = open(args[2],"r")
        res_lines = f.readlines()
        f.close()


        categories = load_categories(cat_lines)
        results = load_results(res_lines)

        missing = []
        extra = []
        dup = []
        ctrl = args[3]

        for r in results:
            f = False
            for c in categories:
                if c.find(ctrl) >= 0 and c.find(r) >= 0:
                    if f:
                        dup.append(c)
                    f = True
            if not f:
                missing.append(r)


        for c in categories:
            if not c.find(ctrl) >= 0:
                continue
            f = False
            for r in results:
                if c.find(r) >= 0:
                    f = True
                    break
            if not f:
                extra.append(c)

        print "Missing (%d):" % (len(missing))
        for s in missing:
            print s

        print ""
        print "Extra (%d):" %(len(extra))
        for s in extra:
            print s


        print ""
        print "Dup (%d):"  % (len(dup))
        for s in dup:
            print s

        print ""
        print "Categories Length: " + str(len(categories))
	return 0


if __name__ == "__main__":
	main(sys.argv)
