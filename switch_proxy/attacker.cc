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
#include <time.h>
#include <sys/time.h>
#include <arpa/inet.h>
#include <map>
#include <list>
#include <vector>
#include "attacks.cc"
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
#define ACTION_ALIAS_DIVERT		"DIVERT"

#define OFP_MSG_TYPE_ERR		(-2)
#define OFP_MSG_TYPE_ALL		(-1)
#define OFP_MSG_TYPE_MAX		34

pthread_mutex_t ofo_print_serialization_mutex = PTHREAD_MUTEX_INITIALIZER;

Attacker::Attacker()
{
	pthread_rwlock_init(&lock, NULL);
	listeners = NULL;
	listeners_mutex = NULL;
	nxt_param = 0;
	modifier = new OpenFlow();
}
Attacker::~Attacker()
{
	pthread_rwlock_destroy(&lock);
	delete modifier;
}

Attacker& Attacker::get()
{
	static Attacker me;
	return me;
}

bool Attacker::loadListeners(std::list<Listener*> *listeners, pthread_mutex_t *listeners_mutex)
{
	pthread_rwlock_wrlock(&lock);
	this->listeners = listeners;
	this->listeners_mutex = listeners_mutex;
	pthread_rwlock_unlock(&lock);
	return true;
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
		dbgprintf(0,"Adding Command: unrecognized CID\"%s\".\n", fields[0]);
		ret = false;
		goto out;
	}

	if ((dpid = normalize_dpid(fields[1])) == DPID_ERROR) {
		dbgprintf(0,"Adding Command: unrecognized DPID \"%s\".\n", fields[1]);
		ret = false;
		goto out;
	}

	if ((ofp_ver = normalize_ofp_ver_str(fields[2])) == OF_VERSION_UNKNOWN) {
		dbgprintf(0,"Adding Command: unrecognized OFP version field \"%s\".\n", fields[2]);
		ret = false;
		goto out;
	}

	if ((msg_type = normalize_ofp_msg_type(ofp_ver, fields[3])) == OFP_MSG_TYPE_ERR) {
		dbgprintf(0,"Adding Command: unrecognized message type \"%s\" for OFP version %d.\n", fields[3], ofp_ver);
		ret = false;
		goto out;
	}

	if ((action_type = normalize_action_type(fields[5])) == ACTION_ID_ERR) {
		dbgprintf(0,"Adding Command: unsupported malicious action \"%s\".\n", fields[5]);
		ret = false;
		goto out;
	}

	args = args_parse(fields[6],ATTACKER_ARGS_DELIM);
	if (!args) {
		dbgprintf(0,"Adding Command: failed to parse arguments \"%s\"\n", fields[6]);
		ret = false;
		goto out;
	}

	ret = loadmap(cid, dpid, ofp_ver, msg_type, action_type, args, fields[4]);
	args_free(args);
out:
	csv_free(fields);
	return ret;
}

