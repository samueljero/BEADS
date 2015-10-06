/**
 * debug.h
 * Macros for pretty print and debugging.
 *
 * @author Xiangyu Bu <bu1@purdue.edu>
 */

#ifndef _DEBUG_H

#define _DEBUG_H

#ifdef _DEBUG
    #define debug(...);  fprintf(stderr, __VA_ARGS__);
    #define GRAY          "\033[90m"
    #define RED          "\033[91m"
    #define GREEN        "\033[92m"
    #define YELLOW       "\033[93m"
    #define BLUE         "\033[94m"
    #define MAGENTA      "\033[95m"
    #define CYAN         "\033[96m"
    #define ENDC      "\033[0m"
#else
    #define debug(...);
    #define GRAY
    #define RED
    #define GREEN
    #define YELLOW
    #define BLUE
    #define MAGENTA
    #define CYAN
    #define ENDC
#endif

#define error(...); fprintf(stderr, __VA_ARGS__);

#endif
