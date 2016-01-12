/******************************************************************************
 * args.cc
 * A singly linked list to store argument key-value pairs.
 * Note that it does not duplicate the name string or value string.
 * Author	Xiangyu Bu <xb@purdue.edu>
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "args.h"

int is_int(char *v) {
	if (*v == '\0') return 0;
	while (*v != '\0') {
		if (*v < '0' || *v > '9') return 0;
		++v;
	}
	return 1;
}

int is_float(char *v) {
	int dot_count = 0;
	if (*v == '\0') return -1;
	while (*v != '\0') {
		if (*v == '.') ++dot_count;
		else if (*v < '0' || *v > '9') return -1;
		++v;
	}
	if (dot_count > 1) dot_count = -1;
	return dot_count;
}

arg_node_t *args_parse(char *str, char delim) {
	arg_node_t *head = NULL, *tail = NULL, *tmp;
	int type;
	char *name_pos = str, *eq_pos = NULL, *b_pos;

	while (1) {
		
		if (*str == delim || *str == '\0') {
			// parse the k=v

			// remove whitespaces
			if (*str == delim) {
				b_pos = str++ - 1;
			} else {
				b_pos = str - 1;
			}
			while (*b_pos == ' ' || *b_pos == '\t') --b_pos;
			*(b_pos + 1) = '\0';

			// allocate memory
			tmp = (arg_node_t *)malloc(sizeof(arg_node_t));
			if (!tmp) {
				perror("malloc");
				break;
			}

			tmp->name = name_pos;
			tmp->type = ARG_VALUE_TYPE_NOVAL;
			tmp->next = NULL;

			// parse value
			if (eq_pos) {
				type = is_float(eq_pos);
				if (type == 1) {
					// floating point value
					tmp->type = ARG_VALUE_TYPE_FLOAT;
					tmp->value.f = atof(eq_pos);
					tmp->value.s = eq_pos;
				} else if (type == 0) {
					tmp->type = ARG_VALUE_TYPE_INT;
					tmp->value.i = atoi(eq_pos);
					tmp->value.s = eq_pos;
				} else {
					tmp->type = ARG_VALUE_TYPE_STR;
					tmp->value.s = eq_pos;
				}
			}

			if (head == NULL) head = tmp;
			if (tail != NULL) tail->next = tmp;
			tail = tmp;

			while (*str == ' ' || *str == '\t') ++str;
			name_pos = str;
			eq_pos = NULL;

			if (*str == '\0') break;
		} else if (*str == '=') {
			b_pos = str++ - 1;
			while (*b_pos == ' ' || *b_pos == '\t') --b_pos;
			*(b_pos + 1) = '\0';
			while (*str == ' ' || *str == '\t') ++str;
			eq_pos = str++;
		} else {
			++str;
		}
	}

	return head;
}

arg_node_t *args_find(arg_node_t *head, const char *name) {
	while (head != NULL) {
		if (!strcmp(head->name, name))
			return head;
		head = head->next;
	}
	return NULL;
}

void args_free(arg_node_t *head) {
	arg_node_t *tmp;
	while (head != NULL) {
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

