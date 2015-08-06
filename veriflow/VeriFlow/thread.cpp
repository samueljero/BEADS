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
#include <pthread.h>
#include <semaphore.h>
#include "thread.h"

using namespace std;

/* Create a thread. */
int createThread(pthread_t* thread, void* (*threadFunction)(void*), void* arg, int detachState, int priority)
{
	int res;

	pthread_attr_t thread_attr;

	res = pthread_attr_init(&thread_attr);

	if(res != 0)
	{
		perror("[createThread] Thread attribute creation failed. Terminating process.\n");
		exit(2);
	}

	res = pthread_attr_setdetachstate(&thread_attr, detachState);
	if(res != 0)
	{
		perror("[createThread] Setting detachstate thread attribute failed. Terminating process.\n");
		exit(2);
	}

	if(priority != NORMAL_PRIORITY)
	{
		int maxPriority;
		int minPriority;
		sched_param schedulingValue;

		res = pthread_attr_setschedpolicy(&thread_attr, SCHED_OTHER);
		if(res != 0)
		{
			perror("[createThread] Setting scheduling policy failed. Terminating process.\n");
			exit(2);
		}

		maxPriority = sched_get_priority_max(SCHED_OTHER);
		minPriority = sched_get_priority_min(SCHED_OTHER);

		if(priority == MIN_PRIORITY)
		{
			schedulingValue.__sched_priority = minPriority;
		}
		else if(priority == MAX_PRIORITY)
		{
			schedulingValue.__sched_priority = maxPriority;
		}
		else
		{
			perror("[createThread] Invalid priority value (can only be {MIN|NORMAL|MAX}_PRIORITY). Terminating process.\n");
			exit(2);
		}

		res = pthread_attr_setschedparam(&thread_attr, &schedulingValue);
		if(res != 0)
		{
			perror("[createThread] Setting scheduling priority failed. Terminating process.\n");
			exit(2);
		}
	}

	res = pthread_create(thread, &thread_attr, threadFunction, arg);
	if(res != 0)
	{
		perror("[createThread] Thread init failed. Terminating process.\n");
		exit(2);
	}

	(void)pthread_attr_destroy(&thread_attr);

	return res;
}

/* Enables asynchronous cancellation of a thread. */
int setThreadAsyncCancel()
{
	int res, oldVal;

	res = pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, &oldVal);
	if(res != 0)
	{
		perror("[setThreadAsyncCancel] Call to pthread_setcancelstate failed. Terminating process.\n");
		exit(2);
	}

	res = pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, &oldVal);
	if(res != 0)
	{
		perror("[setThreadAsyncCancel] Call to pthread_setcanceltype failed. Terminating process.\n");
		exit(2);
	}

	return res;
}

/* Create a mutex. */
int createMutex(pthread_mutex_t* mutex)
{
	int res;

	res = pthread_mutex_init(mutex, NULL);

	if(res != 0)
	{
		perror("[createMutex] Mutex init failed. Terminating process.\n");
		exit(2);
	}

	return res;
}

/* Create a semaphore. */
int createSemaphore(sem_t* semaphore)
{
	int res;

	res = sem_init(semaphore, 0, 0);

	if(res != 0)
	{
		perror("[createSemaphore] Semaphore init failed. Terminating process.\n");
		exit(2);
	}

	return res;
}
