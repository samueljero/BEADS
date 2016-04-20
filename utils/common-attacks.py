#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
import sys
import os
from os import listdir
from os.path import isfile, join
import re
import argparse
from types import NoneType


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
            results.append(record[3])
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
            print r
        print len(common)

	return 0


if __name__ == "__main__":
	main(sys.argv)
