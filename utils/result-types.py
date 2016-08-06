#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
# Utility to gather statisitics from results
import sys
import os
from os import listdir
from os.path import isfile, join
import re
import argparse
from types import NoneType


def main(args):
        reason_count = {}

	#Parse Args
	argp = argparse.ArgumentParser(description='Testing Results Viewer')
	argp.add_argument('file', help="Results File")
	args = vars(argp.parse_args(args[1:]))

        if not 'file' in args:
            print "Error: Must specify a results file"

	try:	
		resfile = open(args['file'], "r")
	except Exception as e:
		print "Error: could not open: %s" % args['file']
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
		except Exception as e:
			print e
			i += 1
			continue
                
		if (len(record) == 4):
			result = record[0]
        	        check_time = record[1]
        	        strat = record[2]
        	        reason = record[3]
		elif (len(record) == 5):
			#old format
	                result = record[0]
        	        check_time = record[1]
        	        script = record[2]
        	        strat = record[3]
        	        reason = record[4]
		else:
			continue

                if ":" in reason:
                    reason = reason.split(":")[0]

                #Keep Stats
                if reason in reason_count:
                    reason_count[reason] = reason_count[reason] + 1
                else:
                    reason_count[reason] = 1
                i+=1

        
        #Stats Summary
        print "Reasons Summary:"
        for r,c in reason_count.items():
            print "\t%s: %i" % (r,c)

	return 0


if __name__ == "__main__":
	main(sys.argv)
