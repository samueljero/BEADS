/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu> and Xiangyu Bu <xb@purdue.edu>
* SDN Switch-Controller Proxy
******************************************************************************/
#include "attacker.h"
#include "csv.h"
#include "args.h"
extern "C" {
#include <loci/loci.h>
#include <loci/of_object.h>
#include <loci/loci_obj_dump.h>
}
#include <stdarg.h>
#include <map>
#include <list>
using namespace std;

#define ATTACKER_ROW_NUM_FIELDS		7
#define ATTACKER_ARGS_DELIM		'&'

#define CID_ERROR				(-2)
#define CID_ALL					(-1)
#define DPID_ERROR				(-2)
#define DPID_ALL				(-1)

#define OF_VERSION_ALL			6

#define ACTION_ALIAS_DROP		"DROP"
#define ACTION_ALIAS_DELAY		"DELAY"
#define ACTION_ALIAS_DUP		"DUP"
#define ACTION_ALIAS_LIE		"LIE"
#define ACTION_ALIAS_PRINT		"PRINT"
#define ACTION_ALIAS_CLEAR		"CLEAR"

#define OFP_MSG_TYPE_ERR		(-2)
#define OFP_MSG_TYPE_ALL		(-1)
#define OFP_MSG_TYPE_MAX		34

pthread_mutex_t ofo_print_serialization_mutex = PTHREAD_MUTEX_INITIALIZER;

Attacker::Attacker()
{
	pthread_rwlock_init(&lock, NULL);
}
Attacker::~Attacker()
{
	pthread_rwlock_destroy(&lock);
}

Attacker& Attacker::get()
{
	static Attacker me;
	return me;
}

bool Attacker::addCommand(Message m)
{
	bool ret = true;
	size_t num_fields;
	int ofp_ver;
	int msg_type;
	int action_type;
	int cid;
	int dpid;
	char **fields;
	arg_node_t *args;

	/* Parse CSV */
	fields = csv_parse(m.buff, m.len, &num_fields);
	/*for (i = 0; i < num_fields; ++i) {
		//csv_unescape(fields[i]);
		fprintf(stderr, "%d: \"%s\"\n", i, fields[i]);
	}*/

	if (num_fields != ATTACKER_ROW_NUM_FIELDS) {
		dbgprintf(0,"Adding Command: csv field count mismatch (%lu / %d).\n", num_fields, ATTACKER_ROW_NUM_FIELDS);
		ret = false;
		goto out;
	}

	if ((cid = normalize_cid(fields[0])) == CID_ERROR) {
		dbgprintf(0,"Adding Command: unrecognized CID\"%s\".\n", fields[1]);
		ret = false;
		goto out;
	}

	if ((dpid = normalize_dpid(fields[1])) == DPID_ERROR) {
		dbgprintf(0,"Adding Command: unrecognized DPID \"%s\".\n", fields[2]);
		ret = false;
		goto out;
	}

	if ((ofp_ver = normalize_ofp_ver_str(fields[2])) == OF_VERSION_UNKNOWN) {
		dbgprintf(0,"Adding Command: unrecognized OFP version field \"%s\".\n", fields[3]);
		ret = false;
		goto out;
	}
	if ((msg_type = normalize_ofp_msg_type(ofp_ver, fields[3])) == OFP_MSG_TYPE_ERR) {
		dbgprintf(0,"Adding Command: unrecognized message type \"%s\" for OFP version %d.\n", fields[4], ofp_ver);
		ret = false;
		goto out;
	}

	// TODO: parse field column

	if ((action_type = normalize_action_type(fields[5])) == ACTION_ID_ERR) {
		dbgprintf(0,"Adding Command: unsupported malicious action \"%s\".\n", fields[6]);
		ret = false;
		goto out;
	}

	args = args_parse(fields[6],ATTACKER_ARGS_DELIM);
	if (!args) {
		dbgprintf(0,"Adding Command: failed to parse arguments \"%s\"\n", fields[7]);
		ret = false;
		goto out;
	}

	ret = loadmap(cid, dpid, ofp_ver, msg_type, action_type, args);
	args_free(args);
out:
	csv_free(fields);
	return ret;
}

