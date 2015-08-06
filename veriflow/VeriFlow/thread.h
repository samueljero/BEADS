/*
 * This file is protected by the VeriFlow Research License Agreement
 * available at http://www.cs.illinois.edu/~khurshi1/projects/veriflow/veriflow-research-license-agreement.txt.
 * A copy of this agreement is also included in this package.
 *
 * Copyright (c) 2012-2013 by
 * The Board of Trustees of the University of Illinois.
 * All rights reserved.
 */

#ifndef THREAD_H_
#define THREAD_H_

#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

#define MIN_PRIORITY 0
#define NORMAL_PRIORITY 1
#define MAX_PRIORITY 2

int createThread(pthread_t* thread, void* (*threadFunction)(void*), void* arg, int detachState, int priority);
int setThreadAsyncCancel();

int createMutex(pthread_mutex_t* mutex);
int createSemaphore(sem_t* semaphore);

#endif /* THREAD_H_ */
