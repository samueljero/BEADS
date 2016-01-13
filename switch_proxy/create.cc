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
