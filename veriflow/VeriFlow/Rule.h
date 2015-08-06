/*
 * Rule.h
 *
 *  Created on: Mar 15, 2012
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

#ifndef RULE_H_
#define RULE_H_

#include <string>
#include "EquivalenceClass.h"
#include "EquivalenceRange.h"

using namespace std;

enum RuleType
{
	DUMMY,
	FORWARDING
};

#define INVALID_PRIORITY 0

class Rule
{
public:
	RuleType type;
	string fieldValue[ALL_FIELD_INDEX_END_MARKER];
	string fieldMask[ALL_FIELD_INDEX_END_MARKER];

	uint32_t wildcards;

	string location;
	string nextHop;
	uint16_t priority;
	// uint16_t outPort; // Not used in this version.

	Rule();
	void testInit();
	Rule(const Rule& other);
	EquivalenceClass getEquivalenceClass() const;
	EquivalenceRange getEquivalenceRange(FieldIndex index) const;
	bool equals(const Rule& other) const;
	bool operator==(const Rule& other) const;
	int operator()() const;
	string toString() const;
};

#endif /* RULE_H_ */
