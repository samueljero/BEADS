#!/bin/env python
# Samuel Jero <sjero@purdue.edu>
import sys

def main(d):
    f = open(d+"checkpoint.ck","r")
    fl = f.readlines()
    fl = "\n".join(fl)
    ck = eval(fl)
    ck.keys()
    len(ck['failed_lst'])
    retried=list(ck['failed_lst'])

    f = open(d+"results.log","r")
    fl = f.readlines()
    lines = []
    for l in fl:
    	try:
    		lines.append(eval(l))
    	except Exception as e:
    		pass

    partial = []
    for s in retried:
	found = False
	for l in lines:
	    if len(l) == 5:
		#Old style
		if s[1][0] in str(l[3]):
			found = True
	    		break
	    else:
		#New Style
		if s['switch'][0] in str(l[2]):
			found = True
			break
	if not found:
	    partial.append(s)

    for p in partial:
	print p

    print "Retried: %d" % len(retried)
    print "Failed Twice: %d" % len(lines)
    print "Failed Then Passed: %d" % len(partial)


main(sys.argv[1])
