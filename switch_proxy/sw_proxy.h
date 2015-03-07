/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#ifndef _SW_PROXY_H
#define _SW_PROXY_H
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>
#include <netdb.h>
#include <ifaddrs.h>



/*debug printf
 * Levels:
 * 	0) Always print even if debug isn't specified
 *  1) Errors and warnings... Don't overload the screen with too much output
 *  2) Notes and per-packet processing info... as verbose as needed
 */
extern int debug;
void dbgprintf(int level, const char *fmt, ...);

#endif
