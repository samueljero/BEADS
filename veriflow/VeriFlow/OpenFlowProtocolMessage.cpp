/*
 * OpenFlowProtocolMessage.cpp
 *
 *  Created on: Mar 12, 2012
 *      Author: khurshid
 *
 * This file is protected by the VeriFlow Research License Agreement
 * available at http://www.cs.illinois.edu/~khurshi1/projects/veriflow/veriflow-research-license-agreement.txt.
 * A copy of this agreement is also included in this package.
 *
 * Copyright (c) 2012-2013 by
 * The Board of Trustees of the University of Illinois.
 * All rights reserved.
 */

#include "OpenFlowProtocolMessage.h"
#include "openflow.h"
#include "Network.h"
#include "VeriFlow.h"

void OpenFlowProtocolMessage::process(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	const ofp_header* header = (const ofp_header*)data;
	switch(header->type)
	{
	case OFPT_HELLO:
		// OpenFlowProtocolMessage::processHello(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_ERROR:
		// OpenFlowProtocolMessage::processError(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_ECHO_REQUEST:
		// OpenFlowProtocolMessage::processEchoRequest(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_ECHO_REPLY:
		// OpenFlowProtocolMessage::processEchoReply(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_VENDOR:
		// OpenFlowProtocolMessage::processVendor(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_FEATURES_REQUEST:
		// OpenFlowProtocolMessage::processFeaturesRequest(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_FEATURES_REPLY:
		OpenFlowProtocolMessage::processFeaturesReply(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_GET_CONFIG_REQUEST:
		// OpenFlowProtocolMessage::processGetConfigRequest(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_GET_CONFIG_REPLY:
		// OpenFlowProtocolMessage::processGetConfigReply(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_SET_CONFIG:
		// OpenFlowProtocolMessage::processSetConfig(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_PACKET_IN:
		// OpenFlowProtocolMessage::processPacketIn(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_FLOW_REMOVED:
		OpenFlowProtocolMessage::processFlowRemoved(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_PORT_STATUS:
		// OpenFlowProtocolMessage::processPortStatus(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_PACKET_OUT:
		// OpenFlowProtocolMessage::processPacketOut(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_FLOW_MOD:
		OpenFlowProtocolMessage::processFlowMod(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_PORT_MOD:
		// OpenFlowProtocolMessage::processPortMod(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_STATS_REQUEST:
		// OpenFlowProtocolMessage::processStatsRequest(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_STATS_REPLY:
		// OpenFlowProtocolMessage::processStatsReply(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_BARRIER_REQUEST:
		// OpenFlowProtocolMessage::processBarrierRequest(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_BARRIER_REPLY:
		// OpenFlowProtocolMessage::processBarrierReply(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_QUEUE_GET_CONFIG_REQUEST:
		// OpenFlowProtocolMessage::processQueueGetConfigRequest(data, info, fp);
		// fprintf(fp, "\n");
		break;

	case OFPT_QUEUE_GET_CONFIG_REPLY:
		// OpenFlowProtocolMessage::processQueueGetConfigReply(data, info, fp);
		// fprintf(fp, "\n");
		break;
	}
}

void OpenFlowProtocolMessage::processHeader(const ofp_header* header, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[Header] version %u type %u length %u xid %u\n",
	//		header->version, header->type, ntohs(header->length), ntohl(header->xid));
}

void OpenFlowProtocolMessage::processHello(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[Hello]\n");
}

void OpenFlowProtocolMessage::processError(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// const ofp_error_msg* oem = (const ofp_error_msg*)data;

	// OpenFlowProtocolMessage::processHeader(&(oem->header), info, fp);

	// fprintf(fp, "[Error] type %u code %u\n", ntohs(oem->type), ntohs(oem->code));

	/* struct ofp_error_msg {
	    struct ofp_header header;

	    uint16_t type;
	    uint16_t code;
	    uint8_t data[0];
	}; */
}

void OpenFlowProtocolMessage::processEchoRequest(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[EchoRequest]\n");
}

void OpenFlowProtocolMessage::processEchoReply(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[EchoReply]\n");
}

void OpenFlowProtocolMessage::processVendor(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// const ofp_vendor_header* ovh = (const ofp_vendor_header*)data;

	// OpenFlowProtocolMessage::processHeader(&(ovh->header), info, fp);

	// fprintf(fp, "[Vendor] vendor %u\n", ntohl(ovh->vendor));

	// struct ofp_vendor_header {
	//     struct ofp_header header;   /* Type OFPT_VENDOR. */
	//     uint32_t vendor;            /* Vendor ID:
	//                                  * - MSB 0: low-order bytes are IEEE OUI.
	//                                  * - MSB != 0: defined by OpenFlow
	//                                  *   consortium. */
	//     /* Vendor-defined arbitrary additional data. */
	// };
	// OFP_ASSERT(sizeof(struct ofp_vendor_header) == 12);
}

void OpenFlowProtocolMessage::processFeaturesRequest(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[FeaturesRequest]\n");
}

void OpenFlowProtocolMessage::processFeaturesReply(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	const ofp_switch_features* osf = (const ofp_switch_features*)data;

	OpenFlowProtocolMessage::processHeader(&(osf->header), info, fp);

	pthread_mutex_lock(info.veriflowMutex);
	uint64_t datapathId = osf->datapath_id;
	if(ntohl(1) != 1)
	{
		datapathId = ((uint64_t)ntohl(datapathId) << 32) | ntohl(datapathId >> 32);
	}
	info.veriflow->setDatapathId(info.clientAddress.sin_port, datapathId);
	pthread_mutex_unlock(info.veriflowMutex);
	// fprintf(fp, "DatapathId: %lu\n", info.veriflow->getDatapathId(info.clientAddress.sin_port));

	// int portCount = (ntohs(osf->header.length) - sizeof(ofp_switch_features)) / sizeof(ofp_phy_port);
	// fprintf(fp, "[PortCount] %d\n", portCount);

	// struct ofp_switch_features {
	//    struct ofp_header header;
	//    uint64_t datapath_id;   /* Datapath unique ID.  The lower 48-bits are for
	//                               a MAC address, while the upper 16-bits are
	//                               implementer-defined. */

	//    uint32_t n_buffers;     /* Max packets buffered at once. */

	//    uint8_t n_tables;       /* Number of tables supported by datapath. */
	//    uint8_t pad[3];         /* Align to 64-bits. */

	    /* Features. */
	//    uint32_t capabilities;  /* Bitmap of support "ofp_capabilities". */
	//    uint32_t actions;       /* Bitmap of supported "ofp_action_type"s. */

	    /* Port info.*/
	//    struct ofp_phy_port ports[0];  /* Port definitions.  The number of ports
	//                                      is inferred from the length field in
	//                                      the header. */
	// };
}

void OpenFlowProtocolMessage::processGetConfigRequest(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[GetConfigRequest]\n");
}

void OpenFlowProtocolMessage::processGetConfigReply(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[GetConfigReply]\n");
}

void OpenFlowProtocolMessage::processSetConfig(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// const ofp_switch_config* osc = (const ofp_switch_config*)data;

	// OpenFlowProtocolMessage::processHeader(&(osc->header), info, fp);

	// fprintf(fp, "[SetConfig] flags %u miss_send_len %u\n", ntohs(osc->flags), ntohs(osc->miss_send_len));

	// struct ofp_switch_config {
	//     struct ofp_header header;
	//     uint16_t flags;             /* OFPC_* flags. */
	//     uint16_t miss_send_len;     /* Max bytes of new flow that datapath should
	//                                    send to the controller. */
	// };
}

void OpenFlowProtocolMessage::processPacketIn(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[PacketIn]\n");
}

void OpenFlowProtocolMessage::processFlowRemoved(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	const ofp_flow_removed* ofr = (const ofp_flow_removed*)data;

	OpenFlowProtocolMessage::processHeader(&(ofr->header), info, fp);
	OpenFlowProtocolMessage::processMatch(&(ofr->match), info, fp);

	// Remove rule from VeriFlow database.

	// fprintf(fp, "Looking up datapathId %lu\n", info.veriflow->getDatapathId(info.clientAddress.sin_port));
	pthread_mutex_lock(info.veriflowMutex);
	uint64_t datapathId = info.veriflow->getDatapathId(info.clientAddress.sin_port);
	pthread_mutex_unlock(info.veriflowMutex);

	pthread_mutex_lock(info.networkMutex);
	string deviceIpAddress = info.network->getDeviceIpAddress(datapathId);
	pthread_mutex_unlock(info.networkMutex);
	// fprintf(fp, "Found address %s\n", deviceIpAddress.c_str());

	Rule rule;
	rule.type = FORWARDING;
	rule.wildcards = ntohl(ofr->match.wildcards);

	rule.fieldValue[IN_PORT] = ::convertIntToString(ntohs(ofr->match.in_port));
	rule.fieldMask[IN_PORT] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_IN_PORT) != 0)) ? "0" : "65535";

	rule.fieldValue[DL_SRC] = ::getMacValueAsString(ofr->match.dl_src);
	rule.fieldMask[DL_SRC] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_DL_SRC) != 0)) ? "0:0:0:0:0:0" : "FF:FF:FF:FF:FF:FF";

	rule.fieldValue[DL_DST] = ::getMacValueAsString(ofr->match.dl_dst);
	rule.fieldMask[DL_DST] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_DL_DST) != 0)) ? "0:0:0:0:0:0" : "FF:FF:FF:FF:FF:FF";

	rule.fieldValue[DL_TYPE] = ::convertIntToString(ntohs(ofr->match.dl_type));
	rule.fieldMask[DL_TYPE] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_DL_TYPE) != 0)) ? "0" : "65535";

	rule.fieldValue[DL_VLAN] = ::convertIntToString(ntohs(ofr->match.dl_vlan));
	rule.fieldMask[DL_VLAN] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_DL_VLAN) != 0)) ? "0" : "4095";

	rule.fieldValue[DL_VLAN_PCP] = ::convertIntToString(ofr->match.dl_vlan_pcp);
	rule.fieldMask[DL_VLAN_PCP] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_DL_VLAN_PCP) != 0)) ? "0" : "7";

	rule.fieldValue[MPLS_LABEL] = "0";
	rule.fieldMask[MPLS_LABEL] = "0";

	rule.fieldValue[MPLS_TC] = "0";
	rule.fieldMask[MPLS_TC] = "0";

	rule.fieldValue[NW_SRC] = ::getIpValueAsString(ntohl(ofr->match.nw_src));
	rule.fieldMask[NW_SRC] = convertMaskToDottedFormat((rule.wildcards & OFPFW_NW_SRC_MASK) >> OFPFW_NW_SRC_SHIFT);
	if(rule.wildcards == OFPFW_ALL)
	{
		rule.fieldMask[NW_SRC] = "0.0.0.0";
	}

	rule.fieldValue[NW_DST] = ::getIpValueAsString(ntohl(ofr->match.nw_dst));
	rule.fieldMask[NW_DST] = convertMaskToDottedFormat((rule.wildcards & OFPFW_NW_DST_MASK) >> OFPFW_NW_DST_SHIFT);
	if(rule.wildcards == OFPFW_ALL)
	{
		rule.fieldMask[NW_DST] = "0.0.0.0";
	}

	rule.fieldValue[NW_PROTO] = ::convertIntToString(ofr->match.nw_proto);
	rule.fieldMask[NW_PROTO] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_NW_PROTO) != 0)) ? "0" : "255";

	rule.fieldValue[NW_TOS] = ::convertIntToString(ofr->match.nw_tos);
	rule.fieldMask[NW_TOS] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_NW_TOS) != 0)) ? "0" : "63";

	rule.fieldValue[TP_SRC] = ::convertIntToString(ntohs(ofr->match.tp_src));
	rule.fieldMask[TP_SRC] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_TP_SRC) != 0)) ? "0" : "65535";

	rule.fieldValue[TP_DST] = ::convertIntToString(ntohs(ofr->match.tp_dst));
	rule.fieldMask[TP_DST] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_TP_DST) != 0)) ? "0" : "65535";

	rule.location = deviceIpAddress;
	rule.nextHop = "";
	rule.priority = ntohs(ofr->priority);

	/* double updateTime = 0, packetClassSearchTime = 0, graphBuildTime = 0, queryTime = 0;
	unsigned long ecCount = 0; */

	// gettimeofday(&start, NULL);
	pthread_mutex_lock(info.veriflowMutex);
	// info.veriflow->verifyRule(rule, OFPT_FLOW_REMOVED, updateTime, packetClassSearchTime, graphBuildTime, queryTime, ecCount, fp);
	info.veriflow->removeRule(rule);
	pthread_mutex_unlock(info.veriflowMutex);
}

