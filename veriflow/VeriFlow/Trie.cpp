/*
 * Trie.cpp
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

#include <sys/types.h>
#include <unistd.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stack>
#include "Trie.h"
#include "EquivalenceClass.h"
#include "VeriFlow.h"

using namespace std;

extern int mode;
extern vector<string> endhosts;

Trie::Trie(FieldIndex fi)
{
	if(fi >= ALL_FIELD_INDEX_END_MARKER)
	{
		fprintf(stderr, "[Trie::Trie] Invalid field index (%d). Terminating process.\n", fi);
		exit(1);
	}

	this->root = NULL;
	this->fieldIndex = fi;
	this->totalRuleCount = 0;
}

Trie::~Trie()
{
	if(this->root != NULL)
	{
		delete root;
		this->root = NULL;
		this->totalRuleCount = 0;
	}
}

FieldIndex Trie::getFieldIndex()
{
	return this->fieldIndex;
}

unsigned int Trie::getFieldWidth()
{
	return ::fieldWidth[this->fieldIndex];
}

uint64_t Trie::getIntValue(FieldIndex index, const string& valueOrMask)
{
	if((index == DL_SRC) || (index == DL_DST))
	{
		return ::getMacValueAsInt(valueOrMask);
	}
	else if((index == NW_SRC) || (index == NW_DST))
	{
		return ::getIpValueAsInt(valueOrMask);
	}
	else
	{
		return strtoul(valueOrMask.c_str(), NULL, 10);

		// fprintf(stderr, "[Trie::getIntValue] Invalid field index (%d). Terminating process.\n", index);
		// exit(1);
	}
}

TrieNode* Trie::findNode(const string& fieldValue, const string& fieldMask)
{
	if((this->root == NULL) || (this->totalRuleCount == 0))
	{
		return NULL;
	}

	uint64_t fieldValueInt = Trie::getIntValue(this->fieldIndex, fieldValue);
	uint64_t fieldMaskInt = Trie::getIntValue(this->fieldIndex, fieldMask);
	uint64_t maskedFieldValue = fieldValueInt & fieldMaskInt;

	TrieNode* currentNode = this->root;

	for(unsigned int i = 0; i < ::fieldWidth[this->fieldIndex]; i++)
	{
		uint64_t maskBit = (uint64_t)1 << ((unsigned int)(::fieldWidth[this->fieldIndex] - 1) - i);
		if((fieldMaskInt & maskBit) == 0) // wildcard bit
		{
			if(currentNode->wildcardBranch == NULL)
			{
				return NULL;
			}

			currentNode = currentNode->wildcardBranch;
		}
		else
		{
			if((maskedFieldValue & maskBit) == 0) // zero bit
			{
				if(currentNode->zeroBranch == NULL)
				{
					return NULL;
				}

				currentNode = currentNode->zeroBranch;
			}
			else // one bit
			{
				if(currentNode->oneBranch == NULL)
				{
					return NULL;
				}

				currentNode = currentNode->oneBranch;
			}
		}
	}

	return currentNode;
}

TrieNode* Trie::addRule(const Rule& rule)
{
	if(this->root == NULL)
	{
		this->root = new TrieNode;
		if(this->root == NULL)
		{
			fprintf(stderr, "[Trie::addRule] Memory allocation error (this->root == NULL). Terminating process.\n");
			exit(1);
		}
	}

	uint64_t fieldValue = Trie::getIntValue(this->fieldIndex, rule.fieldValue[this->fieldIndex]);
	uint64_t fieldMask = Trie::getIntValue(this->fieldIndex, rule.fieldMask[this->fieldIndex]);
	uint64_t maskedFieldValue = fieldValue & fieldMask;

	TrieNode* currentNode = this->root;

	for(unsigned int i = 0; i < ::fieldWidth[this->fieldIndex]; i++)
	{
		uint64_t maskBit = (uint64_t)1 << ((unsigned int)(::fieldWidth[this->fieldIndex] - 1) - i);
		if((fieldMask & maskBit) == 0) // wildcard bit
		{
			if(currentNode->wildcardBranch == NULL)
			{
				currentNode->wildcardBranch = new TrieNode;
				if(currentNode->wildcardBranch == NULL)
				{
					fprintf(stderr, "[Trie::addRule] Memory allocation error (currentNode->wildcardBranch == NULL). Terminating process.\n");
					exit(1);
				}

				currentNode->wildcardBranch->parent = currentNode;
			}

			currentNode = currentNode->wildcardBranch;
		}
		else
		{
			if((maskedFieldValue & maskBit) == 0) // zero bit
			{
				if(currentNode->zeroBranch == NULL)
				{
					currentNode->zeroBranch = new TrieNode;
					if(currentNode->zeroBranch == NULL)
					{
						fprintf(stderr, "[Trie::addRule] Memory allocation error (currentNode->zeroBranch == NULL). Terminating process.\n");
						exit(1);
					}

					currentNode->zeroBranch->parent = currentNode;
				}

				currentNode = currentNode->zeroBranch;
			}
			else // one bit
			{
				if(currentNode->oneBranch == NULL)
				{
					currentNode->oneBranch = new TrieNode;
					if(currentNode->oneBranch == NULL)
					{
						fprintf(stderr, "[Trie::addRule] Memory allocation error (currentNode->oneBranch == NULL). Terminating process.\n");
						exit(1);
					}

					currentNode->oneBranch->parent = currentNode;
				}

				currentNode = currentNode->oneBranch;
			}
		}
	}

	return currentNode;
}

void Trie::removeRule(TrieNode* node)
{
	TrieNode* parent = node->parent;
	while(parent != NULL)
	{
		if(
				((parent->zeroBranch == node)
				&& (parent->oneBranch == NULL)
				&& (parent->wildcardBranch == NULL))
				||
				((parent->oneBranch == node)
				&& (parent->zeroBranch == NULL)
				&& (parent->wildcardBranch == NULL))
				||
				((parent->wildcardBranch == node)
				&& (parent->zeroBranch == NULL)
				&& (parent->oneBranch == NULL))
		)
		{
			// fprintf(stdout, "Climbing up one level\n");
			TrieNode* tempParent = parent->parent;
			node = parent;
			parent = tempParent;
		}
		else
		{
			if(parent->zeroBranch == node)
			{
				// fprintf(stdout, "Deleting zero branch...\n");
				parent->zeroBranch = NULL;
			}
			else if(parent->oneBranch == node)
			{
				// fprintf(stdout, "Deleting one branch...\n");
				parent->oneBranch = NULL;
			}
			else if(parent->wildcardBranch == node)
			{
				// fprintf(stdout, "Deleting wildcard branch...\n");
				parent->wildcardBranch = NULL;
			}

			delete node;

			break;
		}
	}

	--(this->totalRuleCount);

	if(parent == NULL)
	{
		delete this->root;
		// fprintf(stdout, "Destroyed root.\n");
		this->root = NULL;
		this->totalRuleCount = 0;
	}
}

// Allow at most 1 occurrence of each value in each list.
void Trie::addToBoundList(uint64_t lowerBound, uint64_t upperBound)
{
	if(this->lowerBoundMap.find(lowerBound) == this->lowerBoundMap.end())
	{
		this->lowerBoundList.push_front(lowerBound);
		this->lowerBoundMap[lowerBound] = upperBound;
	}
	else
	{
		if(this->lowerBoundMap[lowerBound] < upperBound)
		{
			this->lowerBoundMap[lowerBound] = upperBound;
		}
	}

	if(this->upperBoundMap.find(upperBound) == this->upperBoundMap.end())
	{
		this->upperBoundList.push_front(upperBound);
		this->upperBoundMap[upperBound] = lowerBound;
	}
	else
	{
		if(this->upperBoundMap[upperBound] > lowerBound)
		{
			this->upperBoundMap[upperBound] = lowerBound;
		}
	}
}

// Allow at most 1 occurrence of each value in each list.
void Trie::addToBoundList(uint64_t lowerBound, uint64_t upperBound,
		list< uint64_t >& lowerBoundList, list< uint64_t >& upperBoundList,
		unordered_map< uint64_t, uint64_t >& lowerBoundMap, unordered_map< uint64_t, uint64_t >& upperBoundMap)
{
	if(lowerBoundMap.find(lowerBound) == lowerBoundMap.end())
	{
		lowerBoundList.push_front(lowerBound);
		lowerBoundMap[lowerBound] = upperBound;
	}
	else
	{
		if(lowerBoundMap[lowerBound] < upperBound)
		{
			lowerBoundMap[lowerBound] = upperBound;
		}
	}

	if(upperBoundMap.find(upperBound) == upperBoundMap.end())
	{
		upperBoundList.push_front(upperBound);
		upperBoundMap[upperBound] = lowerBound;
	}
	else
	{
		if(upperBoundMap[upperBound] > lowerBound)
		{
			upperBoundMap[upperBound] = lowerBound;
		}
	}
}

void Trie::getEquivalenceClasses(const Rule& rule, vector< EquivalenceClass >& vPacketClasses)
{
	vPacketClasses.clear();
	if(this->root == NULL)
	{
		return;
	}

	uint64_t fieldValue = Trie::getIntValue(this->fieldIndex, rule.fieldValue[this->fieldIndex]);
	uint64_t fieldMask = Trie::getIntValue(this->fieldIndex, rule.fieldMask[this->fieldIndex]);
	uint64_t maskedFieldValue = fieldValue & fieldMask;

	TrieNode* currentNode = this->root;
	EquivalenceRange range;
	for(unsigned int i = 0; i < ::fieldWidth[this->fieldIndex]; i++)
	{
		uint64_t maskBit = (uint64_t)1 << ((unsigned int)(::fieldWidth[this->fieldIndex] - 1) - i);
		if((fieldMask & maskBit) != 0) // non-wildcard bit
		{
			if((maskedFieldValue & maskBit) == 0) // zero bit
			{
				if(currentNode->zeroBranch != NULL)
				{
					currentNode = currentNode->zeroBranch;
				}
				else
				{
					fprintf(stderr, "[Trie::getEquivalenceClasses] Error: currentNode->zeroBranch cannot be NULL. Terminating process.\n");
					exit(1);
				}
			}
			else // one bit
			{
				range.lowerBound |= 1;
				range.upperBound |= 1;

				if(currentNode->oneBranch != NULL)
				{
					currentNode = currentNode->oneBranch;
				}
				else
				{
					fprintf(stderr, "[Trie::getEquivalenceClasses] Error: currentNode->oneBranch cannot be NULL. Terminating process.\n");
					exit(1);
				}
			}

			range.lowerBound <<= 1;
			range.upperBound <<= 1;
		}
		else // wildcard bit
		{
			break;
		}
	}

	this->lowerBoundList.clear();
	this->lowerBoundMap.clear();

	this->upperBoundList.clear();
	this->upperBoundMap.clear();

	// Perform DFS (Depth-first Search)

	stack< TrieNode* > nodes;
	nodes.push(currentNode);
	stack< EquivalenceRange > ranges;
	ranges.push(range);

	while(nodes.empty() == false)
	{
		currentNode = nodes.top();
		nodes.pop();
		EquivalenceRange tempRange = ranges.top();
		ranges.pop();

		// fprintf(stdout, "Exploring node...\n");

		if(currentNode == NULL)
		{
			fprintf(stderr, "[Trie::getEquivalenceClasses] Invalid node (node = NULL) found. Terminating process.\n");
			exit(1);
		}

		if(currentNode->oneBranch != NULL)
		{
			EquivalenceRange oneRange = tempRange;
			oneRange.lowerBound |= 1;
			oneRange.upperBound |= 1;
			oneRange.lowerBound <<= 1;
			oneRange.upperBound <<= 1;
			ranges.push(oneRange);

			// fprintf(stdout, "Pushing oneBranch...\n");
			nodes.push(currentNode->oneBranch);
		}

		if(currentNode->zeroBranch != NULL)
		{
			EquivalenceRange zeroRange = tempRange;
			// zeroRange.lowerBound |= 0;
			// zeroRange.upperBound |= 0;
			zeroRange.lowerBound <<= 1;
			zeroRange.upperBound <<= 1;
			ranges.push(zeroRange);

			// fprintf(stdout, "Pushing zeroBranch...\n");
			nodes.push(currentNode->zeroBranch);
		}

		if(currentNode->wildcardBranch != NULL)
		{
			EquivalenceRange wildcardRange = tempRange;
			// wildcardRange.lowerBound |= 0;
			wildcardRange.upperBound |= 1;
			wildcardRange.lowerBound <<= 1;
			wildcardRange.upperBound <<= 1;
			ranges.push(wildcardRange);

			// fprintf(stdout, "Pushing wildcardBranch...\n");
			nodes.push(currentNode->wildcardBranch);
		}

		if((currentNode->ruleSet != NULL) || (currentNode->nextLevelTrie != NULL))
		{
			// Reached a leaf.

			tempRange.lowerBound >>= 1;
			tempRange.upperBound >>= 1;

			this->addToBoundList(tempRange.lowerBound, tempRange.upperBound);
		}
		else
		{
			// Do nothing.
		}
	}

	this->lowerBoundList.sort();
	this->upperBoundList.sort();

	// fprintf(stdout, "Generating equivalent packets...\n");

	uint64_t lowerBound = 0;
	uint64_t upperBound = 0;

	if(this->lowerBoundList.empty() == false)
	{
		lowerBound = upperBound = this->lowerBoundList.front();
	}

	while(this->upperBoundList.empty() == false)
	{
		if(this->lowerBoundList.empty() == false)
		{
			lowerBound = this->lowerBoundList.front();
			if((lowerBound > (upperBound + 1))
					/* && (this->upperBoundList.front() > (upperBound + 1))
					&& (this->upperBoundMap[this->upperBoundList.front()] < (upperBound + 1)) */)
			{
				lowerBound = upperBound + 1;

				if(this->lowerBoundList.front() <= this->upperBoundList.front())
				{
					upperBound = this->lowerBoundList.front() - 1;
				}
				else
				{
					upperBound = this->upperBoundList.front();
					this->upperBoundList.pop_front();
				}

				EquivalenceClass packetClass;
				packetClass.lowerBound[this->fieldIndex] = lowerBound;
				packetClass.upperBound[this->fieldIndex] = upperBound;

				vPacketClasses.push_back(packetClass);

				continue;
			}
			else
			{
				this->lowerBoundList.pop_front();
			}
		}
		else
		{
			lowerBound = upperBound + 1;
		}

		if(this->lowerBoundList.empty() == false)
		{
			if(this->lowerBoundList.front() <= this->upperBoundList.front())
			{
				upperBound = this->lowerBoundList.front() - 1;
			}
			else
			{
				upperBound = this->upperBoundList.front();
				this->upperBoundList.pop_front();
			}
		}
		else
		{
			upperBound = this->upperBoundList.front();
			this->upperBoundList.pop_front();
		}

		EquivalenceClass packetClass;
		packetClass.lowerBound[this->fieldIndex] = lowerBound;
		packetClass.upperBound[this->fieldIndex] = upperBound;

		vPacketClasses.push_back(packetClass);
	}
}

