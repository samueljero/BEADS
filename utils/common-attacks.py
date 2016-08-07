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
coord_path = os.path.abspath(os.path.join(system_home, 'coordinator'))
sys.path.insert(1,coord_path)
import strategies

fancy_output = False


def load_results(f):
    results = []
    try:
        resfile = open(f, "r")
    except Exception as e:
        print "Error: could not open: %s" % f
        sys.exit(1)

    flines = resfile.readlines()
    resfile.close()
        
    i=0
    while i < len(flines):
        if flines[i][0] == "#":
            i += 1
            continue
        try:
            record = eval(flines[i])
	    if len(record) == 5:
		    #Old style
	            results.append(record[3])
	    else:
		    #New style
		    results.append(str(record[2]['switch']))
        except Exception as e:
            print e
            i += 1
            continue
        i += 1

    return results
        

def main(args):
        files = []
        results = []

	#Parse Args
        for i in range(1,len(args)):
            files.append(args[i])

        #Read files
        for f in files:
            results.append(load_results(f))


        common = []
        for s in results[0]:
            found = True
            for o in range(1,len(results)):
                if s not in results[o]:
                    found = False
                    break
            if found:
                common.append(s)
        
        #Output
        for r in common:
	    if fancy_output:
		s = eval(r)
		s = s[0]
	    	print strategies.StrategyGenerator.pretty_print_switch_strat(s)
	    else:
	        print r
        print len(common)

	return 0


if __name__ == "__main__":
	main(sys.argv)
