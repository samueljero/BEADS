#include "openflow.h"
#include "errno.h"
using namespace std;

of_object_t* OpenFlow::create_message(int type, int ver, std::map<std::string,std::string> fields)
{
	switch(type){
		case OF_AGGREGATE_STATS_REPLY:
			break;
		case OF_AGGREGATE_STATS_REQUEST:
			break;
		case OF_ASYNC_CONFIG_FAILED_ERROR_MSG:
			break;
		case OF_ASYNC_GET_REPLY:
			break;
		case OF_ASYNC_GET_REQUEST:
			break;
		case OF_ASYNC_SET:
			break;
		case OF_BAD_ACTION_ERROR_MSG:
			break;
		case OF_BAD_INSTRUCTION_ERROR_MSG:
			break;
		case OF_BAD_MATCH_ERROR_MSG:
			break;
		case OF_BAD_PROPERTY_ERROR_MSG:
			break;
		case OF_BAD_REQUEST_ERROR_MSG:
			break;
		case OF_BARRIER_REPLY:
			break;
		case OF_BARRIER_REQUEST:
			break;
		case OF_BUNDLE_ADD_MSG:
			break;
		case OF_BUNDLE_CTRL_MSG:
			break;
		case OF_BUNDLE_FAILED_ERROR_MSG:
			break;
		case OF_DESC_STATS_REPLY:
			break;
		case OF_DESC_STATS_REQUEST:
			break;
		case OF_ECHO_REPLY:
			break;
		case OF_ECHO_REQUEST:
			break;
		case OF_EXPERIMENTER_ERROR_MSG:
			break;
		case OF_FEATURES_REPLY:
			break;
		case OF_FEATURES_REQUEST:
			break;
		case OF_FLOW_ADD:
			break;
		case OF_FLOW_DELETE:
			break;
		case OF_FLOW_DELETE_STRICT:
			break;
		case OF_FLOW_MOD_FAILED_ERROR_MSG:
			break;
		case OF_FLOW_MODIFY:
			break;
		case OF_FLOW_MODIFY_STRICT:
			break;
		case OF_FLOW_MONITOR_FAILED_ERROR_MSG:
			break;
		case OF_FLOW_REMOVED:
			break;
		case OF_FLOW_STATS_REPLY:
			break;
		case OF_FLOW_STATS_REQUEST:
			break;
		case OF_GET_CONFIG_REPLY:
			break;
		case OF_GET_CONFIG_REQUEST:
			break;
		case OF_GROUP_ADD:
			break;
		case OF_GROUP_DELETE:
			break;
		case OF_GROUP_DESC_STATS_REPLY:
			break;
		case OF_GROUP_DESC_STATS_REQUEST:
			break;
		case OF_GROUP_FEATURES_STATS_REPLY:
			break;
		case OF_GROUP_FEATURES_STATS_REQUEST:
			break;
		case OF_GROUP_MOD_FAILED_ERROR_MSG:
			break;
		case OF_GROUP_MODIFY:
			break;
		case OF_GROUP_STATS_REPLY:
			break;
		case OF_GROUP_STATS_REQUEST:
			break;
		case OF_HELLO:
			break;
		case OF_HELLO_FAILED_ERROR_MSG:
			break;
		case OF_METER_CONFIG_STATS_REPLY:
			break;
		case OF_METER_CONFIG_STATS_REQUEST:
			break;
		case OF_METER_FEATURES_STATS_REPLY:
			break;
		case OF_METER_FEATURES_STATS_REQUEST:
			break;
		case OF_METER_MOD:
			break;
		case OF_METER_MOD_FAILED_ERROR_MSG:
			break;
		case OF_METER_STATS_REPLY:
			break;
		case OF_METER_STATS_REQUEST:
			break;
		case OF_NICIRA_CONTROLLER_ROLE_REPLY:
			break;
		case OF_NICIRA_CONTROLLER_ROLE_REQUEST:
			break;
		case OF_PACKET_IN:
			break;
		case OF_PACKET_OUT:
			break;
		case OF_PORT_DESC_STATS_REPLY:
			break;
		case OF_PORT_DESC_STATS_REQUEST:
			break;
		case OF_PORT_MOD:
			break;
		case OF_PORT_MOD_FAILED_ERROR_MSG:
			break;
		case OF_PORT_STATS_REPLY:
			break;
		case OF_PORT_STATS_REQUEST:
			break;
		case OF_PORT_STATUS:
			return create_port_status(ver,fields);
		case OF_QUEUE_DESC_STATS_REPLY:
			break;
		case OF_QUEUE_DESC_STATS_REQUEST:
			break;
		case OF_QUEUE_GET_CONFIG_REPLY:
			break;
		case OF_QUEUE_GET_CONFIG_REQUEST:
			break;
		case OF_QUEUE_OP_FAILED_ERROR_MSG:
			break;
		case OF_QUEUE_STATS_REPLY:
			break;
		case OF_QUEUE_STATS_REQUEST:
			break;
		case OF_REQUESTFORWARD:
			break;
		case OF_ROLE_REPLY:
			break;
		case OF_ROLE_REQUEST:
			break;
		case OF_ROLE_REQUEST_FAILED_ERROR_MSG:
			break;
		case OF_ROLE_STATUS:
			break;
		case OF_SET_CONFIG:
			break;
		case OF_SWITCH_CONFIG_FAILED_ERROR_MSG:
			break;
		case OF_TABLE_DESC_STATS_REPLY:
			break;
		case OF_TABLE_DESC_STATS_REQUEST:
			break;
		case OF_TABLE_FEATURES_FAILED_ERROR_MSG:
			break;
		case OF_TABLE_FEATURES_STATS_REPLY:
			break;
		case OF_TABLE_FEATURES_STATS_REQUEST:
			break;
		case OF_TABLE_MOD:
			break;
		case OF_TABLE_MOD_FAILED_ERROR_MSG:
			break;
		case OF_TABLE_STATS_REPLY:
			break;
		case OF_TABLE_STATS_REQUEST:
			break;
		case OF_TABLE_STATUS:
			break;
		default:
			return NULL;
	}
	return NULL;
}