void OpenFlowProtocolMessage::processPortStatus(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[PortStatus]\n");
}

void OpenFlowProtocolMessage::processPacketOut(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[PacketOut]\n");
}

void OpenFlowProtocolMessage::processFlowMod(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	const ofp_flow_mod* ofm = (const ofp_flow_mod*)data;

	OpenFlowProtocolMessage::processHeader(&(ofm->header), info, fp);
	OpenFlowProtocolMessage::processMatch(&(ofm->match), info, fp);

	int command = ntohs(ofm->command);
	int actionCount = (ntohs(ofm->header.length) - sizeof(ofp_flow_mod)) / sizeof(ofp_action_header);
	// fprintf(fp, "[ActionCount] %d\n", actionCount);

	if(actionCount > 0)
	{
		const ofp_action_header* actionHeader = (const ofp_action_header*)ofm->actions;
		for(int i = 0; i < actionCount; i++)
		{
			if(ntohs(actionHeader[i].type) == OFPAT_OUTPUT)
			{
				const ofp_action_output* oao = (const ofp_action_output*)&(actionHeader[i]);
				// fprintf(fp, "[Output] type %u len %u port %u max_len %u\n",
				//		ntohs(oao->type), ntohs(oao->len), ntohs(oao->port), ntohs(oao->max_len));

				// Verify flow rule and add to VeriFlow database.

				// fprintf(fp, "Looking up datapathId %lu\n", info.veriflow->getDatapathId(info.clientAddress.sin_port));
				pthread_mutex_lock(info.veriflowMutex);
				uint64_t datapathId = info.veriflow->getDatapathId(info.clientAddress.sin_port);
				pthread_mutex_unlock(info.veriflowMutex);

				pthread_mutex_lock(info.networkMutex);
				string deviceIpAddress = info.network->getDeviceIpAddress(datapathId);
				pthread_mutex_unlock(info.networkMutex);
				// fprintf(fp, "Found address %s\n", deviceIpAddress.c_str());

				Rule rule;
				rule.type = FORWARDING;
				rule.wildcards = ntohl(ofm->match.wildcards);

				rule.fieldValue[IN_PORT] = ::convertIntToString(ntohs(ofm->match.in_port));
				rule.fieldMask[IN_PORT] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_IN_PORT) != 0)) ? "0" : "65535";

				rule.fieldValue[DL_SRC] = ::getMacValueAsString(ofm->match.dl_src);
				rule.fieldMask[DL_SRC] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_DL_SRC) != 0)) ? "0:0:0:0:0:0" : "FF:FF:FF:FF:FF:FF";

				rule.fieldValue[DL_DST] = ::getMacValueAsString(ofm->match.dl_dst);
				rule.fieldMask[DL_DST] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_DL_DST) != 0)) ? "0:0:0:0:0:0" : "FF:FF:FF:FF:FF:FF";

				rule.fieldValue[DL_TYPE] = ::convertIntToString(ntohs(ofm->match.dl_type));
				rule.fieldMask[DL_TYPE] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_DL_TYPE) != 0)) ? "0" : "65535";

				rule.fieldValue[DL_VLAN] = ::convertIntToString(ntohs(ofm->match.dl_vlan));
				rule.fieldMask[DL_VLAN] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_DL_VLAN) != 0)) ? "0" : "4095";

				rule.fieldValue[DL_VLAN_PCP] = ::convertIntToString(ofm->match.dl_vlan_pcp);
				rule.fieldMask[DL_VLAN_PCP] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_DL_VLAN_PCP) != 0)) ? "0" : "7";

				rule.fieldValue[MPLS_LABEL] = "0";
				rule.fieldMask[MPLS_LABEL] = "0";

				rule.fieldValue[MPLS_TC] = "0";
				rule.fieldMask[MPLS_TC] = "0";

				rule.fieldValue[NW_SRC] = ::getIpValueAsString(ntohl(ofm->match.nw_src));
				rule.fieldMask[NW_SRC] = convertMaskToDottedFormat((rule.wildcards & OFPFW_NW_SRC_MASK) >> OFPFW_NW_SRC_SHIFT);
				if(rule.wildcards == OFPFW_ALL)
				{
					rule.fieldMask[NW_SRC] = "0.0.0.0";
				}

				rule.fieldValue[NW_DST] = ::getIpValueAsString(ntohl(ofm->match.nw_dst));
				rule.fieldMask[NW_DST] = convertMaskToDottedFormat((rule.wildcards & OFPFW_NW_DST_MASK) >> OFPFW_NW_DST_SHIFT);
				if(rule.wildcards == OFPFW_ALL)
				{
					rule.fieldMask[NW_DST] = "0.0.0.0";
				}

				rule.fieldValue[NW_PROTO] = ::convertIntToString(ofm->match.nw_proto);
				rule.fieldMask[NW_PROTO] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_NW_PROTO) != 0)) ? "0" : "255";

				rule.fieldValue[NW_TOS] = ::convertIntToString(ofm->match.nw_tos);
				rule.fieldMask[NW_TOS] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_NW_TOS) != 0)) ? "0" : "63";

				rule.fieldValue[TP_SRC] = ::convertIntToString(ntohs(ofm->match.tp_src));
				rule.fieldMask[TP_SRC] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_TP_SRC) != 0)) ? "0" : "65535";

				rule.fieldValue[TP_DST] = ::convertIntToString(ntohs(ofm->match.tp_dst));
				rule.fieldMask[TP_DST] = ((rule.wildcards == OFPFW_ALL) || ((rule.wildcards & OFPFW_TP_DST) != 0)) ? "0" : "65535";

				rule.location = deviceIpAddress;
				rule.nextHop = info.network->getNextHopIpAddress(deviceIpAddress, ntohs(oao->port));
				rule.priority = ntohs(ofm->priority);

				double updateTime = 0, packetClassSearchTime = 0, graphBuildTime = 0, queryTime = 0;
				unsigned long ecCount = 0;

				pthread_mutex_lock(info.veriflowMutex);
				info.veriflow->verifyRule(rule, command, updateTime, packetClassSearchTime, graphBuildTime, queryTime, ecCount, fp);
				// info.veriflow->addRule(rule);
				pthread_mutex_unlock(info.veriflowMutex);
			}
		}
	}
}

