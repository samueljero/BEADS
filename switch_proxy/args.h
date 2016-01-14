/******************************************************************************
 * args.h
 * A singly linked list to store argument key-value pairs.
 * Note that it does not duplicate the name string or value string.
 * Author	Xiangyu Bu <xb@purdue.edu>
******************************************************************************/

#ifndef _ARGS_H

 #define _ARGS_H

/**
 * Argument value data type.
 */
typedef struct {
	int i;
	float f;
	char *s;
} arg_value_t;

#define ARG_VALUE_TYPE_NOVAL	0
#define ARG_VALUE_TYPE_INT		1
#define ARG_VALUE_TYPE_FLOAT	2
#define ARG_VALUE_TYPE_STR		3

typedef int arg_value_type_t;

/**
 * Argument node data type.
 */
typedef struct arg_node {
	char *name;
	arg_value_type_t type;
	arg_value_t value;
	struct arg_node *next;
} arg_node_t;

/**
 * Determine if the C string represents an integer.
 */
int is_int(char *);

/**
 * Return -1 if the string is not a number. 0 if int. 1 if float.
 */
int is_float(char *);

/**
 * Parse the C string into a list of arg_node_t values. The delimiter
 * is not escapable at this stage.
 * @param char *str The C string to parse. For example, "p=0.5&t=3".
 * @param char delim The delimiter of arguments.
 */
arg_node_t *args_parse(char *str, char delim);

/**
 * Find argument node of given name. Return NULL if not found.
 */
arg_node_t *args_find(arg_node_t *head, const char *name);

/**
 * Free the argument list.
 */
void args_free(arg_node_t *);

#endif

