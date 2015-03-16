/* Copyright (c) 2008 The Board of Trustees of The Leland Stanford Junior University */
/* Copyright (c) 2011, 2012 Open Networking Foundation */
/* Copyright (c) 2012, 2013 Big Switch Networks, Inc. */
/* See the file LICENSE.loci which should have been included in the source distribution */

/**
 *
 * AUTOMATICALLY GENERATED FILE.  Edits will be lost on regen.
 *
 * Source file for OpenFlow message validation.
 *
 */

#include "loci_log.h"
#include <loci/loci.h>
#include <loci/loci_validator.h>

#define VALIDATOR_LOG(...) LOCI_LOG_ERROR("Validator Error: " __VA_ARGS__)


/* Forward declarations */
static int __attribute__((unused)) loci_validate_of_action_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_experimenter_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_checksum_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_mirror_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_enqueue_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_nicira_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_output_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_dl_dst_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_dl_src_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_nw_dst_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_nw_src_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_nw_tos_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_tp_dst_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_tp_src_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_vlan_pcp_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_vlan_vid_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_strip_vlan_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_header_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_aggregate_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_aggregate_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_action_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_request_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_barrier_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_barrier_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_header_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_ip_mask_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_ip_mask_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_l2_table_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_l2_table_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_hybrid_get_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_hybrid_get_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_interface_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_ip_mask_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_l2_table_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_l2_table_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_mirroring_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_shell_command_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_shell_output_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_shell_status_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_desc_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_desc_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_echo_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_echo_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_features_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_features_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_mod_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_add_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_delete_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_delete_strict_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_modify_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_modify_strict_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_removed_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_entry_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_get_config_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_get_config_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_failed_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_match_v1_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_nicira_header_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_nicira_controller_role_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_nicira_controller_role_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_in_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_out_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_queue_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_entry_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_status_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_get_config_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_get_config_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_min_rate_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_entry_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_set_config_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_entry_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_experimenter_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_checksum_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_mirror_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_copy_ttl_in_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_copy_ttl_out_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_dec_mpls_ttl_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_dec_nw_ttl_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_group_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_nicira_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_output_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_pop_mpls_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_pop_vlan_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_push_mpls_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_push_vlan_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_dl_dst_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_dl_src_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_mpls_label_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_mpls_tc_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_mpls_ttl_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_nw_dst_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_nw_ecn_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_nw_src_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_nw_tos_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_nw_ttl_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_queue_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_tp_dst_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_tp_src_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_vlan_pcp_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_vlan_vid_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_header_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_aggregate_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_aggregate_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_action_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_instruction_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_match_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_request_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_barrier_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_barrier_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_header_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_interface_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_mirroring_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bucket_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bucket_counter_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_desc_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_desc_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_echo_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_echo_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_features_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_features_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_mod_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_add_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_delete_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_delete_strict_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_modify_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_modify_strict_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_removed_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_get_config_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_get_config_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_mod_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_add_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_delete_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_desc_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_desc_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_desc_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_mod_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_modify_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_apply_actions_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_clear_actions_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_experimenter_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_goto_table_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_write_actions_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_write_metadata_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_match_v2_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_nicira_header_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_in_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_out_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_queue_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_status_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_get_config_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_get_config_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_min_rate_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_set_config_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_switch_config_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_experimenter_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_checksum_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_mirror_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_copy_ttl_in_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_copy_ttl_out_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_dec_mpls_ttl_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_dec_nw_ttl_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_group_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_nicira_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_output_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_pop_mpls_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_pop_vlan_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_push_mpls_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_push_vlan_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_field_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_mpls_ttl_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_nw_ttl_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_queue_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_header_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_aggregate_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_aggregate_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_action_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_instruction_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_match_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_request_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_barrier_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_barrier_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_header_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_interface_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_mirroring_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bucket_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bucket_counter_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_desc_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_desc_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_echo_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_echo_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_features_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_features_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_mod_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_add_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_delete_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_delete_strict_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_modify_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_modify_strict_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_removed_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_get_config_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_get_config_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_mod_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_add_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_delete_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_desc_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_desc_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_desc_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_features_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_features_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_mod_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_modify_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_apply_actions_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_clear_actions_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_experimenter_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_goto_table_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_write_actions_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_write_metadata_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_match_v3_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_nicira_header_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_op_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_op_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_sha_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_sha_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_spa_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_spa_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_tha_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_tha_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_tpa_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_tpa_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_egr_port_group_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_egr_port_group_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_in_ports_128_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_in_ports_512_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_in_ports_512_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_ingress_port_group_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_ingress_port_group_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l2_cache_hit_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l2_cache_hit_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_src_class_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_lag_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_lag_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_tcp_flags_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_tcp_flags_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf0_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf0_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf1_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf1_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf2_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf2_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf3_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf3_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf4_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf4_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf5_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf5_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf6_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf6_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf7_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf7_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_vrf_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_vrf_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_type_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_type_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv4_code_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv4_code_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv4_type_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv4_type_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv6_code_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv6_code_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv6_type_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv6_type_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_in_phy_port_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_in_phy_port_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_in_port_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_in_port_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_dscp_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_dscp_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_ecn_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_ecn_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_proto_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_proto_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv4_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv4_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv4_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv4_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_flabel_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_flabel_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_sll_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_target_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_target_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_tll_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_metadata_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_metadata_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_label_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_label_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_tc_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_tc_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_sctp_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_sctp_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_sctp_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_sctp_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tcp_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tcp_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tcp_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tcp_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_ipv4_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_ipv4_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_ipv4_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_ipv4_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_udp_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_udp_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_udp_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_udp_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_vlan_pcp_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_vlan_pcp_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_vlan_vid_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_vlan_vid_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_in_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_out_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_queue_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_status_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_get_config_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_get_config_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_experimenter_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_max_rate_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_min_rate_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_role_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_role_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_role_request_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_set_config_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_switch_config_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_bsn_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_checksum_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_bsn_checksum_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_gentable_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_bsn_gentable_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_mirror_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_bsn_mirror_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_bsn_set_tunnel_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_copy_ttl_in_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_copy_ttl_in_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_copy_ttl_out_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_copy_ttl_out_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_dec_mpls_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_dec_mpls_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_dec_nw_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_dec_nw_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_group_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_group_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_nicira_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_nicira_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_nicira_dec_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_output_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_output_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_pop_mpls_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_pop_mpls_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_pop_pbb_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_pop_pbb_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_pop_vlan_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_pop_vlan_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_push_mpls_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_push_mpls_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_push_pbb_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_push_pbb_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_push_vlan_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_push_vlan_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_field_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_set_field_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_mpls_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_set_mpls_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_nw_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_set_nw_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_queue_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_set_queue_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_header_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_aggregate_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_aggregate_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_get_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_get_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_set_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_action_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_instruction_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_match_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_request_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_barrier_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_barrier_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_header_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_arp_idle_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_controller_connection_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_controller_connections_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_controller_connections_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_debug_counter_desc_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_debug_counter_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_debug_counter_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_debug_counter_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_debug_counter_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_debug_counter_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_checksum_bucket_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_checksum_bucket_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_checksum_bucket_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_idle_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_idle_enable_get_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_idle_enable_get_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_idle_enable_set_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_idle_enable_set_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_generic_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_generic_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_generic_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_bucket_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_bucket_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_bucket_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_clear_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_clear_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_desc_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_add_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_delete_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_desc_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_set_buckets_size_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_switch_pipeline_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_switch_pipeline_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_image_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_image_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_interface_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lacp_convergence_notif_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lacp_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lacp_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lacp_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_log_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lua_command_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lua_command_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lua_notification_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lua_upload_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_port_counter_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_port_counter_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_port_counter_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_role_status_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_aux_cxns_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_aux_cxns_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_lacp_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_lacp_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_mirroring_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_switch_pipeline_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_switch_pipeline_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_switch_pipeline_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_switch_pipeline_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_switch_pipeline_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_table_checksum_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_table_checksum_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_table_checksum_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_table_set_buckets_size_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_time_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_time_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_actor_key_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_actor_port_num_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_actor_port_priority_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_actor_state_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_actor_system_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_actor_system_priority_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_broadcast_query_timeout_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_bucket_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_circuit_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_convergence_status_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_crc_enabled_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_data_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_eth_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_eth_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_external_gateway_ip_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_external_gateway_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_external_ip_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_external_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_external_netmask_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_header_size_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_icmp_code_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_icmp_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_icmp_type_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_idle_notification_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_idle_time_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_idle_timeout_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_internal_gateway_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_internal_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_interval_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_ip_proto_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_ipv4_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_ipv4_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_ipv4_netmask_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_ipv4_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_mac_mask_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_miss_packets_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_mpls_control_word_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_mpls_label_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_mpls_sequenced_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_name_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_partner_key_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_partner_port_num_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_partner_port_priority_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_partner_state_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_partner_system_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_partner_system_priority_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_port_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_priority_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_queue_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_queue_weight_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_reference_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_reply_packets_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_request_packets_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_rx_bytes_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_rx_packets_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_sampling_rate_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_sub_agent_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_tcp_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_tcp_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_tx_bytes_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_tx_packets_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_udf_anchor_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_udf_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_udf_length_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_udf_offset_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_udp_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_udp_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_unicast_query_timeout_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_vlan_vid_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_vrf_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vlan_counter_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vlan_counter_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vlan_counter_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vrf_counter_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vrf_counter_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vrf_counter_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bucket_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bucket_counter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_echo_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_echo_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_features_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_features_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_mod_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_add_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_delete_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_delete_strict_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_modify_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_modify_strict_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_removed_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_get_config_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_get_config_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_mod_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_add_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_delete_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_desc_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_features_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_features_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_mod_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_modify_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_elem_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_elem_versionbitmap_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_apply_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_apply_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_arp_offload_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_arp_offload_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_auto_negotiation_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_auto_negotiation_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_deny_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_deny_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_dhcp_offload_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_dhcp_offload_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_disable_split_horizon_check_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_disable_split_horizon_check_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_disable_src_mac_check_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_disable_src_mac_check_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_disable_vlan_counters_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_disable_vlan_counters_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_packet_of_death_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_packet_of_death_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_permit_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_permit_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_prioritize_pdus_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_prioritize_pdus_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_require_vlan_xlate_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_require_vlan_xlate_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_span_destination_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_span_destination_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_clear_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_clear_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_goto_table_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_goto_table_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_meter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_meter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_write_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_write_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_write_metadata_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_write_metadata_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_match_v3_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_band_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_band_drop_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_band_dscp_remark_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_band_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_band_stats_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_config_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_config_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_config_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_features_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_features_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_features_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_mod_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_mod_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_stats_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_nicira_header_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_op_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_op_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_sha_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_sha_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_spa_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_spa_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_tha_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_tha_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_tpa_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_tpa_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_egr_port_group_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_egr_port_group_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_in_ports_128_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_in_ports_512_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_in_ports_512_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_ingress_port_group_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_ingress_port_group_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l2_cache_hit_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l2_cache_hit_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_src_class_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_lag_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_lag_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_tcp_flags_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_tcp_flags_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf0_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf0_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf1_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf1_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf2_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf2_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf3_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf3_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf4_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf4_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf5_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf5_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf6_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf6_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf7_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf7_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_vrf_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_vrf_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_type_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_type_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv4_code_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv4_code_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv4_type_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv4_type_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv6_code_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv6_code_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv6_type_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv6_type_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_in_phy_port_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_in_phy_port_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_in_port_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_in_port_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_dscp_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_dscp_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_ecn_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_ecn_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_proto_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_proto_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv4_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv4_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv4_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv4_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_exthdr_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_exthdr_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_flabel_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_flabel_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_sll_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_target_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_target_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_tll_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_metadata_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_metadata_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_bos_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_bos_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_label_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_label_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_tc_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_tc_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_sctp_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_sctp_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_sctp_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_sctp_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tcp_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tcp_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tcp_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tcp_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_ipv4_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_ipv4_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_ipv4_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_ipv4_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_udp_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_udp_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_udp_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_udp_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_vlan_pcp_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_vlan_pcp_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_vlan_vid_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_vlan_vid_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_in_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_out_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_queue_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_status_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_get_config_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_get_config_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_max_rate_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_min_rate_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_role_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_role_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_role_request_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_set_config_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_switch_config_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_apply_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_apply_actions_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_apply_setfield_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_apply_setfield_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_experimenter_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_instructions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_instructions_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_match_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_next_tables_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_next_tables_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_wildcards_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_write_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_write_actions_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_write_setfield_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_write_setfield_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_features_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_features_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_features_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_features_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_uint32_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_uint64_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_uint8_OF_VERSION_1_3(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_bsn_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_checksum_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_bsn_checksum_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_gentable_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_bsn_gentable_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_mirror_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_bsn_mirror_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_bsn_set_tunnel_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_copy_ttl_in_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_copy_ttl_in_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_copy_ttl_out_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_copy_ttl_out_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_dec_mpls_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_dec_mpls_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_dec_nw_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_dec_nw_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_group_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_group_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_nicira_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_nicira_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_nicira_dec_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_output_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_output_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_pop_mpls_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_pop_mpls_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_pop_pbb_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_pop_pbb_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_pop_vlan_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_pop_vlan_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_push_mpls_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_push_mpls_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_push_pbb_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_push_pbb_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_push_vlan_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_push_vlan_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_field_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_set_field_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_mpls_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_set_mpls_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_nw_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_set_nw_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_set_queue_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_action_id_set_queue_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_header_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_aggregate_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_aggregate_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_experimenter_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_experimenter_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_flow_removed_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_flow_removed_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_packet_in_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_packet_in_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_port_status_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_port_status_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_requestforward_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_requestforward_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_role_status_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_role_status_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_table_status_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_config_prop_table_status_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_get_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_get_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_async_set_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_action_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_instruction_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_match_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_property_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bad_request_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_barrier_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_barrier_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_header_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_arp_idle_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_controller_connection_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_controller_connections_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_controller_connections_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_debug_counter_desc_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_debug_counter_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_debug_counter_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_debug_counter_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_debug_counter_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_debug_counter_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_checksum_bucket_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_checksum_bucket_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_checksum_bucket_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_idle_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_idle_enable_get_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_idle_enable_get_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_idle_enable_set_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_flow_idle_enable_set_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_generic_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_generic_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_generic_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_bucket_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_bucket_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_bucket_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_clear_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_clear_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_desc_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_add_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_delete_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_desc_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_entry_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_set_buckets_size_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_gentable_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_switch_pipeline_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_get_switch_pipeline_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_image_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_image_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_interface_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lacp_convergence_notif_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lacp_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lacp_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lacp_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_log_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lua_command_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lua_command_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lua_notification_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_lua_upload_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_port_counter_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_port_counter_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_port_counter_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_aux_cxns_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_aux_cxns_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_lacp_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_lacp_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_mirroring_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_switch_pipeline_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_set_switch_pipeline_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_switch_pipeline_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_switch_pipeline_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_switch_pipeline_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_table_checksum_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_table_checksum_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_table_checksum_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_table_set_buckets_size_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_time_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_time_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_actor_key_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_actor_port_num_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_actor_port_priority_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_actor_state_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_actor_system_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_actor_system_priority_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_broadcast_query_timeout_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_bucket_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_circuit_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_convergence_status_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_crc_enabled_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_data_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_eth_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_eth_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_external_gateway_ip_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_external_gateway_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_external_ip_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_external_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_external_netmask_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_header_size_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_icmp_code_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_icmp_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_icmp_type_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_idle_notification_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_idle_time_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_idle_timeout_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_internal_gateway_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_internal_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_interval_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_ip_proto_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_ipv4_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_ipv4_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_ipv4_netmask_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_ipv4_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_mac_mask_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_miss_packets_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_mpls_control_word_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_mpls_label_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_mpls_sequenced_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_name_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_partner_key_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_partner_port_num_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_partner_port_priority_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_partner_state_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_partner_system_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_partner_system_priority_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_port_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_priority_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_queue_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_queue_weight_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_reference_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_reply_packets_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_request_packets_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_rx_bytes_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_rx_packets_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_sampling_rate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_sub_agent_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_tcp_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_tcp_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_tx_bytes_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_tx_packets_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_udf_anchor_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_udf_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_udf_length_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_udf_offset_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_udp_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_udp_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_unicast_query_timeout_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_vlan_vid_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_tlv_vrf_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vlan_counter_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vlan_counter_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vlan_counter_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vrf_counter_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vrf_counter_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bsn_vrf_counter_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bucket_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bucket_counter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bundle_add_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bundle_ctrl_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bundle_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bundle_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_bundle_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_echo_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_echo_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_experimenter_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_features_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_features_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_mod_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_add_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_delete_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_delete_strict_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_modify_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_modify_strict_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_monitor_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_removed_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_flow_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_get_config_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_get_config_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_mod_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_add_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_delete_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_desc_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_features_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_features_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_mod_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_modify_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_group_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_elem_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_elem_versionbitmap_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_hello_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_apply_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_apply_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_arp_offload_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_arp_offload_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_auto_negotiation_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_auto_negotiation_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_deny_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_deny_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_dhcp_offload_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_dhcp_offload_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_disable_src_mac_check_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_disable_src_mac_check_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_disable_vlan_counters_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_disable_vlan_counters_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_packet_of_death_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_packet_of_death_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_permit_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_permit_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_prioritize_pdus_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_prioritize_pdus_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_require_vlan_xlate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_require_vlan_xlate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_bsn_span_destination_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_bsn_span_destination_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_clear_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_clear_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_goto_table_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_goto_table_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_meter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_meter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_write_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_write_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_write_metadata_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_instruction_id_write_metadata_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_match_v3_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_band_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_band_drop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_band_dscp_remark_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_band_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_band_stats_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_config_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_config_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_config_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_features_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_features_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_features_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_mod_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_mod_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_stats_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_meter_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_nicira_header_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_op_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_op_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_sha_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_sha_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_spa_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_spa_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_tha_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_tha_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_tpa_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_arp_tpa_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_egr_port_group_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_egr_port_group_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_in_ports_128_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_in_ports_512_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_in_ports_512_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_ingress_port_group_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_ingress_port_group_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_src_class_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_lag_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_lag_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_tcp_flags_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_tcp_flags_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf0_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf0_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf1_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf1_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf2_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf2_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf3_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf3_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf4_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf4_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf5_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf5_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf6_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf6_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf7_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_udf7_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_vrf_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_bsn_vrf_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_type_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_eth_type_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv4_code_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv4_code_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv4_type_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv4_type_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv6_code_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv6_code_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv6_type_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_icmpv6_type_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_in_phy_port_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_in_phy_port_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_in_port_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_in_port_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_dscp_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_dscp_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_ecn_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_ecn_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_proto_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ip_proto_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv4_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv4_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv4_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv4_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_exthdr_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_exthdr_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_flabel_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_flabel_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_sll_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_target_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_target_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_tll_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_ipv6_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_metadata_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_metadata_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_bos_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_bos_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_label_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_label_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_tc_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_mpls_tc_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_pbb_uca_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_pbb_uca_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_sctp_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_sctp_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_sctp_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_sctp_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tcp_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tcp_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tcp_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tcp_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_ipv4_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_ipv4_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_ipv4_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_tunnel_ipv4_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_udp_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_udp_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_udp_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_udp_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_vlan_pcp_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_vlan_pcp_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_vlan_vid_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_oxm_vlan_vid_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_in_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_out_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_packet_queue_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_prop_bsn_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_prop_bsn_uplink_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_prop_ethernet_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_prop_optical_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_prop_ethernet_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_mod_prop_optical_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_prop_ethernet_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_prop_optical_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_port_status_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_desc_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_desc_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_desc_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_desc_prop_max_rate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_desc_prop_min_rate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_max_rate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_prop_min_rate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_queue_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_requestforward_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_role_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_role_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_role_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_role_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_role_request_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_role_status_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_set_config_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_switch_config_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_desc_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_apply_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_apply_actions_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_apply_setfield_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_apply_setfield_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_experimenter_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_instructions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_instructions_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_match_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_next_tables_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_next_tables_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_table_sync_from_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_wildcards_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_write_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_write_actions_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_write_setfield_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_feature_prop_write_setfield_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_features_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_features_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_features_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_features_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_prop_eviction_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_mod_prop_vacancy_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_table_status_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_uint32_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_uint64_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);
static int __attribute__((unused)) loci_validate_of_uint8_OF_VERSION_1_4(uint8_t *data, int len, int *out_len);



