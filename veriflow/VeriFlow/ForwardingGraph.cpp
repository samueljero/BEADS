/*
 * ForwardingGraph.cpp
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

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <unordered_map>
#include "ForwardingGraph.h"
#include "ForwardingLink.h"
#include "Rule.h"
#include "EquivalenceClass.h"

using namespace std;

ForwardingGraph::ForwardingGraph()
{
	this->totalRuleCount = 0;
}

bool ForwardingGraph::addLink(const ForwardingLink& link)
{
	if(this->links.find(link.rule.location) == this->links.end())
	{
		list< ForwardingLink > linkList;
		linkList.push_back(link);
		this->links[link.rule.location] = linkList;
		++(this->totalRuleCount);
		return true;
	}
	else
	{
		this->links[link.rule.location].push_back(link);
		++(this->totalRuleCount);
		return true;
	}
}

bool ForwardingGraph::removeLink(const Rule& rule)
{
	if(this->links.find(rule.location) == this->links.end())
	{
		return false;
	}
	else
	{
		list< ForwardingLink >& linkList = this->links[rule.location];
		list< ForwardingLink >::iterator itr;
		for(itr = linkList.begin(); itr != linkList.end(); ++itr)
		{
			if(itr->rule.equals(rule) == true)
			{
				linkList.erase(itr);
				--(this->totalRuleCount);
				return true;
			}
		}

		return false;
	}
}

string ForwardingGraph::toString() const
{
	string retVal = "[ForwardingGraph] Link count: ";
	char buffer[32];
	sprintf(buffer, "%d", this->totalRuleCount);
	retVal += buffer;

	unordered_map< string, list< ForwardingLink > >::const_iterator itr;
	for(itr = this->links.begin(); itr != this->links.end(); ++itr)
	{
		const list< ForwardingLink >& linkList = itr->second;
		list< ForwardingLink >::const_iterator itr2;
		for(itr2 = linkList.begin(); itr2 != linkList.end(); ++itr2)
		{
			retVal += "\n\t";
			retVal += itr2->toString();
		}

		if(linkList.size() != 0)
		{
			retVal += "\n";
		}
	}

	return retVal;
}
