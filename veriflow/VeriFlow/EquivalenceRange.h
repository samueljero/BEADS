/*
 * EquivalenceRange.h
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

#ifndef EQUIVALENCERANGE_H_
#define EQUIVALENCERANGE_H_

#include <sys/types.h>
#include <unistd.h>
#include <stdint.h>
#include <string>

using namespace std;

class EquivalenceRange
{
public:
	uint64_t lowerBound, upperBound;

	EquivalenceRange(uint64_t lb = 0, uint64_t ub = 0);
	string toString() const;
};

#endif /* EQUIVALENCERANGE_H_ */
