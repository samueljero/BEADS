/*
 * This file is protected by the VeriFlow Research License Agreement
 * available at http://www.cs.illinois.edu/~khurshi1/projects/veriflow/veriflow-research-license-agreement.txt.
 * A copy of this agreement is also included in this package.
 *
 * Copyright (c) 2012-2013 by
 * The Board of Trustees of the University of Illinois.
 * All rights reserved.
 */

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

#include <sys/types.h>
#include <unistd.h>

template<class T>
class KHash
{
public:
	size_t operator()(const T& obj) const;
};

template<class T>
class KEqual
{
public:
	bool operator()(const T& lhs, const T& rhs) const;
};

template<class T>
size_t KHash<T>::operator()(const T& obj) const
{
	return obj();
}

template<class T>
bool KEqual<T>::operator()(const T& lhs, const T& rhs) const
{
	return (lhs == rhs);
}

#endif /* TEMPLATE_H_ */