void Trie::getNextLevelEquivalenceClasses(FieldIndex currentFieldIndex, uint64_t lb, const Rule& rule, const vector< Trie* >& vInputTries, vector< EquivalenceClass >& vPacketClasses, vector< Trie* >& vOutputTries)
{
	vPacketClasses.clear();
	vOutputTries.clear();

	FieldIndex nextFieldIndex = (FieldIndex)(currentFieldIndex + 1);
	if(nextFieldIndex >= ALL_FIELD_INDEX_END_MARKER)
	{
		fprintf(stderr, "[Trie::getNextLevelEquivalenceClasses] Method called on wrong trie (field index = %d). Terminating process.\n", currentFieldIndex);
		exit(1);
	}

	uint64_t fieldValue = lb;
	uint64_t fieldMask = EquivalenceClass::getMaxValue(currentFieldIndex);

	uint64_t maskedFieldValue = fieldValue & fieldMask;

	for(unsigned int t = 0; t < vInputTries.size(); t++)
	{
		Trie* inputTrie = vInputTries[t];
		if(inputTrie->getTotalRuleCount() == 0)
		{
			continue;
		}

		vector< TrieNode* > vCurrentLevelNodes, vNextLevelNodes;
		vCurrentLevelNodes.push_back(inputTrie->root);
		TrieNode* currentNode = NULL;

		for(unsigned int i = 0; i < ::fieldWidth[currentFieldIndex]; i++)
		{
			while(vCurrentLevelNodes.empty() == false)
			{
				currentNode = vCurrentLevelNodes.at(0);
				vCurrentLevelNodes.erase(vCurrentLevelNodes.begin());

				if(currentNode == NULL)
				{
					fprintf(stderr, "[Trie::getNextLevelEquivalenceClasses] Invalid node (node = NULL) found. Terminating process.\n");
					exit(1);
				}

				uint64_t maskBit = (uint64_t)1 << ((unsigned int)(::fieldWidth[currentFieldIndex] - 1) - i);
				if((fieldMask & maskBit) == 0) // wildcard bit
				{
					if(currentNode->zeroBranch != NULL)
					{
						vNextLevelNodes.push_back(currentNode->zeroBranch);
					}

					if(currentNode->oneBranch != NULL)
					{
						vNextLevelNodes.push_back(currentNode->oneBranch);
					}

					if(currentNode->wildcardBranch != NULL)
					{
						vNextLevelNodes.push_back(currentNode->wildcardBranch);
					}
				}
				else
				{
					if((maskedFieldValue & maskBit) == 0) // zero bit
					{
						if(currentNode->zeroBranch != NULL)
						{
							vNextLevelNodes.push_back(currentNode->zeroBranch);
						}

						if(currentNode->wildcardBranch != NULL)
						{
							vNextLevelNodes.push_back(currentNode->wildcardBranch);
						}
					}
					else // one bit
					{
						if(currentNode->oneBranch != NULL)
						{
							vNextLevelNodes.push_back(currentNode->oneBranch);
						}

						if(currentNode->wildcardBranch != NULL)
						{
							vNextLevelNodes.push_back(currentNode->wildcardBranch);
						}
					}
				}
			}

			vCurrentLevelNodes = vNextLevelNodes;
			vNextLevelNodes.erase(vNextLevelNodes.begin(), vNextLevelNodes.end());
		}

		for(unsigned int i = 0; i < vCurrentLevelNodes.size(); i++)
		{
			TrieNode* node = vCurrentLevelNodes[i];
			if(node->nextLevelTrie != NULL)
			{
				vOutputTries.push_back(node->nextLevelTrie);
			}
			else
			{
				fprintf(stderr, "[Trie::getNextLevelEquivalenceClasses] Invalid node (node->nextLevelTrie = NULL) found. Terminating process.\n");
				exit(1);
			}
		}
	}

	// Found the next level tries. Now, compute the equivalence classes.

	list< uint64_t > lowerBoundList, upperBoundList;
	unordered_map< uint64_t, uint64_t > lowerBoundMap, upperBoundMap;

	fieldValue = Trie::getIntValue(nextFieldIndex, rule.fieldValue[nextFieldIndex]);
	fieldMask = Trie::getIntValue(nextFieldIndex, rule.fieldMask[nextFieldIndex]);
	maskedFieldValue = fieldValue & fieldMask;

	for(unsigned int t = 0; t < vOutputTries.size(); t++)
	{
		bool matchFound = true;
		Trie* outputTrie = vOutputTries[t];
		if(outputTrie->getTotalRuleCount() == 0)
		{
			continue;
		}

		TrieNode* currentNode = outputTrie->root;
		EquivalenceRange range;
		for(unsigned int i = 0; i < ::fieldWidth[nextFieldIndex]; i++)
		{
			uint64_t maskBit = (uint64_t)1 << ((unsigned int)(::fieldWidth[nextFieldIndex] - 1) - i);
			if((fieldMask & maskBit) != 0) // non-wildcard bit
			{
				if((maskedFieldValue & maskBit) == 0) // zero bit
				{
					if(currentNode->zeroBranch != NULL)
					{
						currentNode = currentNode->zeroBranch;
					}
					else
					{
						/* fprintf(stderr, "[Trie::getNextLevelEquivalenceClasses] Error: currentNode->zeroBranch cannot be NULL. Terminating process.\n");
						fprintf(stderr, "[Trie::getNextLevelEquivalenceClasses] currentFieldIndex: %d, lb: %lu, data: %s\n",
								currentFieldIndex, lb, data.toString().c_str());
						exit(1); */

						matchFound = false;
						break;
					}
				}
				else // one bit
				{
					range.lowerBound |= 1;
					range.upperBound |= 1;

					if(currentNode->oneBranch != NULL)
					{
						currentNode = currentNode->oneBranch;
					}
					else
					{
						/* fprintf(stderr, "[Trie::getNextLevelEquivalenceClasses] Error: currentNode->oneBranch cannot be NULL. Terminating process.\n");
						fprintf(stderr, "[Trie::getNextLevelEquivalenceClasses] currentFieldIndex: %d, lb: %lu, data: %s\n",
								currentFieldIndex, lb, data.toString().c_str());
						exit(1); */

						matchFound = false;
						break;
					}
				}

				range.lowerBound <<= 1;
				range.upperBound <<= 1;
			}
			else // wildcard bit
			{
				matchFound = true;
				break;
			}
		}

		if(matchFound == false)
		{
			continue;
		}

		// Perform DFS (Depth-first Search).

		stack< TrieNode* > nodes;
		nodes.push(currentNode);
		stack< EquivalenceRange > ranges;
		ranges.push(range);

		while(nodes.empty() == false)
		{
			currentNode = nodes.top();
			nodes.pop();
			EquivalenceRange tempRange = ranges.top();
			ranges.pop();

			// fprintf(stdout, "Exploring node...\n");

			if(currentNode == NULL)
			{
				fprintf(stderr, "[Trie::getNextLevelEquivalenceClasses] Invalid node (node = NULL) found. Terminating process.\n");
				exit(1);
			}

			if(currentNode->oneBranch != NULL)
			{
				EquivalenceRange oneRange = tempRange;
				oneRange.lowerBound |= 1;
				oneRange.upperBound |= 1;
				oneRange.lowerBound <<= 1;
				oneRange.upperBound <<= 1;
				ranges.push(oneRange);

				// fprintf(stdout, "Pushing oneBranch...\n");
				nodes.push(currentNode->oneBranch);
			}

			if(currentNode->zeroBranch != NULL)
			{
				EquivalenceRange zeroRange = tempRange;
				// zeroRange.lowerBound |= 0;
				// zeroRange.upperBound |= 0;
				zeroRange.lowerBound <<= 1;
				zeroRange.upperBound <<= 1;
				ranges.push(zeroRange);

				// fprintf(stdout, "Pushing zeroBranch...\n");
				nodes.push(currentNode->zeroBranch);
			}

			if(currentNode->wildcardBranch != NULL)
			{
				EquivalenceRange wildcardRange = tempRange;
				// wildcardRange.lowerBound |= 0;
				wildcardRange.upperBound |= 1;
				wildcardRange.lowerBound <<= 1;
				wildcardRange.upperBound <<= 1;
				ranges.push(wildcardRange);

				// fprintf(stdout, "Pushing wildcardBranch...\n");
				nodes.push(currentNode->wildcardBranch);
			}

			if((currentNode->nextLevelTrie != NULL) || (currentNode->ruleSet != NULL))
			{
				// reached a leaf

				tempRange.lowerBound >>= 1;
				tempRange.upperBound >>= 1;

				Trie::addToBoundList(tempRange.lowerBound, tempRange.upperBound, lowerBoundList, upperBoundList, lowerBoundMap, upperBoundMap);
			}
			else
			{
				// Do nothing.
			}
		}
	}

	lowerBoundList.sort();
	upperBoundList.sort();

	// fprintf(stdout, "Generating equivalent packets...\n");

	uint64_t lowerBound = 0;
	uint64_t upperBound = 0;

	if(lowerBoundList.empty() == false)
	{
		lowerBound = upperBound = lowerBoundList.front();
	}

	while(upperBoundList.empty() == false)
	{
		if(lowerBoundList.empty() == false)
		{
			lowerBound = lowerBoundList.front();
			if((lowerBound > (upperBound + 1))
					/* && (upperBoundList.front() > (upperBound + 1))
					&& (upperBoundMap[upperBoundList.front()] < (upperBound + 1)) */)
			{
				lowerBound = upperBound + 1;

				if(lowerBoundList.front() <= upperBoundList.front())
				{
					upperBound = lowerBoundList.front() - 1;
				}
				else
				{
					upperBound = upperBoundList.front();
					upperBoundList.pop_front();
				}

				EquivalenceClass packetClass;
				packetClass.lowerBound[nextFieldIndex] = lowerBound;
				packetClass.upperBound[nextFieldIndex] = upperBound;

				vPacketClasses.push_back(packetClass);

				continue;
			}
			else
			{
				lowerBoundList.pop_front();
			}
		}
		else
		{
			lowerBound = upperBound + 1;
		}

		if(lowerBoundList.empty() == false)
		{
			if(lowerBoundList.front() <= upperBoundList.front())
			{
				upperBound = lowerBoundList.front() - 1;
			}
			else
			{
				upperBound = upperBoundList.front();
				upperBoundList.pop_front();
			}
		}
		else
		{
			upperBound = upperBoundList.front();
			upperBoundList.pop_front();
		}

		EquivalenceClass packetClass;
		packetClass.lowerBound[nextFieldIndex] = lowerBound;
		packetClass.upperBound[nextFieldIndex] = upperBound;

		vPacketClasses.push_back(packetClass);
	}
}

