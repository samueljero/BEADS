#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
import sys
import os
from os import listdir
from os.path import isfile, join
import re
import argparse
from types import NoneType


def main(args):
        reason_count = {}
	old = False

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

        records=[]
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
                
                records.append(record)
		if (len(record) == 5):
			old = True
                i+=1

	if old:
	        records.sort(key = lambda e: e[4])
	else:
		records.sort(key = lambda e: e[3])

        
        #Output
        for r in records:
	    if old:
	            print "%s: %s" % (r[4],r[3])
	    else:
	            print "%s: %s" % (r[3],r[2])
	return 0


if __name__ == "__main__":
	main(sys.argv)