bool Attacker::loadmap(int cid, uint64_t dpid, int ofp_ver, int msg_type, int action_type, arg_node_t *args)
{
	bool ret = true;
	arg_node_t *targ;
	aaaaamap_t::iterator it1;
	aaaamap_t::iterator it2;
	aaamap_t::iterator it3;
	aamap_t::iterator it4;
	amap_t::iterator it5;

	/* Add command */
	pthread_rwlock_wrlock(&lock);

	/* Clear action is special */
	if (action_type == ACTION_ID_CLEAR) {
		ret = clearRules(cid, dpid, ofp_ver, msg_type);
		goto out;
	}

	/* CID */
	it1 = actions_map.find(cid);
	if (it1 == actions_map.end()) {
		actions_map[cid] = aaaamap_t();
		it1 = actions_map.find(cid);
	}

	/* DPID */
	it2 = it1->second.find(dpid);
	if (it2 == it1->second.end()) {
		it1->second[dpid] = aaamap_t();
		it2 = it1->second.find(dpid);
	}

	/* OF version */
	it3 = it2->second.find(ofp_ver);
	if (it3 == it2->second.end()) {
		it2->second[ofp_ver] = aamap_t();
		it3 = it2->second.find(ofp_ver);
	}

	/* Packet Type */
	it4 = it3->second.find(msg_type);
	if (it4 == it3->second.end()) {
		it3->second[msg_type] = amap_t();
		it4 = it3->second.find(msg_type);
	}

	/* Action */
	it5 = it4->second.find(action_type);
	if (it5 == it4->second.end()) {
		it4->second[action_type] = -3;
		it5 = it4->second.find(action_type);
	}
	switch(action_type){
		case ACTION_ID_PRINT:
			targ = args_find(args, "on");
			if (targ && targ->type == ARG_VALUE_TYPE_INT) {
				it5->second = targ->value.i;
				if (targ->value.i == 0) {
					removeCommand(it5, it4, it3, it2, it1);
				}
			} else {
				dbgprintf(0, "Adding Command: failed with bad arguments\n");
				removeCommand(it5, it4, it3, it2, it1);
				ret = false;
				goto out;
			}
			break;
		case ACTION_ID_DROP:
			targ = args_find(args, "p");
			if (targ && targ->type == ARG_VALUE_TYPE_INT) {
				it5->second = targ->value.i;
				if (targ->value.i == 0) {
					removeCommand(it5, it4, it3, it2, it1);
				}
			} else {
				dbgprintf(0, "Adding Command: failed with bad arguments\n");
				removeCommand(it5, it4, it3, it2, it1);
				ret = false;
				goto out;
			}
			break;
		case ACTION_ID_DELAY:
			targ = args_find(args, "ms");
			if (targ && targ->type == ARG_VALUE_TYPE_INT) {
				it5->second = targ->value.i;
				if (targ->value.i == 0) {
					removeCommand(it5, it4, it3, it2, it1);
				}
			} else {
				dbgprintf(0, "Adding Command: failed with bad arguments\n");
				removeCommand(it5, it4, it3, it2, it1);
				ret = false;
				goto out;
			}
			break;
		case ACTION_ID_DUP:
			targ = args_find(args, "t");
			if (targ && targ->type == ARG_VALUE_TYPE_INT) {
				it5->second = targ->value.i;
				if (targ->value.i == 0) {
					removeCommand(it5, it4, it3, it2, it1);
				}
			} else {
				dbgprintf(0, "Adding Command: failed with bad arguments\n");
				removeCommand(it5, it4, it3, it2, it1);
				ret = false;
				goto out;
			}
			break;
	}

	dbgprintf(1, "New Rule Installed: cid=%i, dpid=%llu, version=%i, msg_type=%i, action_type=%i\n",
				cid,dpid, ofp_ver, msg_type,action_type);

out:
	pthread_rwlock_unlock(&lock);
	return ret;
}

bool Attacker::removeCommand(amap_t::iterator it5, aamap_t::iterator it4, aaamap_t::iterator it3,
		aaaamap_t::iterator it2, aaaaamap_t::iterator it1)
{
	it4->second.erase(it5);
	if (it4->second.size() == 0) {
		it3->second.erase(it4);
		if (it3->second.size() == 0) {
			it2->second.erase(it3);
			if (it2->second.size() == 0) {
				it1->second.erase(it2);
				if (it1->second.size() == 0) {
					actions_map.erase(it1);
				}
			}
		}
	}
	return true;
}

