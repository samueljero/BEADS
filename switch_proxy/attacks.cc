/******************************************************************************
* Authors: Samuel Jero <sjero@purdue.edu> and Xiangyu Bu <xb@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "sw_proxy.h"
#include "attacks.h"
#include "csv.h"
#include "args.h"

char atk_drop_action_table[OFP_VER_MAX][OFP_MSG_TYPE_MAX + 1];

// the table stores how many *more* times the message should be sent
// after the first delivery.
unsigned char atk_dup_action_table[OFP_VER_MAX][OFP_MSG_TYPE_MAX + 1];

static const char *OFP_V1_0_MSG_ALIAS[] = {
	"Hello", "Error", "EchoReq", "EchoRes", "Vendor",
	"FeatureReq", "FeatureRes", "GetConfigReq", "GetConfigRes", "SetConfig",
	"PacketIn", "FlowRemoved", "PortStatus", "PacketOut", "FlowMod", 
	"PortMod", "StatsReq", "StatsRes", "BarrierReq", "BarrierRes", 
	"QueueGetConfigReq", "QueueGetConfigRes"
};

static const char *OFP_V1_1_MSG_ALIAS[] = {
	"Hello", "Error", "EchoReq", "EchoRes", "Experimenter",
	"FeatureReq", "FeatureRes", "GetConfigReq", "GetConfigRes", "SetConfig",
	"PacketIn", "FlowRemoved", "PortStatus", "PacketOut", "FlowMod", 
	"GroupMod", "PortMod", "TableMod", "StatsReq", "StatsRes", 
	"BarrierReq", "BarrierRes", "QueueGetConfigReq", "QueueGetConfigRes"
};

static const char *OFP_V1_2_MSG_ALIAS[] = {
	"Hello", "Error", "EchoReq", "EchoRes", "Experimenter",
	"FeatureReq", "FeatureRes", "GetConfigReq", "GetConfigRes", "SetConfig",
	"PacketIn", "FlowRemoved", "PortStatus", "PacketOut", "FlowMod", 
	"GroupMod", "PortMod", "TableMod", "StatsReq", "StatsRes", 
	"BarrierReq", "BarrierRes", "QueueGetConfigReq", "QueueGetConfigRes", "RoleReq",
	"RoleRes"
};

static const char *OFP_V1_3_MSG_ALIAS[] = {
	"Hello", "Error", "EchoReq", "EchoRes", "Experimenter",
	"FeatureReq", "FeatureRes", "GetConfigReq", "GetConfigRes", "SetConfig",
	"PacketIn", "FlowRemoved", "PortStatus", "PacketOut", "FlowMod", 
	"GroupMod", "PortMod", "TableMod", "MultipartReq", "MultipartRes"
	"BarrierReq", "BarrierRes", "QueueGetConfigReq", "QueueGetConfigRes", "RoleReq",
	"RoleRes", "GetAsyncReq", "GetAsyncRes", "SetAsync", "MeterMod"
};

static const char *OFP_V1_4_MSG_ALIAS[] = {
	"Hello", "Error", "EchoReq", "EchoRes", "Experimenter",
	"FeatureReq", "FeatureRes", "GetConfigReq", "GetConfigRes", "SetConfig",
	"PacketIn", "FlowRemoved", "PortStatus", "PacketOut", "FlowMod", 
	"GroupMod", "PortMod", "TableMod", "MultipartReq", "MultipartRes"
	"BarrierReq", "BarrierRes", NULL, NULL, "RoleReq",
	"RoleRes", "GetAsyncReq", "GetAsyncRes", "SetAsync", "MeterMod",
	"RoleStatus", "TableStatus", "RequestForward", "BundleControl", "BundleAddMessage"
};

static const char *OFP_COMMON_MSG_ALIAS[] = {
	"Hello", "Error", "EchoReq", "EchoRes", NULL,
	"FeatureReq", "FeatureRes", "GetConfigReq", "GetConfigRes", "SetConfig",
	"PacketIn", "FlowRemoved", "PortStatus", "PacketOut", "FlowMod",
	NULL, NULL, NULL, NULL, NULL, 
	NULL, NULL, NULL, NULL, "RoleReq", 
	"RoleRes", "GetAsyncReq", "GetAsyncRes", "SetAsync", "MeterMod",
	"RoleStatus", "TableStatus", "RequestForward", "BundleControl", "BundleAddMessage"
};

static int OFP_MSG_ALIAS_LEN[OFP_VER_MAX + 1] = {35, 22, 24, 26, 30, 35};

static const char **OFP_MSG_ALIASES[] = {
	OFP_COMMON_MSG_ALIAS, 
	OFP_V1_0_MSG_ALIAS, 
	OFP_V1_1_MSG_ALIAS, 
	OFP_V1_2_MSG_ALIAS, 
	OFP_V1_3_MSG_ALIAS, 
	OFP_V1_4_MSG_ALIAS
};

int normalize_ofp_ver_str(char *v) {
	int ret;

	if (strchr(v, '.')) {
		// string of format x.y or x.y.z
		if (!strncmp(v, "1.0", 3)) return OFP_VER_1_0;
		if (!strncmp(v, "1.1", 3)) return OFP_VER_1_1;
		if (!strncmp(v, "1.2", 3)) return OFP_VER_1_2;
		if (!strncmp(v, "1.3", 3)) return OFP_VER_1_3;
		if (!strncmp(v, "1.4", 3)) return OFP_VER_1_4;
	}
	
	// wildcard expression
	if (v[0] == '*') return OFP_VER_ALL;

	// the last possibility is that v is the version value, not string.
	ret = atoi(v);
	if (ret < OFP_VER_ALL || ret > OFP_VER_MAX) return OFP_VER_ERR;
	return ret;
}

int normalize_ofp_msg_type(int ver, char *s) {
	int ret, i;
	int len = OFP_MSG_ALIAS_LEN[ver];
	const char *alias;

	if (s[0] == '*') return OFP_MSG_TYPE_ALL;
	if (is_int(s)) {
		ret = atoi(s);
		if (ret > len || ret < 0 || OFP_MSG_ALIASES[ver][ret] == NULL)
			return OFP_MSG_TYPE_ERR;
		return ret;
	}

	for (i = 0; i < len; ++i) {
		alias = OFP_MSG_ALIASES[ver][i];
		if (alias && !strcmp(alias, s)) {
			return i;
		}
	}

	// alias not found
	return OFP_MSG_TYPE_ERR;
}

int normalize_action_type(char *s) {
	int ret;
	if (is_int(s)) {
		ret = atoi(s);
		if (ret < ACTION_ID_MIN || ret > ACTION_ID_MAX) return ACTION_ID_ERR;
		return ret;
	}
	if (!strcmp(ACTION_ALIAS_DROP, s)) return ACTION_ID_DROP;
	if (!strcmp(ACTION_ALIAS_DELAY, s)) return ACTION_ID_DELAY;
	if (!strcmp(ACTION_ALIAS_DUP, s)) return ACTION_ID_DUP;
	if (!strcmp(ACTION_ALIAS_LIE, s)) return ACTION_ID_LIE;
	return ACTION_ID_ERR;
}

int attacker_add_rule(int id, char *data, size_t len) {
	size_t num_fields;
	//ssize_t row_len;
	//int cid, sid;
	int i, j;
	int ofp_ver;
	int msg_type;
	int action_type;
	char **fields;
	arg_node_t *args, *targ;

	fields = csv_parse(data, len, &num_fields);
	/*#ifdef _DEBUG
	for (i = 0; i < num_fields; ++i) {
		//csv_unescape(fields[i]);
		fprintf(stderr, "%d: \"%s\"\n", i, fields[i]);
	}
	#endif*/
	if (num_fields != ATTACKER_ROW_NUM_FIELDS) {
		dbgprintf(0,"Attack rule %d: csv field count mismatch (%lu / %d).\n", id, num_fields, ATTACKER_ROW_NUM_FIELDS);
		csv_free(fields);
		return 1;
	}
	//row_len = atoi(fields[0]);
	//cid = atoi(fields[1]);
	//sid = atoi(fields[2]);
	if ((ofp_ver = normalize_ofp_ver_str(fields[3])) == OFP_VER_ERR) {
		dbgprintf(0,"Attack rule %d: unrecognized OFP version field \"%s\".\n", id, fields[3]);
		csv_free(fields);
		return 1;
	}
	if ((msg_type = normalize_ofp_msg_type(ofp_ver, fields[4])) == OFP_MSG_TYPE_ERR) {
		dbgprintf(0,"Attack rule %d: unrecognized message type \"%s\" for OFP version %d.\n", id, fields[4], ofp_ver);
		csv_free(fields);
		return 1;
	}
	// TODO: parse field column
	if ((action_type = normalize_action_type(fields[6])) == ACTION_ID_ERR) {
		dbgprintf(0,"Attack rule %d: unsupported malicious action \"%s\".\n", id, fields[6]);
		csv_free(fields);
		return 1;
	}

	if (action_type == ACTION_ID_DROP) {
		char prob = 100;
		if ((args = args_parse(fields[7], ATTACKER_ARGS_DELIM))) {
			if ((targ = args_find(args, "p"))) {
				if (targ->type == ARG_VALUE_TYPE_INT)
					prob = targ->value.i;
				else if (targ->type == ARG_VALUE_TYPE_FLOAT)
					prob = (char)targ->value.f;
			}
			if (prob < 0) prob = 0;
			else if (prob > 100) prob = 100;
			args_free(args);
		}
		if (ofp_ver == OFP_VER_ALL) {
			for (i = 0; i < OFP_VER_MAX; ++i) {
				if (msg_type == OFP_MSG_TYPE_ALL) {
					for (j = 0; j <= OFP_MSG_TYPE_MAX; ++j) {
						atk_drop_action_table[i][j] = prob;
					}
				} else {
					atk_drop_action_table[i][msg_type] = prob;
				}
			}
		} else {
			if (msg_type == OFP_MSG_TYPE_ALL) {
				for (j = 0; j <= OFP_MSG_TYPE_MAX; ++j) {
					atk_drop_action_table[ofp_ver - 1][j] = prob;
				}
			} else {
				atk_drop_action_table[ofp_ver - 1][msg_type] = prob;
			}
		}
		dbgprintf(1,"Attack rule %d: accepted DROP rule (probability %d%%).\n", id, prob);
		#ifdef _DEBUG
		for (i = 0; i < OFP_VER_MAX; ++i) {
			for (j = 0; j <= OFP_MSG_TYPE_MAX; ++j) {
				fprintf(stderr, "%d ", atk_drop_action_table[i][j]);
			}
			fputc('\n', stderr);
		}
		#endif
	} else if (action_type == ACTION_ID_DUP) {
		unsigned char dup_count = 1;
		if ((args = args_parse(fields[7], ATTACKER_ARGS_DELIM))) {
			if ((targ = args_find(args, "r"))) {
				if (targ->type == ARG_VALUE_TYPE_INT)
					dup_count = targ->value.i;
			}
			args_free(args);
		}
		// r times <=> (r-1) more times
		dup_count -= 1;
		if (dup_count < 1) {
			dbgprintf(0,"Attack rule %d: useless DUP rule.\n", id);
			csv_free(fields);
			return 1;
		}
		if (ofp_ver == OFP_VER_ALL) {
			for (i = 0; i < OFP_VER_MAX; ++i) {
				if (msg_type == OFP_MSG_TYPE_ALL) {
					for (j = 0; j <= OFP_MSG_TYPE_MAX; ++j) {
						atk_dup_action_table[i][j] = dup_count;
					}
				} else {
					atk_dup_action_table[i][msg_type] = dup_count;
				}
			}
		} else {
			if (msg_type == OFP_MSG_TYPE_ALL) {
				for (j = 0; j <= OFP_MSG_TYPE_MAX; ++j) {
					atk_dup_action_table[ofp_ver - 1][j] = dup_count;
				}
			} else {
				atk_dup_action_table[ofp_ver - 1][msg_type] = dup_count;
			}
		}
		dbgprintf(1,"Attack rule %d: accepted DUP rule (send %u+1 times).\n", id, dup_count);
	} else {
		dbgprintf(0,"Attack rule %d: unimplemented attack type \"%s\" (%d).\n", id, fields[6], action_type);
	}

	csv_free(fields);
	return 0;
}

