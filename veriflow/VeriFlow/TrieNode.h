/*
 * TrieNode.h
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

#ifndef TRIENODE_H_
#define TRIENODE_H_

#include <string>
#include "Rule.h"
#include <unordered_set>
#include "Template.h"

using namespace std;

class Trie; // forward declaration

class TrieNode
{
public:
	TrieNode* parent;
	TrieNode* zeroBranch;
	TrieNode* oneBranch;
	TrieNode* wildcardBranch;
	Trie* nextLevelTrie;
	unordered_set< Rule, KHash< Rule >, KEqual< Rule > >* ruleSet;

	TrieNode();
	~TrieNode();
};

#endif /* TRIENODE_H_ */