/*
 * Only the last level trie is used for each equivalence class to build the corresponding forwarding graph.
 * Ignore the DUMMY rules, or only put the FORWARDING rules in the graph.
 * */
ForwardingGraph* Trie::getForwardingGraph(FieldIndex currentFieldIndex, const vector< Trie* >& vInputTries, const EquivalenceClass& packetClass, FILE* fp)
{
	ForwardingGraph* graph = new ForwardingGraph;
	if(graph == NULL)
	{
		fprintf(stderr, "[Trie::getForwardingGraph] Memory allocation error (graph == NULL). Terminating process.\n");
		exit(1);
	}

	if((currentFieldIndex + 1) != ALL_FIELD_INDEX_END_MARKER)
	{
		fprintf(stderr, "[Trie::getForwardingGraph] Method called on wrong trie (field index = %d). Terminating process.\n", currentFieldIndex);
		exit(1);
	}

	uint64_t fieldValue = packetClass.lowerBound[currentFieldIndex];
	uint64_t fieldMask = EquivalenceClass::getMaxValue(currentFieldIndex);

	uint64_t maskedFieldValue = fieldValue & fieldMask;

	for(unsigned int t = 0; t < vInputTries.size(); t++)
	{
		Trie* inputTrie = vInputTries[t];
		if(inputTrie->getTotalRuleCount() == 0)
		{
			continue;
		}

		vector< TrieNode* > vCurrentLevelNodes, vNextLevelNodes;
		vCurrentLevelNodes.push_back(inputTrie->root);
		TrieNode* currentNode = NULL;

		for(unsigned int i = 0; i < ::fieldWidth[currentFieldIndex]; i++)
		{
			while(vCurrentLevelNodes.empty() == false)
			{
				currentNode = vCurrentLevelNodes.at(0);
				vCurrentLevelNodes.erase(vCurrentLevelNodes.begin());

				if(currentNode == NULL)
				{
					fprintf(stderr, "[Trie::getForwardingGraph] Invalid node (node = NULL) found. Terminating process.\n");
					exit(1);
				}

				uint64_t maskBit = (uint64_t)1 << ((unsigned int)(::fieldWidth[currentFieldIndex] - 1) - i);
				if((fieldMask & maskBit) == 0) // wildcard bit
				{
					if(currentNode->zeroBranch != NULL)
					{
						vNextLevelNodes.push_back(currentNode->zeroBranch);
					}

					if(currentNode->oneBranch != NULL)
					{
						vNextLevelNodes.push_back(currentNode->oneBranch);
					}

					if(currentNode->wildcardBranch != NULL)
					{
						vNextLevelNodes.push_back(currentNode->wildcardBranch);
					}
				}
				else
				{
					if((maskedFieldValue & maskBit) == 0) // zero bit
					{
						if(currentNode->zeroBranch != NULL)
						{
							vNextLevelNodes.push_back(currentNode->zeroBranch);
						}

						if(currentNode->wildcardBranch != NULL)
						{
							vNextLevelNodes.push_back(currentNode->wildcardBranch);
						}
					}
					else // one bit
					{
						if(currentNode->oneBranch != NULL)
						{
							vNextLevelNodes.push_back(currentNode->oneBranch);
						}

						if(currentNode->wildcardBranch != NULL)
						{
							vNextLevelNodes.push_back(currentNode->wildcardBranch);
						}
					}
				}
			}

			vCurrentLevelNodes = vNextLevelNodes;
			vNextLevelNodes.erase(vNextLevelNodes.begin(), vNextLevelNodes.end());
		}

		for(unsigned int i = 0; i < vCurrentLevelNodes.size(); i++)
		{
			TrieNode* node = vCurrentLevelNodes[i];
			if(node->ruleSet != NULL)
			{
				unordered_set< Rule, KHash< Rule >, KEqual< Rule > >::const_iterator itr;
				for(itr = node->ruleSet->begin(); itr != node->ruleSet->end(); ++itr)
				{
					const Rule& rule = *itr;
					if(rule.type != FORWARDING)
					{
						continue;
					}

					if(rule.priority == INVALID_PRIORITY)
					{
						continue;
					}

					ForwardingLink link(rule, false);

					if(mode == TEST_MODE)
					{
						// For the testVerification() experiment present in Test.cpp.
						if(rule.location.compare(rule.nextHop) == 0)
						{
							link.isGateway = true;
						}
					}
					else if(mode == PROXY_MODE)
					{
						if(rule.nextHop.compare(rule.fieldValue[NW_DST]) == 0)
						{
							link.isGateway = true;
						}
						for(unsigned int i=0; i < endhosts.size(); i++){
							if (rule.nextHop.compare(endhosts[i])==0){
								link.isGateway = true;
								break;
							}
						}
					}

					// fprintf(stdout, "[Trie::getForwardingGraph] %s\n", link.toString().c_str());
					// fprintf(fp, "[Trie::getForwardingGraph] %s\n", link.toString().c_str());
					graph->addLink(link);
				}
			}
			else
			{
				fprintf(stderr, "[Trie::getForwardingGraph] Invalid node (node->ruleSet = NULL) found. Terminating process.\n");
				exit(1);
			}
		}
	}

	return graph;
}