static int __attribute__((unused))
loci_validate_of_list_bsn_interface_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_interface_OF_VERSION_1_0(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_desc_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_desc_OF_VERSION_1_0(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_action_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_action_OF_VERSION_1_0(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_flow_stats_entry_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_flow_stats_entry_OF_VERSION_1_0(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_prop_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_prop_OF_VERSION_1_0(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_stats_entry_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_stats_entry_OF_VERSION_1_0(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_packet_queue_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_packet_queue_OF_VERSION_1_0(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_stats_entry_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_stats_entry_OF_VERSION_1_0(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_table_stats_entry_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_table_stats_entry_OF_VERSION_1_0(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}


static int
loci_validate_of_action_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_action_experimenter_OF_VERSION_1_0(data, len, out_len);
    case 0xb:
        return loci_validate_of_action_enqueue_OF_VERSION_1_0(data, len, out_len);
    case 0x0:
        return loci_validate_of_action_output_OF_VERSION_1_0(data, len, out_len);
    case 0x5:
        return loci_validate_of_action_set_dl_dst_OF_VERSION_1_0(data, len, out_len);
    case 0x4:
        return loci_validate_of_action_set_dl_src_OF_VERSION_1_0(data, len, out_len);
    case 0x7:
        return loci_validate_of_action_set_nw_dst_OF_VERSION_1_0(data, len, out_len);
    case 0x6:
        return loci_validate_of_action_set_nw_src_OF_VERSION_1_0(data, len, out_len);
    case 0x8:
        return loci_validate_of_action_set_nw_tos_OF_VERSION_1_0(data, len, out_len);
    case 0xa:
        return loci_validate_of_action_set_tp_dst_OF_VERSION_1_0(data, len, out_len);
    case 0x9:
        return loci_validate_of_action_set_tp_src_OF_VERSION_1_0(data, len, out_len);
    case 0x2:
        return loci_validate_of_action_set_vlan_pcp_OF_VERSION_1_0(data, len, out_len);
    case 0x1:
        return loci_validate_of_action_set_vlan_vid_OF_VERSION_1_0(data, len, out_len);
    case 0x3:
        return loci_validate_of_action_strip_vlan_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_experimenter_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_action_bsn_OF_VERSION_1_0(data, len, out_len);
    case 0x2320:
        return loci_validate_of_action_nicira_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_action_bsn_checksum_OF_VERSION_1_0(data, len, out_len);
    case 0x1:
        return loci_validate_of_action_bsn_mirror_OF_VERSION_1_0(data, len, out_len);
    case 0x2:
        return loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_checksum_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }

    len = 28;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_mirror_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_enqueue_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_nicira_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x12:
        return loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_output_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_dl_dst_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_dl_src_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_nw_dst_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_nw_src_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_nw_tos_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_tp_dst_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_tp_src_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_vlan_pcp_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_vlan_vid_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_strip_vlan_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_header_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint8_t wire_type;
    buf_u8_get(data + 1, &wire_type);
    switch (wire_type) {
    case 0x11:
        return loci_validate_of_stats_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x10:
        return loci_validate_of_stats_request_OF_VERSION_1_0(data, len, out_len);
    case 0x1:
        return loci_validate_of_error_msg_OF_VERSION_1_0(data, len, out_len);
    case 0x13:
        return loci_validate_of_barrier_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x12:
        return loci_validate_of_barrier_request_OF_VERSION_1_0(data, len, out_len);
    case 0x4:
        return loci_validate_of_experimenter_OF_VERSION_1_0(data, len, out_len);
    case 0x3:
        return loci_validate_of_echo_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x2:
        return loci_validate_of_echo_request_OF_VERSION_1_0(data, len, out_len);
    case 0x6:
        return loci_validate_of_features_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x5:
        return loci_validate_of_features_request_OF_VERSION_1_0(data, len, out_len);
    case 0xe:
        return loci_validate_of_flow_mod_OF_VERSION_1_0(data, len, out_len);
    case 0xb:
        return loci_validate_of_flow_removed_OF_VERSION_1_0(data, len, out_len);
    case 0x8:
        return loci_validate_of_get_config_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x7:
        return loci_validate_of_get_config_request_OF_VERSION_1_0(data, len, out_len);
    case 0x0:
        return loci_validate_of_hello_OF_VERSION_1_0(data, len, out_len);
    case 0xa:
        return loci_validate_of_packet_in_OF_VERSION_1_0(data, len, out_len);
    case 0xd:
        return loci_validate_of_packet_out_OF_VERSION_1_0(data, len, out_len);
    case 0xf:
        return loci_validate_of_port_mod_OF_VERSION_1_0(data, len, out_len);
    case 0xc:
        return loci_validate_of_port_status_OF_VERSION_1_0(data, len, out_len);
    case 0x15:
        return loci_validate_of_queue_get_config_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x14:
        return loci_validate_of_queue_get_config_request_OF_VERSION_1_0(data, len, out_len);
    case 0x9:
        return loci_validate_of_set_config_OF_VERSION_1_0(data, len, out_len);
    case 0x16:
        return loci_validate_of_table_mod_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_aggregate_stats_reply_OF_VERSION_1_0(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_stats_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x0:
        return loci_validate_of_desc_stats_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_stats_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x4:
        return loci_validate_of_port_stats_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x5:
        return loci_validate_of_queue_stats_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x3:
        return loci_validate_of_table_stats_reply_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_aggregate_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 36) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_aggregate_stats_request_OF_VERSION_1_0(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_stats_request_OF_VERSION_1_0(data, len, out_len);
    case 0x0:
        return loci_validate_of_desc_stats_request_OF_VERSION_1_0(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_stats_request_OF_VERSION_1_0(data, len, out_len);
    case 0x4:
        return loci_validate_of_port_stats_request_OF_VERSION_1_0(data, len, out_len);
    case 0x5:
        return loci_validate_of_queue_stats_request_OF_VERSION_1_0(data, len, out_len);
    case 0x3:
        return loci_validate_of_table_stats_request_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_aggregate_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }

    len = 56;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_bad_action_error_msg_OF_VERSION_1_0(data, len, out_len);
    case 0x1:
        return loci_validate_of_bad_request_error_msg_OF_VERSION_1_0(data, len, out_len);
    case 0x3:
        return loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_0(data, len, out_len);
    case 0x0:
        return loci_validate_of_hello_failed_error_msg_OF_VERSION_1_0(data, len, out_len);
    case 0x4:
        return loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_0(data, len, out_len);
    case 0x5:
        return loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_action_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_request_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_barrier_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_barrier_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_header_OF_VERSION_1_0(data, len, out_len);
    case 0x2320:
        return loci_validate_of_nicira_header_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_header_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 12, &wire_type);
    switch (wire_type) {
    case 0x16:
        return loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x15:
        return loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_0(data, len, out_len);
    case 0x14:
        return loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x13:
        return loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_0(data, len, out_len);
    case 0x17:
        return loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x12:
        return loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_0(data, len, out_len);
    case 0xa:
        return loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x9:
        return loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_0(data, len, out_len);
    case 0x2:
        return loci_validate_of_bsn_get_ip_mask_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x1:
        return loci_validate_of_bsn_get_ip_mask_request_OF_VERSION_1_0(data, len, out_len);
    case 0xe:
        return loci_validate_of_bsn_get_l2_table_reply_OF_VERSION_1_0(data, len, out_len);
    case 0xd:
        return loci_validate_of_bsn_get_l2_table_request_OF_VERSION_1_0(data, len, out_len);
    case 0x5:
        return loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x4:
        return loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_0(data, len, out_len);
    case 0x1c:
        return loci_validate_of_bsn_hybrid_get_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x1b:
        return loci_validate_of_bsn_hybrid_get_request_OF_VERSION_1_0(data, len, out_len);
    case 0x22:
        return loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x21:
        return loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_0(data, len, out_len);
    case 0x23:
        return loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_0(data, len, out_len);
    case 0x20:
        return loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x1f:
        return loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_0(data, len, out_len);
    case 0x0:
        return loci_validate_of_bsn_set_ip_mask_OF_VERSION_1_0(data, len, out_len);
    case 0x18:
        return loci_validate_of_bsn_set_l2_table_reply_OF_VERSION_1_0(data, len, out_len);
    case 0xc:
        return loci_validate_of_bsn_set_l2_table_request_OF_VERSION_1_0(data, len, out_len);
    case 0x3:
        return loci_validate_of_bsn_set_mirroring_OF_VERSION_1_0(data, len, out_len);
    case 0x19:
        return loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_0(data, len, out_len);
    case 0xb:
        return loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_0(data, len, out_len);
    case 0x6:
        return loci_validate_of_bsn_shell_command_OF_VERSION_1_0(data, len, out_len);
    case 0x7:
        return loci_validate_of_bsn_shell_output_OF_VERSION_1_0(data, len, out_len);
    case 0x8:
        return loci_validate_of_bsn_shell_status_OF_VERSION_1_0(data, len, out_len);
    case 0x10:
        return loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_0(data, len, out_len);
    case 0xf:
        return loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_0(data, len, out_len);
    case 0x1a:
        return loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_0(data, len, out_len);
    case 0x11:
        return loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_interfaces = len - 16;
    if (loci_validate_of_list_bsn_interface_OF_VERSION_1_0(data + 16, wire_len_interfaces, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_ip_mask_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_ip_mask_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_l2_table_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_l2_table_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_hybrid_get_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_hybrid_get_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_interface_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 23) {
        return -1;
    }

    len = 23;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 23) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 26) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 26) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 19) {
        return -1;
    }

    len = 19;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 19) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 23) {
        return -1;
    }

    len = 23;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 23) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 26) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 26) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_ip_mask_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_l2_table_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_l2_table_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_mirroring_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_shell_command_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_shell_output_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_shell_status_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 12, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_stats_reply_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 20, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 12, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_stats_request_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 20, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_0(data, len, out_len);
    case 0x0:
        return loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_bsn_vport_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 60) {
        return -1;
    }

    len = 60;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 60) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_desc_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 1068) {
        return -1;
    }

    len = 1068;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 1068) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_desc_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_echo_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_echo_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_features_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }

    len = wire_len;



    int wire_len_ports = len - 32;
    if (loci_validate_of_list_port_desc_OF_VERSION_1_0(data + 32, wire_len_ports, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_features_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_mod_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 72) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 72) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 56, &wire_type);
    switch (wire_type) {
    case 0x0:
        return loci_validate_of_flow_add_OF_VERSION_1_0(data, len, out_len);
    case 0x3:
        return loci_validate_of_flow_delete_OF_VERSION_1_0(data, len, out_len);
    case 0x4:
        return loci_validate_of_flow_delete_strict_OF_VERSION_1_0(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_modify_OF_VERSION_1_0(data, len, out_len);
    case 0x2:
        return loci_validate_of_flow_modify_strict_OF_VERSION_1_0(data, len, out_len);
    }

    // TODO validate of_match_t
    int wire_len_actions = len - 72;
    if (loci_validate_of_list_action_OF_VERSION_1_0(data + 72, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_add_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 72) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 72) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    int wire_len_actions = len - 72;
    if (loci_validate_of_list_action_OF_VERSION_1_0(data + 72, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_delete_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 72) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 72) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    int wire_len_actions = len - 72;
    if (loci_validate_of_list_action_OF_VERSION_1_0(data + 72, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_delete_strict_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 72) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 72) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    int wire_len_actions = len - 72;
    if (loci_validate_of_list_action_OF_VERSION_1_0(data + 72, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_modify_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 72) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 72) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    int wire_len_actions = len - 72;
    if (loci_validate_of_list_action_OF_VERSION_1_0(data + 72, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_modify_strict_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 72) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 72) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    int wire_len_actions = len - 72;
    if (loci_validate_of_list_action_OF_VERSION_1_0(data + 72, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_removed_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 88) {
        return -1;
    }

    len = 88;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 88) {
        return -1;
    }



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_entry_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 88) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 88) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    int wire_len_actions = len - 88;
    if (loci_validate_of_list_action_OF_VERSION_1_0(data + 88, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 12;
    if (loci_validate_of_list_flow_stats_entry_OF_VERSION_1_0(data + 12, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }

    len = 56;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_get_config_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_get_config_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_failed_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_match_v1_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }

    len = 40;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_nicira_header_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 12, &wire_type);
    switch (wire_type) {
    case 0xb:
        return loci_validate_of_nicira_controller_role_reply_OF_VERSION_1_0(data, len, out_len);
    case 0xa:
        return loci_validate_of_nicira_controller_role_request_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_nicira_controller_role_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_nicira_controller_role_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_in_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 18) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 18) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_out_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;

    uint16_t wire_len_actions;
    buf_u16_get(data + 14, &wire_len_actions);



    if (16 + wire_len_actions > len) {
        return -1;
    }

    if (loci_validate_of_list_action_OF_VERSION_1_0(data + 16, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_queue_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 4, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 8;
    if (loci_validate_of_list_queue_prop_OF_VERSION_1_0(data + 8, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 48) {
        return -1;
    }

    len = 48;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_entry_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 104) {
        return -1;
    }

    len = 104;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 12;
    if (loci_validate_of_list_port_stats_entry_OF_VERSION_1_0(data + 12, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_status_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 64) {
        return -1;
    }

    len = 64;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 64) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_get_config_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_queues = len - 16;
    if (loci_validate_of_list_packet_queue_OF_VERSION_1_0(data + 16, wire_len_queues, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_get_config_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_queue_prop_min_rate_OF_VERSION_1_0(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_min_rate_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_entry_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 12;
    if (loci_validate_of_list_queue_stats_entry_OF_VERSION_1_0(data + 12, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_set_config_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_entry_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 64) {
        return -1;
    }

    len = 64;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_reply_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 12;
    if (loci_validate_of_list_table_stats_entry_OF_VERSION_1_0(data + 12, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_request_OF_VERSION_1_0(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}


static int __attribute__((unused))
loci_validate_of_list_bsn_interface_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_interface_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_action_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_action_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_desc_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_desc_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_instruction_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_instruction_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_flow_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_flow_stats_entry_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bucket_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bucket_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_group_desc_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_group_desc_stats_entry_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bucket_counter_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bucket_counter_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_group_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_group_stats_entry_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_prop_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_prop_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_stats_entry_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_packet_queue_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_packet_queue_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_stats_entry_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_table_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_table_stats_entry_OF_VERSION_1_1(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}


static int
loci_validate_of_action_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_action_experimenter_OF_VERSION_1_1(data, len, out_len);
    case 0xc:
        return loci_validate_of_action_copy_ttl_in_OF_VERSION_1_1(data, len, out_len);
    case 0xb:
        return loci_validate_of_action_copy_ttl_out_OF_VERSION_1_1(data, len, out_len);
    case 0x10:
        return loci_validate_of_action_dec_mpls_ttl_OF_VERSION_1_1(data, len, out_len);
    case 0x18:
        return loci_validate_of_action_dec_nw_ttl_OF_VERSION_1_1(data, len, out_len);
    case 0x16:
        return loci_validate_of_action_group_OF_VERSION_1_1(data, len, out_len);
    case 0x0:
        return loci_validate_of_action_output_OF_VERSION_1_1(data, len, out_len);
    case 0x14:
        return loci_validate_of_action_pop_mpls_OF_VERSION_1_1(data, len, out_len);
    case 0x12:
        return loci_validate_of_action_pop_vlan_OF_VERSION_1_1(data, len, out_len);
    case 0x13:
        return loci_validate_of_action_push_mpls_OF_VERSION_1_1(data, len, out_len);
    case 0x11:
        return loci_validate_of_action_push_vlan_OF_VERSION_1_1(data, len, out_len);
    case 0x4:
        return loci_validate_of_action_set_dl_dst_OF_VERSION_1_1(data, len, out_len);
    case 0x3:
        return loci_validate_of_action_set_dl_src_OF_VERSION_1_1(data, len, out_len);
    case 0xd:
        return loci_validate_of_action_set_mpls_label_OF_VERSION_1_1(data, len, out_len);
    case 0xe:
        return loci_validate_of_action_set_mpls_tc_OF_VERSION_1_1(data, len, out_len);
    case 0xf:
        return loci_validate_of_action_set_mpls_ttl_OF_VERSION_1_1(data, len, out_len);
    case 0x6:
        return loci_validate_of_action_set_nw_dst_OF_VERSION_1_1(data, len, out_len);
    case 0x8:
        return loci_validate_of_action_set_nw_ecn_OF_VERSION_1_1(data, len, out_len);
    case 0x5:
        return loci_validate_of_action_set_nw_src_OF_VERSION_1_1(data, len, out_len);
    case 0x7:
        return loci_validate_of_action_set_nw_tos_OF_VERSION_1_1(data, len, out_len);
    case 0x17:
        return loci_validate_of_action_set_nw_ttl_OF_VERSION_1_1(data, len, out_len);
    case 0x15:
        return loci_validate_of_action_set_queue_OF_VERSION_1_1(data, len, out_len);
    case 0xa:
        return loci_validate_of_action_set_tp_dst_OF_VERSION_1_1(data, len, out_len);
    case 0x9:
        return loci_validate_of_action_set_tp_src_OF_VERSION_1_1(data, len, out_len);
    case 0x2:
        return loci_validate_of_action_set_vlan_pcp_OF_VERSION_1_1(data, len, out_len);
    case 0x1:
        return loci_validate_of_action_set_vlan_vid_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_experimenter_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_action_bsn_OF_VERSION_1_1(data, len, out_len);
    case 0x2320:
        return loci_validate_of_action_nicira_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_action_bsn_checksum_OF_VERSION_1_1(data, len, out_len);
    case 0x1:
        return loci_validate_of_action_bsn_mirror_OF_VERSION_1_1(data, len, out_len);
    case 0x2:
        return loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_checksum_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }

    len = 28;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_mirror_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_copy_ttl_in_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_copy_ttl_out_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_dec_mpls_ttl_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_dec_nw_ttl_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_group_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_nicira_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x12:
        return loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_output_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_pop_mpls_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_pop_vlan_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_push_mpls_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_push_vlan_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_dl_dst_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_dl_src_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_mpls_label_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_mpls_tc_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_mpls_ttl_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_nw_dst_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_nw_ecn_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_nw_src_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_nw_tos_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_nw_ttl_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_queue_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_tp_dst_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_tp_src_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_vlan_pcp_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_vlan_vid_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_header_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint8_t wire_type;
    buf_u8_get(data + 1, &wire_type);
    switch (wire_type) {
    case 0x13:
        return loci_validate_of_stats_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x12:
        return loci_validate_of_stats_request_OF_VERSION_1_1(data, len, out_len);
    case 0x1:
        return loci_validate_of_error_msg_OF_VERSION_1_1(data, len, out_len);
    case 0x15:
        return loci_validate_of_barrier_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x14:
        return loci_validate_of_barrier_request_OF_VERSION_1_1(data, len, out_len);
    case 0x4:
        return loci_validate_of_experimenter_OF_VERSION_1_1(data, len, out_len);
    case 0x3:
        return loci_validate_of_echo_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x2:
        return loci_validate_of_echo_request_OF_VERSION_1_1(data, len, out_len);
    case 0x6:
        return loci_validate_of_features_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x5:
        return loci_validate_of_features_request_OF_VERSION_1_1(data, len, out_len);
    case 0xe:
        return loci_validate_of_flow_mod_OF_VERSION_1_1(data, len, out_len);
    case 0xb:
        return loci_validate_of_flow_removed_OF_VERSION_1_1(data, len, out_len);
    case 0x8:
        return loci_validate_of_get_config_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x7:
        return loci_validate_of_get_config_request_OF_VERSION_1_1(data, len, out_len);
    case 0xf:
        return loci_validate_of_group_mod_OF_VERSION_1_1(data, len, out_len);
    case 0x0:
        return loci_validate_of_hello_OF_VERSION_1_1(data, len, out_len);
    case 0xa:
        return loci_validate_of_packet_in_OF_VERSION_1_1(data, len, out_len);
    case 0xd:
        return loci_validate_of_packet_out_OF_VERSION_1_1(data, len, out_len);
    case 0x10:
        return loci_validate_of_port_mod_OF_VERSION_1_1(data, len, out_len);
    case 0xc:
        return loci_validate_of_port_status_OF_VERSION_1_1(data, len, out_len);
    case 0x17:
        return loci_validate_of_queue_get_config_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x16:
        return loci_validate_of_queue_get_config_request_OF_VERSION_1_1(data, len, out_len);
    case 0x9:
        return loci_validate_of_set_config_OF_VERSION_1_1(data, len, out_len);
    case 0x11:
        return loci_validate_of_table_mod_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_aggregate_stats_reply_OF_VERSION_1_1(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_stats_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x0:
        return loci_validate_of_desc_stats_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_stats_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x7:
        return loci_validate_of_group_desc_stats_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x6:
        return loci_validate_of_group_stats_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x4:
        return loci_validate_of_port_stats_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x5:
        return loci_validate_of_queue_stats_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x3:
        return loci_validate_of_table_stats_reply_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_aggregate_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }

    len = 40;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_aggregate_stats_request_OF_VERSION_1_1(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_stats_request_OF_VERSION_1_1(data, len, out_len);
    case 0x0:
        return loci_validate_of_desc_stats_request_OF_VERSION_1_1(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_stats_request_OF_VERSION_1_1(data, len, out_len);
    case 0x7:
        return loci_validate_of_group_desc_stats_request_OF_VERSION_1_1(data, len, out_len);
    case 0x6:
        return loci_validate_of_group_stats_request_OF_VERSION_1_1(data, len, out_len);
    case 0x4:
        return loci_validate_of_port_stats_request_OF_VERSION_1_1(data, len, out_len);
    case 0x5:
        return loci_validate_of_queue_stats_request_OF_VERSION_1_1(data, len, out_len);
    case 0x3:
        return loci_validate_of_table_stats_request_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_aggregate_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 136) {
        return -1;
    }

    len = 136;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 136) {
        return -1;
    }



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_bad_action_error_msg_OF_VERSION_1_1(data, len, out_len);
    case 0x3:
        return loci_validate_of_bad_instruction_error_msg_OF_VERSION_1_1(data, len, out_len);
    case 0x4:
        return loci_validate_of_bad_match_error_msg_OF_VERSION_1_1(data, len, out_len);
    case 0x1:
        return loci_validate_of_bad_request_error_msg_OF_VERSION_1_1(data, len, out_len);
    case 0x5:
        return loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_1(data, len, out_len);
    case 0x6:
        return loci_validate_of_group_mod_failed_error_msg_OF_VERSION_1_1(data, len, out_len);
    case 0x0:
        return loci_validate_of_hello_failed_error_msg_OF_VERSION_1_1(data, len, out_len);
    case 0x7:
        return loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_1(data, len, out_len);
    case 0x9:
        return loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_1(data, len, out_len);
    case 0xa:
        return loci_validate_of_switch_config_failed_error_msg_OF_VERSION_1_1(data, len, out_len);
    case 0x8:
        return loci_validate_of_table_mod_failed_error_msg_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_action_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_instruction_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_match_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_request_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_barrier_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_barrier_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_header_OF_VERSION_1_1(data, len, out_len);
    case 0x2320:
        return loci_validate_of_nicira_header_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_header_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 12, &wire_type);
    switch (wire_type) {
    case 0x16:
        return loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x15:
        return loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_1(data, len, out_len);
    case 0x14:
        return loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x13:
        return loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_1(data, len, out_len);
    case 0x17:
        return loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x12:
        return loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_1(data, len, out_len);
    case 0xa:
        return loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x9:
        return loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_1(data, len, out_len);
    case 0x5:
        return loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x4:
        return loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_1(data, len, out_len);
    case 0x22:
        return loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x21:
        return loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_1(data, len, out_len);
    case 0x23:
        return loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_1(data, len, out_len);
    case 0x20:
        return loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x1f:
        return loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_1(data, len, out_len);
    case 0x3:
        return loci_validate_of_bsn_set_mirroring_OF_VERSION_1_1(data, len, out_len);
    case 0x19:
        return loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_1(data, len, out_len);
    case 0xb:
        return loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_1(data, len, out_len);
    case 0x10:
        return loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_1(data, len, out_len);
    case 0xf:
        return loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_1(data, len, out_len);
    case 0x1a:
        return loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_1(data, len, out_len);
    case 0x11:
        return loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_interfaces = len - 16;
    if (loci_validate_of_list_bsn_interface_OF_VERSION_1_1(data + 16, wire_len_interfaces, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_interface_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 25) {
        return -1;
    }

    len = 25;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 25) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 21) {
        return -1;
    }

    len = 21;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 21) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 25) {
        return -1;
    }

    len = 25;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 25) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_mirroring_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 16, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_stats_reply_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 20, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 16, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_stats_request_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 20, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_1(data, len, out_len);
    case 0x0:
        return loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_bsn_vport_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 64) {
        return -1;
    }

    len = 64;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 64) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bucket_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_actions = len - 16;
    if (loci_validate_of_list_action_OF_VERSION_1_1(data + 16, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bucket_counter_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_desc_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 1072) {
        return -1;
    }

    len = 1072;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 1072) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_desc_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_echo_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_echo_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_features_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }

    len = wire_len;



    int wire_len_ports = len - 32;
    if (loci_validate_of_list_port_desc_OF_VERSION_1_1(data + 32, wire_len_ports, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_features_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_mod_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 136) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 136) {
        return -1;
    }

    len = wire_len;


    uint8_t wire_type;
    buf_u8_get(data + 25, &wire_type);
    switch (wire_type) {
    case 0x0:
        return loci_validate_of_flow_add_OF_VERSION_1_1(data, len, out_len);
    case 0x3:
        return loci_validate_of_flow_delete_OF_VERSION_1_1(data, len, out_len);
    case 0x4:
        return loci_validate_of_flow_delete_strict_OF_VERSION_1_1(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_modify_OF_VERSION_1_1(data, len, out_len);
    case 0x2:
        return loci_validate_of_flow_modify_strict_OF_VERSION_1_1(data, len, out_len);
    }

    // TODO validate of_match_t
    int wire_len_instructions = len - 136;
    if (loci_validate_of_list_instruction_OF_VERSION_1_1(data + 136, wire_len_instructions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_add_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 136) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 136) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    int wire_len_instructions = len - 136;
    if (loci_validate_of_list_instruction_OF_VERSION_1_1(data + 136, wire_len_instructions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_delete_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 136) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 136) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    int wire_len_instructions = len - 136;
    if (loci_validate_of_list_instruction_OF_VERSION_1_1(data + 136, wire_len_instructions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_delete_strict_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 136) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 136) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    int wire_len_instructions = len - 136;
    if (loci_validate_of_list_instruction_OF_VERSION_1_1(data + 136, wire_len_instructions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_modify_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 136) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 136) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    int wire_len_instructions = len - 136;
    if (loci_validate_of_list_instruction_OF_VERSION_1_1(data + 136, wire_len_instructions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_modify_strict_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 136) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 136) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    int wire_len_instructions = len - 136;
    if (loci_validate_of_list_instruction_OF_VERSION_1_1(data + 136, wire_len_instructions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_removed_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 136) {
        return -1;
    }

    len = 136;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 136) {
        return -1;
    }



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 136) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 136) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    int wire_len_instructions = len - 136;
    if (loci_validate_of_list_instruction_OF_VERSION_1_1(data + 136, wire_len_instructions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_flow_stats_entry_OF_VERSION_1_1(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 136) {
        return -1;
    }

    len = 136;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 136) {
        return -1;
    }



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_get_config_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_get_config_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_mod_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x0:
        return loci_validate_of_group_add_OF_VERSION_1_1(data, len, out_len);
    case 0x2:
        return loci_validate_of_group_delete_OF_VERSION_1_1(data, len, out_len);
    case 0x1:
        return loci_validate_of_group_modify_OF_VERSION_1_1(data, len, out_len);
    }

    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_1(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_add_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_1(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_delete_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_1(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_desc_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 8;
    if (loci_validate_of_list_bucket_OF_VERSION_1_1(data + 8, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_desc_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_group_desc_stats_entry_OF_VERSION_1_1(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_desc_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_mod_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_modify_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_1(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }

    len = wire_len;



    int wire_len_bucket_stats = len - 32;
    if (loci_validate_of_list_bucket_counter_OF_VERSION_1_1(data + 32, wire_len_bucket_stats, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_group_stats_entry_OF_VERSION_1_1(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_instruction_apply_actions_OF_VERSION_1_1(data, len, out_len);
    case 0x5:
        return loci_validate_of_instruction_clear_actions_OF_VERSION_1_1(data, len, out_len);
    case 0xffff:
        return loci_validate_of_instruction_experimenter_OF_VERSION_1_1(data, len, out_len);
    case 0x1:
        return loci_validate_of_instruction_goto_table_OF_VERSION_1_1(data, len, out_len);
    case 0x3:
        return loci_validate_of_instruction_write_actions_OF_VERSION_1_1(data, len, out_len);
    case 0x2:
        return loci_validate_of_instruction_write_metadata_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_apply_actions_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_actions = len - 8;
    if (loci_validate_of_list_action_OF_VERSION_1_1(data + 8, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_clear_actions_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_experimenter_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_goto_table_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_write_actions_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_actions = len - 8;
    if (loci_validate_of_list_action_OF_VERSION_1_1(data + 8, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_write_metadata_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_match_v2_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 88) {
        return -1;
    }

    len = 88;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 88) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_nicira_header_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 12, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_in_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_out_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;

    uint16_t wire_len_actions;
    buf_u16_get(data + 16, &wire_len_actions);



    if (24 + wire_len_actions > len) {
        return -1;
    }

    if (loci_validate_of_list_action_OF_VERSION_1_1(data + 24, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_queue_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 4, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 8;
    if (loci_validate_of_list_queue_prop_OF_VERSION_1_1(data + 8, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 64) {
        return -1;
    }

    len = 64;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }

    len = 40;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 104) {
        return -1;
    }

    len = 104;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_port_stats_entry_OF_VERSION_1_1(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_status_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 80) {
        return -1;
    }

    len = 80;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 80) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_get_config_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_queues = len - 16;
    if (loci_validate_of_list_packet_queue_OF_VERSION_1_1(data + 16, wire_len_queues, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_get_config_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_queue_prop_min_rate_OF_VERSION_1_1(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_min_rate_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_queue_stats_entry_OF_VERSION_1_1(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_set_config_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_switch_config_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_failed_error_msg_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_entry_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 88) {
        return -1;
    }

    len = 88;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_reply_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_table_stats_entry_OF_VERSION_1_1(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_request_OF_VERSION_1_1(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}


static int __attribute__((unused))
loci_validate_of_list_bsn_interface_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_interface_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_action_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_action_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_desc_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_desc_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_instruction_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_instruction_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_flow_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_flow_stats_entry_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bucket_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bucket_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_group_desc_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_group_desc_stats_entry_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bucket_counter_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bucket_counter_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_group_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_group_stats_entry_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_oxm_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_oxm_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_prop_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_prop_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_stats_entry_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_packet_queue_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_packet_queue_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_stats_entry_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_table_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_table_stats_entry_OF_VERSION_1_2(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}


static int
loci_validate_of_action_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_action_experimenter_OF_VERSION_1_2(data, len, out_len);
    case 0xc:
        return loci_validate_of_action_copy_ttl_in_OF_VERSION_1_2(data, len, out_len);
    case 0xb:
        return loci_validate_of_action_copy_ttl_out_OF_VERSION_1_2(data, len, out_len);
    case 0x10:
        return loci_validate_of_action_dec_mpls_ttl_OF_VERSION_1_2(data, len, out_len);
    case 0x18:
        return loci_validate_of_action_dec_nw_ttl_OF_VERSION_1_2(data, len, out_len);
    case 0x16:
        return loci_validate_of_action_group_OF_VERSION_1_2(data, len, out_len);
    case 0x0:
        return loci_validate_of_action_output_OF_VERSION_1_2(data, len, out_len);
    case 0x14:
        return loci_validate_of_action_pop_mpls_OF_VERSION_1_2(data, len, out_len);
    case 0x12:
        return loci_validate_of_action_pop_vlan_OF_VERSION_1_2(data, len, out_len);
    case 0x13:
        return loci_validate_of_action_push_mpls_OF_VERSION_1_2(data, len, out_len);
    case 0x11:
        return loci_validate_of_action_push_vlan_OF_VERSION_1_2(data, len, out_len);
    case 0x19:
        return loci_validate_of_action_set_field_OF_VERSION_1_2(data, len, out_len);
    case 0xf:
        return loci_validate_of_action_set_mpls_ttl_OF_VERSION_1_2(data, len, out_len);
    case 0x17:
        return loci_validate_of_action_set_nw_ttl_OF_VERSION_1_2(data, len, out_len);
    case 0x15:
        return loci_validate_of_action_set_queue_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_experimenter_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_action_bsn_OF_VERSION_1_2(data, len, out_len);
    case 0x2320:
        return loci_validate_of_action_nicira_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_action_bsn_checksum_OF_VERSION_1_2(data, len, out_len);
    case 0x1:
        return loci_validate_of_action_bsn_mirror_OF_VERSION_1_2(data, len, out_len);
    case 0x2:
        return loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_checksum_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }

    len = 28;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_mirror_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_copy_ttl_in_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_copy_ttl_out_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_dec_mpls_ttl_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_dec_nw_ttl_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_group_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_nicira_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x12:
        return loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_output_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_pop_mpls_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_pop_vlan_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_push_mpls_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_push_vlan_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }



    uint32_t wire_type;
    buf_u32_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x80002a02:
        return loci_validate_of_oxm_arp_op_OF_VERSION_1_2(data, len, out_len);
    case 0x80002b04:
        return loci_validate_of_oxm_arp_op_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80003006:
        return loci_validate_of_oxm_arp_sha_OF_VERSION_1_2(data, len, out_len);
    case 0x8000310c:
        return loci_validate_of_oxm_arp_sha_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80002c04:
        return loci_validate_of_oxm_arp_spa_OF_VERSION_1_2(data, len, out_len);
    case 0x80002d08:
        return loci_validate_of_oxm_arp_spa_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80003206:
        return loci_validate_of_oxm_arp_tha_OF_VERSION_1_2(data, len, out_len);
    case 0x8000330c:
        return loci_validate_of_oxm_arp_tha_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80002e04:
        return loci_validate_of_oxm_arp_tpa_OF_VERSION_1_2(data, len, out_len);
    case 0x80002f08:
        return loci_validate_of_oxm_arp_tpa_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x30e04:
        return loci_validate_of_oxm_bsn_egr_port_group_id_OF_VERSION_1_2(data, len, out_len);
    case 0x30f08:
        return loci_validate_of_oxm_bsn_egr_port_group_id_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x30601:
        return loci_validate_of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_2(data, len, out_len);
    case 0x30702:
        return loci_validate_of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x30010:
        return loci_validate_of_oxm_bsn_in_ports_128_OF_VERSION_1_2(data, len, out_len);
    case 0x30120:
        return loci_validate_of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x32640:
        return loci_validate_of_oxm_bsn_in_ports_512_OF_VERSION_1_2(data, len, out_len);
    case 0x32780:
        return loci_validate_of_oxm_bsn_in_ports_512_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x32804:
        return loci_validate_of_oxm_bsn_ingress_port_group_id_OF_VERSION_1_2(data, len, out_len);
    case 0x32908:
        return loci_validate_of_oxm_bsn_ingress_port_group_id_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x32401:
        return loci_validate_of_oxm_bsn_l2_cache_hit_OF_VERSION_1_2(data, len, out_len);
    case 0x32502:
        return loci_validate_of_oxm_bsn_l2_cache_hit_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x30c04:
        return loci_validate_of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_2(data, len, out_len);
    case 0x30d08:
        return loci_validate_of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x30804:
        return loci_validate_of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_2(data, len, out_len);
    case 0x30908:
        return loci_validate_of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x30a04:
        return loci_validate_of_oxm_bsn_l3_src_class_id_OF_VERSION_1_2(data, len, out_len);
    case 0x30b08:
        return loci_validate_of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x30204:
        return loci_validate_of_oxm_bsn_lag_id_OF_VERSION_1_2(data, len, out_len);
    case 0x30308:
        return loci_validate_of_oxm_bsn_lag_id_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x32002:
        return loci_validate_of_oxm_bsn_tcp_flags_OF_VERSION_1_2(data, len, out_len);
    case 0x32104:
        return loci_validate_of_oxm_bsn_tcp_flags_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x31004:
        return loci_validate_of_oxm_bsn_udf0_OF_VERSION_1_2(data, len, out_len);
    case 0x31108:
        return loci_validate_of_oxm_bsn_udf0_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x31204:
        return loci_validate_of_oxm_bsn_udf1_OF_VERSION_1_2(data, len, out_len);
    case 0x31308:
        return loci_validate_of_oxm_bsn_udf1_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x31404:
        return loci_validate_of_oxm_bsn_udf2_OF_VERSION_1_2(data, len, out_len);
    case 0x31508:
        return loci_validate_of_oxm_bsn_udf2_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x31604:
        return loci_validate_of_oxm_bsn_udf3_OF_VERSION_1_2(data, len, out_len);
    case 0x31708:
        return loci_validate_of_oxm_bsn_udf3_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x31804:
        return loci_validate_of_oxm_bsn_udf4_OF_VERSION_1_2(data, len, out_len);
    case 0x31908:
        return loci_validate_of_oxm_bsn_udf4_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x31a04:
        return loci_validate_of_oxm_bsn_udf5_OF_VERSION_1_2(data, len, out_len);
    case 0x31b08:
        return loci_validate_of_oxm_bsn_udf5_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x31c04:
        return loci_validate_of_oxm_bsn_udf6_OF_VERSION_1_2(data, len, out_len);
    case 0x31d08:
        return loci_validate_of_oxm_bsn_udf6_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x31e04:
        return loci_validate_of_oxm_bsn_udf7_OF_VERSION_1_2(data, len, out_len);
    case 0x31f08:
        return loci_validate_of_oxm_bsn_udf7_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x32204:
        return loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_OF_VERSION_1_2(data, len, out_len);
    case 0x32308:
        return loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x30404:
        return loci_validate_of_oxm_bsn_vrf_OF_VERSION_1_2(data, len, out_len);
    case 0x30508:
        return loci_validate_of_oxm_bsn_vrf_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80000606:
        return loci_validate_of_oxm_eth_dst_OF_VERSION_1_2(data, len, out_len);
    case 0x8000070c:
        return loci_validate_of_oxm_eth_dst_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80000806:
        return loci_validate_of_oxm_eth_src_OF_VERSION_1_2(data, len, out_len);
    case 0x8000090c:
        return loci_validate_of_oxm_eth_src_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80000a02:
        return loci_validate_of_oxm_eth_type_OF_VERSION_1_2(data, len, out_len);
    case 0x80000b04:
        return loci_validate_of_oxm_eth_type_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80002801:
        return loci_validate_of_oxm_icmpv4_code_OF_VERSION_1_2(data, len, out_len);
    case 0x80002902:
        return loci_validate_of_oxm_icmpv4_code_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80002601:
        return loci_validate_of_oxm_icmpv4_type_OF_VERSION_1_2(data, len, out_len);
    case 0x80002702:
        return loci_validate_of_oxm_icmpv4_type_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80003c01:
        return loci_validate_of_oxm_icmpv6_code_OF_VERSION_1_2(data, len, out_len);
    case 0x80003d02:
        return loci_validate_of_oxm_icmpv6_code_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80003a01:
        return loci_validate_of_oxm_icmpv6_type_OF_VERSION_1_2(data, len, out_len);
    case 0x80003b02:
        return loci_validate_of_oxm_icmpv6_type_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80000204:
        return loci_validate_of_oxm_in_phy_port_OF_VERSION_1_2(data, len, out_len);
    case 0x80000308:
        return loci_validate_of_oxm_in_phy_port_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80000004:
        return loci_validate_of_oxm_in_port_OF_VERSION_1_2(data, len, out_len);
    case 0x80000108:
        return loci_validate_of_oxm_in_port_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80001001:
        return loci_validate_of_oxm_ip_dscp_OF_VERSION_1_2(data, len, out_len);
    case 0x80001102:
        return loci_validate_of_oxm_ip_dscp_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80001201:
        return loci_validate_of_oxm_ip_ecn_OF_VERSION_1_2(data, len, out_len);
    case 0x80001302:
        return loci_validate_of_oxm_ip_ecn_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80001401:
        return loci_validate_of_oxm_ip_proto_OF_VERSION_1_2(data, len, out_len);
    case 0x80001502:
        return loci_validate_of_oxm_ip_proto_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80001804:
        return loci_validate_of_oxm_ipv4_dst_OF_VERSION_1_2(data, len, out_len);
    case 0x80001908:
        return loci_validate_of_oxm_ipv4_dst_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80001604:
        return loci_validate_of_oxm_ipv4_src_OF_VERSION_1_2(data, len, out_len);
    case 0x80001708:
        return loci_validate_of_oxm_ipv4_src_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80003610:
        return loci_validate_of_oxm_ipv6_dst_OF_VERSION_1_2(data, len, out_len);
    case 0x80003720:
        return loci_validate_of_oxm_ipv6_dst_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80003804:
        return loci_validate_of_oxm_ipv6_flabel_OF_VERSION_1_2(data, len, out_len);
    case 0x80003908:
        return loci_validate_of_oxm_ipv6_flabel_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80004006:
        return loci_validate_of_oxm_ipv6_nd_sll_OF_VERSION_1_2(data, len, out_len);
    case 0x8000410c:
        return loci_validate_of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80003e10:
        return loci_validate_of_oxm_ipv6_nd_target_OF_VERSION_1_2(data, len, out_len);
    case 0x80003f20:
        return loci_validate_of_oxm_ipv6_nd_target_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80004206:
        return loci_validate_of_oxm_ipv6_nd_tll_OF_VERSION_1_2(data, len, out_len);
    case 0x8000430c:
        return loci_validate_of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80003410:
        return loci_validate_of_oxm_ipv6_src_OF_VERSION_1_2(data, len, out_len);
    case 0x80003520:
        return loci_validate_of_oxm_ipv6_src_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80000408:
        return loci_validate_of_oxm_metadata_OF_VERSION_1_2(data, len, out_len);
    case 0x80000510:
        return loci_validate_of_oxm_metadata_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80004404:
        return loci_validate_of_oxm_mpls_label_OF_VERSION_1_2(data, len, out_len);
    case 0x80004508:
        return loci_validate_of_oxm_mpls_label_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80004601:
        return loci_validate_of_oxm_mpls_tc_OF_VERSION_1_2(data, len, out_len);
    case 0x80004702:
        return loci_validate_of_oxm_mpls_tc_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80002402:
        return loci_validate_of_oxm_sctp_dst_OF_VERSION_1_2(data, len, out_len);
    case 0x80002504:
        return loci_validate_of_oxm_sctp_dst_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80002202:
        return loci_validate_of_oxm_sctp_src_OF_VERSION_1_2(data, len, out_len);
    case 0x80002304:
        return loci_validate_of_oxm_sctp_src_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80001c02:
        return loci_validate_of_oxm_tcp_dst_OF_VERSION_1_2(data, len, out_len);
    case 0x80001d04:
        return loci_validate_of_oxm_tcp_dst_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80001a02:
        return loci_validate_of_oxm_tcp_src_OF_VERSION_1_2(data, len, out_len);
    case 0x80001b04:
        return loci_validate_of_oxm_tcp_src_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x14004:
        return loci_validate_of_oxm_tunnel_ipv4_dst_OF_VERSION_1_2(data, len, out_len);
    case 0x14108:
        return loci_validate_of_oxm_tunnel_ipv4_dst_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x13e04:
        return loci_validate_of_oxm_tunnel_ipv4_src_OF_VERSION_1_2(data, len, out_len);
    case 0x13f08:
        return loci_validate_of_oxm_tunnel_ipv4_src_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80002002:
        return loci_validate_of_oxm_udp_dst_OF_VERSION_1_2(data, len, out_len);
    case 0x80002104:
        return loci_validate_of_oxm_udp_dst_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80001e02:
        return loci_validate_of_oxm_udp_src_OF_VERSION_1_2(data, len, out_len);
    case 0x80001f04:
        return loci_validate_of_oxm_udp_src_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80000e01:
        return loci_validate_of_oxm_vlan_pcp_OF_VERSION_1_2(data, len, out_len);
    case 0x80000f02:
        return loci_validate_of_oxm_vlan_pcp_masked_OF_VERSION_1_2(data, len, out_len);
    case 0x80000c02:
        return loci_validate_of_oxm_vlan_vid_OF_VERSION_1_2(data, len, out_len);
    case 0x80000d04:
        return loci_validate_of_oxm_vlan_vid_masked_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_field_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_mpls_ttl_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_nw_ttl_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_queue_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_header_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint8_t wire_type;
    buf_u8_get(data + 1, &wire_type);
    switch (wire_type) {
    case 0x13:
        return loci_validate_of_stats_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x12:
        return loci_validate_of_stats_request_OF_VERSION_1_2(data, len, out_len);
    case 0x1:
        return loci_validate_of_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0x15:
        return loci_validate_of_barrier_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x14:
        return loci_validate_of_barrier_request_OF_VERSION_1_2(data, len, out_len);
    case 0x4:
        return loci_validate_of_experimenter_OF_VERSION_1_2(data, len, out_len);
    case 0x3:
        return loci_validate_of_echo_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x2:
        return loci_validate_of_echo_request_OF_VERSION_1_2(data, len, out_len);
    case 0x6:
        return loci_validate_of_features_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x5:
        return loci_validate_of_features_request_OF_VERSION_1_2(data, len, out_len);
    case 0xe:
        return loci_validate_of_flow_mod_OF_VERSION_1_2(data, len, out_len);
    case 0xb:
        return loci_validate_of_flow_removed_OF_VERSION_1_2(data, len, out_len);
    case 0x8:
        return loci_validate_of_get_config_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x7:
        return loci_validate_of_get_config_request_OF_VERSION_1_2(data, len, out_len);
    case 0xf:
        return loci_validate_of_group_mod_OF_VERSION_1_2(data, len, out_len);
    case 0x0:
        return loci_validate_of_hello_OF_VERSION_1_2(data, len, out_len);
    case 0xa:
        return loci_validate_of_packet_in_OF_VERSION_1_2(data, len, out_len);
    case 0xd:
        return loci_validate_of_packet_out_OF_VERSION_1_2(data, len, out_len);
    case 0x10:
        return loci_validate_of_port_mod_OF_VERSION_1_2(data, len, out_len);
    case 0xc:
        return loci_validate_of_port_status_OF_VERSION_1_2(data, len, out_len);
    case 0x17:
        return loci_validate_of_queue_get_config_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x16:
        return loci_validate_of_queue_get_config_request_OF_VERSION_1_2(data, len, out_len);
    case 0x19:
        return loci_validate_of_role_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x18:
        return loci_validate_of_role_request_OF_VERSION_1_2(data, len, out_len);
    case 0x9:
        return loci_validate_of_set_config_OF_VERSION_1_2(data, len, out_len);
    case 0x11:
        return loci_validate_of_table_mod_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_aggregate_stats_reply_OF_VERSION_1_2(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_stats_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x0:
        return loci_validate_of_desc_stats_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_stats_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x7:
        return loci_validate_of_group_desc_stats_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x8:
        return loci_validate_of_group_features_stats_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x6:
        return loci_validate_of_group_stats_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x4:
        return loci_validate_of_port_stats_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x5:
        return loci_validate_of_queue_stats_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x3:
        return loci_validate_of_table_stats_reply_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_aggregate_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }

    len = 40;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_aggregate_stats_request_OF_VERSION_1_2(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_stats_request_OF_VERSION_1_2(data, len, out_len);
    case 0x0:
        return loci_validate_of_desc_stats_request_OF_VERSION_1_2(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_stats_request_OF_VERSION_1_2(data, len, out_len);
    case 0x7:
        return loci_validate_of_group_desc_stats_request_OF_VERSION_1_2(data, len, out_len);
    case 0x8:
        return loci_validate_of_group_features_stats_request_OF_VERSION_1_2(data, len, out_len);
    case 0x6:
        return loci_validate_of_group_stats_request_OF_VERSION_1_2(data, len, out_len);
    case 0x4:
        return loci_validate_of_port_stats_request_OF_VERSION_1_2(data, len, out_len);
    case 0x5:
        return loci_validate_of_queue_stats_request_OF_VERSION_1_2(data, len, out_len);
    case 0x3:
        return loci_validate_of_table_stats_request_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_aggregate_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_bad_action_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0x3:
        return loci_validate_of_bad_instruction_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0x4:
        return loci_validate_of_bad_match_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0x1:
        return loci_validate_of_bad_request_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0x5:
        return loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0x6:
        return loci_validate_of_group_mod_failed_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0x0:
        return loci_validate_of_hello_failed_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0x7:
        return loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0x9:
        return loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0xb:
        return loci_validate_of_role_request_failed_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0xa:
        return loci_validate_of_switch_config_failed_error_msg_OF_VERSION_1_2(data, len, out_len);
    case 0x8:
        return loci_validate_of_table_mod_failed_error_msg_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_action_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_instruction_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_match_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_request_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_barrier_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_barrier_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_header_OF_VERSION_1_2(data, len, out_len);
    case 0x2320:
        return loci_validate_of_nicira_header_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_header_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 12, &wire_type);
    switch (wire_type) {
    case 0x16:
        return loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x15:
        return loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_2(data, len, out_len);
    case 0x14:
        return loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x13:
        return loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_2(data, len, out_len);
    case 0x17:
        return loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x12:
        return loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_2(data, len, out_len);
    case 0xa:
        return loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x9:
        return loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_2(data, len, out_len);
    case 0x5:
        return loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x4:
        return loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_2(data, len, out_len);
    case 0x22:
        return loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x21:
        return loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_2(data, len, out_len);
    case 0x23:
        return loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_2(data, len, out_len);
    case 0x20:
        return loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x1f:
        return loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_2(data, len, out_len);
    case 0x3:
        return loci_validate_of_bsn_set_mirroring_OF_VERSION_1_2(data, len, out_len);
    case 0x19:
        return loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_2(data, len, out_len);
    case 0xb:
        return loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_2(data, len, out_len);
    case 0x10:
        return loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_2(data, len, out_len);
    case 0xf:
        return loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_2(data, len, out_len);
    case 0x1a:
        return loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_2(data, len, out_len);
    case 0x11:
        return loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_interfaces = len - 16;
    if (loci_validate_of_list_bsn_interface_OF_VERSION_1_2(data + 16, wire_len_interfaces, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_interface_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 25) {
        return -1;
    }

    len = 25;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 25) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 21) {
        return -1;
    }

    len = 21;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 21) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 25) {
        return -1;
    }

    len = 25;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 25) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_mirroring_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 16, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_stats_reply_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 20, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 16, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_stats_request_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 20, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_2(data, len, out_len);
    case 0x0:
        return loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_bsn_vport_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 64) {
        return -1;
    }

    len = 64;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 64) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bucket_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_actions = len - 16;
    if (loci_validate_of_list_action_OF_VERSION_1_2(data + 16, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bucket_counter_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_desc_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 1072) {
        return -1;
    }

    len = 1072;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 1072) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_desc_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_echo_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_echo_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_features_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }

    len = wire_len;



    int wire_len_ports = len - 32;
    if (loci_validate_of_list_port_desc_OF_VERSION_1_2(data + 32, wire_len_ports, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_features_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_mod_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;


    uint8_t wire_type;
    buf_u8_get(data + 25, &wire_type);
    switch (wire_type) {
    case 0x0:
        return loci_validate_of_flow_add_OF_VERSION_1_2(data, len, out_len);
    case 0x3:
        return loci_validate_of_flow_delete_OF_VERSION_1_2(data, len, out_len);
    case 0x4:
        return loci_validate_of_flow_delete_strict_OF_VERSION_1_2(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_modify_OF_VERSION_1_2(data, len, out_len);
    case 0x2:
        return loci_validate_of_flow_modify_strict_OF_VERSION_1_2(data, len, out_len);
    }

    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_add_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_delete_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_delete_strict_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_modify_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_modify_strict_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_removed_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_flow_stats_entry_OF_VERSION_1_2(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_get_config_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_get_config_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_mod_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x0:
        return loci_validate_of_group_add_OF_VERSION_1_2(data, len, out_len);
    case 0x2:
        return loci_validate_of_group_delete_OF_VERSION_1_2(data, len, out_len);
    case 0x1:
        return loci_validate_of_group_modify_OF_VERSION_1_2(data, len, out_len);
    }

    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_2(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_add_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_2(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_delete_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_2(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_desc_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 8;
    if (loci_validate_of_list_bucket_OF_VERSION_1_2(data + 8, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_desc_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_group_desc_stats_entry_OF_VERSION_1_2(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_desc_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_features_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }

    len = 56;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_features_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_mod_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_modify_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_2(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }

    len = wire_len;



    int wire_len_bucket_stats = len - 32;
    if (loci_validate_of_list_bucket_counter_OF_VERSION_1_2(data + 32, wire_len_bucket_stats, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_group_stats_entry_OF_VERSION_1_2(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_instruction_apply_actions_OF_VERSION_1_2(data, len, out_len);
    case 0x5:
        return loci_validate_of_instruction_clear_actions_OF_VERSION_1_2(data, len, out_len);
    case 0xffff:
        return loci_validate_of_instruction_experimenter_OF_VERSION_1_2(data, len, out_len);
    case 0x1:
        return loci_validate_of_instruction_goto_table_OF_VERSION_1_2(data, len, out_len);
    case 0x3:
        return loci_validate_of_instruction_write_actions_OF_VERSION_1_2(data, len, out_len);
    case 0x2:
        return loci_validate_of_instruction_write_metadata_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_apply_actions_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_actions = len - 8;
    if (loci_validate_of_list_action_OF_VERSION_1_2(data + 8, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_clear_actions_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_experimenter_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_goto_table_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_write_actions_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_actions = len - 8;
    if (loci_validate_of_list_action_OF_VERSION_1_2(data + 8, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_write_metadata_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_match_v3_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_list = len - 4;
    if (loci_validate_of_list_oxm_OF_VERSION_1_2(data + 4, wire_len_oxm_list, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_nicira_header_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 12, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_op_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_op_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_sha_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_sha_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_spa_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_spa_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_tha_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_tha_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_tpa_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_tpa_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_egr_port_group_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_egr_port_group_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_in_ports_128_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_in_ports_512_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 68) {
        return -1;
    }

    len = 68;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_in_ports_512_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 132) {
        return -1;
    }

    len = 132;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_ingress_port_group_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_ingress_port_group_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l2_cache_hit_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l2_cache_hit_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_src_class_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_lag_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_lag_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_tcp_flags_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_tcp_flags_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf0_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf0_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf1_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf1_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf2_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf2_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf3_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf3_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf4_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf4_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf5_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf5_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf6_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf6_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf7_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf7_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_vrf_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_vrf_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_type_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_type_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv4_code_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv4_code_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv4_type_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv4_type_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv6_code_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv6_code_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv6_type_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv6_type_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_in_phy_port_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_in_phy_port_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_in_port_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_in_port_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_dscp_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_dscp_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_ecn_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_ecn_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_proto_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_proto_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv4_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv4_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv4_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv4_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_flabel_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_flabel_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_sll_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_target_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_target_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_tll_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_metadata_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_metadata_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_label_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_label_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_tc_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_tc_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_sctp_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_sctp_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_sctp_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_sctp_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tcp_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tcp_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tcp_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tcp_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_ipv4_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_ipv4_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_ipv4_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_ipv4_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_udp_dst_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_udp_dst_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_udp_src_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_udp_src_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_vlan_pcp_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_vlan_pcp_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_vlan_vid_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_vlan_vid_masked_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_in_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 26) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 26) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_out_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;

    uint16_t wire_len_actions;
    buf_u16_get(data + 16, &wire_len_actions);



    if (24 + wire_len_actions > len) {
        return -1;
    }

    if (loci_validate_of_list_action_OF_VERSION_1_2(data + 24, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_queue_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 8, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 16;
    if (loci_validate_of_list_queue_prop_OF_VERSION_1_2(data + 16, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 64) {
        return -1;
    }

    len = 64;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }

    len = 40;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 104) {
        return -1;
    }

    len = 104;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_port_stats_entry_OF_VERSION_1_2(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_status_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 80) {
        return -1;
    }

    len = 80;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 80) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_get_config_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_queues = len - 16;
    if (loci_validate_of_list_packet_queue_OF_VERSION_1_2(data + 16, wire_len_queues, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_get_config_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_queue_prop_experimenter_OF_VERSION_1_2(data, len, out_len);
    case 0x2:
        return loci_validate_of_queue_prop_max_rate_OF_VERSION_1_2(data, len, out_len);
    case 0x1:
        return loci_validate_of_queue_prop_min_rate_OF_VERSION_1_2(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_experimenter_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_max_rate_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_min_rate_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_queue_stats_entry_OF_VERSION_1_2(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_role_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_role_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_role_request_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_set_config_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_switch_config_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_failed_error_msg_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_entry_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 128) {
        return -1;
    }

    len = 128;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_reply_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_table_stats_entry_OF_VERSION_1_2(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_request_OF_VERSION_1_2(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}


static int __attribute__((unused))
loci_validate_of_list_bsn_tlv_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_tlv_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_controller_connection_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_controller_connection_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_debug_counter_desc_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_debug_counter_desc_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_debug_counter_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_debug_counter_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_flow_checksum_bucket_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_flow_checksum_bucket_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_generic_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_generic_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_gentable_bucket_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_gentable_bucket_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_gentable_desc_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_gentable_desc_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_gentable_entry_desc_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_gentable_entry_desc_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_gentable_entry_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_gentable_entry_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_gentable_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_gentable_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_interface_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_interface_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_lacp_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_lacp_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_uint64_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_uint64_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_port_counter_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_port_counter_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_switch_pipeline_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_switch_pipeline_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_table_checksum_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_table_checksum_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_vlan_counter_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_vlan_counter_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_vrf_counter_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_vrf_counter_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_action_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_action_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_instruction_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_instruction_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_flow_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_flow_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bucket_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bucket_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_group_desc_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_group_desc_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bucket_counter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bucket_counter_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_group_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_group_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_hello_elem_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_hello_elem_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_uint32_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_uint32_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_oxm_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_oxm_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_meter_band_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_meter_band_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_meter_band_stats_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_meter_band_stats_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_meter_stats_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_meter_stats_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_prop_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_prop_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_desc_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_desc_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_packet_queue_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_packet_queue_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_action_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_action_id_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_instruction_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_instruction_id_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_uint8_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_uint8_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_table_feature_prop_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_table_feature_prop_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_table_features_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_table_features_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_table_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_table_stats_entry_OF_VERSION_1_3(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}


static int
loci_validate_of_action_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_action_experimenter_OF_VERSION_1_3(data, len, out_len);
    case 0xc:
        return loci_validate_of_action_copy_ttl_in_OF_VERSION_1_3(data, len, out_len);
    case 0xb:
        return loci_validate_of_action_copy_ttl_out_OF_VERSION_1_3(data, len, out_len);
    case 0x10:
        return loci_validate_of_action_dec_mpls_ttl_OF_VERSION_1_3(data, len, out_len);
    case 0x18:
        return loci_validate_of_action_dec_nw_ttl_OF_VERSION_1_3(data, len, out_len);
    case 0x16:
        return loci_validate_of_action_group_OF_VERSION_1_3(data, len, out_len);
    case 0x0:
        return loci_validate_of_action_output_OF_VERSION_1_3(data, len, out_len);
    case 0x14:
        return loci_validate_of_action_pop_mpls_OF_VERSION_1_3(data, len, out_len);
    case 0x1b:
        return loci_validate_of_action_pop_pbb_OF_VERSION_1_3(data, len, out_len);
    case 0x12:
        return loci_validate_of_action_pop_vlan_OF_VERSION_1_3(data, len, out_len);
    case 0x13:
        return loci_validate_of_action_push_mpls_OF_VERSION_1_3(data, len, out_len);
    case 0x1a:
        return loci_validate_of_action_push_pbb_OF_VERSION_1_3(data, len, out_len);
    case 0x11:
        return loci_validate_of_action_push_vlan_OF_VERSION_1_3(data, len, out_len);
    case 0x19:
        return loci_validate_of_action_set_field_OF_VERSION_1_3(data, len, out_len);
    case 0xf:
        return loci_validate_of_action_set_mpls_ttl_OF_VERSION_1_3(data, len, out_len);
    case 0x17:
        return loci_validate_of_action_set_nw_ttl_OF_VERSION_1_3(data, len, out_len);
    case 0x15:
        return loci_validate_of_action_set_queue_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_action_id_experimenter_OF_VERSION_1_3(data, len, out_len);
    case 0xc:
        return loci_validate_of_action_id_copy_ttl_in_OF_VERSION_1_3(data, len, out_len);
    case 0xb:
        return loci_validate_of_action_id_copy_ttl_out_OF_VERSION_1_3(data, len, out_len);
    case 0x10:
        return loci_validate_of_action_id_dec_mpls_ttl_OF_VERSION_1_3(data, len, out_len);
    case 0x18:
        return loci_validate_of_action_id_dec_nw_ttl_OF_VERSION_1_3(data, len, out_len);
    case 0x16:
        return loci_validate_of_action_id_group_OF_VERSION_1_3(data, len, out_len);
    case 0x0:
        return loci_validate_of_action_id_output_OF_VERSION_1_3(data, len, out_len);
    case 0x14:
        return loci_validate_of_action_id_pop_mpls_OF_VERSION_1_3(data, len, out_len);
    case 0x1b:
        return loci_validate_of_action_id_pop_pbb_OF_VERSION_1_3(data, len, out_len);
    case 0x12:
        return loci_validate_of_action_id_pop_vlan_OF_VERSION_1_3(data, len, out_len);
    case 0x13:
        return loci_validate_of_action_id_push_mpls_OF_VERSION_1_3(data, len, out_len);
    case 0x1a:
        return loci_validate_of_action_id_push_pbb_OF_VERSION_1_3(data, len, out_len);
    case 0x11:
        return loci_validate_of_action_id_push_vlan_OF_VERSION_1_3(data, len, out_len);
    case 0x19:
        return loci_validate_of_action_id_set_field_OF_VERSION_1_3(data, len, out_len);
    case 0xf:
        return loci_validate_of_action_id_set_mpls_ttl_OF_VERSION_1_3(data, len, out_len);
    case 0x17:
        return loci_validate_of_action_id_set_nw_ttl_OF_VERSION_1_3(data, len, out_len);
    case 0x15:
        return loci_validate_of_action_id_set_queue_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_action_bsn_OF_VERSION_1_3(data, len, out_len);
    case 0x2320:
        return loci_validate_of_action_nicira_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_action_bsn_checksum_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_action_bsn_gentable_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_action_bsn_mirror_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_action_id_bsn_OF_VERSION_1_3(data, len, out_len);
    case 0x2320:
        return loci_validate_of_action_id_nicira_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_bsn_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_action_id_bsn_checksum_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_action_id_bsn_gentable_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_action_id_bsn_mirror_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_action_id_bsn_set_tunnel_dst_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_checksum_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }

    len = 28;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_bsn_checksum_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_gentable_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_key = len - 16;
    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_3(data + 16, wire_len_key, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_bsn_gentable_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_mirror_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_bsn_mirror_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_bsn_set_tunnel_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_copy_ttl_in_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_copy_ttl_in_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_copy_ttl_out_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_copy_ttl_out_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_dec_mpls_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_dec_mpls_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_dec_nw_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_dec_nw_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_group_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_group_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_nicira_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x12:
        return loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_nicira_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x12:
        return loci_validate_of_action_id_nicira_dec_ttl_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_nicira_dec_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_output_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_output_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_pop_mpls_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_pop_mpls_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_pop_pbb_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_pop_pbb_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_pop_vlan_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_pop_vlan_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_push_mpls_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_push_mpls_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_push_pbb_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_push_pbb_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_push_vlan_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_push_vlan_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }



    uint32_t wire_type;
    buf_u32_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x80002a02:
        return loci_validate_of_oxm_arp_op_OF_VERSION_1_3(data, len, out_len);
    case 0x80002b04:
        return loci_validate_of_oxm_arp_op_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80003006:
        return loci_validate_of_oxm_arp_sha_OF_VERSION_1_3(data, len, out_len);
    case 0x8000310c:
        return loci_validate_of_oxm_arp_sha_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80002c04:
        return loci_validate_of_oxm_arp_spa_OF_VERSION_1_3(data, len, out_len);
    case 0x80002d08:
        return loci_validate_of_oxm_arp_spa_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80003206:
        return loci_validate_of_oxm_arp_tha_OF_VERSION_1_3(data, len, out_len);
    case 0x8000330c:
        return loci_validate_of_oxm_arp_tha_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80002e04:
        return loci_validate_of_oxm_arp_tpa_OF_VERSION_1_3(data, len, out_len);
    case 0x80002f08:
        return loci_validate_of_oxm_arp_tpa_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x30e04:
        return loci_validate_of_oxm_bsn_egr_port_group_id_OF_VERSION_1_3(data, len, out_len);
    case 0x30f08:
        return loci_validate_of_oxm_bsn_egr_port_group_id_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x30601:
        return loci_validate_of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_3(data, len, out_len);
    case 0x30702:
        return loci_validate_of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x30010:
        return loci_validate_of_oxm_bsn_in_ports_128_OF_VERSION_1_3(data, len, out_len);
    case 0x30120:
        return loci_validate_of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x32640:
        return loci_validate_of_oxm_bsn_in_ports_512_OF_VERSION_1_3(data, len, out_len);
    case 0x32780:
        return loci_validate_of_oxm_bsn_in_ports_512_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x32804:
        return loci_validate_of_oxm_bsn_ingress_port_group_id_OF_VERSION_1_3(data, len, out_len);
    case 0x32908:
        return loci_validate_of_oxm_bsn_ingress_port_group_id_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x32401:
        return loci_validate_of_oxm_bsn_l2_cache_hit_OF_VERSION_1_3(data, len, out_len);
    case 0x32502:
        return loci_validate_of_oxm_bsn_l2_cache_hit_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x30c04:
        return loci_validate_of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_3(data, len, out_len);
    case 0x30d08:
        return loci_validate_of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x30804:
        return loci_validate_of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_3(data, len, out_len);
    case 0x30908:
        return loci_validate_of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x30a04:
        return loci_validate_of_oxm_bsn_l3_src_class_id_OF_VERSION_1_3(data, len, out_len);
    case 0x30b08:
        return loci_validate_of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x30204:
        return loci_validate_of_oxm_bsn_lag_id_OF_VERSION_1_3(data, len, out_len);
    case 0x30308:
        return loci_validate_of_oxm_bsn_lag_id_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x32002:
        return loci_validate_of_oxm_bsn_tcp_flags_OF_VERSION_1_3(data, len, out_len);
    case 0x32104:
        return loci_validate_of_oxm_bsn_tcp_flags_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x31004:
        return loci_validate_of_oxm_bsn_udf0_OF_VERSION_1_3(data, len, out_len);
    case 0x31108:
        return loci_validate_of_oxm_bsn_udf0_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x31204:
        return loci_validate_of_oxm_bsn_udf1_OF_VERSION_1_3(data, len, out_len);
    case 0x31308:
        return loci_validate_of_oxm_bsn_udf1_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x31404:
        return loci_validate_of_oxm_bsn_udf2_OF_VERSION_1_3(data, len, out_len);
    case 0x31508:
        return loci_validate_of_oxm_bsn_udf2_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x31604:
        return loci_validate_of_oxm_bsn_udf3_OF_VERSION_1_3(data, len, out_len);
    case 0x31708:
        return loci_validate_of_oxm_bsn_udf3_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x31804:
        return loci_validate_of_oxm_bsn_udf4_OF_VERSION_1_3(data, len, out_len);
    case 0x31908:
        return loci_validate_of_oxm_bsn_udf4_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x31a04:
        return loci_validate_of_oxm_bsn_udf5_OF_VERSION_1_3(data, len, out_len);
    case 0x31b08:
        return loci_validate_of_oxm_bsn_udf5_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x31c04:
        return loci_validate_of_oxm_bsn_udf6_OF_VERSION_1_3(data, len, out_len);
    case 0x31d08:
        return loci_validate_of_oxm_bsn_udf6_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x31e04:
        return loci_validate_of_oxm_bsn_udf7_OF_VERSION_1_3(data, len, out_len);
    case 0x31f08:
        return loci_validate_of_oxm_bsn_udf7_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x32204:
        return loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_OF_VERSION_1_3(data, len, out_len);
    case 0x32308:
        return loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x30404:
        return loci_validate_of_oxm_bsn_vrf_OF_VERSION_1_3(data, len, out_len);
    case 0x30508:
        return loci_validate_of_oxm_bsn_vrf_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80000606:
        return loci_validate_of_oxm_eth_dst_OF_VERSION_1_3(data, len, out_len);
    case 0x8000070c:
        return loci_validate_of_oxm_eth_dst_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80000806:
        return loci_validate_of_oxm_eth_src_OF_VERSION_1_3(data, len, out_len);
    case 0x8000090c:
        return loci_validate_of_oxm_eth_src_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80000a02:
        return loci_validate_of_oxm_eth_type_OF_VERSION_1_3(data, len, out_len);
    case 0x80000b04:
        return loci_validate_of_oxm_eth_type_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80002801:
        return loci_validate_of_oxm_icmpv4_code_OF_VERSION_1_3(data, len, out_len);
    case 0x80002902:
        return loci_validate_of_oxm_icmpv4_code_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80002601:
        return loci_validate_of_oxm_icmpv4_type_OF_VERSION_1_3(data, len, out_len);
    case 0x80002702:
        return loci_validate_of_oxm_icmpv4_type_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80003c01:
        return loci_validate_of_oxm_icmpv6_code_OF_VERSION_1_3(data, len, out_len);
    case 0x80003d02:
        return loci_validate_of_oxm_icmpv6_code_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80003a01:
        return loci_validate_of_oxm_icmpv6_type_OF_VERSION_1_3(data, len, out_len);
    case 0x80003b02:
        return loci_validate_of_oxm_icmpv6_type_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80000204:
        return loci_validate_of_oxm_in_phy_port_OF_VERSION_1_3(data, len, out_len);
    case 0x80000308:
        return loci_validate_of_oxm_in_phy_port_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80000004:
        return loci_validate_of_oxm_in_port_OF_VERSION_1_3(data, len, out_len);
    case 0x80000108:
        return loci_validate_of_oxm_in_port_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80001001:
        return loci_validate_of_oxm_ip_dscp_OF_VERSION_1_3(data, len, out_len);
    case 0x80001102:
        return loci_validate_of_oxm_ip_dscp_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80001201:
        return loci_validate_of_oxm_ip_ecn_OF_VERSION_1_3(data, len, out_len);
    case 0x80001302:
        return loci_validate_of_oxm_ip_ecn_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80001401:
        return loci_validate_of_oxm_ip_proto_OF_VERSION_1_3(data, len, out_len);
    case 0x80001502:
        return loci_validate_of_oxm_ip_proto_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80001804:
        return loci_validate_of_oxm_ipv4_dst_OF_VERSION_1_3(data, len, out_len);
    case 0x80001908:
        return loci_validate_of_oxm_ipv4_dst_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80001604:
        return loci_validate_of_oxm_ipv4_src_OF_VERSION_1_3(data, len, out_len);
    case 0x80001708:
        return loci_validate_of_oxm_ipv4_src_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80003610:
        return loci_validate_of_oxm_ipv6_dst_OF_VERSION_1_3(data, len, out_len);
    case 0x80003720:
        return loci_validate_of_oxm_ipv6_dst_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80004e02:
        return loci_validate_of_oxm_ipv6_exthdr_OF_VERSION_1_3(data, len, out_len);
    case 0x80004f04:
        return loci_validate_of_oxm_ipv6_exthdr_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80003804:
        return loci_validate_of_oxm_ipv6_flabel_OF_VERSION_1_3(data, len, out_len);
    case 0x80003908:
        return loci_validate_of_oxm_ipv6_flabel_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80004006:
        return loci_validate_of_oxm_ipv6_nd_sll_OF_VERSION_1_3(data, len, out_len);
    case 0x8000410c:
        return loci_validate_of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80003e10:
        return loci_validate_of_oxm_ipv6_nd_target_OF_VERSION_1_3(data, len, out_len);
    case 0x80003f20:
        return loci_validate_of_oxm_ipv6_nd_target_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80004206:
        return loci_validate_of_oxm_ipv6_nd_tll_OF_VERSION_1_3(data, len, out_len);
    case 0x8000430c:
        return loci_validate_of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80003410:
        return loci_validate_of_oxm_ipv6_src_OF_VERSION_1_3(data, len, out_len);
    case 0x80003520:
        return loci_validate_of_oxm_ipv6_src_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80000408:
        return loci_validate_of_oxm_metadata_OF_VERSION_1_3(data, len, out_len);
    case 0x80000510:
        return loci_validate_of_oxm_metadata_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80004801:
        return loci_validate_of_oxm_mpls_bos_OF_VERSION_1_3(data, len, out_len);
    case 0x80004902:
        return loci_validate_of_oxm_mpls_bos_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80004404:
        return loci_validate_of_oxm_mpls_label_OF_VERSION_1_3(data, len, out_len);
    case 0x80004508:
        return loci_validate_of_oxm_mpls_label_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80004601:
        return loci_validate_of_oxm_mpls_tc_OF_VERSION_1_3(data, len, out_len);
    case 0x80004702:
        return loci_validate_of_oxm_mpls_tc_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80002402:
        return loci_validate_of_oxm_sctp_dst_OF_VERSION_1_3(data, len, out_len);
    case 0x80002504:
        return loci_validate_of_oxm_sctp_dst_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80002202:
        return loci_validate_of_oxm_sctp_src_OF_VERSION_1_3(data, len, out_len);
    case 0x80002304:
        return loci_validate_of_oxm_sctp_src_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80001c02:
        return loci_validate_of_oxm_tcp_dst_OF_VERSION_1_3(data, len, out_len);
    case 0x80001d04:
        return loci_validate_of_oxm_tcp_dst_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80001a02:
        return loci_validate_of_oxm_tcp_src_OF_VERSION_1_3(data, len, out_len);
    case 0x80001b04:
        return loci_validate_of_oxm_tcp_src_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80004c08:
        return loci_validate_of_oxm_tunnel_id_OF_VERSION_1_3(data, len, out_len);
    case 0x80004d10:
        return loci_validate_of_oxm_tunnel_id_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x14004:
        return loci_validate_of_oxm_tunnel_ipv4_dst_OF_VERSION_1_3(data, len, out_len);
    case 0x14108:
        return loci_validate_of_oxm_tunnel_ipv4_dst_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x13e04:
        return loci_validate_of_oxm_tunnel_ipv4_src_OF_VERSION_1_3(data, len, out_len);
    case 0x13f08:
        return loci_validate_of_oxm_tunnel_ipv4_src_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80002002:
        return loci_validate_of_oxm_udp_dst_OF_VERSION_1_3(data, len, out_len);
    case 0x80002104:
        return loci_validate_of_oxm_udp_dst_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80001e02:
        return loci_validate_of_oxm_udp_src_OF_VERSION_1_3(data, len, out_len);
    case 0x80001f04:
        return loci_validate_of_oxm_udp_src_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80000e01:
        return loci_validate_of_oxm_vlan_pcp_OF_VERSION_1_3(data, len, out_len);
    case 0x80000f02:
        return loci_validate_of_oxm_vlan_pcp_masked_OF_VERSION_1_3(data, len, out_len);
    case 0x80000c02:
        return loci_validate_of_oxm_vlan_vid_OF_VERSION_1_3(data, len, out_len);
    case 0x80000d04:
        return loci_validate_of_oxm_vlan_vid_masked_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_field_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_set_field_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_mpls_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_set_mpls_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_nw_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_set_nw_ttl_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_queue_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_set_queue_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_header_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint8_t wire_type;
    buf_u8_get(data + 1, &wire_type);
    switch (wire_type) {
    case 0x13:
        return loci_validate_of_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x12:
        return loci_validate_of_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x1b:
        return loci_validate_of_async_get_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x1a:
        return loci_validate_of_async_get_request_OF_VERSION_1_3(data, len, out_len);
    case 0x1c:
        return loci_validate_of_async_set_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0x15:
        return loci_validate_of_barrier_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x14:
        return loci_validate_of_barrier_request_OF_VERSION_1_3(data, len, out_len);
    case 0x4:
        return loci_validate_of_experimenter_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_echo_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_echo_request_OF_VERSION_1_3(data, len, out_len);
    case 0x6:
        return loci_validate_of_features_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_features_request_OF_VERSION_1_3(data, len, out_len);
    case 0xe:
        return loci_validate_of_flow_mod_OF_VERSION_1_3(data, len, out_len);
    case 0xb:
        return loci_validate_of_flow_removed_OF_VERSION_1_3(data, len, out_len);
    case 0x8:
        return loci_validate_of_get_config_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x7:
        return loci_validate_of_get_config_request_OF_VERSION_1_3(data, len, out_len);
    case 0xf:
        return loci_validate_of_group_mod_OF_VERSION_1_3(data, len, out_len);
    case 0x0:
        return loci_validate_of_hello_OF_VERSION_1_3(data, len, out_len);
    case 0x1d:
        return loci_validate_of_meter_mod_OF_VERSION_1_3(data, len, out_len);
    case 0xa:
        return loci_validate_of_packet_in_OF_VERSION_1_3(data, len, out_len);
    case 0xd:
        return loci_validate_of_packet_out_OF_VERSION_1_3(data, len, out_len);
    case 0x10:
        return loci_validate_of_port_mod_OF_VERSION_1_3(data, len, out_len);
    case 0xc:
        return loci_validate_of_port_status_OF_VERSION_1_3(data, len, out_len);
    case 0x17:
        return loci_validate_of_queue_get_config_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x16:
        return loci_validate_of_queue_get_config_request_OF_VERSION_1_3(data, len, out_len);
    case 0x19:
        return loci_validate_of_role_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x18:
        return loci_validate_of_role_request_OF_VERSION_1_3(data, len, out_len);
    case 0x9:
        return loci_validate_of_set_config_OF_VERSION_1_3(data, len, out_len);
    case 0x11:
        return loci_validate_of_table_mod_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_aggregate_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x0:
        return loci_validate_of_desc_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x7:
        return loci_validate_of_group_desc_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x8:
        return loci_validate_of_group_features_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x6:
        return loci_validate_of_group_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0xa:
        return loci_validate_of_meter_config_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0xb:
        return loci_validate_of_meter_features_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x9:
        return loci_validate_of_meter_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0xd:
        return loci_validate_of_port_desc_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x4:
        return loci_validate_of_port_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_queue_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0xc:
        return loci_validate_of_table_features_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_table_stats_reply_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_aggregate_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }

    len = 40;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_aggregate_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x0:
        return loci_validate_of_desc_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x7:
        return loci_validate_of_group_desc_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x8:
        return loci_validate_of_group_features_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x6:
        return loci_validate_of_group_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0xa:
        return loci_validate_of_meter_config_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0xb:
        return loci_validate_of_meter_features_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x9:
        return loci_validate_of_meter_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0xd:
        return loci_validate_of_port_desc_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x4:
        return loci_validate_of_port_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_queue_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0xc:
        return loci_validate_of_table_features_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_table_stats_request_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_aggregate_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_get_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_get_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_set_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_bad_action_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_bad_instruction_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0x4:
        return loci_validate_of_bad_match_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_bad_request_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0x6:
        return loci_validate_of_group_mod_failed_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0x0:
        return loci_validate_of_hello_failed_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0xc:
        return loci_validate_of_meter_mod_failed_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0x7:
        return loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0x9:
        return loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0xb:
        return loci_validate_of_role_request_failed_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0xa:
        return loci_validate_of_switch_config_failed_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0xd:
        return loci_validate_of_table_features_failed_error_msg_OF_VERSION_1_3(data, len, out_len);
    case 0x8:
        return loci_validate_of_table_mod_failed_error_msg_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_action_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_instruction_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_match_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_request_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_barrier_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_barrier_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_header_OF_VERSION_1_3(data, len, out_len);
    case 0x2320:
        return loci_validate_of_nicira_header_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_header_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 12, &wire_type);
    switch (wire_type) {
    case 0x3c:
        return loci_validate_of_bsn_arp_idle_OF_VERSION_1_3(data, len, out_len);
    case 0x16:
        return loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x15:
        return loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_3(data, len, out_len);
    case 0x14:
        return loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x13:
        return loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_3(data, len, out_len);
    case 0x17:
        return loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x12:
        return loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_3(data, len, out_len);
    case 0x39:
        return loci_validate_of_bsn_controller_connections_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x38:
        return loci_validate_of_bsn_controller_connections_request_OF_VERSION_1_3(data, len, out_len);
    case 0x28:
        return loci_validate_of_bsn_flow_idle_OF_VERSION_1_3(data, len, out_len);
    case 0x27:
        return loci_validate_of_bsn_flow_idle_enable_get_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x26:
        return loci_validate_of_bsn_flow_idle_enable_get_request_OF_VERSION_1_3(data, len, out_len);
    case 0x25:
        return loci_validate_of_bsn_flow_idle_enable_set_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x24:
        return loci_validate_of_bsn_flow_idle_enable_set_request_OF_VERSION_1_3(data, len, out_len);
    case 0x31:
        return loci_validate_of_bsn_gentable_clear_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x30:
        return loci_validate_of_bsn_gentable_clear_request_OF_VERSION_1_3(data, len, out_len);
    case 0x2e:
        return loci_validate_of_bsn_gentable_entry_add_OF_VERSION_1_3(data, len, out_len);
    case 0x2f:
        return loci_validate_of_bsn_gentable_entry_delete_OF_VERSION_1_3(data, len, out_len);
    case 0x32:
        return loci_validate_of_bsn_gentable_set_buckets_size_OF_VERSION_1_3(data, len, out_len);
    case 0xa:
        return loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x9:
        return loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x4:
        return loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_3(data, len, out_len);
    case 0x34:
        return loci_validate_of_bsn_get_switch_pipeline_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x33:
        return loci_validate_of_bsn_get_switch_pipeline_request_OF_VERSION_1_3(data, len, out_len);
    case 0x2b:
        return loci_validate_of_bsn_lacp_convergence_notif_OF_VERSION_1_3(data, len, out_len);
    case 0x3f:
        return loci_validate_of_bsn_log_OF_VERSION_1_3(data, len, out_len);
    case 0x42:
        return loci_validate_of_bsn_lua_command_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x41:
        return loci_validate_of_bsn_lua_command_request_OF_VERSION_1_3(data, len, out_len);
    case 0x43:
        return loci_validate_of_bsn_lua_notification_OF_VERSION_1_3(data, len, out_len);
    case 0x40:
        return loci_validate_of_bsn_lua_upload_OF_VERSION_1_3(data, len, out_len);
    case 0x22:
        return loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x21:
        return loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_3(data, len, out_len);
    case 0x23:
        return loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_3(data, len, out_len);
    case 0x20:
        return loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x1f:
        return loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_3(data, len, out_len);
    case 0x37:
        return loci_validate_of_bsn_role_status_OF_VERSION_1_3(data, len, out_len);
    case 0x3b:
        return loci_validate_of_bsn_set_aux_cxns_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x3a:
        return loci_validate_of_bsn_set_aux_cxns_request_OF_VERSION_1_3(data, len, out_len);
    case 0x2a:
        return loci_validate_of_bsn_set_lacp_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x29:
        return loci_validate_of_bsn_set_lacp_request_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_bsn_set_mirroring_OF_VERSION_1_3(data, len, out_len);
    case 0x19:
        return loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_3(data, len, out_len);
    case 0xb:
        return loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_3(data, len, out_len);
    case 0x36:
        return loci_validate_of_bsn_set_switch_pipeline_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x35:
        return loci_validate_of_bsn_set_switch_pipeline_request_OF_VERSION_1_3(data, len, out_len);
    case 0x3d:
        return loci_validate_of_bsn_table_set_buckets_size_OF_VERSION_1_3(data, len, out_len);
    case 0x2d:
        return loci_validate_of_bsn_time_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x2c:
        return loci_validate_of_bsn_time_request_OF_VERSION_1_3(data, len, out_len);
    case 0x10:
        return loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_3(data, len, out_len);
    case 0xf:
        return loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_3(data, len, out_len);
    case 0x1a:
        return loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x11:
        return loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_arp_idle_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_controller_connection_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 264) {
        return -1;
    }

    len = 264;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_controller_connections_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_connections = len - 16;
    if (loci_validate_of_list_bsn_controller_connection_OF_VERSION_1_3(data + 16, wire_len_connections, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_controller_connections_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_debug_counter_desc_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 328) {
        return -1;
    }

    len = 328;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 16, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_stats_reply_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 20, &wire_type);
    switch (wire_type) {
    case 0xd:
        return loci_validate_of_bsn_debug_counter_desc_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0xc:
        return loci_validate_of_bsn_debug_counter_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0xa:
        return loci_validate_of_bsn_flow_checksum_bucket_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x10:
        return loci_validate_of_bsn_generic_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_bsn_gentable_bucket_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x4:
        return loci_validate_of_bsn_gentable_desc_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_bsn_gentable_entry_desc_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_bsn_gentable_entry_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x7:
        return loci_validate_of_bsn_gentable_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0xe:
        return loci_validate_of_bsn_image_desc_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_bsn_lacp_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x8:
        return loci_validate_of_bsn_port_counter_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x6:
        return loci_validate_of_bsn_switch_pipeline_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0xb:
        return loci_validate_of_bsn_table_checksum_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0x9:
        return loci_validate_of_bsn_vlan_counter_stats_reply_OF_VERSION_1_3(data, len, out_len);
    case 0xf:
        return loci_validate_of_bsn_vrf_counter_stats_reply_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_debug_counter_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_debug_counter_desc_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 16, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_stats_request_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 20, &wire_type);
    switch (wire_type) {
    case 0xd:
        return loci_validate_of_bsn_debug_counter_desc_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0xc:
        return loci_validate_of_bsn_debug_counter_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0xa:
        return loci_validate_of_bsn_flow_checksum_bucket_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x10:
        return loci_validate_of_bsn_generic_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_bsn_gentable_bucket_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x4:
        return loci_validate_of_bsn_gentable_desc_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_bsn_gentable_entry_desc_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_bsn_gentable_entry_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x7:
        return loci_validate_of_bsn_gentable_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0xe:
        return loci_validate_of_bsn_image_desc_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_bsn_lacp_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x8:
        return loci_validate_of_bsn_port_counter_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x6:
        return loci_validate_of_bsn_switch_pipeline_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0xb:
        return loci_validate_of_bsn_table_checksum_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0x9:
        return loci_validate_of_bsn_vlan_counter_stats_request_OF_VERSION_1_3(data, len, out_len);
    case 0xf:
        return loci_validate_of_bsn_vrf_counter_stats_request_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_debug_counter_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_debug_counter_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_debug_counter_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_debug_counter_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_debug_counter_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_checksum_bucket_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_checksum_bucket_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_flow_checksum_bucket_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_checksum_bucket_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 25) {
        return -1;
    }

    len = 25;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 25) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_idle_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_idle_enable_get_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_idle_enable_get_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_idle_enable_set_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_idle_enable_set_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_generic_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 2) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 2) {
        return -1;
    }

    len = wire_len;



    int wire_len_tlvs = len - 2;
    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_3(data + 2, wire_len_tlvs, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_generic_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_generic_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_generic_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 88) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 88) {
        return -1;
    }

    len = wire_len;



    int wire_len_tlvs = len - 88;
    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_3(data + 88, wire_len_tlvs, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_bucket_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_bucket_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_gentable_bucket_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_bucket_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 26) {
        return -1;
    }

    len = 26;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 26) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_clear_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }

    len = 28;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_clear_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 52) {
        return -1;
    }

    len = 52;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 52) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_desc_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 48) {
        return -1;
    }

    len = 48;

    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 48) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_gentable_desc_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_add_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 36) {
        return -1;
    }

    len = wire_len;

    uint16_t wire_len_key;
    buf_u16_get(data + 18, &wire_len_key);



    if (36 + wire_len_key > len) {
        return -1;
    }

    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_3(data + 36, wire_len_key, out_len) < 0) {
        return -1;
    }

    // TODO validate non fixed offset member value

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_delete_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 18) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 18) {
        return -1;
    }

    len = wire_len;



    int wire_len_key = len - 18;
    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_3(data + 18, wire_len_key, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_desc_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }

    len = wire_len;

    uint16_t wire_len_key;
    buf_u16_get(data + 2, &wire_len_key);



    if (20 + wire_len_key > len) {
        return -1;
    }

    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_3(data + 20, wire_len_key, out_len) < 0) {
        return -1;
    }

    // TODO validate non fixed offset member value

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_gentable_entry_desc_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 60) {
        return -1;
    }

    len = 60;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 60) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;

    uint16_t wire_len_key;
    buf_u16_get(data + 2, &wire_len_key);



    if (4 + wire_len_key > len) {
        return -1;
    }

    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_3(data + 4, wire_len_key, out_len) < 0) {
        return -1;
    }

    // TODO validate non fixed offset member stats

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_gentable_entry_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 60) {
        return -1;
    }

    len = 60;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 60) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_set_buckets_size_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_gentable_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_interfaces = len - 16;
    if (loci_validate_of_list_bsn_interface_OF_VERSION_1_3(data + 16, wire_len_interfaces, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_switch_pipeline_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 272) {
        return -1;
    }

    len = 272;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 272) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_switch_pipeline_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_image_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 536) {
        return -1;
    }

    len = 536;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 536) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_image_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_interface_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lacp_convergence_notif_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 52) {
        return -1;
    }

    len = 52;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 52) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lacp_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lacp_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_lacp_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lacp_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_log_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 17) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 17) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lua_command_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lua_command_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lua_notification_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lua_upload_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 82) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 82) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 25) {
        return -1;
    }

    len = 25;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 25) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 21) {
        return -1;
    }

    len = 21;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 21) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 25) {
        return -1;
    }

    len = 25;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 25) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_port_counter_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_values = len - 8;
    if (loci_validate_of_list_uint64_OF_VERSION_1_3(data + 8, wire_len_values, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_port_counter_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_port_counter_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_port_counter_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }

    len = 28;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_role_status_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_aux_cxns_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_aux_cxns_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_lacp_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_lacp_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 38) {
        return -1;
    }

    len = 38;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 38) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_mirroring_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_switch_pipeline_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_switch_pipeline_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 272) {
        return -1;
    }

    len = 272;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 272) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_switch_pipeline_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 256) {
        return -1;
    }

    len = 256;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_switch_pipeline_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_switch_pipeline_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_switch_pipeline_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_table_checksum_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 9) {
        return -1;
    }

    len = 9;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_table_checksum_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_table_checksum_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_table_checksum_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_table_set_buckets_size_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_time_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_time_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x2c:
        return loci_validate_of_bsn_tlv_actor_key_OF_VERSION_1_3(data, len, out_len);
    case 0x2b:
        return loci_validate_of_bsn_tlv_actor_port_num_OF_VERSION_1_3(data, len, out_len);
    case 0x2a:
        return loci_validate_of_bsn_tlv_actor_port_priority_OF_VERSION_1_3(data, len, out_len);
    case 0x35:
        return loci_validate_of_bsn_tlv_actor_state_OF_VERSION_1_3(data, len, out_len);
    case 0x29:
        return loci_validate_of_bsn_tlv_actor_system_mac_OF_VERSION_1_3(data, len, out_len);
    case 0x28:
        return loci_validate_of_bsn_tlv_actor_system_priority_OF_VERSION_1_3(data, len, out_len);
    case 0xa:
        return loci_validate_of_bsn_tlv_broadcast_query_timeout_OF_VERSION_1_3(data, len, out_len);
    case 0x40:
        return loci_validate_of_bsn_tlv_bucket_OF_VERSION_1_3(data, len, out_len);
    case 0xe:
        return loci_validate_of_bsn_tlv_circuit_id_OF_VERSION_1_3(data, len, out_len);
    case 0x2d:
        return loci_validate_of_bsn_tlv_convergence_status_OF_VERSION_1_3(data, len, out_len);
    case 0x16:
        return loci_validate_of_bsn_tlv_crc_enabled_OF_VERSION_1_3(data, len, out_len);
    case 0x37:
        return loci_validate_of_bsn_tlv_data_OF_VERSION_1_3(data, len, out_len);
    case 0x21:
        return loci_validate_of_bsn_tlv_eth_dst_OF_VERSION_1_3(data, len, out_len);
    case 0x20:
        return loci_validate_of_bsn_tlv_eth_src_OF_VERSION_1_3(data, len, out_len);
    case 0x1a:
        return loci_validate_of_bsn_tlv_external_gateway_ip_OF_VERSION_1_3(data, len, out_len);
    case 0x1d:
        return loci_validate_of_bsn_tlv_external_gateway_mac_OF_VERSION_1_3(data, len, out_len);
    case 0x17:
        return loci_validate_of_bsn_tlv_external_ip_OF_VERSION_1_3(data, len, out_len);
    case 0x18:
        return loci_validate_of_bsn_tlv_external_mac_OF_VERSION_1_3(data, len, out_len);
    case 0x19:
        return loci_validate_of_bsn_tlv_external_netmask_OF_VERSION_1_3(data, len, out_len);
    case 0x1f:
        return loci_validate_of_bsn_tlv_header_size_OF_VERSION_1_3(data, len, out_len);
    case 0x45:
        return loci_validate_of_bsn_tlv_icmp_code_OF_VERSION_1_3(data, len, out_len);
    case 0x46:
        return loci_validate_of_bsn_tlv_icmp_id_OF_VERSION_1_3(data, len, out_len);
    case 0x44:
        return loci_validate_of_bsn_tlv_icmp_type_OF_VERSION_1_3(data, len, out_len);
    case 0x7:
        return loci_validate_of_bsn_tlv_idle_notification_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_bsn_tlv_idle_time_OF_VERSION_1_3(data, len, out_len);
    case 0x8:
        return loci_validate_of_bsn_tlv_idle_timeout_OF_VERSION_1_3(data, len, out_len);
    case 0x1c:
        return loci_validate_of_bsn_tlv_internal_gateway_mac_OF_VERSION_1_3(data, len, out_len);
    case 0x1b:
        return loci_validate_of_bsn_tlv_internal_mac_OF_VERSION_1_3(data, len, out_len);
    case 0x3a:
        return loci_validate_of_bsn_tlv_interval_OF_VERSION_1_3(data, len, out_len);
    case 0x43:
        return loci_validate_of_bsn_tlv_ip_proto_OF_VERSION_1_3(data, len, out_len);
    case 0x4:
        return loci_validate_of_bsn_tlv_ipv4_OF_VERSION_1_3(data, len, out_len);
    case 0x23:
        return loci_validate_of_bsn_tlv_ipv4_dst_OF_VERSION_1_3(data, len, out_len);
    case 0x3c:
        return loci_validate_of_bsn_tlv_ipv4_netmask_OF_VERSION_1_3(data, len, out_len);
    case 0x22:
        return loci_validate_of_bsn_tlv_ipv4_src_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_bsn_tlv_mac_OF_VERSION_1_3(data, len, out_len);
    case 0x38:
        return loci_validate_of_bsn_tlv_mac_mask_OF_VERSION_1_3(data, len, out_len);
    case 0xd:
        return loci_validate_of_bsn_tlv_miss_packets_OF_VERSION_1_3(data, len, out_len);
    case 0x3e:
        return loci_validate_of_bsn_tlv_mpls_control_word_OF_VERSION_1_3(data, len, out_len);
    case 0x3d:
        return loci_validate_of_bsn_tlv_mpls_label_OF_VERSION_1_3(data, len, out_len);
    case 0x3f:
        return loci_validate_of_bsn_tlv_mpls_sequenced_OF_VERSION_1_3(data, len, out_len);
    case 0x34:
        return loci_validate_of_bsn_tlv_name_OF_VERSION_1_3(data, len, out_len);
    case 0x33:
        return loci_validate_of_bsn_tlv_partner_key_OF_VERSION_1_3(data, len, out_len);
    case 0x32:
        return loci_validate_of_bsn_tlv_partner_port_num_OF_VERSION_1_3(data, len, out_len);
    case 0x31:
        return loci_validate_of_bsn_tlv_partner_port_priority_OF_VERSION_1_3(data, len, out_len);
    case 0x36:
        return loci_validate_of_bsn_tlv_partner_state_OF_VERSION_1_3(data, len, out_len);
    case 0x30:
        return loci_validate_of_bsn_tlv_partner_system_mac_OF_VERSION_1_3(data, len, out_len);
    case 0x2f:
        return loci_validate_of_bsn_tlv_partner_system_priority_OF_VERSION_1_3(data, len, out_len);
    case 0x0:
        return loci_validate_of_bsn_tlv_port_OF_VERSION_1_3(data, len, out_len);
    case 0x39:
        return loci_validate_of_bsn_tlv_priority_OF_VERSION_1_3(data, len, out_len);
    case 0x14:
        return loci_validate_of_bsn_tlv_queue_id_OF_VERSION_1_3(data, len, out_len);
    case 0x15:
        return loci_validate_of_bsn_tlv_queue_weight_OF_VERSION_1_3(data, len, out_len);
    case 0x3b:
        return loci_validate_of_bsn_tlv_reference_OF_VERSION_1_3(data, len, out_len);
    case 0xc:
        return loci_validate_of_bsn_tlv_reply_packets_OF_VERSION_1_3(data, len, out_len);
    case 0xb:
        return loci_validate_of_bsn_tlv_request_packets_OF_VERSION_1_3(data, len, out_len);
    case 0x47:
        return loci_validate_of_bsn_tlv_rx_bytes_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_bsn_tlv_rx_packets_OF_VERSION_1_3(data, len, out_len);
    case 0x1e:
        return loci_validate_of_bsn_tlv_sampling_rate_OF_VERSION_1_3(data, len, out_len);
    case 0x26:
        return loci_validate_of_bsn_tlv_sub_agent_id_OF_VERSION_1_3(data, len, out_len);
    case 0x42:
        return loci_validate_of_bsn_tlv_tcp_dst_OF_VERSION_1_3(data, len, out_len);
    case 0x41:
        return loci_validate_of_bsn_tlv_tcp_src_OF_VERSION_1_3(data, len, out_len);
    case 0x27:
        return loci_validate_of_bsn_tlv_tx_bytes_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_bsn_tlv_tx_packets_OF_VERSION_1_3(data, len, out_len);
    case 0x10:
        return loci_validate_of_bsn_tlv_udf_anchor_OF_VERSION_1_3(data, len, out_len);
    case 0xf:
        return loci_validate_of_bsn_tlv_udf_id_OF_VERSION_1_3(data, len, out_len);
    case 0x12:
        return loci_validate_of_bsn_tlv_udf_length_OF_VERSION_1_3(data, len, out_len);
    case 0x11:
        return loci_validate_of_bsn_tlv_udf_offset_OF_VERSION_1_3(data, len, out_len);
    case 0x25:
        return loci_validate_of_bsn_tlv_udp_dst_OF_VERSION_1_3(data, len, out_len);
    case 0x24:
        return loci_validate_of_bsn_tlv_udp_src_OF_VERSION_1_3(data, len, out_len);
    case 0x9:
        return loci_validate_of_bsn_tlv_unicast_query_timeout_OF_VERSION_1_3(data, len, out_len);
    case 0x6:
        return loci_validate_of_bsn_tlv_vlan_vid_OF_VERSION_1_3(data, len, out_len);
    case 0x13:
        return loci_validate_of_bsn_tlv_vrf_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_actor_key_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_actor_port_num_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_actor_port_priority_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_actor_state_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_actor_system_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_actor_system_priority_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_broadcast_query_timeout_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_bucket_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_value = len - 4;
    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_3(data + 4, wire_len_value, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_circuit_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_convergence_status_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_crc_enabled_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_data_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_eth_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_eth_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_external_gateway_ip_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_external_gateway_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_external_ip_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_external_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_external_netmask_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_header_size_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_icmp_code_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_icmp_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_icmp_type_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_idle_notification_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_idle_time_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_idle_timeout_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_internal_gateway_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_internal_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_interval_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_ip_proto_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_ipv4_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_ipv4_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_ipv4_netmask_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_ipv4_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_mac_mask_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_miss_packets_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_mpls_control_word_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_mpls_label_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_mpls_sequenced_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_name_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_partner_key_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_partner_port_num_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_partner_port_priority_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_partner_state_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_partner_system_mac_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_partner_system_priority_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_port_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_priority_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_queue_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_queue_weight_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_reference_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }

    len = wire_len;



    int wire_len_key = len - 6;
    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_3(data + 6, wire_len_key, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_reply_packets_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_request_packets_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_rx_bytes_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_rx_packets_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_sampling_rate_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_sub_agent_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_tcp_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_tcp_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_tx_bytes_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_tx_packets_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_udf_anchor_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_udf_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_udf_length_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_udf_offset_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_udp_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_udp_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_unicast_query_timeout_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_vlan_vid_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_vrf_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_3(data, len, out_len);
    case 0x0:
        return loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_bsn_vport_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vlan_counter_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_values = len - 8;
    if (loci_validate_of_list_uint64_OF_VERSION_1_3(data + 8, wire_len_values, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vlan_counter_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_vlan_counter_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vlan_counter_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 26) {
        return -1;
    }

    len = 26;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 26) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 64) {
        return -1;
    }

    len = 64;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 64) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vrf_counter_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_values = len - 8;
    if (loci_validate_of_list_uint64_OF_VERSION_1_3(data + 8, wire_len_values, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vrf_counter_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_vrf_counter_stats_entry_OF_VERSION_1_3(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vrf_counter_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }

    len = 28;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bucket_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_actions = len - 16;
    if (loci_validate_of_list_action_OF_VERSION_1_3(data + 16, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bucket_counter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 1072) {
        return -1;
    }

    len = 1072;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 1072) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_echo_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_echo_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_features_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_features_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_mod_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;


    uint8_t wire_type;
    buf_u8_get(data + 25, &wire_type);
    switch (wire_type) {
    case 0x0:
        return loci_validate_of_flow_add_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_flow_delete_OF_VERSION_1_3(data, len, out_len);
    case 0x4:
        return loci_validate_of_flow_delete_strict_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_modify_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_flow_modify_strict_OF_VERSION_1_3(data, len, out_len);
    }

    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_add_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_delete_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_delete_strict_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_modify_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_modify_strict_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_removed_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_flow_stats_entry_OF_VERSION_1_3(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_get_config_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_get_config_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_mod_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x0:
        return loci_validate_of_group_add_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_group_delete_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_group_modify_OF_VERSION_1_3(data, len, out_len);
    }

    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_3(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_add_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_3(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_delete_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_3(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_desc_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 8;
    if (loci_validate_of_list_bucket_OF_VERSION_1_3(data + 8, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_group_desc_stats_entry_OF_VERSION_1_3(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_features_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }

    len = 56;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_features_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_mod_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_modify_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_3(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }

    len = wire_len;



    int wire_len_bucket_stats = len - 40;
    if (loci_validate_of_list_bucket_counter_OF_VERSION_1_3(data + 40, wire_len_bucket_stats, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_group_stats_entry_OF_VERSION_1_3(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_elements = len - 8;
    if (loci_validate_of_list_hello_elem_OF_VERSION_1_3(data + 8, wire_len_elements, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_elem_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_hello_elem_versionbitmap_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_elem_versionbitmap_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_bitmaps = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_3(data + 4, wire_len_bitmaps, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_instruction_apply_actions_OF_VERSION_1_3(data, len, out_len);
    case 0xffff:
        return loci_validate_of_instruction_experimenter_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_instruction_clear_actions_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_instruction_goto_table_OF_VERSION_1_3(data, len, out_len);
    case 0x6:
        return loci_validate_of_instruction_meter_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_instruction_write_actions_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_instruction_write_metadata_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_instruction_id_apply_actions_OF_VERSION_1_3(data, len, out_len);
    case 0xffff:
        return loci_validate_of_instruction_id_experimenter_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_instruction_id_clear_actions_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_instruction_id_goto_table_OF_VERSION_1_3(data, len, out_len);
    case 0x6:
        return loci_validate_of_instruction_id_meter_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_instruction_id_write_actions_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_instruction_id_write_metadata_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_apply_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_actions = len - 8;
    if (loci_validate_of_list_action_OF_VERSION_1_3(data + 8, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_apply_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_instruction_bsn_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_instruction_bsn_arp_offload_OF_VERSION_1_3(data, len, out_len);
    case 0xb:
        return loci_validate_of_instruction_bsn_auto_negotiation_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_instruction_bsn_deny_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_instruction_bsn_dhcp_offload_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_instruction_bsn_disable_split_horizon_check_OF_VERSION_1_3(data, len, out_len);
    case 0x0:
        return loci_validate_of_instruction_bsn_disable_src_mac_check_OF_VERSION_1_3(data, len, out_len);
    case 0x9:
        return loci_validate_of_instruction_bsn_disable_vlan_counters_OF_VERSION_1_3(data, len, out_len);
    case 0x6:
        return loci_validate_of_instruction_bsn_packet_of_death_OF_VERSION_1_3(data, len, out_len);
    case 0x4:
        return loci_validate_of_instruction_bsn_permit_OF_VERSION_1_3(data, len, out_len);
    case 0x7:
        return loci_validate_of_instruction_bsn_prioritize_pdus_OF_VERSION_1_3(data, len, out_len);
    case 0x8:
        return loci_validate_of_instruction_bsn_require_vlan_xlate_OF_VERSION_1_3(data, len, out_len);
    case 0xa:
        return loci_validate_of_instruction_bsn_span_destination_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_instruction_id_bsn_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_instruction_id_bsn_arp_offload_OF_VERSION_1_3(data, len, out_len);
    case 0xb:
        return loci_validate_of_instruction_id_bsn_auto_negotiation_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_instruction_id_bsn_deny_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_instruction_id_bsn_dhcp_offload_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_instruction_id_bsn_disable_split_horizon_check_OF_VERSION_1_3(data, len, out_len);
    case 0x0:
        return loci_validate_of_instruction_id_bsn_disable_src_mac_check_OF_VERSION_1_3(data, len, out_len);
    case 0x9:
        return loci_validate_of_instruction_id_bsn_disable_vlan_counters_OF_VERSION_1_3(data, len, out_len);
    case 0x6:
        return loci_validate_of_instruction_id_bsn_packet_of_death_OF_VERSION_1_3(data, len, out_len);
    case 0x4:
        return loci_validate_of_instruction_id_bsn_permit_OF_VERSION_1_3(data, len, out_len);
    case 0x7:
        return loci_validate_of_instruction_id_bsn_prioritize_pdus_OF_VERSION_1_3(data, len, out_len);
    case 0x8:
        return loci_validate_of_instruction_id_bsn_require_vlan_xlate_OF_VERSION_1_3(data, len, out_len);
    case 0xa:
        return loci_validate_of_instruction_id_bsn_span_destination_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_arp_offload_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_arp_offload_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_auto_negotiation_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_auto_negotiation_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_deny_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_deny_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_dhcp_offload_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_dhcp_offload_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_disable_split_horizon_check_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_disable_split_horizon_check_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_disable_src_mac_check_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_disable_src_mac_check_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_disable_vlan_counters_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_disable_vlan_counters_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_packet_of_death_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_packet_of_death_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_permit_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_permit_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_prioritize_pdus_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_prioritize_pdus_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_require_vlan_xlate_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_require_vlan_xlate_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_span_destination_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_span_destination_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_clear_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_clear_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_goto_table_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_goto_table_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_meter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_meter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_write_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_actions = len - 8;
    if (loci_validate_of_list_action_OF_VERSION_1_3(data + 8, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_write_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_write_metadata_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_write_metadata_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_match_v3_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_list = len - 4;
    if (loci_validate_of_list_oxm_OF_VERSION_1_3(data + 4, wire_len_oxm_list, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_band_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_meter_band_drop_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_meter_band_dscp_remark_OF_VERSION_1_3(data, len, out_len);
    case 0xffff:
        return loci_validate_of_meter_band_experimenter_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_band_drop_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_band_dscp_remark_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_band_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_band_stats_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_config_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 8;
    if (loci_validate_of_list_meter_band_OF_VERSION_1_3(data + 8, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_config_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_meter_band_OF_VERSION_1_3(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_config_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_features_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_features_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }



    // TODO validate of_meter_features_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_features_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_mod_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_meters = len - 16;
    if (loci_validate_of_list_meter_band_OF_VERSION_1_3(data + 16, wire_len_meters, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_mod_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_stats_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 4, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }

    len = wire_len;



    int wire_len_band_stats = len - 40;
    if (loci_validate_of_list_meter_band_stats_OF_VERSION_1_3(data + 40, wire_len_band_stats, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_meter_stats_OF_VERSION_1_3(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_nicira_header_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 12, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_op_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_op_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_sha_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_sha_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_spa_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_spa_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_tha_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_tha_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_tpa_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_tpa_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_egr_port_group_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_egr_port_group_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_global_vrf_allowed_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_global_vrf_allowed_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_in_ports_128_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_in_ports_512_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 68) {
        return -1;
    }

    len = 68;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_in_ports_512_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 132) {
        return -1;
    }

    len = 132;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_ingress_port_group_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_ingress_port_group_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l2_cache_hit_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l2_cache_hit_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_dst_class_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_dst_class_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_src_class_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_lag_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_lag_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_tcp_flags_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_tcp_flags_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf0_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf0_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf1_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf1_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf2_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf2_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf3_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf3_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf4_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf4_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf5_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf5_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf6_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf6_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf7_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf7_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_vrf_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_vrf_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_type_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_type_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv4_code_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv4_code_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv4_type_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv4_type_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv6_code_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv6_code_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv6_type_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv6_type_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_in_phy_port_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_in_phy_port_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_in_port_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_in_port_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_dscp_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_dscp_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_ecn_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_ecn_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_proto_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_proto_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv4_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv4_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv4_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv4_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_exthdr_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_exthdr_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_flabel_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_flabel_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_sll_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_target_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_target_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_tll_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_metadata_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_metadata_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_bos_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_bos_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_label_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_label_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_tc_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_tc_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_sctp_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_sctp_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_sctp_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_sctp_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tcp_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tcp_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tcp_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tcp_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_id_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_id_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_ipv4_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_ipv4_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_ipv4_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_ipv4_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_udp_dst_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_udp_dst_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_udp_src_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_udp_src_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_vlan_pcp_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_vlan_pcp_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_vlan_vid_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_vlan_vid_masked_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_in_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 34) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 34) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_out_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;

    uint16_t wire_len_actions;
    buf_u16_get(data + 16, &wire_len_actions);



    if (24 + wire_len_actions > len) {
        return -1;
    }

    if (loci_validate_of_list_action_OF_VERSION_1_3(data + 24, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_queue_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 8, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 16;
    if (loci_validate_of_list_queue_prop_OF_VERSION_1_3(data + 16, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 64) {
        return -1;
    }

    len = 64;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_port_desc_OF_VERSION_1_3(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }

    len = 40;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 112) {
        return -1;
    }

    len = 112;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_port_stats_entry_OF_VERSION_1_3(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_status_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 80) {
        return -1;
    }

    len = 80;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 80) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_get_config_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_queues = len - 16;
    if (loci_validate_of_list_packet_queue_OF_VERSION_1_3(data + 16, wire_len_queues, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_get_config_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_queue_prop_experimenter_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_queue_prop_max_rate_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_queue_prop_min_rate_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_max_rate_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_min_rate_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }

    len = 40;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_queue_stats_entry_OF_VERSION_1_3(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_role_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_role_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_role_request_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_set_config_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_switch_config_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x6:
        return loci_validate_of_table_feature_prop_apply_actions_OF_VERSION_1_3(data, len, out_len);
    case 0x7:
        return loci_validate_of_table_feature_prop_apply_actions_miss_OF_VERSION_1_3(data, len, out_len);
    case 0xe:
        return loci_validate_of_table_feature_prop_apply_setfield_OF_VERSION_1_3(data, len, out_len);
    case 0xf:
        return loci_validate_of_table_feature_prop_apply_setfield_miss_OF_VERSION_1_3(data, len, out_len);
    case 0xfffe:
        return loci_validate_of_table_feature_prop_experimenter_OF_VERSION_1_3(data, len, out_len);
    case 0xffff:
        return loci_validate_of_table_feature_prop_experimenter_miss_OF_VERSION_1_3(data, len, out_len);
    case 0x0:
        return loci_validate_of_table_feature_prop_instructions_OF_VERSION_1_3(data, len, out_len);
    case 0x1:
        return loci_validate_of_table_feature_prop_instructions_miss_OF_VERSION_1_3(data, len, out_len);
    case 0x8:
        return loci_validate_of_table_feature_prop_match_OF_VERSION_1_3(data, len, out_len);
    case 0x2:
        return loci_validate_of_table_feature_prop_next_tables_OF_VERSION_1_3(data, len, out_len);
    case 0x3:
        return loci_validate_of_table_feature_prop_next_tables_miss_OF_VERSION_1_3(data, len, out_len);
    case 0xa:
        return loci_validate_of_table_feature_prop_wildcards_OF_VERSION_1_3(data, len, out_len);
    case 0x4:
        return loci_validate_of_table_feature_prop_write_actions_OF_VERSION_1_3(data, len, out_len);
    case 0x5:
        return loci_validate_of_table_feature_prop_write_actions_miss_OF_VERSION_1_3(data, len, out_len);
    case 0xc:
        return loci_validate_of_table_feature_prop_write_setfield_OF_VERSION_1_3(data, len, out_len);
    case 0xd:
        return loci_validate_of_table_feature_prop_write_setfield_miss_OF_VERSION_1_3(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_apply_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_action_ids = len - 4;
    if (loci_validate_of_list_action_id_OF_VERSION_1_3(data + 4, wire_len_action_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_apply_actions_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_action_ids = len - 4;
    if (loci_validate_of_list_action_id_OF_VERSION_1_3(data + 4, wire_len_action_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_apply_setfield_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_ids = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_3(data + 4, wire_len_oxm_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_apply_setfield_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_ids = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_3(data + 4, wire_len_oxm_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_experimenter_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_experimenter_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_instructions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_instruction_ids = len - 4;
    if (loci_validate_of_list_instruction_id_OF_VERSION_1_3(data + 4, wire_len_instruction_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_instructions_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_instruction_ids = len - 4;
    if (loci_validate_of_list_instruction_id_OF_VERSION_1_3(data + 4, wire_len_instruction_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_match_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_ids = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_3(data + 4, wire_len_oxm_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_next_tables_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_next_table_ids = len - 4;
    if (loci_validate_of_list_uint8_OF_VERSION_1_3(data + 4, wire_len_next_table_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_next_tables_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_next_table_ids = len - 4;
    if (loci_validate_of_list_uint8_OF_VERSION_1_3(data + 4, wire_len_next_table_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_wildcards_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_ids = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_3(data + 4, wire_len_oxm_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_write_actions_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_action_ids = len - 4;
    if (loci_validate_of_list_action_id_OF_VERSION_1_3(data + 4, wire_len_action_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_write_actions_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_action_ids = len - 4;
    if (loci_validate_of_list_action_id_OF_VERSION_1_3(data + 4, wire_len_action_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_write_setfield_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_ids = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_3(data + 4, wire_len_oxm_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_write_setfield_miss_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_ids = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_3(data + 4, wire_len_oxm_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_features_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 64) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 64) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 64;
    if (loci_validate_of_list_table_feature_prop_OF_VERSION_1_3(data + 64, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_features_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_features_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_table_features_OF_VERSION_1_3(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_features_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_table_features_OF_VERSION_1_3(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_failed_error_msg_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_entry_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_reply_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_table_stats_entry_OF_VERSION_1_3(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_request_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_uint32_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_uint64_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_uint8_OF_VERSION_1_3(uint8_t *data, int len, int *out_len)
{
    if (len < 1) {
        return -1;
    }

    len = 1;




    *out_len = len;
    return 0;
}


static int __attribute__((unused))
loci_validate_of_list_bsn_tlv_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_tlv_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_async_config_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_async_config_prop_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_controller_connection_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_controller_connection_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_debug_counter_desc_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_debug_counter_desc_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_debug_counter_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_debug_counter_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_flow_checksum_bucket_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_flow_checksum_bucket_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_generic_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_generic_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_gentable_bucket_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_gentable_bucket_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_gentable_desc_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_gentable_desc_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_gentable_entry_desc_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_gentable_entry_desc_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_gentable_entry_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_gentable_entry_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_gentable_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_gentable_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_interface_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_interface_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_lacp_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_lacp_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_uint64_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_uint64_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_port_counter_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_port_counter_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_switch_pipeline_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_switch_pipeline_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_table_checksum_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_table_checksum_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_vlan_counter_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_vlan_counter_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bsn_vrf_counter_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bsn_vrf_counter_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_action_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_action_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bundle_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bundle_prop_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_instruction_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_instruction_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_flow_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_flow_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bucket_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bucket_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_group_desc_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_group_desc_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_bucket_counter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_bucket_counter_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_group_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_group_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_hello_elem_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_hello_elem_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_uint32_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_uint32_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_oxm_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_oxm_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_meter_band_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_meter_band_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_meter_band_stats_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_meter_band_stats_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_meter_stats_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_meter_stats_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_prop_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_desc_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_desc_prop_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_desc_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_desc_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_mod_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_mod_prop_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_stats_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_stats_prop_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_port_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_port_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_desc_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_desc_prop_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_desc_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_desc_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_stats_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_stats_prop_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_queue_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_queue_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_role_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_role_prop_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_table_desc_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_table_desc_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_action_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_action_id_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_instruction_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_instruction_id_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_uint8_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_uint8_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_table_feature_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_table_feature_prop_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_table_features_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_table_features_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_table_mod_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_table_mod_prop_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}

static int __attribute__((unused))
loci_validate_of_list_table_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    while (len > 0) {
        int cur_len = 0xffff;
        if (loci_validate_of_table_stats_entry_OF_VERSION_1_4(data, len, &cur_len) < 0) {
            return -1;
        }
        len -= cur_len;
        data += cur_len;
    }

    return 0;
}


static int
loci_validate_of_action_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_action_experimenter_OF_VERSION_1_4(data, len, out_len);
    case 0xc:
        return loci_validate_of_action_copy_ttl_in_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_action_copy_ttl_out_OF_VERSION_1_4(data, len, out_len);
    case 0x10:
        return loci_validate_of_action_dec_mpls_ttl_OF_VERSION_1_4(data, len, out_len);
    case 0x18:
        return loci_validate_of_action_dec_nw_ttl_OF_VERSION_1_4(data, len, out_len);
    case 0x16:
        return loci_validate_of_action_group_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_action_output_OF_VERSION_1_4(data, len, out_len);
    case 0x14:
        return loci_validate_of_action_pop_mpls_OF_VERSION_1_4(data, len, out_len);
    case 0x1b:
        return loci_validate_of_action_pop_pbb_OF_VERSION_1_4(data, len, out_len);
    case 0x12:
        return loci_validate_of_action_pop_vlan_OF_VERSION_1_4(data, len, out_len);
    case 0x13:
        return loci_validate_of_action_push_mpls_OF_VERSION_1_4(data, len, out_len);
    case 0x1a:
        return loci_validate_of_action_push_pbb_OF_VERSION_1_4(data, len, out_len);
    case 0x11:
        return loci_validate_of_action_push_vlan_OF_VERSION_1_4(data, len, out_len);
    case 0x19:
        return loci_validate_of_action_set_field_OF_VERSION_1_4(data, len, out_len);
    case 0xf:
        return loci_validate_of_action_set_mpls_ttl_OF_VERSION_1_4(data, len, out_len);
    case 0x17:
        return loci_validate_of_action_set_nw_ttl_OF_VERSION_1_4(data, len, out_len);
    case 0x15:
        return loci_validate_of_action_set_queue_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_action_id_experimenter_OF_VERSION_1_4(data, len, out_len);
    case 0xc:
        return loci_validate_of_action_id_copy_ttl_in_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_action_id_copy_ttl_out_OF_VERSION_1_4(data, len, out_len);
    case 0x10:
        return loci_validate_of_action_id_dec_mpls_ttl_OF_VERSION_1_4(data, len, out_len);
    case 0x18:
        return loci_validate_of_action_id_dec_nw_ttl_OF_VERSION_1_4(data, len, out_len);
    case 0x16:
        return loci_validate_of_action_id_group_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_action_id_output_OF_VERSION_1_4(data, len, out_len);
    case 0x14:
        return loci_validate_of_action_id_pop_mpls_OF_VERSION_1_4(data, len, out_len);
    case 0x1b:
        return loci_validate_of_action_id_pop_pbb_OF_VERSION_1_4(data, len, out_len);
    case 0x12:
        return loci_validate_of_action_id_pop_vlan_OF_VERSION_1_4(data, len, out_len);
    case 0x13:
        return loci_validate_of_action_id_push_mpls_OF_VERSION_1_4(data, len, out_len);
    case 0x1a:
        return loci_validate_of_action_id_push_pbb_OF_VERSION_1_4(data, len, out_len);
    case 0x11:
        return loci_validate_of_action_id_push_vlan_OF_VERSION_1_4(data, len, out_len);
    case 0x19:
        return loci_validate_of_action_id_set_field_OF_VERSION_1_4(data, len, out_len);
    case 0xf:
        return loci_validate_of_action_id_set_mpls_ttl_OF_VERSION_1_4(data, len, out_len);
    case 0x17:
        return loci_validate_of_action_id_set_nw_ttl_OF_VERSION_1_4(data, len, out_len);
    case 0x15:
        return loci_validate_of_action_id_set_queue_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_action_bsn_OF_VERSION_1_4(data, len, out_len);
    case 0x2320:
        return loci_validate_of_action_nicira_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_action_bsn_checksum_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_action_bsn_gentable_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_action_bsn_mirror_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_action_id_bsn_OF_VERSION_1_4(data, len, out_len);
    case 0x2320:
        return loci_validate_of_action_id_nicira_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_bsn_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_action_id_bsn_checksum_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_action_id_bsn_gentable_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_action_id_bsn_mirror_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_action_id_bsn_set_tunnel_dst_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_checksum_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }

    len = 28;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_bsn_checksum_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_gentable_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_key = len - 16;
    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_4(data + 16, wire_len_key, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_bsn_gentable_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_mirror_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_bsn_mirror_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_bsn_set_tunnel_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_bsn_set_tunnel_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_copy_ttl_in_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_copy_ttl_in_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_copy_ttl_out_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_copy_ttl_out_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_dec_mpls_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_dec_mpls_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_dec_nw_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_dec_nw_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_group_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_group_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_nicira_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x12:
        return loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_nicira_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x12:
        return loci_validate_of_action_id_nicira_dec_ttl_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_nicira_dec_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_nicira_dec_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_output_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_output_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_pop_mpls_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_pop_mpls_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_pop_pbb_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_pop_pbb_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_pop_vlan_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_pop_vlan_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_push_mpls_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_push_mpls_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_push_pbb_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_push_pbb_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_push_vlan_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_push_vlan_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }



    uint32_t wire_type;
    buf_u32_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x80002a02:
        return loci_validate_of_oxm_arp_op_OF_VERSION_1_4(data, len, out_len);
    case 0x80002b04:
        return loci_validate_of_oxm_arp_op_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80003006:
        return loci_validate_of_oxm_arp_sha_OF_VERSION_1_4(data, len, out_len);
    case 0x8000310c:
        return loci_validate_of_oxm_arp_sha_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80002c04:
        return loci_validate_of_oxm_arp_spa_OF_VERSION_1_4(data, len, out_len);
    case 0x80002d08:
        return loci_validate_of_oxm_arp_spa_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80003206:
        return loci_validate_of_oxm_arp_tha_OF_VERSION_1_4(data, len, out_len);
    case 0x8000330c:
        return loci_validate_of_oxm_arp_tha_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80002e04:
        return loci_validate_of_oxm_arp_tpa_OF_VERSION_1_4(data, len, out_len);
    case 0x80002f08:
        return loci_validate_of_oxm_arp_tpa_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x30e04:
        return loci_validate_of_oxm_bsn_egr_port_group_id_OF_VERSION_1_4(data, len, out_len);
    case 0x30f08:
        return loci_validate_of_oxm_bsn_egr_port_group_id_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x30010:
        return loci_validate_of_oxm_bsn_in_ports_128_OF_VERSION_1_4(data, len, out_len);
    case 0x30120:
        return loci_validate_of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x32640:
        return loci_validate_of_oxm_bsn_in_ports_512_OF_VERSION_1_4(data, len, out_len);
    case 0x32780:
        return loci_validate_of_oxm_bsn_in_ports_512_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x32804:
        return loci_validate_of_oxm_bsn_ingress_port_group_id_OF_VERSION_1_4(data, len, out_len);
    case 0x32908:
        return loci_validate_of_oxm_bsn_ingress_port_group_id_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x30804:
        return loci_validate_of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_4(data, len, out_len);
    case 0x30908:
        return loci_validate_of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x30a04:
        return loci_validate_of_oxm_bsn_l3_src_class_id_OF_VERSION_1_4(data, len, out_len);
    case 0x30b08:
        return loci_validate_of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x30204:
        return loci_validate_of_oxm_bsn_lag_id_OF_VERSION_1_4(data, len, out_len);
    case 0x30308:
        return loci_validate_of_oxm_bsn_lag_id_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x32002:
        return loci_validate_of_oxm_bsn_tcp_flags_OF_VERSION_1_4(data, len, out_len);
    case 0x32104:
        return loci_validate_of_oxm_bsn_tcp_flags_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x31004:
        return loci_validate_of_oxm_bsn_udf0_OF_VERSION_1_4(data, len, out_len);
    case 0x31108:
        return loci_validate_of_oxm_bsn_udf0_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x31204:
        return loci_validate_of_oxm_bsn_udf1_OF_VERSION_1_4(data, len, out_len);
    case 0x31308:
        return loci_validate_of_oxm_bsn_udf1_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x31404:
        return loci_validate_of_oxm_bsn_udf2_OF_VERSION_1_4(data, len, out_len);
    case 0x31508:
        return loci_validate_of_oxm_bsn_udf2_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x31604:
        return loci_validate_of_oxm_bsn_udf3_OF_VERSION_1_4(data, len, out_len);
    case 0x31708:
        return loci_validate_of_oxm_bsn_udf3_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x31804:
        return loci_validate_of_oxm_bsn_udf4_OF_VERSION_1_4(data, len, out_len);
    case 0x31908:
        return loci_validate_of_oxm_bsn_udf4_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x31a04:
        return loci_validate_of_oxm_bsn_udf5_OF_VERSION_1_4(data, len, out_len);
    case 0x31b08:
        return loci_validate_of_oxm_bsn_udf5_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x31c04:
        return loci_validate_of_oxm_bsn_udf6_OF_VERSION_1_4(data, len, out_len);
    case 0x31d08:
        return loci_validate_of_oxm_bsn_udf6_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x31e04:
        return loci_validate_of_oxm_bsn_udf7_OF_VERSION_1_4(data, len, out_len);
    case 0x31f08:
        return loci_validate_of_oxm_bsn_udf7_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x32204:
        return loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_OF_VERSION_1_4(data, len, out_len);
    case 0x32308:
        return loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x30404:
        return loci_validate_of_oxm_bsn_vrf_OF_VERSION_1_4(data, len, out_len);
    case 0x30508:
        return loci_validate_of_oxm_bsn_vrf_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80000606:
        return loci_validate_of_oxm_eth_dst_OF_VERSION_1_4(data, len, out_len);
    case 0x8000070c:
        return loci_validate_of_oxm_eth_dst_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80000806:
        return loci_validate_of_oxm_eth_src_OF_VERSION_1_4(data, len, out_len);
    case 0x8000090c:
        return loci_validate_of_oxm_eth_src_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80000a02:
        return loci_validate_of_oxm_eth_type_OF_VERSION_1_4(data, len, out_len);
    case 0x80000b04:
        return loci_validate_of_oxm_eth_type_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80002801:
        return loci_validate_of_oxm_icmpv4_code_OF_VERSION_1_4(data, len, out_len);
    case 0x80002902:
        return loci_validate_of_oxm_icmpv4_code_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80002601:
        return loci_validate_of_oxm_icmpv4_type_OF_VERSION_1_4(data, len, out_len);
    case 0x80002702:
        return loci_validate_of_oxm_icmpv4_type_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80003c01:
        return loci_validate_of_oxm_icmpv6_code_OF_VERSION_1_4(data, len, out_len);
    case 0x80003d02:
        return loci_validate_of_oxm_icmpv6_code_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80003a01:
        return loci_validate_of_oxm_icmpv6_type_OF_VERSION_1_4(data, len, out_len);
    case 0x80003b02:
        return loci_validate_of_oxm_icmpv6_type_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80000204:
        return loci_validate_of_oxm_in_phy_port_OF_VERSION_1_4(data, len, out_len);
    case 0x80000308:
        return loci_validate_of_oxm_in_phy_port_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80000004:
        return loci_validate_of_oxm_in_port_OF_VERSION_1_4(data, len, out_len);
    case 0x80000108:
        return loci_validate_of_oxm_in_port_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80001001:
        return loci_validate_of_oxm_ip_dscp_OF_VERSION_1_4(data, len, out_len);
    case 0x80001102:
        return loci_validate_of_oxm_ip_dscp_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80001201:
        return loci_validate_of_oxm_ip_ecn_OF_VERSION_1_4(data, len, out_len);
    case 0x80001302:
        return loci_validate_of_oxm_ip_ecn_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80001401:
        return loci_validate_of_oxm_ip_proto_OF_VERSION_1_4(data, len, out_len);
    case 0x80001502:
        return loci_validate_of_oxm_ip_proto_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80001804:
        return loci_validate_of_oxm_ipv4_dst_OF_VERSION_1_4(data, len, out_len);
    case 0x80001908:
        return loci_validate_of_oxm_ipv4_dst_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80001604:
        return loci_validate_of_oxm_ipv4_src_OF_VERSION_1_4(data, len, out_len);
    case 0x80001708:
        return loci_validate_of_oxm_ipv4_src_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80003610:
        return loci_validate_of_oxm_ipv6_dst_OF_VERSION_1_4(data, len, out_len);
    case 0x80003720:
        return loci_validate_of_oxm_ipv6_dst_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80004e02:
        return loci_validate_of_oxm_ipv6_exthdr_OF_VERSION_1_4(data, len, out_len);
    case 0x80004f04:
        return loci_validate_of_oxm_ipv6_exthdr_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80003804:
        return loci_validate_of_oxm_ipv6_flabel_OF_VERSION_1_4(data, len, out_len);
    case 0x80003908:
        return loci_validate_of_oxm_ipv6_flabel_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80004006:
        return loci_validate_of_oxm_ipv6_nd_sll_OF_VERSION_1_4(data, len, out_len);
    case 0x8000410c:
        return loci_validate_of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80003e10:
        return loci_validate_of_oxm_ipv6_nd_target_OF_VERSION_1_4(data, len, out_len);
    case 0x80003f20:
        return loci_validate_of_oxm_ipv6_nd_target_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80004206:
        return loci_validate_of_oxm_ipv6_nd_tll_OF_VERSION_1_4(data, len, out_len);
    case 0x8000430c:
        return loci_validate_of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80003410:
        return loci_validate_of_oxm_ipv6_src_OF_VERSION_1_4(data, len, out_len);
    case 0x80003520:
        return loci_validate_of_oxm_ipv6_src_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80000408:
        return loci_validate_of_oxm_metadata_OF_VERSION_1_4(data, len, out_len);
    case 0x80000510:
        return loci_validate_of_oxm_metadata_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80004801:
        return loci_validate_of_oxm_mpls_bos_OF_VERSION_1_4(data, len, out_len);
    case 0x80004902:
        return loci_validate_of_oxm_mpls_bos_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80004404:
        return loci_validate_of_oxm_mpls_label_OF_VERSION_1_4(data, len, out_len);
    case 0x80004508:
        return loci_validate_of_oxm_mpls_label_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80004601:
        return loci_validate_of_oxm_mpls_tc_OF_VERSION_1_4(data, len, out_len);
    case 0x80004702:
        return loci_validate_of_oxm_mpls_tc_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80005201:
        return loci_validate_of_oxm_pbb_uca_OF_VERSION_1_4(data, len, out_len);
    case 0x80005302:
        return loci_validate_of_oxm_pbb_uca_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80002402:
        return loci_validate_of_oxm_sctp_dst_OF_VERSION_1_4(data, len, out_len);
    case 0x80002504:
        return loci_validate_of_oxm_sctp_dst_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80002202:
        return loci_validate_of_oxm_sctp_src_OF_VERSION_1_4(data, len, out_len);
    case 0x80002304:
        return loci_validate_of_oxm_sctp_src_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80001c02:
        return loci_validate_of_oxm_tcp_dst_OF_VERSION_1_4(data, len, out_len);
    case 0x80001d04:
        return loci_validate_of_oxm_tcp_dst_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80001a02:
        return loci_validate_of_oxm_tcp_src_OF_VERSION_1_4(data, len, out_len);
    case 0x80001b04:
        return loci_validate_of_oxm_tcp_src_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80004c08:
        return loci_validate_of_oxm_tunnel_id_OF_VERSION_1_4(data, len, out_len);
    case 0x80004d10:
        return loci_validate_of_oxm_tunnel_id_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x14004:
        return loci_validate_of_oxm_tunnel_ipv4_dst_OF_VERSION_1_4(data, len, out_len);
    case 0x14108:
        return loci_validate_of_oxm_tunnel_ipv4_dst_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x13e04:
        return loci_validate_of_oxm_tunnel_ipv4_src_OF_VERSION_1_4(data, len, out_len);
    case 0x13f08:
        return loci_validate_of_oxm_tunnel_ipv4_src_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80002002:
        return loci_validate_of_oxm_udp_dst_OF_VERSION_1_4(data, len, out_len);
    case 0x80002104:
        return loci_validate_of_oxm_udp_dst_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80001e02:
        return loci_validate_of_oxm_udp_src_OF_VERSION_1_4(data, len, out_len);
    case 0x80001f04:
        return loci_validate_of_oxm_udp_src_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80000e01:
        return loci_validate_of_oxm_vlan_pcp_OF_VERSION_1_4(data, len, out_len);
    case 0x80000f02:
        return loci_validate_of_oxm_vlan_pcp_masked_OF_VERSION_1_4(data, len, out_len);
    case 0x80000c02:
        return loci_validate_of_oxm_vlan_vid_OF_VERSION_1_4(data, len, out_len);
    case 0x80000d04:
        return loci_validate_of_oxm_vlan_vid_masked_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_field_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_set_field_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_mpls_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_set_mpls_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_nw_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_set_nw_ttl_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_set_queue_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_action_id_set_queue_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_header_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint8_t wire_type;
    buf_u8_get(data + 1, &wire_type);
    switch (wire_type) {
    case 0x13:
        return loci_validate_of_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x12:
        return loci_validate_of_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x1b:
        return loci_validate_of_async_get_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x1a:
        return loci_validate_of_async_get_request_OF_VERSION_1_4(data, len, out_len);
    case 0x1c:
        return loci_validate_of_async_set_OF_VERSION_1_4(data, len, out_len);
    case 0x15:
        return loci_validate_of_barrier_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x14:
        return loci_validate_of_barrier_request_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_experimenter_OF_VERSION_1_4(data, len, out_len);
    case 0x22:
        return loci_validate_of_bundle_add_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x21:
        return loci_validate_of_bundle_ctrl_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_echo_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_echo_request_OF_VERSION_1_4(data, len, out_len);
    case 0x6:
        return loci_validate_of_features_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_features_request_OF_VERSION_1_4(data, len, out_len);
    case 0xe:
        return loci_validate_of_flow_mod_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_flow_removed_OF_VERSION_1_4(data, len, out_len);
    case 0x8:
        return loci_validate_of_get_config_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x7:
        return loci_validate_of_get_config_request_OF_VERSION_1_4(data, len, out_len);
    case 0xf:
        return loci_validate_of_group_mod_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_hello_OF_VERSION_1_4(data, len, out_len);
    case 0x1d:
        return loci_validate_of_meter_mod_OF_VERSION_1_4(data, len, out_len);
    case 0xa:
        return loci_validate_of_packet_in_OF_VERSION_1_4(data, len, out_len);
    case 0xd:
        return loci_validate_of_packet_out_OF_VERSION_1_4(data, len, out_len);
    case 0x10:
        return loci_validate_of_port_mod_OF_VERSION_1_4(data, len, out_len);
    case 0xc:
        return loci_validate_of_port_status_OF_VERSION_1_4(data, len, out_len);
    case 0x20:
        return loci_validate_of_requestforward_OF_VERSION_1_4(data, len, out_len);
    case 0x19:
        return loci_validate_of_role_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x18:
        return loci_validate_of_role_request_OF_VERSION_1_4(data, len, out_len);
    case 0x1e:
        return loci_validate_of_role_status_OF_VERSION_1_4(data, len, out_len);
    case 0x9:
        return loci_validate_of_set_config_OF_VERSION_1_4(data, len, out_len);
    case 0x11:
        return loci_validate_of_table_mod_OF_VERSION_1_4(data, len, out_len);
    case 0x1f:
        return loci_validate_of_table_status_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_aggregate_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_desc_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x7:
        return loci_validate_of_group_desc_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x8:
        return loci_validate_of_group_features_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x6:
        return loci_validate_of_group_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xa:
        return loci_validate_of_meter_config_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_meter_features_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x9:
        return loci_validate_of_meter_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xd:
        return loci_validate_of_port_desc_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_port_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xf:
        return loci_validate_of_queue_desc_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_queue_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xe:
        return loci_validate_of_table_desc_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xc:
        return loci_validate_of_table_features_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_table_stats_reply_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_aggregate_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }

    len = 40;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x2:
        return loci_validate_of_aggregate_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_desc_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x7:
        return loci_validate_of_group_desc_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x8:
        return loci_validate_of_group_features_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x6:
        return loci_validate_of_group_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0xa:
        return loci_validate_of_meter_config_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_meter_features_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x9:
        return loci_validate_of_meter_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0xd:
        return loci_validate_of_port_desc_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_port_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0xf:
        return loci_validate_of_queue_desc_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_queue_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0xe:
        return loci_validate_of_table_desc_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0xc:
        return loci_validate_of_table_features_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_table_stats_request_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_aggregate_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0xf:
        return loci_validate_of_async_config_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_bad_action_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_bad_instruction_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_bad_match_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0xe:
        return loci_validate_of_bad_property_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_bad_request_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x11:
        return loci_validate_of_bundle_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0xffff:
        return loci_validate_of_experimenter_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x10:
        return loci_validate_of_flow_monitor_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x6:
        return loci_validate_of_group_mod_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_hello_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0xc:
        return loci_validate_of_meter_mod_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x7:
        return loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x9:
        return loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_role_request_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0xa:
        return loci_validate_of_switch_config_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0xd:
        return loci_validate_of_table_features_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    case 0x8:
        return loci_validate_of_table_mod_failed_error_msg_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_async_config_prop_experimenter_master_OF_VERSION_1_4(data, len, out_len);
    case 0xfffe:
        return loci_validate_of_async_config_prop_experimenter_slave_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_async_config_prop_flow_removed_master_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_async_config_prop_flow_removed_slave_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_async_config_prop_packet_in_master_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_async_config_prop_packet_in_slave_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_async_config_prop_port_status_master_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_async_config_prop_port_status_slave_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_async_config_prop_requestforward_master_OF_VERSION_1_4(data, len, out_len);
    case 0xa:
        return loci_validate_of_async_config_prop_requestforward_slave_OF_VERSION_1_4(data, len, out_len);
    case 0x7:
        return loci_validate_of_async_config_prop_role_status_master_OF_VERSION_1_4(data, len, out_len);
    case 0x6:
        return loci_validate_of_async_config_prop_role_status_slave_OF_VERSION_1_4(data, len, out_len);
    case 0x9:
        return loci_validate_of_async_config_prop_table_status_master_OF_VERSION_1_4(data, len, out_len);
    case 0x8:
        return loci_validate_of_async_config_prop_table_status_slave_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_experimenter_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_experimenter_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_flow_removed_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_flow_removed_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_packet_in_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_packet_in_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_port_status_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_port_status_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_requestforward_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_requestforward_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_role_status_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_role_status_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_table_status_master_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_config_prop_table_status_slave_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_get_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 8;
    if (loci_validate_of_list_async_config_prop_OF_VERSION_1_4(data + 8, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_get_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 8;
    if (loci_validate_of_list_async_config_prop_OF_VERSION_1_4(data + 8, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_async_set_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 8;
    if (loci_validate_of_list_async_config_prop_OF_VERSION_1_4(data + 8, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_action_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_instruction_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_match_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_property_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bad_request_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_barrier_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_barrier_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_header_OF_VERSION_1_4(data, len, out_len);
    case 0x2320:
        return loci_validate_of_nicira_header_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_header_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 12, &wire_type);
    switch (wire_type) {
    case 0x3c:
        return loci_validate_of_bsn_arp_idle_OF_VERSION_1_4(data, len, out_len);
    case 0x16:
        return loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x15:
        return loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_4(data, len, out_len);
    case 0x14:
        return loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x13:
        return loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_4(data, len, out_len);
    case 0x17:
        return loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x12:
        return loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_4(data, len, out_len);
    case 0x39:
        return loci_validate_of_bsn_controller_connections_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x38:
        return loci_validate_of_bsn_controller_connections_request_OF_VERSION_1_4(data, len, out_len);
    case 0x28:
        return loci_validate_of_bsn_flow_idle_OF_VERSION_1_4(data, len, out_len);
    case 0x27:
        return loci_validate_of_bsn_flow_idle_enable_get_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x26:
        return loci_validate_of_bsn_flow_idle_enable_get_request_OF_VERSION_1_4(data, len, out_len);
    case 0x25:
        return loci_validate_of_bsn_flow_idle_enable_set_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x24:
        return loci_validate_of_bsn_flow_idle_enable_set_request_OF_VERSION_1_4(data, len, out_len);
    case 0x31:
        return loci_validate_of_bsn_gentable_clear_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x30:
        return loci_validate_of_bsn_gentable_clear_request_OF_VERSION_1_4(data, len, out_len);
    case 0x2e:
        return loci_validate_of_bsn_gentable_entry_add_OF_VERSION_1_4(data, len, out_len);
    case 0x2f:
        return loci_validate_of_bsn_gentable_entry_delete_OF_VERSION_1_4(data, len, out_len);
    case 0x32:
        return loci_validate_of_bsn_gentable_set_buckets_size_OF_VERSION_1_4(data, len, out_len);
    case 0xa:
        return loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x9:
        return loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_4(data, len, out_len);
    case 0x34:
        return loci_validate_of_bsn_get_switch_pipeline_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x33:
        return loci_validate_of_bsn_get_switch_pipeline_request_OF_VERSION_1_4(data, len, out_len);
    case 0x2b:
        return loci_validate_of_bsn_lacp_convergence_notif_OF_VERSION_1_4(data, len, out_len);
    case 0x3f:
        return loci_validate_of_bsn_log_OF_VERSION_1_4(data, len, out_len);
    case 0x42:
        return loci_validate_of_bsn_lua_command_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x41:
        return loci_validate_of_bsn_lua_command_request_OF_VERSION_1_4(data, len, out_len);
    case 0x43:
        return loci_validate_of_bsn_lua_notification_OF_VERSION_1_4(data, len, out_len);
    case 0x40:
        return loci_validate_of_bsn_lua_upload_OF_VERSION_1_4(data, len, out_len);
    case 0x22:
        return loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x21:
        return loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_4(data, len, out_len);
    case 0x23:
        return loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_4(data, len, out_len);
    case 0x20:
        return loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x1f:
        return loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_4(data, len, out_len);
    case 0x3b:
        return loci_validate_of_bsn_set_aux_cxns_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x3a:
        return loci_validate_of_bsn_set_aux_cxns_request_OF_VERSION_1_4(data, len, out_len);
    case 0x2a:
        return loci_validate_of_bsn_set_lacp_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x29:
        return loci_validate_of_bsn_set_lacp_request_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_bsn_set_mirroring_OF_VERSION_1_4(data, len, out_len);
    case 0x19:
        return loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_4(data, len, out_len);
    case 0x36:
        return loci_validate_of_bsn_set_switch_pipeline_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x35:
        return loci_validate_of_bsn_set_switch_pipeline_request_OF_VERSION_1_4(data, len, out_len);
    case 0x3d:
        return loci_validate_of_bsn_table_set_buckets_size_OF_VERSION_1_4(data, len, out_len);
    case 0x2d:
        return loci_validate_of_bsn_time_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x2c:
        return loci_validate_of_bsn_time_request_OF_VERSION_1_4(data, len, out_len);
    case 0x10:
        return loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xf:
        return loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_4(data, len, out_len);
    case 0x1a:
        return loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x11:
        return loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_arp_idle_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_clear_data_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_clear_data_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_get_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_get_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_set_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_bw_enable_set_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_controller_connection_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 264) {
        return -1;
    }

    len = 264;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_controller_connections_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_connections = len - 16;
    if (loci_validate_of_list_bsn_controller_connection_OF_VERSION_1_4(data + 16, wire_len_connections, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_controller_connections_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_debug_counter_desc_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 328) {
        return -1;
    }

    len = 328;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 16, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_stats_reply_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 20, &wire_type);
    switch (wire_type) {
    case 0xd:
        return loci_validate_of_bsn_debug_counter_desc_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xc:
        return loci_validate_of_bsn_debug_counter_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xa:
        return loci_validate_of_bsn_flow_checksum_bucket_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x10:
        return loci_validate_of_bsn_generic_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_bsn_gentable_bucket_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_bsn_gentable_desc_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_bsn_gentable_entry_desc_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_bsn_gentable_entry_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x7:
        return loci_validate_of_bsn_gentable_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xe:
        return loci_validate_of_bsn_image_desc_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_bsn_lacp_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x8:
        return loci_validate_of_bsn_port_counter_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x6:
        return loci_validate_of_bsn_switch_pipeline_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_bsn_table_checksum_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0x9:
        return loci_validate_of_bsn_vlan_counter_stats_reply_OF_VERSION_1_4(data, len, out_len);
    case 0xf:
        return loci_validate_of_bsn_vrf_counter_stats_reply_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_debug_counter_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_debug_counter_desc_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 16, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_bsn_stats_request_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 20, &wire_type);
    switch (wire_type) {
    case 0xd:
        return loci_validate_of_bsn_debug_counter_desc_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0xc:
        return loci_validate_of_bsn_debug_counter_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0xa:
        return loci_validate_of_bsn_flow_checksum_bucket_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x10:
        return loci_validate_of_bsn_generic_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_bsn_gentable_bucket_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_bsn_gentable_desc_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_bsn_gentable_entry_desc_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_bsn_gentable_entry_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x7:
        return loci_validate_of_bsn_gentable_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0xe:
        return loci_validate_of_bsn_image_desc_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_bsn_lacp_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x8:
        return loci_validate_of_bsn_port_counter_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x6:
        return loci_validate_of_bsn_switch_pipeline_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_bsn_table_checksum_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0x9:
        return loci_validate_of_bsn_vlan_counter_stats_request_OF_VERSION_1_4(data, len, out_len);
    case 0xf:
        return loci_validate_of_bsn_vrf_counter_stats_request_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_debug_counter_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_debug_counter_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_debug_counter_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_debug_counter_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_debug_counter_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_checksum_bucket_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_checksum_bucket_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_flow_checksum_bucket_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_checksum_bucket_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 25) {
        return -1;
    }

    len = 25;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 25) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_idle_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_idle_enable_get_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_idle_enable_get_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_idle_enable_set_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_flow_idle_enable_set_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_generic_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 2) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 2) {
        return -1;
    }

    len = wire_len;



    int wire_len_tlvs = len - 2;
    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_4(data + 2, wire_len_tlvs, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_generic_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_generic_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_generic_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 88) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 88) {
        return -1;
    }

    len = wire_len;



    int wire_len_tlvs = len - 88;
    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_4(data + 88, wire_len_tlvs, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_bucket_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_bucket_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_gentable_bucket_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_bucket_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 26) {
        return -1;
    }

    len = 26;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 26) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_clear_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }

    len = 28;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_clear_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 52) {
        return -1;
    }

    len = 52;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 52) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_desc_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 48) {
        return -1;
    }

    len = 48;

    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 48) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_gentable_desc_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_add_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 36) {
        return -1;
    }

    len = wire_len;

    uint16_t wire_len_key;
    buf_u16_get(data + 18, &wire_len_key);



    if (36 + wire_len_key > len) {
        return -1;
    }

    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_4(data + 36, wire_len_key, out_len) < 0) {
        return -1;
    }

    // TODO validate non fixed offset member value

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_delete_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 18) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 18) {
        return -1;
    }

    len = wire_len;



    int wire_len_key = len - 18;
    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_4(data + 18, wire_len_key, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_desc_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }

    len = wire_len;

    uint16_t wire_len_key;
    buf_u16_get(data + 2, &wire_len_key);



    if (20 + wire_len_key > len) {
        return -1;
    }

    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_4(data + 20, wire_len_key, out_len) < 0) {
        return -1;
    }

    // TODO validate non fixed offset member value

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_gentable_entry_desc_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 60) {
        return -1;
    }

    len = 60;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 60) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;

    uint16_t wire_len_key;
    buf_u16_get(data + 2, &wire_len_key);



    if (4 + wire_len_key > len) {
        return -1;
    }

    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_4(data + 4, wire_len_key, out_len) < 0) {
        return -1;
    }

    // TODO validate non fixed offset member stats

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_gentable_entry_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_entry_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 60) {
        return -1;
    }

    len = 60;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 60) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_set_buckets_size_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_gentable_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_gentable_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_interfaces_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_interfaces = len - 16;
    if (loci_validate_of_list_bsn_interface_OF_VERSION_1_4(data + 16, wire_len_interfaces, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_interfaces_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_mirroring_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_mirroring_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_switch_pipeline_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 272) {
        return -1;
    }

    len = 272;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 272) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_get_switch_pipeline_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_image_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 536) {
        return -1;
    }

    len = 536;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 536) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_image_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_interface_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lacp_convergence_notif_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 52) {
        return -1;
    }

    len = 52;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 52) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lacp_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lacp_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_lacp_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lacp_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_log_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 17) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 17) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lua_command_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lua_command_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lua_notification_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_lua_upload_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 82) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 82) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 25) {
        return -1;
    }

    len = 25;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 25) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_rx_timeout_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 21) {
        return -1;
    }

    len = 21;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 21) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_tx_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 25) {
        return -1;
    }

    len = 25;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 25) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_pdu_tx_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_port_counter_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_values = len - 8;
    if (loci_validate_of_list_uint64_OF_VERSION_1_4(data + 8, wire_len_values, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_port_counter_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_port_counter_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_port_counter_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }

    len = 28;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_aux_cxns_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_aux_cxns_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_lacp_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_lacp_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 38) {
        return -1;
    }

    len = 38;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 38) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_mirroring_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_pktin_suppression_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_pktin_suppression_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_switch_pipeline_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_set_switch_pipeline_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 272) {
        return -1;
    }

    len = 272;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 272) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_switch_pipeline_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 256) {
        return -1;
    }

    len = 256;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_switch_pipeline_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_switch_pipeline_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_switch_pipeline_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_table_checksum_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 9) {
        return -1;
    }

    len = 9;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_table_checksum_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_table_checksum_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_table_checksum_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_table_set_buckets_size_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_time_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_time_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x2c:
        return loci_validate_of_bsn_tlv_actor_key_OF_VERSION_1_4(data, len, out_len);
    case 0x2b:
        return loci_validate_of_bsn_tlv_actor_port_num_OF_VERSION_1_4(data, len, out_len);
    case 0x2a:
        return loci_validate_of_bsn_tlv_actor_port_priority_OF_VERSION_1_4(data, len, out_len);
    case 0x35:
        return loci_validate_of_bsn_tlv_actor_state_OF_VERSION_1_4(data, len, out_len);
    case 0x29:
        return loci_validate_of_bsn_tlv_actor_system_mac_OF_VERSION_1_4(data, len, out_len);
    case 0x28:
        return loci_validate_of_bsn_tlv_actor_system_priority_OF_VERSION_1_4(data, len, out_len);
    case 0xa:
        return loci_validate_of_bsn_tlv_broadcast_query_timeout_OF_VERSION_1_4(data, len, out_len);
    case 0x40:
        return loci_validate_of_bsn_tlv_bucket_OF_VERSION_1_4(data, len, out_len);
    case 0xe:
        return loci_validate_of_bsn_tlv_circuit_id_OF_VERSION_1_4(data, len, out_len);
    case 0x2d:
        return loci_validate_of_bsn_tlv_convergence_status_OF_VERSION_1_4(data, len, out_len);
    case 0x16:
        return loci_validate_of_bsn_tlv_crc_enabled_OF_VERSION_1_4(data, len, out_len);
    case 0x37:
        return loci_validate_of_bsn_tlv_data_OF_VERSION_1_4(data, len, out_len);
    case 0x21:
        return loci_validate_of_bsn_tlv_eth_dst_OF_VERSION_1_4(data, len, out_len);
    case 0x20:
        return loci_validate_of_bsn_tlv_eth_src_OF_VERSION_1_4(data, len, out_len);
    case 0x1a:
        return loci_validate_of_bsn_tlv_external_gateway_ip_OF_VERSION_1_4(data, len, out_len);
    case 0x1d:
        return loci_validate_of_bsn_tlv_external_gateway_mac_OF_VERSION_1_4(data, len, out_len);
    case 0x17:
        return loci_validate_of_bsn_tlv_external_ip_OF_VERSION_1_4(data, len, out_len);
    case 0x18:
        return loci_validate_of_bsn_tlv_external_mac_OF_VERSION_1_4(data, len, out_len);
    case 0x19:
        return loci_validate_of_bsn_tlv_external_netmask_OF_VERSION_1_4(data, len, out_len);
    case 0x1f:
        return loci_validate_of_bsn_tlv_header_size_OF_VERSION_1_4(data, len, out_len);
    case 0x45:
        return loci_validate_of_bsn_tlv_icmp_code_OF_VERSION_1_4(data, len, out_len);
    case 0x46:
        return loci_validate_of_bsn_tlv_icmp_id_OF_VERSION_1_4(data, len, out_len);
    case 0x44:
        return loci_validate_of_bsn_tlv_icmp_type_OF_VERSION_1_4(data, len, out_len);
    case 0x7:
        return loci_validate_of_bsn_tlv_idle_notification_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_bsn_tlv_idle_time_OF_VERSION_1_4(data, len, out_len);
    case 0x8:
        return loci_validate_of_bsn_tlv_idle_timeout_OF_VERSION_1_4(data, len, out_len);
    case 0x1c:
        return loci_validate_of_bsn_tlv_internal_gateway_mac_OF_VERSION_1_4(data, len, out_len);
    case 0x1b:
        return loci_validate_of_bsn_tlv_internal_mac_OF_VERSION_1_4(data, len, out_len);
    case 0x3a:
        return loci_validate_of_bsn_tlv_interval_OF_VERSION_1_4(data, len, out_len);
    case 0x43:
        return loci_validate_of_bsn_tlv_ip_proto_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_bsn_tlv_ipv4_OF_VERSION_1_4(data, len, out_len);
    case 0x23:
        return loci_validate_of_bsn_tlv_ipv4_dst_OF_VERSION_1_4(data, len, out_len);
    case 0x3c:
        return loci_validate_of_bsn_tlv_ipv4_netmask_OF_VERSION_1_4(data, len, out_len);
    case 0x22:
        return loci_validate_of_bsn_tlv_ipv4_src_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_bsn_tlv_mac_OF_VERSION_1_4(data, len, out_len);
    case 0x38:
        return loci_validate_of_bsn_tlv_mac_mask_OF_VERSION_1_4(data, len, out_len);
    case 0xd:
        return loci_validate_of_bsn_tlv_miss_packets_OF_VERSION_1_4(data, len, out_len);
    case 0x3e:
        return loci_validate_of_bsn_tlv_mpls_control_word_OF_VERSION_1_4(data, len, out_len);
    case 0x3d:
        return loci_validate_of_bsn_tlv_mpls_label_OF_VERSION_1_4(data, len, out_len);
    case 0x3f:
        return loci_validate_of_bsn_tlv_mpls_sequenced_OF_VERSION_1_4(data, len, out_len);
    case 0x34:
        return loci_validate_of_bsn_tlv_name_OF_VERSION_1_4(data, len, out_len);
    case 0x33:
        return loci_validate_of_bsn_tlv_partner_key_OF_VERSION_1_4(data, len, out_len);
    case 0x32:
        return loci_validate_of_bsn_tlv_partner_port_num_OF_VERSION_1_4(data, len, out_len);
    case 0x31:
        return loci_validate_of_bsn_tlv_partner_port_priority_OF_VERSION_1_4(data, len, out_len);
    case 0x36:
        return loci_validate_of_bsn_tlv_partner_state_OF_VERSION_1_4(data, len, out_len);
    case 0x30:
        return loci_validate_of_bsn_tlv_partner_system_mac_OF_VERSION_1_4(data, len, out_len);
    case 0x2f:
        return loci_validate_of_bsn_tlv_partner_system_priority_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_bsn_tlv_port_OF_VERSION_1_4(data, len, out_len);
    case 0x39:
        return loci_validate_of_bsn_tlv_priority_OF_VERSION_1_4(data, len, out_len);
    case 0x14:
        return loci_validate_of_bsn_tlv_queue_id_OF_VERSION_1_4(data, len, out_len);
    case 0x15:
        return loci_validate_of_bsn_tlv_queue_weight_OF_VERSION_1_4(data, len, out_len);
    case 0x3b:
        return loci_validate_of_bsn_tlv_reference_OF_VERSION_1_4(data, len, out_len);
    case 0xc:
        return loci_validate_of_bsn_tlv_reply_packets_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_bsn_tlv_request_packets_OF_VERSION_1_4(data, len, out_len);
    case 0x47:
        return loci_validate_of_bsn_tlv_rx_bytes_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_bsn_tlv_rx_packets_OF_VERSION_1_4(data, len, out_len);
    case 0x1e:
        return loci_validate_of_bsn_tlv_sampling_rate_OF_VERSION_1_4(data, len, out_len);
    case 0x26:
        return loci_validate_of_bsn_tlv_sub_agent_id_OF_VERSION_1_4(data, len, out_len);
    case 0x42:
        return loci_validate_of_bsn_tlv_tcp_dst_OF_VERSION_1_4(data, len, out_len);
    case 0x41:
        return loci_validate_of_bsn_tlv_tcp_src_OF_VERSION_1_4(data, len, out_len);
    case 0x27:
        return loci_validate_of_bsn_tlv_tx_bytes_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_bsn_tlv_tx_packets_OF_VERSION_1_4(data, len, out_len);
    case 0x10:
        return loci_validate_of_bsn_tlv_udf_anchor_OF_VERSION_1_4(data, len, out_len);
    case 0xf:
        return loci_validate_of_bsn_tlv_udf_id_OF_VERSION_1_4(data, len, out_len);
    case 0x12:
        return loci_validate_of_bsn_tlv_udf_length_OF_VERSION_1_4(data, len, out_len);
    case 0x11:
        return loci_validate_of_bsn_tlv_udf_offset_OF_VERSION_1_4(data, len, out_len);
    case 0x25:
        return loci_validate_of_bsn_tlv_udp_dst_OF_VERSION_1_4(data, len, out_len);
    case 0x24:
        return loci_validate_of_bsn_tlv_udp_src_OF_VERSION_1_4(data, len, out_len);
    case 0x9:
        return loci_validate_of_bsn_tlv_unicast_query_timeout_OF_VERSION_1_4(data, len, out_len);
    case 0x6:
        return loci_validate_of_bsn_tlv_vlan_vid_OF_VERSION_1_4(data, len, out_len);
    case 0x13:
        return loci_validate_of_bsn_tlv_vrf_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_actor_key_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_actor_port_num_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_actor_port_priority_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_actor_state_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_actor_system_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_actor_system_priority_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_broadcast_query_timeout_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_bucket_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_value = len - 4;
    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_4(data + 4, wire_len_value, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_circuit_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_convergence_status_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_crc_enabled_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_data_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_eth_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_eth_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_external_gateway_ip_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_external_gateway_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_external_ip_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_external_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_external_netmask_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_header_size_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_icmp_code_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_icmp_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_icmp_type_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_idle_notification_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_idle_time_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_idle_timeout_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_internal_gateway_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_internal_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_interval_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_ip_proto_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_ipv4_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_ipv4_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_ipv4_netmask_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_ipv4_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_mac_mask_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_miss_packets_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_mpls_control_word_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_mpls_label_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_mpls_sequenced_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_name_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_partner_key_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_partner_port_num_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_partner_port_priority_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_partner_state_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 5) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_partner_system_mac_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 10) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_partner_system_priority_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_port_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_priority_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_queue_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_queue_weight_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_reference_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }

    len = wire_len;



    int wire_len_key = len - 6;
    if (loci_validate_of_list_bsn_tlv_OF_VERSION_1_4(data + 6, wire_len_key, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_reply_packets_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_request_packets_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_rx_bytes_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_rx_packets_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_sampling_rate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_sub_agent_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_tcp_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_tcp_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_tx_bytes_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_tx_packets_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_udf_anchor_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_udf_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_udf_length_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_udf_offset_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_udp_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_udp_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_unicast_query_timeout_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_vlan_vid_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 6) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_tlv_vrf_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_create_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_create_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_bsn_vport_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_remove_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_virtual_port_remove_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 20) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vlan_counter_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_values = len - 8;
    if (loci_validate_of_list_uint64_OF_VERSION_1_4(data + 8, wire_len_values, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vlan_counter_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_vlan_counter_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vlan_counter_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 26) {
        return -1;
    }

    len = 26;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 26) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_l2gre_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 64) {
        return -1;
    }

    len = 64;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 64) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vport_q_in_q_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vrf_counter_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_values = len - 8;
    if (loci_validate_of_list_uint64_OF_VERSION_1_4(data + 8, wire_len_values, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vrf_counter_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 24;
    if (loci_validate_of_list_bsn_vrf_counter_stats_entry_OF_VERSION_1_4(data + 24, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bsn_vrf_counter_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }

    len = 28;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bucket_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_actions = len - 16;
    if (loci_validate_of_list_action_OF_VERSION_1_4(data + 16, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bucket_counter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bundle_add_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bundle_ctrl_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 16;
    if (loci_validate_of_list_bundle_prop_OF_VERSION_1_4(data + 16, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bundle_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_bundle_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_bundle_prop_experimenter_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_bundle_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 1072) {
        return -1;
    }

    len = 1072;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 1072) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_echo_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_echo_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_experimenter_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_features_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_features_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_mod_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;


    uint8_t wire_type;
    buf_u8_get(data + 25, &wire_type);
    switch (wire_type) {
    case 0x0:
        return loci_validate_of_flow_add_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_flow_delete_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_flow_delete_strict_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_flow_modify_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_flow_modify_strict_OF_VERSION_1_4(data, len, out_len);
    }

    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_add_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_delete_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_delete_strict_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_mod_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_modify_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_modify_strict_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_monitor_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_removed_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t
    // TODO validate non fixed offset member instructions

    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_flow_stats_entry_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_flow_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_get_config_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_get_config_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_mod_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x0:
        return loci_validate_of_group_add_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_group_delete_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_group_modify_OF_VERSION_1_4(data, len, out_len);
    }

    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_4(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_add_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_4(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_delete_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_4(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_desc_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 8;
    if (loci_validate_of_list_bucket_OF_VERSION_1_4(data + 8, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_group_desc_stats_entry_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_features_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }

    len = 56;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_features_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_mod_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_modify_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_buckets = len - 16;
    if (loci_validate_of_list_bucket_OF_VERSION_1_4(data + 16, wire_len_buckets, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }

    len = wire_len;



    int wire_len_bucket_stats = len - 40;
    if (loci_validate_of_list_bucket_counter_OF_VERSION_1_4(data + 40, wire_len_bucket_stats, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_group_stats_entry_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_group_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_elements = len - 8;
    if (loci_validate_of_list_hello_elem_OF_VERSION_1_4(data + 8, wire_len_elements, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_elem_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_hello_elem_versionbitmap_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_elem_versionbitmap_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_bitmaps = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_4(data + 4, wire_len_bitmaps, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_hello_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_instruction_apply_actions_OF_VERSION_1_4(data, len, out_len);
    case 0xffff:
        return loci_validate_of_instruction_experimenter_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_instruction_clear_actions_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_instruction_goto_table_OF_VERSION_1_4(data, len, out_len);
    case 0x6:
        return loci_validate_of_instruction_meter_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_instruction_write_actions_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_instruction_write_metadata_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x4:
        return loci_validate_of_instruction_id_apply_actions_OF_VERSION_1_4(data, len, out_len);
    case 0xffff:
        return loci_validate_of_instruction_id_experimenter_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_instruction_id_clear_actions_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_instruction_id_goto_table_OF_VERSION_1_4(data, len, out_len);
    case 0x6:
        return loci_validate_of_instruction_id_meter_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_instruction_id_write_actions_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_instruction_id_write_metadata_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_apply_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_actions = len - 8;
    if (loci_validate_of_list_action_OF_VERSION_1_4(data + 8, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_apply_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_instruction_bsn_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_instruction_bsn_arp_offload_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_instruction_bsn_auto_negotiation_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_instruction_bsn_deny_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_instruction_bsn_dhcp_offload_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_instruction_bsn_disable_src_mac_check_OF_VERSION_1_4(data, len, out_len);
    case 0x9:
        return loci_validate_of_instruction_bsn_disable_vlan_counters_OF_VERSION_1_4(data, len, out_len);
    case 0x6:
        return loci_validate_of_instruction_bsn_packet_of_death_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_instruction_bsn_permit_OF_VERSION_1_4(data, len, out_len);
    case 0x7:
        return loci_validate_of_instruction_bsn_prioritize_pdus_OF_VERSION_1_4(data, len, out_len);
    case 0x8:
        return loci_validate_of_instruction_bsn_require_vlan_xlate_OF_VERSION_1_4(data, len, out_len);
    case 0xa:
        return loci_validate_of_instruction_bsn_span_destination_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_instruction_id_bsn_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_instruction_id_bsn_arp_offload_OF_VERSION_1_4(data, len, out_len);
    case 0xb:
        return loci_validate_of_instruction_id_bsn_auto_negotiation_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_instruction_id_bsn_deny_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_instruction_id_bsn_dhcp_offload_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_instruction_id_bsn_disable_src_mac_check_OF_VERSION_1_4(data, len, out_len);
    case 0x9:
        return loci_validate_of_instruction_id_bsn_disable_vlan_counters_OF_VERSION_1_4(data, len, out_len);
    case 0x6:
        return loci_validate_of_instruction_id_bsn_packet_of_death_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_instruction_id_bsn_permit_OF_VERSION_1_4(data, len, out_len);
    case 0x7:
        return loci_validate_of_instruction_id_bsn_prioritize_pdus_OF_VERSION_1_4(data, len, out_len);
    case 0x8:
        return loci_validate_of_instruction_id_bsn_require_vlan_xlate_OF_VERSION_1_4(data, len, out_len);
    case 0xa:
        return loci_validate_of_instruction_id_bsn_span_destination_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_arp_offload_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_arp_offload_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_auto_negotiation_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_auto_negotiation_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_deny_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_deny_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_dhcp_offload_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_dhcp_offload_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_disable_src_mac_check_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_disable_src_mac_check_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_disable_vlan_counters_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_disable_vlan_counters_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_packet_of_death_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_packet_of_death_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_permit_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_permit_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_prioritize_pdus_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_prioritize_pdus_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_require_vlan_xlate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_require_vlan_xlate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_bsn_span_destination_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_bsn_span_destination_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_clear_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_clear_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_goto_table_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_goto_table_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_meter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_meter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_write_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_actions = len - 8;
    if (loci_validate_of_list_action_OF_VERSION_1_4(data + 8, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_write_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_write_metadata_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_instruction_id_write_metadata_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_match_v3_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_list = len - 4;
    if (loci_validate_of_list_oxm_OF_VERSION_1_4(data + 4, wire_len_oxm_list, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_band_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x1:
        return loci_validate_of_meter_band_drop_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_meter_band_dscp_remark_OF_VERSION_1_4(data, len, out_len);
    case 0xffff:
        return loci_validate_of_meter_band_experimenter_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_band_drop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_band_dscp_remark_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_band_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_band_stats_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_config_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 8;
    if (loci_validate_of_list_meter_band_OF_VERSION_1_4(data + 8, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_config_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_meter_band_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_config_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_features_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_features_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }



    // TODO validate of_meter_features_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_features_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_mod_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_bands = len - 16;
    if (loci_validate_of_list_meter_band_OF_VERSION_1_4(data + 16, wire_len_bands, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_mod_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_stats_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 4, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }

    len = wire_len;



    int wire_len_band_stats = len - 40;
    if (loci_validate_of_list_meter_band_stats_OF_VERSION_1_4(data + 40, wire_len_band_stats, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_meter_stats_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_meter_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_nicira_header_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 12, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_op_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_op_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_sha_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_sha_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_spa_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_spa_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_tha_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_tha_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_tpa_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_arp_tpa_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_egr_port_group_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_egr_port_group_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_in_ports_128_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_in_ports_128_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_in_ports_512_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 68) {
        return -1;
    }

    len = 68;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_in_ports_512_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 132) {
        return -1;
    }

    len = 132;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_ingress_port_group_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_ingress_port_group_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_interface_class_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_interface_class_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_src_class_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_l3_src_class_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_lag_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_lag_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_tcp_flags_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_tcp_flags_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf0_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf0_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf1_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf1_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf2_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf2_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf3_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf3_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf4_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf4_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf5_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf5_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf6_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf6_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf7_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_udf7_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_vlan_xlate_port_group_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_vrf_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_bsn_vrf_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_type_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_eth_type_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv4_code_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv4_code_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv4_type_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv4_type_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv6_code_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv6_code_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv6_type_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_icmpv6_type_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_in_phy_port_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_in_phy_port_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_in_port_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_in_port_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_dscp_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_dscp_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_ecn_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_ecn_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_proto_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ip_proto_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv4_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv4_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv4_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv4_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_exthdr_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_exthdr_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_flabel_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_flabel_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_sll_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_sll_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_target_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_target_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_tll_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 10) {
        return -1;
    }

    len = 10;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_nd_tll_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_ipv6_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 36) {
        return -1;
    }

    len = 36;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_metadata_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_metadata_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_bos_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_bos_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_label_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_label_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_tc_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_mpls_tc_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_pbb_uca_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_pbb_uca_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_sctp_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_sctp_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_sctp_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_sctp_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tcp_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tcp_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tcp_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tcp_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_id_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_id_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 20) {
        return -1;
    }

    len = 20;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_ipv4_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_ipv4_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_ipv4_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_tunnel_ipv4_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_udp_dst_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_udp_dst_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_udp_src_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_udp_src_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_vlan_pcp_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 5) {
        return -1;
    }

    len = 5;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_vlan_pcp_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_vlan_vid_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 6) {
        return -1;
    }

    len = 6;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_oxm_vlan_vid_masked_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_in_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 34) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 34) {
        return -1;
    }

    len = wire_len;



    // TODO validate of_match_t

    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_out_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;

    uint16_t wire_len_actions;
    buf_u16_get(data + 16, &wire_len_actions);



    if (24 + wire_len_actions > len) {
        return -1;
    }

    if (loci_validate_of_list_action_OF_VERSION_1_4(data + 24, wire_len_actions, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_packet_queue_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 8, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 16;
    if (loci_validate_of_list_queue_prop_OF_VERSION_1_4(data + 16, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 4, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 40;
    if (loci_validate_of_list_port_desc_prop_OF_VERSION_1_4(data + 40, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_port_desc_prop_experimenter_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_port_desc_prop_ethernet_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_port_desc_prop_optical_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    case 0x5c16c7:
        return loci_validate_of_port_desc_prop_bsn_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_prop_bsn_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    case 0x0:
        return loci_validate_of_port_desc_prop_bsn_uplink_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_prop_bsn_uplink_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_prop_ethernet_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }

    len = 32;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_prop_optical_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 44) {
        return -1;
    }

    len = 44;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 44) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_port_desc_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 32) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 32) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 32;
    if (loci_validate_of_list_port_mod_prop_OF_VERSION_1_4(data + 32, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x0:
        return loci_validate_of_port_mod_prop_ethernet_OF_VERSION_1_4(data, len, out_len);
    case 0xffff:
        return loci_validate_of_port_mod_prop_experimenter_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_port_mod_prop_optical_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_prop_ethernet_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_mod_prop_optical_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 80) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 80) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 80;
    if (loci_validate_of_list_port_stats_prop_OF_VERSION_1_4(data + 80, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x0:
        return loci_validate_of_port_stats_prop_ethernet_OF_VERSION_1_4(data, len, out_len);
    case 0xffff:
        return loci_validate_of_port_stats_prop_experimenter_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_port_stats_prop_optical_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_prop_ethernet_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 40) {
        return -1;
    }

    len = 40;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 40) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_prop_optical_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 44) {
        return -1;
    }

    len = 44;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 44) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_port_stats_entry_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_port_status_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 56) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 56) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_desc_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 8, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 16;
    if (loci_validate_of_list_queue_desc_prop_OF_VERSION_1_4(data + 16, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_desc_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_queue_desc_prop_experimenter_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_queue_desc_prop_max_rate_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_queue_desc_prop_min_rate_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_desc_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_desc_prop_max_rate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_desc_prop_min_rate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_queue_desc_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_op_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_queue_prop_experimenter_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_queue_prop_max_rate_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_queue_prop_min_rate_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 8, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_max_rate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_prop_min_rate_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 48) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 48) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 48;
    if (loci_validate_of_list_queue_stats_prop_OF_VERSION_1_4(data + 48, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_queue_stats_prop_experimenter_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_queue_stats_entry_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_queue_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_requestforward_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_role_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0xffff:
        return loci_validate_of_role_prop_experimenter_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_role_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_role_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_role_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_role_request_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_role_status_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 24) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 24;
    if (loci_validate_of_list_role_prop_OF_VERSION_1_4(data + 24, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_set_config_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }

    len = 12;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_switch_config_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_desc_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_desc_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_table_desc_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_desc_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    case 0x6:
        return loci_validate_of_table_feature_prop_apply_actions_OF_VERSION_1_4(data, len, out_len);
    case 0x7:
        return loci_validate_of_table_feature_prop_apply_actions_miss_OF_VERSION_1_4(data, len, out_len);
    case 0xe:
        return loci_validate_of_table_feature_prop_apply_setfield_OF_VERSION_1_4(data, len, out_len);
    case 0xf:
        return loci_validate_of_table_feature_prop_apply_setfield_miss_OF_VERSION_1_4(data, len, out_len);
    case 0xfffe:
        return loci_validate_of_table_feature_prop_experimenter_OF_VERSION_1_4(data, len, out_len);
    case 0xffff:
        return loci_validate_of_table_feature_prop_experimenter_miss_OF_VERSION_1_4(data, len, out_len);
    case 0x0:
        return loci_validate_of_table_feature_prop_instructions_OF_VERSION_1_4(data, len, out_len);
    case 0x1:
        return loci_validate_of_table_feature_prop_instructions_miss_OF_VERSION_1_4(data, len, out_len);
    case 0x8:
        return loci_validate_of_table_feature_prop_match_OF_VERSION_1_4(data, len, out_len);
    case 0x2:
        return loci_validate_of_table_feature_prop_next_tables_OF_VERSION_1_4(data, len, out_len);
    case 0x3:
        return loci_validate_of_table_feature_prop_next_tables_miss_OF_VERSION_1_4(data, len, out_len);
    case 0x10:
        return loci_validate_of_table_feature_prop_table_sync_from_OF_VERSION_1_4(data, len, out_len);
    case 0xa:
        return loci_validate_of_table_feature_prop_wildcards_OF_VERSION_1_4(data, len, out_len);
    case 0x4:
        return loci_validate_of_table_feature_prop_write_actions_OF_VERSION_1_4(data, len, out_len);
    case 0x5:
        return loci_validate_of_table_feature_prop_write_actions_miss_OF_VERSION_1_4(data, len, out_len);
    case 0xc:
        return loci_validate_of_table_feature_prop_write_setfield_OF_VERSION_1_4(data, len, out_len);
    case 0xd:
        return loci_validate_of_table_feature_prop_write_setfield_miss_OF_VERSION_1_4(data, len, out_len);
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_apply_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_action_ids = len - 4;
    if (loci_validate_of_list_action_id_OF_VERSION_1_4(data + 4, wire_len_action_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_apply_actions_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_action_ids = len - 4;
    if (loci_validate_of_list_action_id_OF_VERSION_1_4(data + 4, wire_len_action_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_apply_setfield_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_ids = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_4(data + 4, wire_len_oxm_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_apply_setfield_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_ids = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_4(data + 4, wire_len_oxm_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_experimenter_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_instructions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_instruction_ids = len - 4;
    if (loci_validate_of_list_instruction_id_OF_VERSION_1_4(data + 4, wire_len_instruction_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_instructions_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_instruction_ids = len - 4;
    if (loci_validate_of_list_instruction_id_OF_VERSION_1_4(data + 4, wire_len_instruction_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_match_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_ids = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_4(data + 4, wire_len_oxm_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_next_tables_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_next_table_ids = len - 4;
    if (loci_validate_of_list_uint8_OF_VERSION_1_4(data + 4, wire_len_next_table_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_next_tables_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_next_table_ids = len - 4;
    if (loci_validate_of_list_uint8_OF_VERSION_1_4(data + 4, wire_len_next_table_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_table_sync_from_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_table_ids = len - 4;
    if (loci_validate_of_list_uint8_OF_VERSION_1_4(data + 4, wire_len_table_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_wildcards_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_ids = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_4(data + 4, wire_len_oxm_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_write_actions_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_action_ids = len - 4;
    if (loci_validate_of_list_action_id_OF_VERSION_1_4(data + 4, wire_len_action_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_write_actions_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_action_ids = len - 4;
    if (loci_validate_of_list_action_id_OF_VERSION_1_4(data + 4, wire_len_action_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_write_setfield_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_ids = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_4(data + 4, wire_len_oxm_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_feature_prop_write_setfield_miss_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;



    int wire_len_oxm_ids = len - 4;
    if (loci_validate_of_list_uint32_OF_VERSION_1_4(data + 4, wire_len_oxm_ids, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_features_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 64) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 0, &wire_len);
    if (wire_len > len || wire_len < 64) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 64;
    if (loci_validate_of_list_table_feature_prop_OF_VERSION_1_4(data + 64, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_features_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_features_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_table_features_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_features_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_table_features_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_properties = len - 16;
    if (loci_validate_of_list_table_mod_prop_OF_VERSION_1_4(data + 16, wire_len_properties, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_failed_error_msg_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_prop_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 4) {
        return -1;
    }

    len = wire_len;


    uint16_t wire_type;
    buf_u16_get(data + 0, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_prop_eviction_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_prop_experimenter_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 12) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 12) {
        return -1;
    }

    len = wire_len;


    uint32_t wire_type;
    buf_u32_get(data + 4, &wire_type);
    switch (wire_type) {
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_mod_prop_vacancy_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 8) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_entry_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 24) {
        return -1;
    }

    len = 24;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_reply_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }


    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }

    len = wire_len;



    int wire_len_entries = len - 16;
    if (loci_validate_of_list_table_stats_entry_OF_VERSION_1_4(data + 16, wire_len_entries, out_len) < 0) {
        return -1;
    }


    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_stats_request_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 16) {
        return -1;
    }

    len = 16;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 16) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_table_status_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 28) {
        return -1;
    }

    len = 28;

    uint16_t wire_len;
    buf_u16_get(data + 2, &wire_len);
    if (wire_len > len || wire_len < 28) {
        return -1;
    }




    *out_len = len;
    return 0;
}

static int
loci_validate_of_uint32_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 4) {
        return -1;
    }

    len = 4;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_uint64_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 8) {
        return -1;
    }

    len = 8;




    *out_len = len;
    return 0;
}

static int
loci_validate_of_uint8_OF_VERSION_1_4(uint8_t *data, int len, int *out_len)
{
    if (len < 1) {
        return -1;
    }

    len = 1;




    *out_len = len;
    return 0;
}


int
of_validate_message(of_message_t msg, int len)
{
    of_version_t version;
    if (len < OF_MESSAGE_MIN_LENGTH ||
        len != of_message_length_get(msg)) {
        VALIDATOR_LOG("message length %d != %d", len,
                      of_message_length_get(msg));
        return -1;
    }

    version = of_message_version_get(msg);
    int out_len;
    switch (version) {
    case OF_VERSION_1_0:
        return loci_validate_of_header_OF_VERSION_1_0(msg, len, &out_len);
    case OF_VERSION_1_1:
        return loci_validate_of_header_OF_VERSION_1_1(msg, len, &out_len);
    case OF_VERSION_1_2:
        return loci_validate_of_header_OF_VERSION_1_2(msg, len, &out_len);
    case OF_VERSION_1_3:
        return loci_validate_of_header_OF_VERSION_1_3(msg, len, &out_len);
    case OF_VERSION_1_4:
        return loci_validate_of_header_OF_VERSION_1_4(msg, len, &out_len);
    default:
        VALIDATOR_LOG("Bad version %d", version);
        return -1;
    }
}
