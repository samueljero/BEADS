/******************************************************************************
 * csv.h
 * A tiny CSV parser.
 * Author	Xiangyu Bu <xb@purdue.edu>
******************************************************************************/
#ifndef _CSV_H

#define _CSV_H

#include <stdlib.h>

/**
 * Given a row of CSV string, return a C string pointer array
 * and write the number of pointers to num_fields.
 * The pointer data must point to a writable memory area.
 */
char **csv_parse(char *data, size_t len, size_t *num_fields);

/**
 * Unescape the C string. For example 'hello \"world\"' to 'hello "world"'.
 */
void csv_unescape(char *data);

#define csv_free(x)	free(x)

#endif