bool Attacker::clearRules(int cid, uint64_t dpid, int ofp_ver, int msg_type)
{
	aaaaamap_t::iterator it1;
	aaaamap_t::iterator it2;
	aaamap_t::iterator it3;
	aamap_t::iterator it4;

	if (cid == CID_ALL) {
		if (dpid == (uint64_t)DPID_ALL) {
			if (ofp_ver == OF_VERSION_ALL) {
				if (msg_type == OFP_MSG_TYPE_ALL) {
					actions_map.clear();
					params.clear();
					return true;
				} else {
					for (it1 = actions_map.begin(); it1 != actions_map.end(); it1++) {
						for (it2 = it1->second.begin(); it2 != it1->second.end(); it2++) {
							for(it3 = it2->second.begin(); it3 != it2->second.end(); it3++) {
								for (it4 = it3->second.begin(); it4 != it3->second.end(); it4++) {
									if (it4->first == msg_type) {
										it4->second.clear();
									}
								}
							}
						}
					}
					return true;
				}
			} else {
				for (it1 = actions_map.begin(); it1 != actions_map.end(); it1++) {
					for (it2 = it1->second.begin(); it2 != it1->second.end(); it2++) {
						for(it3 = it2->second.begin(); it3 != it2->second.end(); it3++) {
							if (it3->first == ofp_ver) {
								if (msg_type == OFP_MSG_TYPE_ALL) {
									it3->second.clear();
								} else {
									for (it4 = it3->second.begin(); it4 != it3->second.end(); it4++) {
										if (it4->first == msg_type) {
											it4->second.clear();
										}
									}
								}
							}
						}
					}
				}
				return true;
			}
		} else {
			dbgprintf(0, "Command Failed: Partial CLEAR command not supported\n");
		}
	} else {
		dbgprintf(0, "Command Failed: Partial CLEAR command not supported\n");
	}

	return false;
}

int Attacker::normalize_ofp_ver_str(char *v)
{
	int ret;

	if (strchr(v, '.')) {
		// string of format x.y or x.y.z
		if (!strncmp(v, "1.0", 3)) return OF_VERSION_1_0;
		if (!strncmp(v, "1.1", 3)) return OF_VERSION_1_1;
		if (!strncmp(v, "1.2", 3)) return OF_VERSION_1_2;
		if (!strncmp(v, "1.3", 3)) return OF_VERSION_1_3;
		if (!strncmp(v, "1.4", 3)) return OF_VERSION_1_4;
	}

	// wildcard expression
	if (v[0] == '*') return OF_VERSION_ALL;

	// the last possibility is that v is the version value, not string.
	ret = atoi(v);
	if (ret < OF_VERSION_1_0 || ret > OF_VERSION_ALL) return OF_VERSION_UNKNOWN;
	return ret;
}

int Attacker::normalize_ofp_msg_type(int ver, char *s)
{
	int ret, i;
	const char *alias;

	if (s[0] == '*') return OFP_MSG_TYPE_ALL;

	if (is_int(s)) {
		ret = atoi(s);
		if (ret > OF_OBJECT_COUNT || ret < 0)
			return OFP_MSG_TYPE_ERR;
		return ret;
	}

	for (i = 0; i < OF_OBJECT_COUNT; ++i) {
		alias = of_object_id_str[i];
		if (alias && !strcmp(alias, s)) {
			return i;
		}
	}

	// alias not found
	return OFP_MSG_TYPE_ERR;
}

int Attacker::normalize_action_type(char *s)
{
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
	if (!strcmp(ACTION_ALIAS_PRINT, s)) return ACTION_ID_PRINT;
	return ACTION_ID_ERR;
}

int Attacker::normalize_cid(char *s)
{
	int cid = 0;

	if (s[0] == '*') return CID_ALL;

	cid = atoi(s);
	if (cid == 0) {
		return CID_ERROR;
	}
	return cid;
}

uint64_t Attacker::normalize_dpid(char *s)
{
	uint64_t dpid = 0;

	if (s[0] == '*') return DPID_ALL;

	dpid = strtoll(s,NULL,10);
	if (dpid == 0) {
		return DPID_ERROR;
	}
	return dpid;
}

