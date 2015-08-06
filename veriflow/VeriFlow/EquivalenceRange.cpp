/*
 * EquivalenceRange.cpp
 *
 *  Created on: Aug 4, 2012
 *      Author: khurshid
 *
 * This file is protected by the VeriFlow Research License Agreement
 * available at http://www.cs.illinois.edu/~khurshi1/projects/veriflow/veriflow-research-license-agreement.txt.
 * A copy of this agreement is also included in this package.
 *
 * Copyright (c) 2012-2013 by
 * The Board of Trustees of the University of Illinois.
 * All rights reserved.
 */

#include "EquivalenceRange.h"
#include <cstdio>
#include <cstdlib>

using namespace std;

EquivalenceRange::EquivalenceRange(uint64_t lb, uint64_t ub)
{
	if(lb > ub)
	{
		fprintf(stderr, "[EquivalenceRange::EquivalenceRange] Invalid boundary values (lb > ub). Terminating process.\n");
		fprintf(stderr, "\tLower bound: %lu\n", lb);
		fprintf(stderr, "\tUpper bound: %lu\n", ub);

		exit(1);
	}

	this->lowerBound = lb;
	this->upperBound = ub;
}

string EquivalenceRange::toString() const
{
	char buffer[1024];
	sprintf(buffer, "[EquivalenceRange] Lower bound: %lu, Upper bound: %lu", this->lowerBound, this->upperBound);

	string retVal = buffer;
	return retVal;
}