void OpenFlowProtocolMessage::processPortMod(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[PortMod]\n");
}

void OpenFlowProtocolMessage::processStatsRequest(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[StatsRequest]\n");
}

void OpenFlowProtocolMessage::processStatsReply(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[StatsReply]\n");
}

void OpenFlowProtocolMessage::processBarrierRequest(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[BarrierRequest]\n");
}

void OpenFlowProtocolMessage::processBarrierReply(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[BarrierReply]\n");
}

void OpenFlowProtocolMessage::processQueueGetConfigRequest(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[QueueGetConfigRequest]\n");
}

void OpenFlowProtocolMessage::processQueueGetConfigReply(const char* data, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[QueueGetConfigReply]\n");
}

void OpenFlowProtocolMessage::processMatch(const ofp_match* match, ProxyConnectionInfo& info, FILE* fp)
{
	// fprintf(fp, "[Match] wildcards %u in_port %u dl_src %02x:%02x:%02x:%02x:%02x:%02x dl_dst %02x:%02x:%02x:%02x:%02x:%02x",
	//		ntohl(match->wildcards), ntohs(match->in_port),
	//		match->dl_src[0], match->dl_src[1], match->dl_src[2],
	//		match->dl_src[3], match->dl_src[4], match->dl_src[5],
	//		match->dl_dst[0], match->dl_dst[1], match->dl_dst[2],
	//		match->dl_dst[3], match->dl_dst[4], match->dl_dst[5]);

	// fprintf(fp, " dl_vlan %u dl_vlan_pcp %u dl_type %u nw_tos %u nw_proto %u nw_src %u nw_dst %u tp_src %u tp_dst %u\n",
	//		ntohs(match->dl_vlan), match->dl_vlan_pcp, ntohs(match->dl_type),
	//		match->nw_tos, match->nw_proto,
	//		ntohl(match->nw_src), ntohl(match->nw_dst),
	//		ntohs(match->tp_src), ntohs(match->tp_dst));
}
