/*
 * Trie.h
 *
 *  Created on: Jul 4, 2012
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

#ifndef TRIE_H_
#define TRIE_H_

#include <sys/types.h>
#include <unistd.h>
#include <string>
#include <vector>
#include <list>
#include <unordered_map>
#include "TrieNode.h"
#include "Rule.h"
#include "EquivalenceClass.h"
#include "ForwardingGraph.h"
#include "Test.h"

using namespace std;

class Trie
{
	friend class Test;

private:
	TrieNode* root;
	FieldIndex fieldIndex;

	list< uint64_t > lowerBoundList, upperBoundList;
	unordered_map< uint64_t, uint64_t > lowerBoundMap, upperBoundMap;

	void addToBoundList(uint64_t lowerBound, uint64_t upperBound);

	static uint64_t getIntValue(FieldIndex index, const string& valueOrMask);
	static void addToBoundList(uint64_t lowerBound, uint64_t upperBound,
			list< uint64_t >& lowerBoundList, list< uint64_t >& upperBoundList,
			unordered_map< uint64_t, uint64_t >& lowerBoundMap, unordered_map< uint64_t, uint64_t >& upperBoundMap);
	static void traversePreorder(const TrieNode* node, FieldIndex index, int level, int branch, FILE* fp);

public:
	int totalRuleCount;

	Trie(FieldIndex fi);
	~Trie();
	FieldIndex getFieldIndex();
	unsigned int getFieldWidth();
	TrieNode* findNode(const string& fieldValue, const string& fieldMask);
	TrieNode* addRule(const Rule& rule);
	void removeRule(TrieNode* node);
	void getEquivalenceClasses(const Rule& rule, vector< EquivalenceClass >& vPacketClasses);

	int getTotalRuleCount() const;
	void print(FILE* fp) const;

	static void getNextLevelEquivalenceClasses(FieldIndex currentFieldIndex, uint64_t lb, const Rule& rule, const vector< Trie* >& vInputTries, vector< EquivalenceClass >& vPacketClasses, vector< Trie* >& vOutputTries);
	static ForwardingGraph* getForwardingGraph(FieldIndex currentFieldIndex, const vector< Trie* >& vInputTries, const EquivalenceClass& packetClass, FILE* fp);
};

#endif /* TRIE_H_ */
