/*
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
#include <string>
#include "StringTokenizer.h"

using namespace std;

StringTokenizer::StringTokenizer(const string& s, const string& d)
{
	this->str = s;
	this->delim = d;

	// parse this->str and populate this->tokens vector

	char* temp = new char[this->str.size() + 1];
	if(temp == NULL)
	{
		fprintf(stderr, "[StringTokenizer::StringTokenizer] Memory allocation error. Terminating process.\n");
		exit(1);
	}

	strcpy(temp, this->str.c_str());

	char* savePtr;
	char* token = strtok_r(temp, this->delim.c_str(), &savePtr);

	while(token != NULL)
	{
		string strToken = token;
		this->tokens.push_back(strToken);
		token = strtok_r(NULL, this->delim.c_str(), &savePtr);
	}

	delete [] temp;
}

int StringTokenizer::countTokens() const
{
	return this->tokens.size();
}

bool StringTokenizer::hasMoreTokens() const
{
	return (this->countTokens() != 0);
}

string StringTokenizer::nextToken()
{
	string token = "";

	if(this->hasMoreTokens() == true)
	{
		token = this->tokens.front();
		this->tokens.erase(this->tokens.begin());
	}

	return token;
}

string StringTokenizer::toString() const
{
	return ("[str: " + this->str + ", delim: " + this->delim + "]");
}
