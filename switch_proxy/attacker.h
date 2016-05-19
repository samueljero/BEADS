/******************************************************************************
* Author: Samuel Jero <sjero@purdue.edu>
* SDN Switch-Controller Proxy
*
* Rule Format:
* controller_id, switch_id, openflow_version, msg_type, field, action, parameters
* 	controller_id is port number
* 	switch_id is dpid
* 	parameters are a list of "key=value" pairs separated by &
* Wildcards are supported in all fields except action and parameters.
* Rule search is left to right, preferring specific values over wildcards (i.e.
* longest prefix match). Only the first set of matching actions are applied.
******************************************************************************/
#ifndef _ATTACKER_H
#define _ATTACKER_H
#include "sw_proxy.h"
#include "half_conn.h"
#include "listener.h"
#include "args.h"
#include <map>
#include <list>
#include <vector>
#include <string>

#define ACTION_ID_ERR			(-1)
#define ACTION_ID_MIN			0
#define ACTION_ID_DROP			0
#define ACTION_ID_DELAY			1
#define ACTION_ID_DUP			2
#define ACTION_ID_LIE			3
#define ACTION_ID_PRINT			4
#define ACTION_ID_CLEAR			5
#define ACTION_ID_DIVERT		6
#define ACTION_ID_CLIE			7
#define ACTION_ID_CDIVERT		8
#define ACTION_ID_PKT_TYPES		9
#define ACTION_ID_INJECT		10
#define ACTION_ID_CDROP			11
#define ACTION_ID_MAX			11

#define MOD_SET 1
#define MOD_ADD 2
#define MOD_SUB 3

#define PARAMS_TYPE_ERR			0
#define PARAMS_TYPE_LIE			1
#define PARAMS_TYPE_DIVERT		2
#define PARAMS_TYPE_DROP		3

#define INJECT_TYPE_ERR			0
#define INJECT_TYPE_REP			1

typedef std::map<int, int> amap_t;
typedef std::map<int, std::map<int, int> > aamap_t;
typedef std::map<int,std::map<int, std::map<int, int> > > aaamap_t;
typedef std::map<uint64_t, std::map<int,std::map<int, std::map<int, int> > > > aaaamap_t;
typedef std::map<int, std::map<uint64_t, std::map<int,std::map<int, std::map<int, int> > > > > aaaaamap_t;

class OpenFlow;

class pktInjection {
	public:
		int type;
		int rep_ms;
		int msg_type;
		struct timespec next;
		int ver;
		int cid;
		uint64_t dpid;
		enum direction dir;
		std::map<std::string,std::string> fields;
};

class modAttack {
	public:
		int type;
		std::vector<int> field;
		int action;
		int value;
		std::vector<int> matchfield;
		int matchvalue;
		int sw;
		int ctl;
		int percent;
};

class Attacker{
	private:
		Attacker();

	public:
		~Attacker();
		static Attacker& get();
		bool loadListeners(std::list<Listener*> *listeners, pthread_mutex_t *listeners_mutex);
		bool addCommand(Message m, Message *resp);
		pkt_info doAttack(pkt_info pk);
		bool start();
		bool stop();

	private:
		int normalize_ofp_ver_str(char *v);
		int normalize_ofp_msg_type(int ver, char *s);
		int normalize_action_type(char *s);
		int normalize_cid(char *s);
		uint64_t normalize_dpid(char *s);
		std::vector<int> normalize_field(char *s);
		bool loadmap(int cid, uint64_t dpid, int ofp_ver, int msg_type, int action_type, arg_node_t *args, char *field, Message *resp);
		bool removeCommand(amap_t::iterator it5, aamap_t::iterator it4, aaamap_t::iterator it3,
				aaaamap_t::iterator it2, aaaaamap_t::iterator it1);
		bool clearRules(int cid, uint64_t dpid, int ofp_ver, int msg_type);
		pkt_info applyActions(pkt_info pk, aamap_t::iterator it4);
		void print(pkt_info pk);
		bool doModify(of_object_t* ofo, std::vector<int> vfield, int action, int val);
		bool ModifyHEADER(of_object_t* ofo, std::vector<int> vfield, int action, int val, unsigned int level);
		bool getHEADER(of_object_t* ofo, std::vector<int> vfield, unsigned int level, unsigned long int* vval);
		bool isFieldValue(of_object_t* ofo, std::vector<int> cfield, int cval);
		void log_pkt_type(of_object_t *ofo);
		bool dump_pkt_types(Message *m);
		bool setup_inject(int cid, uint64_t dpid, int ofp_ver, int msg_type, arg_node_t *args);
		static void* inject_thread_run(void *arg);
		void inject_run();
		void do_inject(pktInjection &info);

		pthread_rwlock_t lock;
		// <cid, <dpid, <of_version, <pkt_type, <action, ID> > > >
		aaaaamap_t actions_map;
		// <ID, list_of_attacks>
		std::map<int, std::vector<modAttack> > mod_params;
		std::list<pktInjection> injection_actions;
		bool injection_run;
		pthread_t inject_thread;
		pthread_mutex_t timeout_mutex;
		std::map<int,int> pkt_types_seen;
		pthread_rwlock_t pkt_types_lock;
		int nxt_param;
		std::list<Listener*> *listeners;
		pthread_mutex_t *listeners_mutex;
		OpenFlow *modifier;
		
};


#endif
