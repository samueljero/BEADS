/*
 * DynamicArray.h
 *
 *  Created on: Mar 13, 2012
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

#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

#include <sys/types.h>
#include <unistd.h>
#include <deque>

using namespace std;

template<class T>
class DynamicArray
{
private:
	deque<T> data;

public:
	void append(const T& item);
	void append(const T* items, unsigned int itemCount);
	T* getData(unsigned int count) const;
	unsigned int size() const;
	void clear();
	bool clearRange(unsigned int start, unsigned int end);
};

template<class T>
void DynamicArray<T>::append(const T& item)
{
	this->data.push_back(item);
}

template<class T>
void DynamicArray<T>::append(const T* items, unsigned int itemCount)
{
	for(unsigned int i = 0; i < itemCount; i++)
	{
		this->data.push_back(items[i]);
	}
}

template<class T>
T* DynamicArray<T>::getData(unsigned int count) const
{
	T* retData = new T[count];

	for(unsigned int i = 0; i < count; i++)
	{
		retData[i] = this->data.at(i);
	}

	return retData;
}

template<class T>
unsigned int DynamicArray<T>::size() const
{
	return this->data.size();
}

template<class T>
void DynamicArray<T>::clear()
{
	this->data.clear();
}

template<class T>
bool DynamicArray<T>::clearRange(unsigned int start, unsigned int end)
{
	if(start >= this->data.size())
	{
		return false;
	}

	if(end >= this->data.size())
	{
		end = (this->data.size() - 1);
	}

	if(start > end)
	{
		return false;
	}

	this->data.erase(this->data.begin() + start, this->data.begin() + end + 1);

	return true;
}

#endif /* DYNAMICARRAY_H_ */
