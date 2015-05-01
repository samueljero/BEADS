/******************************************************************************
 * csv.cc
 * A simple CSV parser.
 * Author	Xiangyu Bu <xb@purdue.edu>
******************************************************************************/
#include <stdio.h>
#include "csv.h"

#define is_whitespace(c)	(c == '\t' || c == ' ')
#define is_newline(c)		(c == '\n' || c == '\r')

char *csv_find_next_comma(char *data, size_t maxlen, char quote) {
	char *back;
	while (maxlen > 0) {
		if (quote == '\0' && *data == ',') {
			*data = '\0';
			// remove the whitespaces at the tail
			back = data - 1;
			while (is_whitespace(*back)) {
				*back = '\0';
				--back;
			}
			return data;
		} else if (quote != '\0' && *data == quote && *(data - 1) != '\\') {
			// not an escaped quote, close the quote matching
			quote = '\0';
			*data = '\0';
		}
		++data, --maxlen;
	}
	return NULL;
}

char **csv_parse(char *data, size_t len, size_t *num_fields) {
	size_t used = 0, cap = 5;
	char quote;
	char *next_delim;
	char **ret;

	// allocate memory that stores pointer list
	if (!(ret = (char **)malloc(cap * sizeof(char *)))) {
		perror("malloc");
		return NULL;
	}

	while (len > 0) {
		// skip beginning whitespaces
		//fprintf(stderr, "len=%lu\n%s\n", len, data);

		while (is_whitespace(*data) && len > 0) ++data, --len;
		if (len == 0) {
			*data = '\0';
			break;
		}

		if (*data == '"' || *data == '\'') quote = *data++;
		else quote = '\0';

		if (used == cap) {
			// expand pointer array assuming no error
			ret = (char **)realloc(ret, cap * 2 * sizeof(char *));
			cap = cap * 2;
		}
		ret[used++] = data;

		next_delim = csv_find_next_comma(data, len, quote);
		if (next_delim != NULL) {
			len -= next_delim - data + 1;
			data = next_delim + 1;
		} else {
			// any malformed data will be ignored
			break;
		}
	}

	*num_fields = used;
	return ret;
}

void csv_unescape(char *data) {
	// does NOT transform '\n' to newline char yet.
	while (*data != '\0') {
		if (*data == '\\') {
			*data = *(data + 1);
			++data;
		}
		++data;
	}
}

