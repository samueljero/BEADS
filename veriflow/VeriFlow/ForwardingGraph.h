/*
 * ForwardingGraph.h
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

#ifndef FORWARDINGGRAPH_H_
#define FORWARDINGGRAPH_H_

#include <string>
#include <list>
#include <unordered_map>
#include "ForwardingLink.h"
#include "Rule.h"

using namespace std;

class ForwardingGraph
{
public:
	unordered_map< string, list< ForwardingLink > > links;
	int totalRuleCount;

	ForwardingGraph();
	bool addLink(const ForwardingLink& link);
	bool removeLink(const Rule& rule);
	string toString() const;
};

#endif /* FORWARDINGGRAPH_H_ */