int writer(void *cookie, const char *fmt, ...)
{
    va_list args;
	va_start(args, fmt);
	int ret = vfprintf(stderr, fmt, args);
	va_end(args);
	return ret;
}



pkt_info Attacker::doAttack(pkt_info pk)
{
	/* THERE HAS GOT TO BE A CLEANER WAY TO WRITE THIS... */
	aaaaamap_t::iterator it1;
	aaaamap_t::iterator it2;
	aaamap_t::iterator it3;
	aamap_t::iterator it4;
	amap_t::iterator it5;
	bool star_cid = false;
	bool star_dpid = false;
	bool star_ver = false;
	bool star_msg = false;

	pthread_rwlock_rdlock(&lock);

	if (sw_proxy_debug > 2) {
		print(pk);
	}

	/* Check cid */
	it1 = actions_map.find(pk.cid);
	if (it1 == actions_map.end()) {
cid_all:
		if (star_cid) goto out;
		it1 = actions_map.find(CID_ALL);
		star_cid = true;
		star_dpid = false;
		star_ver = false;
		star_msg = false;
		if (it1 == actions_map.end()) {
			goto out;
		}
	}

	/* Check dpid */
	it2 = it1->second.find(pk.dpid);
	if (it2 == it1->second.end()) {
dpid_all:
		if (star_dpid) goto out;
		it2 = it1->second.find(DPID_ALL);
		star_dpid = true;
		star_ver = false;
		star_msg = false;
		if (it2 == it1->second.end()) {
			goto cid_all;
		}
	}

	/* Check OpenFlow Version */
	it3 = it2->second.find(pk.ofo->version);
	if (it3 == it2->second.end()) {
of_all:
		if (star_ver) goto out;
		it3 = it2->second.find(OF_VERSION_ALL);
		star_ver = true;
		star_msg = false;
		if (it3 == it2->second.end()) {
			goto dpid_all;
		}
	}

	/* Check Packet Type */
	it4 = it3->second.find(pk.ofo->object_id);
	if (it4 == it3->second.end()) {
		if (star_msg) goto out;
		it4 = it3->second.find(OFP_MSG_TYPE_ALL);
		star_msg = true;
		if (it4 == it3->second.end()) {
			goto of_all;
		}
	}

	pk = applyActions(pk, it4);

out:
	pthread_rwlock_unlock(&lock);
	return pk;
}

pkt_info Attacker::applyActions(pkt_info pk, aamap_t::iterator it4)
{
	amap_t::iterator it5;
	int param;
	int dups = 1;

	/* Debug Printing */
	it5 = it4->second.find(ACTION_ID_PRINT);
	if (it5 != it4->second.end()) {
		if (it5->second == 1 && sw_proxy_debug <= 2) {
			print(pk);
		}
	}

	/* Drop */
	it5 = it4->second.find(ACTION_ID_DROP);
	if (it5 != it4->second.end()) {
		param = it5->second;
		if (rand() % 100 < param) {
			dbgprintf(1, "Dropping packet!\n");
			of_object_delete(pk.ofo);
			pk.ofo = NULL;
			goto out;
		}
	}

	/* Modify */

	/* Divert */

	/* Duplicate */
	it5 = it4->second.find(ACTION_ID_DUP);
	if (it5 != it4->second.end()) {
		dups = it5->second;
		dbgprintf(1, "Duplicating packet %i times!\n", dups);
	}

	/* Delay */

	/* Apply to Packet */
	for (int i =0; i < dups; i++) {
		pk.snd->sendm(pk.ofo);
	}
	of_object_delete(pk.ofo);
	pk.ofo = NULL;

out:
	return pk;
}

void Attacker::print(pkt_info pk)
{
	pthread_mutex_lock(&ofo_print_serialization_mutex);
	if (pk.dir == STOC) {
		dbgprintf(0,"##################\nGot Message (s %llu -> c %i)\n", pk.dpid, pk.cid);
	}else {
		dbgprintf(0,"##################\nGot Message (c %i -> s %llu)\n", pk.cid, pk.dpid);
	}
	of_object_dump((loci_writer_f)&writer,NULL,pk.ofo);
	dbgprintf(0,"##################\n");
	pthread_mutex_unlock(&ofo_print_serialization_mutex);
}
