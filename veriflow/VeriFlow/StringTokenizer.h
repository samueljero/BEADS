/*
 * This file is protected by the VeriFlow Research License Agreement
 * available at http://www.cs.illinois.edu/~khurshi1/projects/veriflow/veriflow-research-license-agreement.txt.
 * A copy of this agreement is also included in this package.
 *
 * Copyright (c) 2012-2013 by
 * The Board of Trustees of the University of Illinois.
 * All rights reserved.
 */

#ifndef STRINGTOKENIZER_H_
#define STRINGTOKENIZER_H_

#include <sys/types.h>
#include <unistd.h>
#include <string>
#include <vector>

using namespace std;

class StringTokenizer
{
private:
	string str, delim;
	vector<string> tokens;

public:
	StringTokenizer(const string& s, const string& d);
	int countTokens() const;
	bool hasMoreTokens() const;
	string nextToken();
	string toString() const;
};

#endif /* STRINGTOKENIZER_H_ */