bool Attacker::loadmap(int cid, uint64_t dpid, int ofp_ver, int msg_type, int action_type, arg_node_t *args, char* fields)
{
	bool ret = true;
	arg_node_t *targ;
	modAttack ma;
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
		case ACTION_ID_DIVERT:
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
		case ACTION_ID_LIE:
			ma.field = normalize_field(fields);
			if (ma.field.empty()) {
				dbgprintf(0, "Adding Command: failed with bad arguments\n");
				removeCommand(it5, it4, it3, it2, it1);
				ret = false;
				goto out;
			}

			targ = args_find(args, "act");
			if (!targ || targ->type != ARG_VALUE_TYPE_STR) {
				dbgprintf(0, "Adding Command: failed with bad arguments\n");
				removeCommand(it5, it4, it3, it2, it1);
				ret = false;
				goto out;
			}
			if (strcmp(targ->value.s, "=") == 0) {
				ma.action = MOD_SET;
			} else if (strcmp(targ->value.s, "+") == 0) {
				ma.action = MOD_ADD;
			} else if (strcmp(targ->value.s, "-") == 0) {
				ma.action = MOD_SUB;
			} else {
				dbgprintf(0, "Adding Command: failed with bad arguments\n");
				removeCommand(it5, it4, it3, it2, it1);
				ret = false;
				goto out;
			}
			targ = args_find(args, "val");
			if (!targ || targ->type != ARG_VALUE_TYPE_INT) {
				dbgprintf(0, "Adding Command: failed with bad arguments\n");
				removeCommand(it5, it4, it3, it2, it1);
				ret = false;
				goto out;
			}
			ma.value = targ->value.i;

			if (it5->second == -3) {
				/* New action set */
				it5->second = nxt_param;
				mod_params[nxt_param] = std::vector<modAttack>();
				mod_params[nxt_param].push_back(ma);
				nxt_param++;
			} else {
				mod_params[nxt_param].push_back(ma);
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
					mod_params.clear();
					nxt_param = 0;
					dbgprintf(1, "Rules Cleared\n");
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
					dbgprintf(1, "Rules Cleared\n");
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
				dbgprintf(1, "Rules Cleared\n");
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
	if (!strcmp(ACTION_ALIAS_CLEAR, s)) return ACTION_ID_CLEAR;
	if (!strcmp(ACTION_ALIAS_DIVERT, s)) return ACTION_ID_DIVERT;
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

vector<int> Attacker::normalize_field(char *s)
{
	vector<int> lst;
	int res;
	char *tmp = s;

	if (s[0] == '*') {
		return lst;
	}

	while (*s != '\0') {
		if (*s == '.') {
			*s = '\0';
			res = atoi(tmp);
			if (res <= 0) {
				lst.clear();
				return lst;
			}
			lst.push_back(res);
			tmp = s + 1;
		}
		if (*s < '0' || *s > '9') {
			lst.clear();
			return lst;
		}
		s++;
	}

	if (strlen(tmp) > 0) {
		res = atoi(tmp);
		if (res <= 0) {
			lst.clear();
			return lst;
		}
		lst.push_back(res);
	}
	return lst;
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
	vector<modAttack> mod_acts;
	struct timespec time;
	struct timeval tm;
	Connection *c;
	int i, j;
	int param;
	int sec;
	int nsec;
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
	it5 = it4->second.find(ACTION_ID_LIE);
	if (it5 != it4->second.end()) {
		param = it5->second;
		mod_acts = mod_params[param];
		for (unsigned int x = 0; x < mod_acts.size(); x++) {
			dbgprintf(1, "Modifying Packet!\n");
			if (!doModify(pk.ofo, mod_acts[x].field, mod_acts[x].action, mod_acts[x].value)){
				break;
			}
			//print(pk);
		}
	}

	/* Divert */
	it5 = it4->second.find(ACTION_ID_DIVERT);
	if (it5 != it4->second.end()) {
		if (listeners != NULL && listeners_mutex != NULL) {
			param = it5->second;
			if (rand() % 100 < param) {
				pthread_mutex_lock(listeners_mutex);
				/* Pick random listener */
				i = rand() % listeners->size();
				j = 0;
				for(list<Listener*>::iterator it = listeners->begin(); it != listeners->end(); it++) {
					if (i == j) {
						/* Pick random connection */
						i = (*it)->numConnections();
						if (i == 0) {
							continue; /* Try next listener */
						}
						j = rand() % i;
						c = (*it)->getConnection(j);
						if (c == NULL || c->getBH() == pk.snd || c->getTH() == pk.snd) {
							continue; /* Try next listener */
						}

						dbgprintf(1, "Diverting packet!\n");
						if (pk.dir == STOC) {
							pk.snd = c->getTH();
						} else {
							pk.snd = c->getBH();
						}
						break;
					}
					j++;
				}
				pthread_mutex_unlock(listeners_mutex);
			}
		} else {
			dbgprintf(0, "Warning: DIVERT requested, but no listeners!\n");
		}
	}

	/* Duplicate */
	it5 = it4->second.find(ACTION_ID_DUP);
	if (it5 != it4->second.end()) {
		dups = it5->second;
		dbgprintf(1, "Duplicating packet %i times!\n", dups);
	}

	/* Delay */
	it5 = it4->second.find(ACTION_ID_DELAY);
	if (it5 != it4->second.end()) {
		param = it5->second;
		dbgprintf(1, "Delaying packet %i ms!\n", param);

		/* Compute time to send */
		sec = param / 1000;
		nsec = (param % 1000)*1000000;
		gettimeofday(&tm, NULL);
		time.tv_sec = 0;
		time.tv_nsec = tm.tv_usec*1000 + nsec;
		if (time.tv_nsec > 1000000000) {
			time.tv_sec += time.tv_nsec/1000000000;
			time.tv_nsec = time.tv_nsec%1000000000;
		}
		time.tv_sec += (tm.tv_sec + sec);

		/* Queue Packet for sending */
		pk.snd->sendat(pk.ofo, &time, dups);
		pk.ofo = NULL;
		goto out;
	}

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


bool Attacker::doModify(of_object_t* ofo, vector<int> vfield, int action, int val)
{
	int field;
	vector<int> modfield;
	unsigned long int vval;

	if (vfield.empty()) {
		return false;
	}
	field = vfield[0];

	if (field >=1 && field <= 4) {
		/* Global fields */
		return ModifyHEADER(ofo,vfield,action,val, 0);
	}

	modfield = vector<int>(vfield);
	modfield[0] = modfield[0] - 3; //different start location

	if (action == MOD_SET) {
		vval = val;
		modifier->set_field(ofo,vval,modfield,0);
	} else if(action == MOD_ADD) {
		modifier->get_field(ofo,&vval, modfield,0);
		vval += val;
		modifier->set_field(ofo,vval,modfield,0);
	} else if(action == MOD_SUB) {
		modifier->get_field(ofo,&vval, modfield,0);
		vval -= val;
		modifier->set_field(ofo,vval,modfield,0);
	}

	return true;

	switch(ofo->object_id) {
		case OF_AGGREGATE_STATS_REPLY:
		case OF_AGGREGATE_STATS_REQUEST:
		case OF_ASYNC_CONFIG_FAILED_ERROR_MSG:
		case OF_ASYNC_GET_REPLY:
		case OF_ASYNC_GET_REQUEST:
		case OF_ASYNC_SET:
		case OF_BAD_ACTION_ERROR_MSG:
		case OF_BAD_INSTRUCTION_ERROR_MSG:
		case OF_BAD_MATCH_ERROR_MSG:
		case OF_BAD_PROPERTY_ERROR_MSG:
		case OF_BAD_REQUEST_ERROR_MSG:
		case OF_BARRIER_REPLY:
		case OF_BARRIER_REQUEST:
		case OF_BUNDLE_ADD_MSG:
		case OF_BUNDLE_CTRL_MSG:
		case OF_BUNDLE_FAILED_ERROR_MSG:
		case OF_DESC_STATS_REPLY:
		case OF_DESC_STATS_REQUEST:
		case OF_ECHO_REPLY:
		case OF_ECHO_REQUEST:
		case OF_ERROR_MSG:
		case OF_EXPERIMENTER:
		case OF_EXPERIMENTER_ERROR_MSG:
		case OF_EXPERIMENTER_STATS_REPLY:
		case OF_EXPERIMENTER_STATS_REQUEST:
		case OF_FEATURES_REPLY:
		case OF_FEATURES_REQUEST:
		case OF_FLOW_ADD:
		case OF_FLOW_DELETE:
		case OF_FLOW_DELETE_STRICT:
		case OF_FLOW_MOD:
		case OF_FLOW_MOD_FAILED_ERROR_MSG:
		case OF_FLOW_MODIFY:
		case OF_FLOW_MODIFY_STRICT:
		case OF_FLOW_MONITOR_FAILED_ERROR_MSG:
		case OF_FLOW_REMOVED:
		case OF_FLOW_STATS_REPLY:
		case OF_FLOW_STATS_REQUEST:
		case OF_GET_CONFIG_REPLY:
		case OF_GET_CONFIG_REQUEST:
		case OF_GROUP_ADD:
		case OF_GROUP_DELETE:
		case OF_GROUP_DESC_STATS_REPLY:
		case OF_GROUP_DESC_STATS_REQUEST:
		case OF_GROUP_FEATURES_STATS_REPLY:
		case OF_GROUP_FEATURES_STATS_REQUEST:
		case OF_GROUP_MOD:
		case OF_GROUP_MOD_FAILED_ERROR_MSG:
		case OF_GROUP_MODIFY:
		case OF_GROUP_STATS_REPLY:
		case OF_GROUP_STATS_REQUEST:
		case OF_HEADER:
		case OF_HELLO:
		case OF_HELLO_FAILED_ERROR_MSG:
		case OF_METER_CONFIG_STATS_REPLY:
		case OF_METER_CONFIG_STATS_REQUEST:
		case OF_METER_FEATURES_STATS_REPLY:
		case OF_METER_FEATURES_STATS_REQUEST:
		case OF_METER_MOD:
		case OF_METER_MOD_FAILED_ERROR_MSG:
		case OF_METER_STATS_REPLY:
		case OF_METER_STATS_REQUEST:
		case OF_NICIRA_CONTROLLER_ROLE_REPLY:
		case OF_NICIRA_CONTROLLER_ROLE_REQUEST:
		case OF_NICIRA_HEADER:
			dbgprintf(0, "Modifcation for packet type %s not supported\n", of_object_id_str[ofo->object_id]);
			return false;
		case OF_PACKET_IN:
			return ModifyPACKETIN(ofo, vfield, action, val, 0);
		case OF_PACKET_OUT:
		case OF_PORT_DESC_STATS_REPLY:
		case OF_PORT_DESC_STATS_REQUEST:
		case OF_PORT_MOD:
		case OF_PORT_MOD_FAILED_ERROR_MSG:
		case OF_PORT_STATS_REPLY:
		case OF_PORT_STATS_REQUEST:
		case OF_PORT_STATUS:
		case OF_QUEUE_DESC_STATS_REPLY:
		case OF_QUEUE_DESC_STATS_REQUEST:
		case OF_QUEUE_GET_CONFIG_REPLY:
		case OF_QUEUE_GET_CONFIG_REQUEST:
		case OF_QUEUE_OP_FAILED_ERROR_MSG:
		case OF_QUEUE_STATS_REPLY:
		case OF_QUEUE_STATS_REQUEST:
		case OF_REQUESTFORWARD:
		case OF_ROLE_REPLY:
		case OF_ROLE_REQUEST:
		case OF_ROLE_REQUEST_FAILED_ERROR_MSG:
		case OF_ROLE_STATUS:
		case OF_SET_CONFIG:
		case OF_STATS_REPLY:
		case OF_STATS_REQUEST:
		case OF_SWITCH_CONFIG_FAILED_ERROR_MSG:
		case OF_TABLE_DESC_STATS_REPLY:
		case OF_TABLE_DESC_STATS_REQUEST:
		case OF_TABLE_FEATURES_FAILED_ERROR_MSG:
		case OF_TABLE_FEATURES_STATS_REPLY:
		case OF_TABLE_FEATURES_STATS_REQUEST:
		case OF_TABLE_MOD:
		case OF_TABLE_MOD_FAILED_ERROR_MSG:
		case OF_TABLE_STATS_REPLY:
		case OF_TABLE_STATS_REQUEST:
		case OF_TABLE_STATUS:
		default:
			dbgprintf(0, "Modifcation for packet type %s not supported\n", of_object_id_str[ofo->object_id]);
			return false;
	}
	return true;
}

bool Attacker::ModifyHEADER(of_object_t* ofo, vector<int> vfield, int action, int val, unsigned int level)
{
	of_message_t msg;
	unsigned char tmp;
	uint16_t tmp2;
	uint32_t tmp3;
	int field;

	if (vfield.empty() || vfield.size() <= level) {
		return false;
	}

	field = vfield[level];
	msg = OF_OBJECT_TO_MESSAGE(ofo);

	switch(field) {
		case 1: //Version
			if (action == MOD_SET) {
				ofo->version = (of_version_t)val;
				tmp = val;
				buf_u8_set(msg + OF_MESSAGE_VERSION_OFFSET, tmp);
			} else if(action == MOD_ADD) {
				ofo->version = (of_version_t) ( (int)ofo->version + val);
				tmp = msg[OF_MESSAGE_VERSION_OFFSET];
				tmp += val;
				buf_u8_set(msg + OF_MESSAGE_VERSION_OFFSET, tmp);
			} else if(action == MOD_SUB) {
				ofo->version = (of_version_t) ( (int)ofo->version - val);
				tmp = msg[OF_MESSAGE_VERSION_OFFSET];
				tmp -= val;
				buf_u8_set(msg + OF_MESSAGE_VERSION_OFFSET, tmp);
			}
			break;
		case 2: //Type
			if (action == MOD_SET) {
				tmp = val;
				buf_u8_set(msg + OF_MESSAGE_TYPE_OFFSET, tmp);
			} else if(action == MOD_ADD) {
				tmp = msg[OF_MESSAGE_TYPE_OFFSET];
				tmp += val;
				buf_u8_set(msg + OF_MESSAGE_TYPE_OFFSET, tmp);
			} else if(action == MOD_SUB) {
				tmp = msg[OF_MESSAGE_TYPE_OFFSET];
				tmp -= val;
				buf_u8_set(msg + OF_MESSAGE_TYPE_OFFSET, tmp);
			}
			break;
		case 3: //length
			if (action == MOD_SET) {
				tmp2 = val;
				of_message_length_set(msg, tmp2);
				ofo->length = val;
			} else if(action == MOD_ADD) {
				tmp2 = of_message_length_get(msg);
				tmp2 += val;
				of_message_length_set(msg, tmp2);
				ofo->length += val;
			} else if(action == MOD_SUB) {
				tmp2 = of_message_length_get(msg);
				tmp2 -= val;
				of_message_length_set(msg, tmp2);
				ofo->length -= val;
			}
			break;
		case 4: //XID
			if (action == MOD_SET) {
				tmp3 = val;
				buf_u32_set(msg + OF_MESSAGE_XID_OFFSET, tmp3);
			} else if(action == MOD_ADD) {
				tmp3 = of_message_xid_get(msg);
				tmp3 += val;
				buf_u32_set(msg + OF_MESSAGE_XID_OFFSET, tmp3);
			} else if(action == MOD_SUB) {
				tmp3 = of_message_xid_get(msg);
				tmp3 -= val;
				buf_u32_set(msg + OF_MESSAGE_XID_OFFSET, tmp3);
			}
			break;
	}
	return true;
}

bool Attacker::ModifyPACKETIN(of_object_t* ofo, vector<int> vfield, int action, int val, unsigned int level)
{
	int field;
	uint8_t tmp8;
	uint16_t tmp16;
	uint32_t tmp32;
	uint64_t tmp64;

	if (vfield.empty() || vfield.size() <= level) {
		return false;
	}

	field = vfield[level];

	switch(field) {
		case 5: // Buffer ID
			if (action == MOD_SET) {
				tmp32 = val;
				of_packet_in_buffer_id_set((of_packet_in_t*)ofo, tmp32);
			} else if(action == MOD_ADD) {
				of_packet_in_buffer_id_get((of_packet_in_t*)ofo, &tmp32);
				tmp32 += val;
				of_packet_in_buffer_id_set((of_packet_in_t*)ofo, tmp32);
			} else if(action == MOD_SUB) {
				of_packet_in_buffer_id_get((of_packet_in_t*)ofo, &tmp32);
				tmp32 -= val;
				of_packet_in_buffer_id_set((of_packet_in_t*)ofo, tmp32);
			}
			break;
		case 6: // Total Len
			if (action == MOD_SET) {
				tmp16 = val;
				of_packet_in_total_len_set((of_packet_in_t*)ofo, tmp16);
			} else if(action == MOD_ADD) {
				of_packet_in_total_len_get((of_packet_in_t*)ofo, &tmp16);
				tmp16 += val;
				of_packet_in_total_len_set((of_packet_in_t*)ofo, tmp16);
			} else if(action == MOD_SUB) {
				of_packet_in_total_len_get((of_packet_in_t*)ofo, &tmp16);
				tmp16 -= val;
				of_packet_in_total_len_set((of_packet_in_t*)ofo, tmp16);
			}
			break;
		case 7: // Reason
			if (action == MOD_SET) {
				tmp8 = val;
				of_packet_in_reason_set((of_packet_in_t*)ofo, tmp8);
			} else if(action == MOD_ADD) {
				of_packet_in_reason_get((of_packet_in_t*)ofo, &tmp8);
				tmp8 += val;
				of_packet_in_reason_set((of_packet_in_t*)ofo, tmp8);
			} else if(action == MOD_SUB) {
				of_packet_in_reason_get((of_packet_in_t*)ofo, &tmp8);
				tmp8 -= val;
				of_packet_in_reason_set((of_packet_in_t*)ofo, tmp8);
			}
			break;
		case 8: // Table ID
			if (action == MOD_SET) {
				tmp8 = val;
				of_packet_in_table_id_set((of_packet_in_t*)ofo, tmp8);
			} else if(action == MOD_ADD) {
				of_packet_in_table_id_get((of_packet_in_t*)ofo, &tmp8);
				tmp8 += val;
				of_packet_in_table_id_set((of_packet_in_t*)ofo, tmp8);
			} else if(action == MOD_SUB) {
				of_packet_in_table_id_get((of_packet_in_t*)ofo, &tmp8);
				tmp8 -= val;
				of_packet_in_table_id_set((of_packet_in_t*)ofo, tmp8);
			}
			break;
		case 9: // Cookie
			if (action == MOD_SET) {
				tmp64 = val;
				of_packet_in_cookie_set((of_packet_in_t*)ofo, tmp64);
			} else if(action == MOD_ADD) {
				of_packet_in_cookie_get((of_packet_in_t*)ofo, &tmp64);
				tmp64 += val;
				of_packet_in_cookie_set((of_packet_in_t*)ofo, tmp64);
			} else if(action == MOD_SUB) {
				of_packet_in_cookie_get((of_packet_in_t*)ofo, &tmp64);
				tmp64 -= val;
				of_packet_in_cookie_set((of_packet_in_t*)ofo, tmp64);
			}
			break;
		case 10: // Match
		case 11: // Data
		default:
			dbgprintf(0, "Warning: Trying to modify invalid/unsupported field: %i\n", field);
			return false;
	}

	return true;
}
