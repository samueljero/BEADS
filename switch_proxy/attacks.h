/******************************************************************************
* Authors: Samuel Jero <sjero@purdue.edu> and Xiangyu Bu <xb@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/

#ifndef _ATTACK_H
#define _ATTACK_H

#define ATTACKER_ROW_NUM_FIELDS		8
#define ATTACKER_ARGS_DELIM		'&'

#define OFP_MSG_TYPE_ERR		(-2)
#define OFP_MSG_TYPE_ALL		(-1)
#define OFP_MSG_TYPE_MAX		34

#define OFP_VER_ALL				0
#define OFP_VER_1_0				1
#define OFP_VER_1_1				2
#define OFP_VER_1_2				3
#define OFP_VER_1_3				4
#define OFP_VER_1_4				5
#define OFP_VER_MAX				5
#define OFP_VER_ERR				(-1)

#define ACTION_ID_ERR			(-1)
#define ACTION_ID_MIN			0
#define ACTION_ID_DROP			0
#define ACTION_ID_DELAY			1
#define ACTION_ID_DUP			2
#define ACTION_ID_LIE			3
#define ACTION_ID_MAX			3

#define ACTION_ALIAS_DROP		"DROP"
#define ACTION_ALIAS_DELAY		"DELAY"
#define ACTION_ALIAS_DUP		"DUP"
#define ACTION_ALIAS_LIE		"LIE"

#define is_valid_ofp_header(v, t)	((v <= OFP_VER_MAX) && (t <= OFP_MSG_TYPE_MAX))

extern char atk_drop_action_table[OFP_VER_MAX][OFP_MSG_TYPE_MAX + 1];
extern unsigned char atk_dup_action_table[OFP_VER_MAX][OFP_MSG_TYPE_MAX + 1];

/**
 * Normalize version string to an integer. 
 * For example, "1.0" to 1, "1.1" to 2, "*" to 0, "2" to 2.
 * @param char *v The C string representing OFP version.
 * @return an integer value of 0 to 5, or -1 representing error.
 */
int normalize_ofp_ver_str(char *v);

/**
 * Normalize message type string to an integer.
 * For example, for OFP message of version 1.0, convert "Hello" to 0.
 * @param int ver OFP version value.
 * @param char *s The C string representing OFP message type.
 */
int normalize_ofp_msg_type(int ver, char *s);

/**
 * Convert the malicious action type string to an int for later use.
 * For example, convert "DROP" or "0" to ACTION_ID_DROP.
 * @param char *s The C string representing malicious action.
 */
int normalize_action_type(char *s);

/**
 * Parse and add a row in the attack list.
 * @param int id An ID for the row (e.g., line number) for reference.
 * @param char *data The row in text format.
 * @param size_t len Length of the data stream.
 * @return 0 if succeeds, and 1 otherwise.
 */
int attacker_add_rule(int id, char *data, size_t len);

/**
 * Determine if the message of version v and type m should be dropped.
 * Store the drop probability to variable s.
 */
#define should_drop_msg(s, v, m)	((s = atk_drop_action_table[v - 1][m]))

/**
 * Determine if the mssage of version v and type m should be duplicated.
 * Store number of times to dup to variable s.
 */
#define should_dup_msg(s, v, m)		((s = atk_dup_action_table[v - 1][m]))

#endif

