/*
 * TrieNode.cpp
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

#include <iostream>
#include "TrieNode.h"
#include "Trie.h"

using namespace std;

TrieNode::TrieNode()
{
	this->parent = NULL;
	this->zeroBranch = NULL;
	this->oneBranch = NULL;
	this->wildcardBranch = NULL;
	this->nextLevelTrie = NULL;
	this->ruleSet = NULL;
}

TrieNode::~TrieNode()
{
//	fprintf(stdout, "Destroying TrieNode.\n");

	if(this->zeroBranch != NULL)
	{
		// fprintf(stdout, "\tDestroying zeroBranch.\n");
		delete this->zeroBranch;
		this->zeroBranch = NULL;
	}

	if(this->oneBranch != NULL)
	{
		// fprintf(stdout, "\tDestroying oneBranch.\n");
		delete this->oneBranch;
		this->oneBranch = NULL;
	}

	if(this->wildcardBranch != NULL)
	{
		// fprintf(stdout, "\tDestroying wildcardBranch.\n");
		delete this->wildcardBranch;
		this->wildcardBranch = NULL;
	}

	if(this->nextLevelTrie != NULL)
	{
		// fprintf(stdout, "\tDestroying nextLevelTrie.\n");
		delete this->nextLevelTrie;
		this->nextLevelTrie = NULL;
	}

	if(this->ruleSet != NULL)
	{
		// fprintf(stdout, "\tDestroying ruleSet.\n");
		delete this->ruleSet;
		this->ruleSet = NULL;
	}
}