int Trie::getTotalRuleCount() const
{
	return this->totalRuleCount;
}

void Trie::print(FILE* fp) const
{
	Trie::traversePreorder(this->root, this->fieldIndex, 0, -1, fp);
}

void Trie::traversePreorder(const TrieNode* node, FieldIndex index, int level, int branch, FILE* fp)
{
	if(node == NULL)
	{
		return;
	}

	string linePrefix = "";
	string leadingSpace = "";

	for(int i = 0; i < level; i++)
	{
		linePrefix += "-";
		leadingSpace += " ";
	}

	fprintf(fp, "%s", linePrefix.c_str());

	if(branch == -1)
	{
		fprintf(fp, "[root] Field index: %d", index);
	}
	else
	{
		fprintf(fp, "%d", branch);
	}

	if(node->ruleSet != NULL)
	{
		unordered_set< Rule, KHash< Rule >, KEqual< Rule > >::const_iterator itr;
		for(itr = node->ruleSet->begin(); itr != node->ruleSet->end(); ++itr)
		{
			fprintf(fp, "\n");
			fprintf(fp, "%s", leadingSpace.c_str());
			fprintf(fp, "%s", itr->toString().c_str());
		}
	}

	fprintf(fp, "\n");

	if(node->nextLevelTrie != NULL)
	{
		node->nextLevelTrie->print(fp);
	}

	Trie::traversePreorder(node->zeroBranch, index, level + 1, 0, fp);
	Trie::traversePreorder(node->oneBranch, index, level + 1, 1, fp);
	Trie::traversePreorder(node->wildcardBranch, index, level + 1, 2, fp);
}
