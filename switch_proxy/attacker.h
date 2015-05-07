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

#define ACTION_ID_ERR			(-1)
#define ACTION_ID_MIN			0
#define ACTION_ID_DROP			0
#define ACTION_ID_DELAY			1
#define ACTION_ID_DUP			2
#define ACTION_ID_LIE			3
#define ACTION_ID_PRINT			4
#define ACTION_ID_CLEAR			5
#define ACTION_ID_DIVERT		6
#define ACTION_ID_MAX			6


typedef std::map<int, int> amap_t;
typedef std::map<int, std::map<int, int> > aamap_t;
typedef std::map<int,std::map<int, std::map<int, int> > > aaamap_t;
typedef std::map<uint64_t, std::map<int,std::map<int, std::map<int, int> > > > aaaamap_t;
typedef std::map<int, std::map<uint64_t, std::map<int,std::map<int, std::map<int, int> > > > > aaaaamap_t;

class Attacker{
	private:
		Attacker();

	public:
		~Attacker();
		static Attacker& get();
		bool loadListeners(std::list<Listener*> *listeners, pthread_mutex_t *listeners_mutex);
		bool addCommand(Message m);
		pkt_info doAttack(pkt_info pk);

	private:
		int normalize_ofp_ver_str(char *v);
		int normalize_ofp_msg_type(int ver, char *s);
		int normalize_action_type(char *s);
		int normalize_cid(char *s);
		uint64_t normalize_dpid(char *s);
		bool loadmap(int cid, uint64_t dpid, int ofp_ver, int msg_type, int action_type, arg_node_t *args);
		bool removeCommand(amap_t::iterator it5, aamap_t::iterator it4, aaamap_t::iterator it3,
				aaaamap_t::iterator it2, aaaaamap_t::iterator it1);
		bool clearRules(int cid, uint64_t dpid, int ofp_ver, int msg_type);
		pkt_info applyActions(pkt_info pk, aamap_t::iterator it4);
		void print(pkt_info pk);

		pthread_rwlock_t lock;
		// <cid, <dpid, <of_version, <pkt_type, <action, ID> > > >
		aaaaamap_t actions_map;
		// <ID, list_of_parameters >
		std::map<int, std::vector<int> > params;
		std::list<Listener*> *listeners;
		pthread_mutex_t *listeners_mutex;

};


#endif