of_object_t* OpenFlow::create_port_status(int ver, std::map<std::string,std::string> fields)
{
	of_object_t* msg;
	enum of_version_e version;
	unsigned long long tmp;
	std::map<std::string,std::string>::iterator it;

	version = (enum of_version_e) ver;

	/* Allocate new message */
	msg = of_port_status_new(version);
	if (!msg) {
		return NULL;
	}

	/* XID */
	it = fields.find("xid");
	if (it != fields.end()){
		str2uint(it->second,&tmp);
	} else {
		tmp = 0;
	}
	of_port_status_xid_set((of_port_status_t*)msg,tmp);

	/* Reason */
	it = fields.find("reason");
	if (it != fields.end()) {
		str2uint(it->second,&tmp);
	} else {
		tmp = 0; //OFPPR_ADD
	}
	of_port_status_reason_set((of_port_status_t*)msg,tmp);

	/*Port Description*/
	of_port_desc_t *desc;
	desc = of_port_status_desc_get((of_port_status_t*)msg);
	if (!desc) {
		return NULL;
	}

	/*Port Number*/
	it = fields.find("port");
	if (it != fields.end()) {
		str2uint(it->second,&tmp);
	} else {
		tmp = 1;
	}
	of_port_desc_port_no_set(desc,tmp);

	/*MAC Address*/
	of_mac_addr_t m;
	it = fields.find("mac");
	if (it != fields.end()) {
		str2uint(it->second, &tmp);
	} else {
		tmp = 0;
	}
	m.addr[0] = ((char*)&tmp)[5];
	m.addr[1] = ((char*)&tmp)[4];
	m.addr[2] = ((char*)&tmp)[3];
	m.addr[3] = ((char*)&tmp)[2];
	m.addr[4] = ((char*)&tmp)[1];
	m.addr[5] = ((char*)&tmp)[0];
	of_port_desc_hw_addr_set(desc,m);

	/*Name*/
	of_port_name_t n;
	it = fields.find("name");
	if (it != fields.end()) {
		strncpy(n,it->second.c_str(),OF_MAX_PORT_NAME_LEN-1);
		of_port_desc_name_set(desc,n);
	} else {
		memset(n,0,OF_MAX_PORT_NAME_LEN-1);
		of_port_desc_name_set(desc,n);
	}

	/*Config*/
	it = fields.find("config");
	if (it != fields.end()) {
		str2uint(it->second,&tmp);
	}else {
		tmp = 1; //Port Down
	}
	of_port_desc_config_set(desc,tmp);

	/*State*/
	it = fields.find("state");
	if (it != fields.end()) {
		str2uint(it->second, &tmp);
	} else {
		tmp = 1; //Link Down
	}
	of_port_desc_state_set(desc,tmp);

	if (version >= OF_VERSION_1_4) {
		of_list_port_desc_prop_t *prop = NULL;
		of_port_desc_properties_bind(desc,prop);

		if (of_port_desc_properties_set(desc,prop)) {
			return NULL;
		}
		fprintf(stderr, "Warning: of_port_status version >=1.4 properties not implemented");
	} else {
		/*Curr*/
		it = fields.find("curr");
		if (it != fields.end()) {
			str2uint(it->second,&tmp);
		} else {
			tmp = 0x280; //10,000 Full Duplex, auto-neg
		}
		of_port_desc_curr_set(desc,tmp);

		/*Advertised*/
		it = fields.find("advertised");
		if (it != fields.end()) {
			str2uint(it->second,&tmp);
		} else {
			tmp = 0x2FF; //10/100/1000/10000 Half/Full Duplex, auto-neg
		}
		of_port_desc_advertised_set(desc,tmp);

		/*Supported*/
		it = fields.find("supported");
		if (it != fields.end()) {
			str2uint(it->second,&tmp);
		} else {
			tmp = 0x2FF; //10/100/1000/10000 Half/Full Duplex, auto-neg
		}
		of_port_desc_supported_set(desc,tmp);

		/*Peer*/
		it = fields.find("peer");
		if (it != fields.end()) {
			str2uint(it->second,&tmp);
		} else {
			tmp = 0x2FF; //10/100/1000/10000 Half/Full Duplex, auto-neg
		}
		of_port_desc_peer_set(desc,tmp);
	}

	/*Port Description*/
	if(of_port_status_desc_set((of_port_status_t*)msg,desc)) {
		return NULL;
	}

	return msg;
}

bool OpenFlow::str2uint(std::string str, unsigned long long *tmp)
{
	errno = 0;
	*tmp =  strtoll(str.c_str(),NULL,10);
	if (errno < 0) {
		return false;
	}
	return true;
}
