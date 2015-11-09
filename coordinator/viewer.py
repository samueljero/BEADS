#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
# Results viewer
import sys
import strategies
import os
from os import listdir
from os.path import isfile, join
import re
from types import NoneType

#https://stackoverflow.com/questions/3041986/python-command-line-yes-no-input
def query_yes_no(question, default="yes"):
    """Ask a yes/no question via raw_input() and return their answer.

    "question" is a string that is presented to the user.
    "default" is the presumed answer if the user just hits <Enter>.
        It must be "yes" (the default), "no" or None (meaning
        an answer is required of the user).

    The "answer" return value is True for "yes" or False for "no".
    """
    valid = {"yes": True, "y": True, "ye": True,
             "no": False, "n": False}
    if default is None:
        prompt = " [y/n] "
    elif default == "yes":
        prompt = " [Y/n] "
    elif default == "no":
        prompt = " [y/N] "
    else:
        raise ValueError("invalid default answer: '%s'" % default)

    while True:
        sys.stdout.write(question + prompt)
        choice = raw_input().lower()
        if default is not None and choice == '':
            return valid[default]
        elif choice in valid:
            return valid[choice]
        else:
            sys.stdout.write("Please respond with 'yes' or 'no' "
                             "(or 'y' or 'n').\n")

def handle_strat(line, instfiles):
	res = line[0]
	time = line[1]
	test = line[2]
	try:
		strat = eval(line[3])
	except exception as e:
		print e
		return
	reason = line[4]
	print "\n\n\n\n"
	for s in strat:
		print "Strategy: " + strategies.StrategyGenerator.pretty_print_strat(s)
	print "Time: " + time
	print "Result: " + res
	print "Reason: " + reason

	if query_yes_no("View Log?", "yes"):
		found = 0
		for fname in instfiles:
			lnum = 0
			thresln = 0
			with open(fname, "r") as f:
				for line in f:
					lnum += 1
					if line.find("Thresholds") > 0:
							thresln = lnum
					if line.find(str(strat)) > 0:
						os.system("mate-terminal -e 'vim +{0} -R {1}'".format(str(lnum), fname))
						if thresln > 0:
							os.system("mate-terminal -e 'vim +{0} -R {1}'".format(str(thresln), fname))
							thresln = 0
						found += 1
					if found >= 2:
						break

	resp = raw_input("Next?")
	return

def main(args):
	if len(args) != 2:
		print "usage: viewer.py <directory>"
		sys.exit(1)
	
	onlyfiles = [ f for f in listdir(args[1]) if isfile(join(args[1],f)) ]

	resfile = None
	try:	
		resfile = open(join(args[1],"results.log"), "r")
	except Exception as e:
		print "Error: could not open results.log. Not a log directory."
		sys.exit(1)

	instfiles = []
	for f in onlyfiles:
		mo = re.search("inst[0-9]+\.log", f)
		if type(mo) is not NoneType:
			instfiles.append(join(args[1],f))
	
	for line in resfile:
		if line[0] == "#":
			continue
		try:
			fmt = eval(line)
		except Exception as e:
			print e
			continue
		handle_strat(fmt, instfiles)
	else:
		resfile.close()
	return 0


if __name__ == "__main__":
	main(sys.argv)
