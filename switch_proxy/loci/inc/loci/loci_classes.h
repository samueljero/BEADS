/* Copyright (c) 2008 The Board of Trustees of The Leland Stanford Junior University */
/* Copyright (c) 2011, 2012 Open Networking Foundation */
/* Copyright (c) 2012, 2013 Big Switch Networks, Inc. */
/* See the file LICENSE.loci which should have been included in the source distribution */
#ifndef __LOCI_CLASSES_H__
#define __LOCI_CLASSES_H__

void of_action_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_push_wire_types(of_object_t *obj);
void of_action_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_experimenter_push_wire_types(of_object_t *obj);
void of_action_bsn_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_bsn_push_wire_types(of_object_t *obj);
void of_action_bsn_checksum_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_bsn_checksum_push_wire_types(of_object_t *obj);
void of_action_bsn_mirror_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_bsn_mirror_push_wire_types(of_object_t *obj);
void of_action_bsn_set_tunnel_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_bsn_set_tunnel_dst_push_wire_types(of_object_t *obj);
void of_action_enqueue_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_enqueue_push_wire_types(of_object_t *obj);
void of_action_nicira_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_nicira_push_wire_types(of_object_t *obj);
void of_action_nicira_dec_ttl_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_nicira_dec_ttl_push_wire_types(of_object_t *obj);
void of_action_output_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_output_push_wire_types(of_object_t *obj);
void of_action_set_dl_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_dl_dst_push_wire_types(of_object_t *obj);
void of_action_set_dl_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_dl_src_push_wire_types(of_object_t *obj);
void of_action_set_nw_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_nw_dst_push_wire_types(of_object_t *obj);
void of_action_set_nw_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_nw_src_push_wire_types(of_object_t *obj);
void of_action_set_nw_tos_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_nw_tos_push_wire_types(of_object_t *obj);
void of_action_set_tp_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_tp_dst_push_wire_types(of_object_t *obj);
void of_action_set_tp_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_tp_src_push_wire_types(of_object_t *obj);
void of_action_set_vlan_pcp_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_vlan_pcp_push_wire_types(of_object_t *obj);
void of_action_set_vlan_vid_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_vlan_vid_push_wire_types(of_object_t *obj);
void of_action_strip_vlan_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_strip_vlan_push_wire_types(of_object_t *obj);
void of_header_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_header_push_wire_types(of_object_t *obj);
void of_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_stats_reply_push_wire_types(of_object_t *obj);
void of_aggregate_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_aggregate_stats_reply_push_wire_types(of_object_t *obj);
void of_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_stats_request_push_wire_types(of_object_t *obj);
void of_aggregate_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_aggregate_stats_request_push_wire_types(of_object_t *obj);
void of_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_error_msg_push_wire_types(of_object_t *obj);
void of_bad_action_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bad_action_error_msg_push_wire_types(of_object_t *obj);
void of_bad_request_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bad_request_error_msg_push_wire_types(of_object_t *obj);
void of_barrier_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_barrier_reply_push_wire_types(of_object_t *obj);
void of_barrier_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_barrier_request_push_wire_types(of_object_t *obj);
void of_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_experimenter_push_wire_types(of_object_t *obj);
void of_bsn_header_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_header_push_wire_types(of_object_t *obj);
void of_bsn_bw_clear_data_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_bw_clear_data_reply_push_wire_types(of_object_t *obj);
void of_bsn_bw_clear_data_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_bw_clear_data_request_push_wire_types(of_object_t *obj);
void of_bsn_bw_enable_get_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_bw_enable_get_reply_push_wire_types(of_object_t *obj);
void of_bsn_bw_enable_get_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_bw_enable_get_request_push_wire_types(of_object_t *obj);
void of_bsn_bw_enable_set_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_bw_enable_set_reply_push_wire_types(of_object_t *obj);
void of_bsn_bw_enable_set_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_bw_enable_set_request_push_wire_types(of_object_t *obj);
void of_bsn_get_interfaces_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_get_interfaces_reply_push_wire_types(of_object_t *obj);
void of_bsn_get_interfaces_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_get_interfaces_request_push_wire_types(of_object_t *obj);
void of_bsn_get_ip_mask_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_get_ip_mask_reply_push_wire_types(of_object_t *obj);
void of_bsn_get_ip_mask_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_get_ip_mask_request_push_wire_types(of_object_t *obj);
void of_bsn_get_l2_table_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_get_l2_table_reply_push_wire_types(of_object_t *obj);
void of_bsn_get_l2_table_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_get_l2_table_request_push_wire_types(of_object_t *obj);
void of_bsn_get_mirroring_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_get_mirroring_reply_push_wire_types(of_object_t *obj);
void of_bsn_get_mirroring_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_get_mirroring_request_push_wire_types(of_object_t *obj);
void of_bsn_hybrid_get_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_hybrid_get_reply_push_wire_types(of_object_t *obj);
void of_bsn_hybrid_get_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_hybrid_get_request_push_wire_types(of_object_t *obj);
void of_bsn_interface_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_interface_push_wire_types(of_object_t *obj);
void of_bsn_pdu_rx_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_pdu_rx_reply_push_wire_types(of_object_t *obj);
void of_bsn_pdu_rx_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_pdu_rx_request_push_wire_types(of_object_t *obj);
void of_bsn_pdu_rx_timeout_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_pdu_rx_timeout_push_wire_types(of_object_t *obj);
void of_bsn_pdu_tx_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_pdu_tx_reply_push_wire_types(of_object_t *obj);
void of_bsn_pdu_tx_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_pdu_tx_request_push_wire_types(of_object_t *obj);
void of_bsn_set_ip_mask_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_set_ip_mask_push_wire_types(of_object_t *obj);
void of_bsn_set_l2_table_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_set_l2_table_reply_push_wire_types(of_object_t *obj);
void of_bsn_set_l2_table_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_set_l2_table_request_push_wire_types(of_object_t *obj);
void of_bsn_set_mirroring_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_set_mirroring_push_wire_types(of_object_t *obj);
void of_bsn_set_pktin_suppression_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_set_pktin_suppression_reply_push_wire_types(of_object_t *obj);
void of_bsn_set_pktin_suppression_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_set_pktin_suppression_request_push_wire_types(of_object_t *obj);
void of_bsn_shell_command_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_shell_command_push_wire_types(of_object_t *obj);
void of_bsn_shell_output_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_shell_output_push_wire_types(of_object_t *obj);
void of_bsn_shell_status_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_shell_status_push_wire_types(of_object_t *obj);
void of_experimenter_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_experimenter_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_stats_reply_push_wire_types(of_object_t *obj);
void of_experimenter_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_experimenter_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_virtual_port_create_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_virtual_port_create_reply_push_wire_types(of_object_t *obj);
void of_bsn_vport_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_vport_push_wire_types(of_object_t *obj);
void of_bsn_virtual_port_create_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_virtual_port_create_request_push_wire_types(of_object_t *obj);
void of_bsn_virtual_port_remove_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_virtual_port_remove_reply_push_wire_types(of_object_t *obj);
void of_bsn_virtual_port_remove_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_virtual_port_remove_request_push_wire_types(of_object_t *obj);
void of_bsn_vport_l2gre_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_vport_l2gre_push_wire_types(of_object_t *obj);
void of_bsn_vport_q_in_q_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_vport_q_in_q_push_wire_types(of_object_t *obj);
void of_desc_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_desc_stats_reply_push_wire_types(of_object_t *obj);
void of_desc_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_desc_stats_request_push_wire_types(of_object_t *obj);
void of_echo_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_echo_reply_push_wire_types(of_object_t *obj);
void of_echo_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_echo_request_push_wire_types(of_object_t *obj);
void of_features_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_features_reply_push_wire_types(of_object_t *obj);
void of_features_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_features_request_push_wire_types(of_object_t *obj);
void of_flow_mod_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_flow_mod_push_wire_types(of_object_t *obj);
void of_flow_add_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_flow_add_push_wire_types(of_object_t *obj);
void of_flow_delete_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_flow_delete_push_wire_types(of_object_t *obj);
void of_flow_delete_strict_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_flow_delete_strict_push_wire_types(of_object_t *obj);
void of_flow_mod_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_flow_mod_failed_error_msg_push_wire_types(of_object_t *obj);
void of_flow_modify_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_flow_modify_push_wire_types(of_object_t *obj);
void of_flow_modify_strict_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_flow_modify_strict_push_wire_types(of_object_t *obj);
void of_flow_removed_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_flow_removed_push_wire_types(of_object_t *obj);
void of_flow_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_flow_stats_entry_push_wire_types(of_object_t *obj);
void of_flow_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_flow_stats_reply_push_wire_types(of_object_t *obj);
void of_flow_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_flow_stats_request_push_wire_types(of_object_t *obj);
void of_get_config_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_get_config_reply_push_wire_types(of_object_t *obj);
void of_get_config_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_get_config_request_push_wire_types(of_object_t *obj);
void of_hello_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_hello_push_wire_types(of_object_t *obj);
void of_hello_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_hello_failed_error_msg_push_wire_types(of_object_t *obj);
void of_match_v1_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_match_v1_push_wire_types(of_object_t *obj);
void of_nicira_header_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_nicira_header_push_wire_types(of_object_t *obj);
void of_nicira_controller_role_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_nicira_controller_role_reply_push_wire_types(of_object_t *obj);
void of_nicira_controller_role_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_nicira_controller_role_request_push_wire_types(of_object_t *obj);
void of_packet_in_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_packet_in_push_wire_types(of_object_t *obj);
void of_packet_out_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_packet_out_push_wire_types(of_object_t *obj);
void of_packet_queue_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_packet_queue_push_wire_types(of_object_t *obj);
void of_port_desc_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_desc_push_wire_types(of_object_t *obj);
void of_port_mod_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_mod_push_wire_types(of_object_t *obj);
void of_port_mod_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_mod_failed_error_msg_push_wire_types(of_object_t *obj);
void of_port_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_stats_entry_push_wire_types(of_object_t *obj);
void of_port_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_stats_reply_push_wire_types(of_object_t *obj);
void of_port_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_stats_request_push_wire_types(of_object_t *obj);
void of_port_status_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_status_push_wire_types(of_object_t *obj);
void of_queue_get_config_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_get_config_reply_push_wire_types(of_object_t *obj);
void of_queue_get_config_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_get_config_request_push_wire_types(of_object_t *obj);
void of_queue_op_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_op_failed_error_msg_push_wire_types(of_object_t *obj);
void of_queue_prop_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_prop_push_wire_types(of_object_t *obj);
void of_queue_prop_min_rate_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_prop_min_rate_push_wire_types(of_object_t *obj);
void of_queue_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_stats_entry_push_wire_types(of_object_t *obj);
void of_queue_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_stats_reply_push_wire_types(of_object_t *obj);
void of_queue_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_stats_request_push_wire_types(of_object_t *obj);
void of_set_config_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_set_config_push_wire_types(of_object_t *obj);
void of_table_mod_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_mod_push_wire_types(of_object_t *obj);
void of_table_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_stats_entry_push_wire_types(of_object_t *obj);
void of_table_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_stats_reply_push_wire_types(of_object_t *obj);
void of_table_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_stats_request_push_wire_types(of_object_t *obj);
void of_action_copy_ttl_in_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_copy_ttl_in_push_wire_types(of_object_t *obj);
void of_action_copy_ttl_out_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_copy_ttl_out_push_wire_types(of_object_t *obj);
void of_action_dec_mpls_ttl_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_dec_mpls_ttl_push_wire_types(of_object_t *obj);
void of_action_dec_nw_ttl_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_dec_nw_ttl_push_wire_types(of_object_t *obj);
void of_action_group_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_group_push_wire_types(of_object_t *obj);
void of_action_pop_mpls_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_pop_mpls_push_wire_types(of_object_t *obj);
void of_action_pop_vlan_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_pop_vlan_push_wire_types(of_object_t *obj);
void of_action_push_mpls_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_push_mpls_push_wire_types(of_object_t *obj);
void of_action_push_vlan_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_push_vlan_push_wire_types(of_object_t *obj);
void of_action_set_mpls_label_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_mpls_label_push_wire_types(of_object_t *obj);
void of_action_set_mpls_tc_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_mpls_tc_push_wire_types(of_object_t *obj);
void of_action_set_mpls_ttl_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_mpls_ttl_push_wire_types(of_object_t *obj);
void of_action_set_nw_ecn_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_nw_ecn_push_wire_types(of_object_t *obj);
void of_action_set_nw_ttl_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_nw_ttl_push_wire_types(of_object_t *obj);
void of_action_set_queue_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_queue_push_wire_types(of_object_t *obj);
void of_bad_instruction_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bad_instruction_error_msg_push_wire_types(of_object_t *obj);
void of_bad_match_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bad_match_error_msg_push_wire_types(of_object_t *obj);
void of_bucket_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bucket_push_wire_types(of_object_t *obj);
void of_bucket_counter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bucket_counter_push_wire_types(of_object_t *obj);
void of_group_mod_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_mod_push_wire_types(of_object_t *obj);
void of_group_add_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_add_push_wire_types(of_object_t *obj);
void of_group_delete_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_delete_push_wire_types(of_object_t *obj);
void of_group_desc_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_desc_stats_entry_push_wire_types(of_object_t *obj);
void of_group_desc_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_desc_stats_reply_push_wire_types(of_object_t *obj);
void of_group_desc_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_desc_stats_request_push_wire_types(of_object_t *obj);
void of_group_mod_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_mod_failed_error_msg_push_wire_types(of_object_t *obj);
void of_group_modify_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_modify_push_wire_types(of_object_t *obj);
void of_group_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_stats_entry_push_wire_types(of_object_t *obj);
void of_group_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_stats_reply_push_wire_types(of_object_t *obj);
void of_group_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_stats_request_push_wire_types(of_object_t *obj);
void of_instruction_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_push_wire_types(of_object_t *obj);
void of_instruction_apply_actions_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_apply_actions_push_wire_types(of_object_t *obj);
void of_instruction_clear_actions_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_clear_actions_push_wire_types(of_object_t *obj);
void of_instruction_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_experimenter_push_wire_types(of_object_t *obj);
void of_instruction_goto_table_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_goto_table_push_wire_types(of_object_t *obj);
void of_instruction_write_actions_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_write_actions_push_wire_types(of_object_t *obj);
void of_instruction_write_metadata_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_write_metadata_push_wire_types(of_object_t *obj);
void of_match_v2_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_match_v2_push_wire_types(of_object_t *obj);
void of_switch_config_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_switch_config_failed_error_msg_push_wire_types(of_object_t *obj);
void of_table_mod_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_mod_failed_error_msg_push_wire_types(of_object_t *obj);
void of_oxm_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_push_wire_types(of_object_t *obj);
void of_action_set_field_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_set_field_push_wire_types(of_object_t *obj);
void of_experimenter_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_experimenter_error_msg_push_wire_types(of_object_t *obj);
void of_group_features_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_features_stats_reply_push_wire_types(of_object_t *obj);
void of_group_features_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_group_features_stats_request_push_wire_types(of_object_t *obj);
void of_match_v3_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_match_v3_push_wire_types(of_object_t *obj);
void of_oxm_arp_op_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_arp_op_push_wire_types(of_object_t *obj);
void of_oxm_arp_op_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_arp_op_masked_push_wire_types(of_object_t *obj);
void of_oxm_arp_sha_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_arp_sha_push_wire_types(of_object_t *obj);
void of_oxm_arp_sha_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_arp_sha_masked_push_wire_types(of_object_t *obj);
void of_oxm_arp_spa_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_arp_spa_push_wire_types(of_object_t *obj);
void of_oxm_arp_spa_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_arp_spa_masked_push_wire_types(of_object_t *obj);
void of_oxm_arp_tha_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_arp_tha_push_wire_types(of_object_t *obj);
void of_oxm_arp_tha_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_arp_tha_masked_push_wire_types(of_object_t *obj);
void of_oxm_arp_tpa_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_arp_tpa_push_wire_types(of_object_t *obj);
void of_oxm_arp_tpa_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_arp_tpa_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_egr_port_group_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_egr_port_group_id_push_wire_types(of_object_t *obj);
void of_oxm_bsn_egr_port_group_id_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_egr_port_group_id_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_global_vrf_allowed_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_global_vrf_allowed_push_wire_types(of_object_t *obj);
void of_oxm_bsn_global_vrf_allowed_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_global_vrf_allowed_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_in_ports_128_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_in_ports_128_push_wire_types(of_object_t *obj);
void of_oxm_bsn_in_ports_128_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_in_ports_128_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_in_ports_512_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_in_ports_512_push_wire_types(of_object_t *obj);
void of_oxm_bsn_in_ports_512_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_in_ports_512_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_ingress_port_group_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_ingress_port_group_id_push_wire_types(of_object_t *obj);
void of_oxm_bsn_ingress_port_group_id_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_ingress_port_group_id_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_l2_cache_hit_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_l2_cache_hit_push_wire_types(of_object_t *obj);
void of_oxm_bsn_l2_cache_hit_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_l2_cache_hit_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_l3_dst_class_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_l3_dst_class_id_push_wire_types(of_object_t *obj);
void of_oxm_bsn_l3_dst_class_id_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_l3_dst_class_id_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_l3_interface_class_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_l3_interface_class_id_push_wire_types(of_object_t *obj);
void of_oxm_bsn_l3_interface_class_id_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_l3_interface_class_id_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_l3_src_class_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_l3_src_class_id_push_wire_types(of_object_t *obj);
void of_oxm_bsn_l3_src_class_id_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_l3_src_class_id_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_lag_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_lag_id_push_wire_types(of_object_t *obj);
void of_oxm_bsn_lag_id_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_lag_id_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_tcp_flags_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_tcp_flags_push_wire_types(of_object_t *obj);
void of_oxm_bsn_tcp_flags_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_tcp_flags_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf0_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf0_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf0_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf0_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf1_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf1_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf1_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf1_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf2_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf2_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf2_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf2_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf3_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf3_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf3_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf3_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf4_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf4_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf4_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf4_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf5_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf5_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf5_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf5_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf6_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf6_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf6_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf6_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf7_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf7_push_wire_types(of_object_t *obj);
void of_oxm_bsn_udf7_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_udf7_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_vlan_xlate_port_group_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_vlan_xlate_port_group_id_push_wire_types(of_object_t *obj);
void of_oxm_bsn_vlan_xlate_port_group_id_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_vlan_xlate_port_group_id_masked_push_wire_types(of_object_t *obj);
void of_oxm_bsn_vrf_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_vrf_push_wire_types(of_object_t *obj);
void of_oxm_bsn_vrf_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_bsn_vrf_masked_push_wire_types(of_object_t *obj);
void of_oxm_eth_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_eth_dst_push_wire_types(of_object_t *obj);
void of_oxm_eth_dst_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_eth_dst_masked_push_wire_types(of_object_t *obj);
void of_oxm_eth_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_eth_src_push_wire_types(of_object_t *obj);
void of_oxm_eth_src_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_eth_src_masked_push_wire_types(of_object_t *obj);
void of_oxm_eth_type_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_eth_type_push_wire_types(of_object_t *obj);
void of_oxm_eth_type_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_eth_type_masked_push_wire_types(of_object_t *obj);
void of_oxm_icmpv4_code_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_icmpv4_code_push_wire_types(of_object_t *obj);
void of_oxm_icmpv4_code_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_icmpv4_code_masked_push_wire_types(of_object_t *obj);
void of_oxm_icmpv4_type_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_icmpv4_type_push_wire_types(of_object_t *obj);
void of_oxm_icmpv4_type_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_icmpv4_type_masked_push_wire_types(of_object_t *obj);
void of_oxm_icmpv6_code_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_icmpv6_code_push_wire_types(of_object_t *obj);
void of_oxm_icmpv6_code_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_icmpv6_code_masked_push_wire_types(of_object_t *obj);
void of_oxm_icmpv6_type_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_icmpv6_type_push_wire_types(of_object_t *obj);
void of_oxm_icmpv6_type_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_icmpv6_type_masked_push_wire_types(of_object_t *obj);
void of_oxm_in_phy_port_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_in_phy_port_push_wire_types(of_object_t *obj);
void of_oxm_in_phy_port_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_in_phy_port_masked_push_wire_types(of_object_t *obj);
void of_oxm_in_port_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_in_port_push_wire_types(of_object_t *obj);
void of_oxm_in_port_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_in_port_masked_push_wire_types(of_object_t *obj);
void of_oxm_ip_dscp_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ip_dscp_push_wire_types(of_object_t *obj);
void of_oxm_ip_dscp_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ip_dscp_masked_push_wire_types(of_object_t *obj);
void of_oxm_ip_ecn_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ip_ecn_push_wire_types(of_object_t *obj);
void of_oxm_ip_ecn_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ip_ecn_masked_push_wire_types(of_object_t *obj);
void of_oxm_ip_proto_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ip_proto_push_wire_types(of_object_t *obj);
void of_oxm_ip_proto_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ip_proto_masked_push_wire_types(of_object_t *obj);
void of_oxm_ipv4_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv4_dst_push_wire_types(of_object_t *obj);
void of_oxm_ipv4_dst_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv4_dst_masked_push_wire_types(of_object_t *obj);
void of_oxm_ipv4_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv4_src_push_wire_types(of_object_t *obj);
void of_oxm_ipv4_src_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv4_src_masked_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_dst_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_dst_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_dst_masked_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_flabel_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_flabel_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_flabel_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_flabel_masked_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_nd_sll_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_nd_sll_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_nd_sll_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_nd_sll_masked_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_nd_target_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_nd_target_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_nd_target_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_nd_target_masked_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_nd_tll_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_nd_tll_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_nd_tll_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_nd_tll_masked_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_src_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_src_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_src_masked_push_wire_types(of_object_t *obj);
void of_oxm_metadata_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_metadata_push_wire_types(of_object_t *obj);
void of_oxm_metadata_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_metadata_masked_push_wire_types(of_object_t *obj);
void of_oxm_mpls_label_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_mpls_label_push_wire_types(of_object_t *obj);
void of_oxm_mpls_label_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_mpls_label_masked_push_wire_types(of_object_t *obj);
void of_oxm_mpls_tc_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_mpls_tc_push_wire_types(of_object_t *obj);
void of_oxm_mpls_tc_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_mpls_tc_masked_push_wire_types(of_object_t *obj);
void of_oxm_sctp_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_sctp_dst_push_wire_types(of_object_t *obj);
void of_oxm_sctp_dst_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_sctp_dst_masked_push_wire_types(of_object_t *obj);
void of_oxm_sctp_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_sctp_src_push_wire_types(of_object_t *obj);
void of_oxm_sctp_src_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_sctp_src_masked_push_wire_types(of_object_t *obj);
void of_oxm_tcp_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_tcp_dst_push_wire_types(of_object_t *obj);
void of_oxm_tcp_dst_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_tcp_dst_masked_push_wire_types(of_object_t *obj);
void of_oxm_tcp_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_tcp_src_push_wire_types(of_object_t *obj);
void of_oxm_tcp_src_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_tcp_src_masked_push_wire_types(of_object_t *obj);
void of_oxm_tunnel_ipv4_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_tunnel_ipv4_dst_push_wire_types(of_object_t *obj);
void of_oxm_tunnel_ipv4_dst_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_tunnel_ipv4_dst_masked_push_wire_types(of_object_t *obj);
void of_oxm_tunnel_ipv4_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_tunnel_ipv4_src_push_wire_types(of_object_t *obj);
void of_oxm_tunnel_ipv4_src_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_tunnel_ipv4_src_masked_push_wire_types(of_object_t *obj);
void of_oxm_udp_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_udp_dst_push_wire_types(of_object_t *obj);
void of_oxm_udp_dst_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_udp_dst_masked_push_wire_types(of_object_t *obj);
void of_oxm_udp_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_udp_src_push_wire_types(of_object_t *obj);
void of_oxm_udp_src_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_udp_src_masked_push_wire_types(of_object_t *obj);
void of_oxm_vlan_pcp_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_vlan_pcp_push_wire_types(of_object_t *obj);
void of_oxm_vlan_pcp_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_vlan_pcp_masked_push_wire_types(of_object_t *obj);
void of_oxm_vlan_vid_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_vlan_vid_push_wire_types(of_object_t *obj);
void of_oxm_vlan_vid_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_vlan_vid_masked_push_wire_types(of_object_t *obj);
void of_queue_prop_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_prop_experimenter_push_wire_types(of_object_t *obj);
void of_queue_prop_max_rate_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_prop_max_rate_push_wire_types(of_object_t *obj);
void of_role_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_role_reply_push_wire_types(of_object_t *obj);
void of_role_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_role_request_push_wire_types(of_object_t *obj);
void of_role_request_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_role_request_failed_error_msg_push_wire_types(of_object_t *obj);
void of_action_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_push_wire_types(of_object_t *obj);
void of_action_id_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_experimenter_push_wire_types(of_object_t *obj);
void of_action_id_bsn_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_bsn_push_wire_types(of_object_t *obj);
void of_action_id_bsn_checksum_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_bsn_checksum_push_wire_types(of_object_t *obj);
void of_action_bsn_gentable_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_bsn_gentable_push_wire_types(of_object_t *obj);
void of_action_id_bsn_gentable_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_bsn_gentable_push_wire_types(of_object_t *obj);
void of_action_id_bsn_mirror_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_bsn_mirror_push_wire_types(of_object_t *obj);
void of_action_id_bsn_set_tunnel_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_bsn_set_tunnel_dst_push_wire_types(of_object_t *obj);
void of_action_id_copy_ttl_in_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_copy_ttl_in_push_wire_types(of_object_t *obj);
void of_action_id_copy_ttl_out_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_copy_ttl_out_push_wire_types(of_object_t *obj);
void of_action_id_dec_mpls_ttl_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_dec_mpls_ttl_push_wire_types(of_object_t *obj);
void of_action_id_dec_nw_ttl_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_dec_nw_ttl_push_wire_types(of_object_t *obj);
void of_action_id_group_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_group_push_wire_types(of_object_t *obj);
void of_action_id_nicira_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_nicira_push_wire_types(of_object_t *obj);
void of_action_id_nicira_dec_ttl_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_nicira_dec_ttl_push_wire_types(of_object_t *obj);
void of_action_id_output_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_output_push_wire_types(of_object_t *obj);
void of_action_id_pop_mpls_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_pop_mpls_push_wire_types(of_object_t *obj);
void of_action_pop_pbb_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_pop_pbb_push_wire_types(of_object_t *obj);
void of_action_id_pop_pbb_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_pop_pbb_push_wire_types(of_object_t *obj);
void of_action_id_pop_vlan_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_pop_vlan_push_wire_types(of_object_t *obj);
void of_action_id_push_mpls_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_push_mpls_push_wire_types(of_object_t *obj);
void of_action_push_pbb_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_push_pbb_push_wire_types(of_object_t *obj);
void of_action_id_push_pbb_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_push_pbb_push_wire_types(of_object_t *obj);
void of_action_id_push_vlan_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_push_vlan_push_wire_types(of_object_t *obj);
void of_action_id_set_field_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_set_field_push_wire_types(of_object_t *obj);
void of_action_id_set_mpls_ttl_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_set_mpls_ttl_push_wire_types(of_object_t *obj);
void of_action_id_set_nw_ttl_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_set_nw_ttl_push_wire_types(of_object_t *obj);
void of_action_id_set_queue_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_action_id_set_queue_push_wire_types(of_object_t *obj);
void of_async_get_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_get_reply_push_wire_types(of_object_t *obj);
void of_async_get_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_get_request_push_wire_types(of_object_t *obj);
void of_async_set_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_set_push_wire_types(of_object_t *obj);
void of_bsn_arp_idle_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_arp_idle_push_wire_types(of_object_t *obj);
void of_bsn_controller_connection_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_controller_connection_push_wire_types(of_object_t *obj);
void of_bsn_controller_connections_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_controller_connections_reply_push_wire_types(of_object_t *obj);
void of_bsn_controller_connections_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_controller_connections_request_push_wire_types(of_object_t *obj);
void of_bsn_debug_counter_desc_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_debug_counter_desc_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_debug_counter_desc_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_debug_counter_desc_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_debug_counter_desc_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_debug_counter_desc_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_debug_counter_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_debug_counter_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_debug_counter_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_debug_counter_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_debug_counter_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_debug_counter_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_flow_checksum_bucket_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_flow_checksum_bucket_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_flow_checksum_bucket_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_flow_checksum_bucket_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_flow_checksum_bucket_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_flow_checksum_bucket_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_flow_idle_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_flow_idle_push_wire_types(of_object_t *obj);
void of_bsn_flow_idle_enable_get_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_flow_idle_enable_get_reply_push_wire_types(of_object_t *obj);
void of_bsn_flow_idle_enable_get_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_flow_idle_enable_get_request_push_wire_types(of_object_t *obj);
void of_bsn_flow_idle_enable_set_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_flow_idle_enable_set_reply_push_wire_types(of_object_t *obj);
void of_bsn_flow_idle_enable_set_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_flow_idle_enable_set_request_push_wire_types(of_object_t *obj);
void of_bsn_generic_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_generic_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_generic_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_generic_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_generic_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_generic_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_gentable_bucket_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_bucket_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_gentable_bucket_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_bucket_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_gentable_bucket_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_bucket_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_gentable_clear_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_clear_reply_push_wire_types(of_object_t *obj);
void of_bsn_gentable_clear_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_clear_request_push_wire_types(of_object_t *obj);
void of_bsn_gentable_desc_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_desc_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_gentable_desc_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_desc_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_gentable_desc_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_desc_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_gentable_entry_add_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_entry_add_push_wire_types(of_object_t *obj);
void of_bsn_gentable_entry_delete_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_entry_delete_push_wire_types(of_object_t *obj);
void of_bsn_gentable_entry_desc_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_entry_desc_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_gentable_entry_desc_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_entry_desc_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_gentable_entry_desc_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_entry_desc_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_gentable_entry_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_entry_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_gentable_entry_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_entry_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_gentable_entry_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_entry_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_gentable_set_buckets_size_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_set_buckets_size_push_wire_types(of_object_t *obj);
void of_bsn_gentable_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_gentable_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_gentable_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_gentable_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_get_switch_pipeline_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_get_switch_pipeline_reply_push_wire_types(of_object_t *obj);
void of_bsn_get_switch_pipeline_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_get_switch_pipeline_request_push_wire_types(of_object_t *obj);
void of_bsn_image_desc_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_image_desc_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_image_desc_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_image_desc_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_lacp_convergence_notif_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_lacp_convergence_notif_push_wire_types(of_object_t *obj);
void of_bsn_lacp_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_lacp_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_lacp_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_lacp_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_lacp_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_lacp_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_log_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_log_push_wire_types(of_object_t *obj);
void of_bsn_lua_command_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_lua_command_reply_push_wire_types(of_object_t *obj);
void of_bsn_lua_command_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_lua_command_request_push_wire_types(of_object_t *obj);
void of_bsn_lua_notification_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_lua_notification_push_wire_types(of_object_t *obj);
void of_bsn_lua_upload_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_lua_upload_push_wire_types(of_object_t *obj);
void of_bsn_port_counter_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_port_counter_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_port_counter_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_port_counter_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_port_counter_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_port_counter_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_role_status_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_role_status_push_wire_types(of_object_t *obj);
void of_bsn_set_aux_cxns_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_set_aux_cxns_reply_push_wire_types(of_object_t *obj);
void of_bsn_set_aux_cxns_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_set_aux_cxns_request_push_wire_types(of_object_t *obj);
void of_bsn_set_lacp_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_set_lacp_reply_push_wire_types(of_object_t *obj);
void of_bsn_set_lacp_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_set_lacp_request_push_wire_types(of_object_t *obj);
void of_bsn_set_switch_pipeline_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_set_switch_pipeline_reply_push_wire_types(of_object_t *obj);
void of_bsn_set_switch_pipeline_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_set_switch_pipeline_request_push_wire_types(of_object_t *obj);
void of_bsn_switch_pipeline_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_switch_pipeline_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_switch_pipeline_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_switch_pipeline_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_switch_pipeline_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_switch_pipeline_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_table_checksum_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_table_checksum_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_table_checksum_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_table_checksum_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_table_checksum_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_table_checksum_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_table_set_buckets_size_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_table_set_buckets_size_push_wire_types(of_object_t *obj);
void of_bsn_time_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_time_reply_push_wire_types(of_object_t *obj);
void of_bsn_time_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_time_request_push_wire_types(of_object_t *obj);
void of_bsn_tlv_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_push_wire_types(of_object_t *obj);
void of_bsn_tlv_actor_key_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_actor_key_push_wire_types(of_object_t *obj);
void of_bsn_tlv_actor_port_num_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_actor_port_num_push_wire_types(of_object_t *obj);
void of_bsn_tlv_actor_port_priority_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_actor_port_priority_push_wire_types(of_object_t *obj);
void of_bsn_tlv_actor_state_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_actor_state_push_wire_types(of_object_t *obj);
void of_bsn_tlv_actor_system_mac_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_actor_system_mac_push_wire_types(of_object_t *obj);
void of_bsn_tlv_actor_system_priority_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_actor_system_priority_push_wire_types(of_object_t *obj);
void of_bsn_tlv_broadcast_query_timeout_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_broadcast_query_timeout_push_wire_types(of_object_t *obj);
void of_bsn_tlv_bucket_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_bucket_push_wire_types(of_object_t *obj);
void of_bsn_tlv_circuit_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_circuit_id_push_wire_types(of_object_t *obj);
void of_bsn_tlv_convergence_status_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_convergence_status_push_wire_types(of_object_t *obj);
void of_bsn_tlv_crc_enabled_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_crc_enabled_push_wire_types(of_object_t *obj);
void of_bsn_tlv_data_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_data_push_wire_types(of_object_t *obj);
void of_bsn_tlv_eth_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_eth_dst_push_wire_types(of_object_t *obj);
void of_bsn_tlv_eth_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_eth_src_push_wire_types(of_object_t *obj);
void of_bsn_tlv_external_gateway_ip_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_external_gateway_ip_push_wire_types(of_object_t *obj);
void of_bsn_tlv_external_gateway_mac_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_external_gateway_mac_push_wire_types(of_object_t *obj);
void of_bsn_tlv_external_ip_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_external_ip_push_wire_types(of_object_t *obj);
void of_bsn_tlv_external_mac_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_external_mac_push_wire_types(of_object_t *obj);
void of_bsn_tlv_external_netmask_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_external_netmask_push_wire_types(of_object_t *obj);
void of_bsn_tlv_header_size_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_header_size_push_wire_types(of_object_t *obj);
void of_bsn_tlv_icmp_code_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_icmp_code_push_wire_types(of_object_t *obj);
void of_bsn_tlv_icmp_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_icmp_id_push_wire_types(of_object_t *obj);
void of_bsn_tlv_icmp_type_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_icmp_type_push_wire_types(of_object_t *obj);
void of_bsn_tlv_idle_notification_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_idle_notification_push_wire_types(of_object_t *obj);
void of_bsn_tlv_idle_time_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_idle_time_push_wire_types(of_object_t *obj);
void of_bsn_tlv_idle_timeout_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_idle_timeout_push_wire_types(of_object_t *obj);
void of_bsn_tlv_internal_gateway_mac_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_internal_gateway_mac_push_wire_types(of_object_t *obj);
void of_bsn_tlv_internal_mac_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_internal_mac_push_wire_types(of_object_t *obj);
void of_bsn_tlv_interval_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_interval_push_wire_types(of_object_t *obj);
void of_bsn_tlv_ip_proto_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_ip_proto_push_wire_types(of_object_t *obj);
void of_bsn_tlv_ipv4_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_ipv4_push_wire_types(of_object_t *obj);
void of_bsn_tlv_ipv4_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_ipv4_dst_push_wire_types(of_object_t *obj);
void of_bsn_tlv_ipv4_netmask_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_ipv4_netmask_push_wire_types(of_object_t *obj);
void of_bsn_tlv_ipv4_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_ipv4_src_push_wire_types(of_object_t *obj);
void of_bsn_tlv_mac_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_mac_push_wire_types(of_object_t *obj);
void of_bsn_tlv_mac_mask_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_mac_mask_push_wire_types(of_object_t *obj);
void of_bsn_tlv_miss_packets_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_miss_packets_push_wire_types(of_object_t *obj);
void of_bsn_tlv_mpls_control_word_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_mpls_control_word_push_wire_types(of_object_t *obj);
void of_bsn_tlv_mpls_label_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_mpls_label_push_wire_types(of_object_t *obj);
void of_bsn_tlv_mpls_sequenced_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_mpls_sequenced_push_wire_types(of_object_t *obj);
void of_bsn_tlv_name_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_name_push_wire_types(of_object_t *obj);
void of_bsn_tlv_partner_key_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_partner_key_push_wire_types(of_object_t *obj);
void of_bsn_tlv_partner_port_num_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_partner_port_num_push_wire_types(of_object_t *obj);
void of_bsn_tlv_partner_port_priority_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_partner_port_priority_push_wire_types(of_object_t *obj);
void of_bsn_tlv_partner_state_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_partner_state_push_wire_types(of_object_t *obj);
void of_bsn_tlv_partner_system_mac_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_partner_system_mac_push_wire_types(of_object_t *obj);
void of_bsn_tlv_partner_system_priority_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_partner_system_priority_push_wire_types(of_object_t *obj);
void of_bsn_tlv_port_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_port_push_wire_types(of_object_t *obj);
void of_bsn_tlv_priority_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_priority_push_wire_types(of_object_t *obj);
void of_bsn_tlv_queue_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_queue_id_push_wire_types(of_object_t *obj);
void of_bsn_tlv_queue_weight_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_queue_weight_push_wire_types(of_object_t *obj);
void of_bsn_tlv_reference_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_reference_push_wire_types(of_object_t *obj);
void of_bsn_tlv_reply_packets_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_reply_packets_push_wire_types(of_object_t *obj);
void of_bsn_tlv_request_packets_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_request_packets_push_wire_types(of_object_t *obj);
void of_bsn_tlv_rx_bytes_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_rx_bytes_push_wire_types(of_object_t *obj);
void of_bsn_tlv_rx_packets_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_rx_packets_push_wire_types(of_object_t *obj);
void of_bsn_tlv_sampling_rate_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_sampling_rate_push_wire_types(of_object_t *obj);
void of_bsn_tlv_sub_agent_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_sub_agent_id_push_wire_types(of_object_t *obj);
void of_bsn_tlv_tcp_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_tcp_dst_push_wire_types(of_object_t *obj);
void of_bsn_tlv_tcp_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_tcp_src_push_wire_types(of_object_t *obj);
void of_bsn_tlv_tx_bytes_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_tx_bytes_push_wire_types(of_object_t *obj);
void of_bsn_tlv_tx_packets_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_tx_packets_push_wire_types(of_object_t *obj);
void of_bsn_tlv_udf_anchor_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_udf_anchor_push_wire_types(of_object_t *obj);
void of_bsn_tlv_udf_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_udf_id_push_wire_types(of_object_t *obj);
void of_bsn_tlv_udf_length_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_udf_length_push_wire_types(of_object_t *obj);
void of_bsn_tlv_udf_offset_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_udf_offset_push_wire_types(of_object_t *obj);
void of_bsn_tlv_udp_dst_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_udp_dst_push_wire_types(of_object_t *obj);
void of_bsn_tlv_udp_src_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_udp_src_push_wire_types(of_object_t *obj);
void of_bsn_tlv_unicast_query_timeout_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_unicast_query_timeout_push_wire_types(of_object_t *obj);
void of_bsn_tlv_vlan_vid_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_vlan_vid_push_wire_types(of_object_t *obj);
void of_bsn_tlv_vrf_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_tlv_vrf_push_wire_types(of_object_t *obj);
void of_bsn_vlan_counter_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_vlan_counter_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_vlan_counter_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_vlan_counter_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_vlan_counter_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_vlan_counter_stats_request_push_wire_types(of_object_t *obj);
void of_bsn_vrf_counter_stats_entry_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_vrf_counter_stats_entry_push_wire_types(of_object_t *obj);
void of_bsn_vrf_counter_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_vrf_counter_stats_reply_push_wire_types(of_object_t *obj);
void of_bsn_vrf_counter_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bsn_vrf_counter_stats_request_push_wire_types(of_object_t *obj);
void of_hello_elem_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_hello_elem_push_wire_types(of_object_t *obj);
void of_hello_elem_versionbitmap_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_hello_elem_versionbitmap_push_wire_types(of_object_t *obj);
void of_instruction_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_push_wire_types(of_object_t *obj);
void of_instruction_id_apply_actions_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_apply_actions_push_wire_types(of_object_t *obj);
void of_instruction_bsn_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_push_wire_types(of_object_t *obj);
void of_instruction_id_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_experimenter_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_push_wire_types(of_object_t *obj);
void of_instruction_bsn_arp_offload_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_arp_offload_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_arp_offload_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_arp_offload_push_wire_types(of_object_t *obj);
void of_instruction_bsn_auto_negotiation_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_auto_negotiation_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_auto_negotiation_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_auto_negotiation_push_wire_types(of_object_t *obj);
void of_instruction_bsn_deny_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_deny_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_deny_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_deny_push_wire_types(of_object_t *obj);
void of_instruction_bsn_dhcp_offload_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_dhcp_offload_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_dhcp_offload_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_dhcp_offload_push_wire_types(of_object_t *obj);
void of_instruction_bsn_disable_split_horizon_check_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_disable_split_horizon_check_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_disable_split_horizon_check_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_disable_split_horizon_check_push_wire_types(of_object_t *obj);
void of_instruction_bsn_disable_src_mac_check_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_disable_src_mac_check_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_disable_src_mac_check_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_disable_src_mac_check_push_wire_types(of_object_t *obj);
void of_instruction_bsn_disable_vlan_counters_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_disable_vlan_counters_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_disable_vlan_counters_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_disable_vlan_counters_push_wire_types(of_object_t *obj);
void of_instruction_bsn_packet_of_death_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_packet_of_death_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_packet_of_death_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_packet_of_death_push_wire_types(of_object_t *obj);
void of_instruction_bsn_permit_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_permit_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_permit_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_permit_push_wire_types(of_object_t *obj);
void of_instruction_bsn_prioritize_pdus_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_prioritize_pdus_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_prioritize_pdus_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_prioritize_pdus_push_wire_types(of_object_t *obj);
void of_instruction_bsn_require_vlan_xlate_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_require_vlan_xlate_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_require_vlan_xlate_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_require_vlan_xlate_push_wire_types(of_object_t *obj);
void of_instruction_bsn_span_destination_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_bsn_span_destination_push_wire_types(of_object_t *obj);
void of_instruction_id_bsn_span_destination_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_bsn_span_destination_push_wire_types(of_object_t *obj);
void of_instruction_id_clear_actions_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_clear_actions_push_wire_types(of_object_t *obj);
void of_instruction_id_goto_table_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_goto_table_push_wire_types(of_object_t *obj);
void of_instruction_meter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_meter_push_wire_types(of_object_t *obj);
void of_instruction_id_meter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_meter_push_wire_types(of_object_t *obj);
void of_instruction_id_write_actions_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_write_actions_push_wire_types(of_object_t *obj);
void of_instruction_id_write_metadata_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_instruction_id_write_metadata_push_wire_types(of_object_t *obj);
void of_meter_band_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_band_push_wire_types(of_object_t *obj);
void of_meter_band_drop_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_band_drop_push_wire_types(of_object_t *obj);
void of_meter_band_dscp_remark_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_band_dscp_remark_push_wire_types(of_object_t *obj);
void of_meter_band_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_band_experimenter_push_wire_types(of_object_t *obj);
void of_meter_band_stats_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_band_stats_push_wire_types(of_object_t *obj);
void of_meter_config_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_config_push_wire_types(of_object_t *obj);
void of_meter_config_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_config_stats_reply_push_wire_types(of_object_t *obj);
void of_meter_config_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_config_stats_request_push_wire_types(of_object_t *obj);
void of_meter_features_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_features_push_wire_types(of_object_t *obj);
void of_meter_features_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_features_stats_reply_push_wire_types(of_object_t *obj);
void of_meter_features_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_features_stats_request_push_wire_types(of_object_t *obj);
void of_meter_mod_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_mod_push_wire_types(of_object_t *obj);
void of_meter_mod_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_mod_failed_error_msg_push_wire_types(of_object_t *obj);
void of_meter_stats_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_stats_push_wire_types(of_object_t *obj);
void of_meter_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_stats_reply_push_wire_types(of_object_t *obj);
void of_meter_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_meter_stats_request_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_exthdr_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_exthdr_push_wire_types(of_object_t *obj);
void of_oxm_ipv6_exthdr_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_ipv6_exthdr_masked_push_wire_types(of_object_t *obj);
void of_oxm_mpls_bos_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_mpls_bos_push_wire_types(of_object_t *obj);
void of_oxm_mpls_bos_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_mpls_bos_masked_push_wire_types(of_object_t *obj);
void of_oxm_tunnel_id_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_tunnel_id_push_wire_types(of_object_t *obj);
void of_oxm_tunnel_id_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_tunnel_id_masked_push_wire_types(of_object_t *obj);
void of_port_desc_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_desc_stats_reply_push_wire_types(of_object_t *obj);
void of_port_desc_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_desc_stats_request_push_wire_types(of_object_t *obj);
void of_table_feature_prop_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_push_wire_types(of_object_t *obj);
void of_table_feature_prop_apply_actions_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_apply_actions_push_wire_types(of_object_t *obj);
void of_table_feature_prop_apply_actions_miss_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_apply_actions_miss_push_wire_types(of_object_t *obj);
void of_table_feature_prop_apply_setfield_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_apply_setfield_push_wire_types(of_object_t *obj);
void of_table_feature_prop_apply_setfield_miss_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_apply_setfield_miss_push_wire_types(of_object_t *obj);
void of_table_feature_prop_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_experimenter_push_wire_types(of_object_t *obj);
void of_table_feature_prop_experimenter_miss_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_experimenter_miss_push_wire_types(of_object_t *obj);
void of_table_feature_prop_instructions_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_instructions_push_wire_types(of_object_t *obj);
void of_table_feature_prop_instructions_miss_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_instructions_miss_push_wire_types(of_object_t *obj);
void of_table_feature_prop_match_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_match_push_wire_types(of_object_t *obj);
void of_table_feature_prop_next_tables_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_next_tables_push_wire_types(of_object_t *obj);
void of_table_feature_prop_next_tables_miss_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_next_tables_miss_push_wire_types(of_object_t *obj);
void of_table_feature_prop_wildcards_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_wildcards_push_wire_types(of_object_t *obj);
void of_table_feature_prop_write_actions_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_write_actions_push_wire_types(of_object_t *obj);
void of_table_feature_prop_write_actions_miss_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_write_actions_miss_push_wire_types(of_object_t *obj);
void of_table_feature_prop_write_setfield_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_write_setfield_push_wire_types(of_object_t *obj);
void of_table_feature_prop_write_setfield_miss_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_write_setfield_miss_push_wire_types(of_object_t *obj);
void of_table_features_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_features_push_wire_types(of_object_t *obj);
void of_table_features_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_features_failed_error_msg_push_wire_types(of_object_t *obj);
void of_table_features_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_features_stats_reply_push_wire_types(of_object_t *obj);
void of_table_features_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_features_stats_request_push_wire_types(of_object_t *obj);
void of_uint32_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_uint32_push_wire_types(of_object_t *obj);
void of_uint64_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_uint64_push_wire_types(of_object_t *obj);
void of_uint8_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_uint8_push_wire_types(of_object_t *obj);
void of_async_config_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_failed_error_msg_push_wire_types(of_object_t *obj);
void of_async_config_prop_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_push_wire_types(of_object_t *obj);
void of_async_config_prop_experimenter_master_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_experimenter_master_push_wire_types(of_object_t *obj);
void of_async_config_prop_experimenter_slave_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_experimenter_slave_push_wire_types(of_object_t *obj);
void of_async_config_prop_flow_removed_master_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_flow_removed_master_push_wire_types(of_object_t *obj);
void of_async_config_prop_flow_removed_slave_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_flow_removed_slave_push_wire_types(of_object_t *obj);
void of_async_config_prop_packet_in_master_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_packet_in_master_push_wire_types(of_object_t *obj);
void of_async_config_prop_packet_in_slave_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_packet_in_slave_push_wire_types(of_object_t *obj);
void of_async_config_prop_port_status_master_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_port_status_master_push_wire_types(of_object_t *obj);
void of_async_config_prop_port_status_slave_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_port_status_slave_push_wire_types(of_object_t *obj);
void of_async_config_prop_requestforward_master_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_requestforward_master_push_wire_types(of_object_t *obj);
void of_async_config_prop_requestforward_slave_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_requestforward_slave_push_wire_types(of_object_t *obj);
void of_async_config_prop_role_status_master_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_role_status_master_push_wire_types(of_object_t *obj);
void of_async_config_prop_role_status_slave_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_role_status_slave_push_wire_types(of_object_t *obj);
void of_async_config_prop_table_status_master_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_table_status_master_push_wire_types(of_object_t *obj);
void of_async_config_prop_table_status_slave_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_async_config_prop_table_status_slave_push_wire_types(of_object_t *obj);
void of_bad_property_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bad_property_error_msg_push_wire_types(of_object_t *obj);
void of_bundle_add_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bundle_add_msg_push_wire_types(of_object_t *obj);
void of_bundle_ctrl_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bundle_ctrl_msg_push_wire_types(of_object_t *obj);
void of_bundle_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bundle_failed_error_msg_push_wire_types(of_object_t *obj);
void of_bundle_prop_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bundle_prop_push_wire_types(of_object_t *obj);
void of_bundle_prop_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_bundle_prop_experimenter_push_wire_types(of_object_t *obj);
void of_flow_monitor_failed_error_msg_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_flow_monitor_failed_error_msg_push_wire_types(of_object_t *obj);
void of_oxm_pbb_uca_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_pbb_uca_push_wire_types(of_object_t *obj);
void of_oxm_pbb_uca_masked_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_oxm_pbb_uca_masked_push_wire_types(of_object_t *obj);
void of_port_desc_prop_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_desc_prop_push_wire_types(of_object_t *obj);
void of_port_desc_prop_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_desc_prop_experimenter_push_wire_types(of_object_t *obj);
void of_port_desc_prop_bsn_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_desc_prop_bsn_push_wire_types(of_object_t *obj);
void of_port_desc_prop_bsn_uplink_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_desc_prop_bsn_uplink_push_wire_types(of_object_t *obj);
void of_port_desc_prop_ethernet_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_desc_prop_ethernet_push_wire_types(of_object_t *obj);
void of_port_desc_prop_optical_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_desc_prop_optical_push_wire_types(of_object_t *obj);
void of_port_mod_prop_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_mod_prop_push_wire_types(of_object_t *obj);
void of_port_mod_prop_ethernet_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_mod_prop_ethernet_push_wire_types(of_object_t *obj);
void of_port_mod_prop_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_mod_prop_experimenter_push_wire_types(of_object_t *obj);
void of_port_mod_prop_optical_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_mod_prop_optical_push_wire_types(of_object_t *obj);
void of_port_stats_prop_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_stats_prop_push_wire_types(of_object_t *obj);
void of_port_stats_prop_ethernet_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_stats_prop_ethernet_push_wire_types(of_object_t *obj);
void of_port_stats_prop_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_stats_prop_experimenter_push_wire_types(of_object_t *obj);
void of_port_stats_prop_optical_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_port_stats_prop_optical_push_wire_types(of_object_t *obj);
void of_queue_desc_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_desc_push_wire_types(of_object_t *obj);
void of_queue_desc_prop_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_desc_prop_push_wire_types(of_object_t *obj);
void of_queue_desc_prop_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_desc_prop_experimenter_push_wire_types(of_object_t *obj);
void of_queue_desc_prop_max_rate_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_desc_prop_max_rate_push_wire_types(of_object_t *obj);
void of_queue_desc_prop_min_rate_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_desc_prop_min_rate_push_wire_types(of_object_t *obj);
void of_queue_desc_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_desc_stats_reply_push_wire_types(of_object_t *obj);
void of_queue_desc_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_desc_stats_request_push_wire_types(of_object_t *obj);
void of_queue_stats_prop_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_stats_prop_push_wire_types(of_object_t *obj);
void of_queue_stats_prop_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_queue_stats_prop_experimenter_push_wire_types(of_object_t *obj);
void of_requestforward_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_requestforward_push_wire_types(of_object_t *obj);
void of_role_prop_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_role_prop_push_wire_types(of_object_t *obj);
void of_role_prop_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_role_prop_experimenter_push_wire_types(of_object_t *obj);
void of_role_status_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_role_status_push_wire_types(of_object_t *obj);
void of_table_desc_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_desc_push_wire_types(of_object_t *obj);
void of_table_desc_stats_reply_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_desc_stats_reply_push_wire_types(of_object_t *obj);
void of_table_desc_stats_request_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_desc_stats_request_push_wire_types(of_object_t *obj);
void of_table_feature_prop_table_sync_from_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_feature_prop_table_sync_from_push_wire_types(of_object_t *obj);
void of_table_mod_prop_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_mod_prop_push_wire_types(of_object_t *obj);
void of_table_mod_prop_eviction_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_mod_prop_eviction_push_wire_types(of_object_t *obj);
void of_table_mod_prop_experimenter_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_mod_prop_experimenter_push_wire_types(of_object_t *obj);
void of_table_mod_prop_vacancy_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_mod_prop_vacancy_push_wire_types(of_object_t *obj);
void of_table_status_wire_object_id_get(of_object_t *obj, of_object_id_t *id);
void of_table_status_push_wire_types(of_object_t *obj);


/* LOCI object typedefs */
typedef of_object_t of_aggregate_stats_reply_t;
typedef of_object_t of_aggregate_stats_request_t;
typedef of_object_t of_async_config_failed_error_msg_t;
typedef of_object_t of_async_get_reply_t;
typedef of_object_t of_async_get_request_t;
typedef of_object_t of_async_set_t;
typedef of_object_t of_bad_action_error_msg_t;
typedef of_object_t of_bad_instruction_error_msg_t;
typedef of_object_t of_bad_match_error_msg_t;
typedef of_object_t of_bad_property_error_msg_t;
typedef of_object_t of_bad_request_error_msg_t;
typedef of_object_t of_barrier_reply_t;
typedef of_object_t of_barrier_request_t;
typedef of_object_t of_bsn_arp_idle_t;
typedef of_object_t of_bsn_bw_clear_data_reply_t;
typedef of_object_t of_bsn_bw_clear_data_request_t;
typedef of_object_t of_bsn_bw_enable_get_reply_t;
typedef of_object_t of_bsn_bw_enable_get_request_t;
typedef of_object_t of_bsn_bw_enable_set_reply_t;
typedef of_object_t of_bsn_bw_enable_set_request_t;
typedef of_object_t of_bsn_controller_connections_reply_t;
typedef of_object_t of_bsn_controller_connections_request_t;
typedef of_object_t of_bsn_debug_counter_desc_stats_reply_t;
typedef of_object_t of_bsn_debug_counter_desc_stats_request_t;
typedef of_object_t of_bsn_debug_counter_stats_reply_t;
typedef of_object_t of_bsn_debug_counter_stats_request_t;
typedef of_object_t of_bsn_flow_checksum_bucket_stats_reply_t;
typedef of_object_t of_bsn_flow_checksum_bucket_stats_request_t;
typedef of_object_t of_bsn_flow_idle_t;
typedef of_object_t of_bsn_flow_idle_enable_get_reply_t;
typedef of_object_t of_bsn_flow_idle_enable_get_request_t;
typedef of_object_t of_bsn_flow_idle_enable_set_reply_t;
typedef of_object_t of_bsn_flow_idle_enable_set_request_t;
typedef of_object_t of_bsn_generic_stats_reply_t;
typedef of_object_t of_bsn_generic_stats_request_t;
typedef of_object_t of_bsn_gentable_bucket_stats_reply_t;
typedef of_object_t of_bsn_gentable_bucket_stats_request_t;
typedef of_object_t of_bsn_gentable_clear_reply_t;
typedef of_object_t of_bsn_gentable_clear_request_t;
typedef of_object_t of_bsn_gentable_desc_stats_reply_t;
typedef of_object_t of_bsn_gentable_desc_stats_request_t;
typedef of_object_t of_bsn_gentable_entry_add_t;
typedef of_object_t of_bsn_gentable_entry_delete_t;
typedef of_object_t of_bsn_gentable_entry_desc_stats_reply_t;
typedef of_object_t of_bsn_gentable_entry_desc_stats_request_t;
typedef of_object_t of_bsn_gentable_entry_stats_reply_t;
typedef of_object_t of_bsn_gentable_entry_stats_request_t;
typedef of_object_t of_bsn_gentable_set_buckets_size_t;
typedef of_object_t of_bsn_gentable_stats_reply_t;
typedef of_object_t of_bsn_gentable_stats_request_t;
typedef of_object_t of_bsn_get_interfaces_reply_t;
typedef of_object_t of_bsn_get_interfaces_request_t;
typedef of_object_t of_bsn_get_ip_mask_reply_t;
typedef of_object_t of_bsn_get_ip_mask_request_t;
typedef of_object_t of_bsn_get_l2_table_reply_t;
typedef of_object_t of_bsn_get_l2_table_request_t;
typedef of_object_t of_bsn_get_mirroring_reply_t;
typedef of_object_t of_bsn_get_mirroring_request_t;
typedef of_object_t of_bsn_get_switch_pipeline_reply_t;
typedef of_object_t of_bsn_get_switch_pipeline_request_t;
typedef of_object_t of_bsn_header_t;
typedef of_object_t of_bsn_hybrid_get_reply_t;
typedef of_object_t of_bsn_hybrid_get_request_t;
typedef of_object_t of_bsn_image_desc_stats_reply_t;
typedef of_object_t of_bsn_image_desc_stats_request_t;
typedef of_object_t of_bsn_lacp_convergence_notif_t;
typedef of_object_t of_bsn_lacp_stats_reply_t;
typedef of_object_t of_bsn_lacp_stats_request_t;
typedef of_object_t of_bsn_log_t;
typedef of_object_t of_bsn_lua_command_reply_t;
typedef of_object_t of_bsn_lua_command_request_t;
typedef of_object_t of_bsn_lua_notification_t;
typedef of_object_t of_bsn_lua_upload_t;
typedef of_object_t of_bsn_pdu_rx_reply_t;
typedef of_object_t of_bsn_pdu_rx_request_t;
typedef of_object_t of_bsn_pdu_rx_timeout_t;
typedef of_object_t of_bsn_pdu_tx_reply_t;
typedef of_object_t of_bsn_pdu_tx_request_t;
typedef of_object_t of_bsn_port_counter_stats_reply_t;
typedef of_object_t of_bsn_port_counter_stats_request_t;
typedef of_object_t of_bsn_role_status_t;
typedef of_object_t of_bsn_set_aux_cxns_reply_t;
typedef of_object_t of_bsn_set_aux_cxns_request_t;
typedef of_object_t of_bsn_set_ip_mask_t;
typedef of_object_t of_bsn_set_l2_table_reply_t;
typedef of_object_t of_bsn_set_l2_table_request_t;
typedef of_object_t of_bsn_set_lacp_reply_t;
typedef of_object_t of_bsn_set_lacp_request_t;
typedef of_object_t of_bsn_set_mirroring_t;
typedef of_object_t of_bsn_set_pktin_suppression_reply_t;
typedef of_object_t of_bsn_set_pktin_suppression_request_t;
typedef of_object_t of_bsn_set_switch_pipeline_reply_t;
typedef of_object_t of_bsn_set_switch_pipeline_request_t;
typedef of_object_t of_bsn_shell_command_t;
typedef of_object_t of_bsn_shell_output_t;
typedef of_object_t of_bsn_shell_status_t;
typedef of_object_t of_bsn_stats_reply_t;
typedef of_object_t of_bsn_stats_request_t;
typedef of_object_t of_bsn_switch_pipeline_stats_reply_t;
typedef of_object_t of_bsn_switch_pipeline_stats_request_t;
typedef of_object_t of_bsn_table_checksum_stats_reply_t;
typedef of_object_t of_bsn_table_checksum_stats_request_t;
typedef of_object_t of_bsn_table_set_buckets_size_t;
typedef of_object_t of_bsn_time_reply_t;
typedef of_object_t of_bsn_time_request_t;
typedef of_object_t of_bsn_virtual_port_create_reply_t;
typedef of_object_t of_bsn_virtual_port_create_request_t;
typedef of_object_t of_bsn_virtual_port_remove_reply_t;
typedef of_object_t of_bsn_virtual_port_remove_request_t;
typedef of_object_t of_bsn_vlan_counter_stats_reply_t;
typedef of_object_t of_bsn_vlan_counter_stats_request_t;
typedef of_object_t of_bsn_vrf_counter_stats_reply_t;
typedef of_object_t of_bsn_vrf_counter_stats_request_t;
typedef of_object_t of_bundle_add_msg_t;
typedef of_object_t of_bundle_ctrl_msg_t;
typedef of_object_t of_bundle_failed_error_msg_t;
typedef of_object_t of_desc_stats_reply_t;
typedef of_object_t of_desc_stats_request_t;
typedef of_object_t of_echo_reply_t;
typedef of_object_t of_echo_request_t;
typedef of_object_t of_error_msg_t;
typedef of_object_t of_experimenter_t;
typedef of_object_t of_experimenter_error_msg_t;
typedef of_object_t of_experimenter_stats_reply_t;
typedef of_object_t of_experimenter_stats_request_t;
typedef of_object_t of_features_reply_t;
typedef of_object_t of_features_request_t;
typedef of_object_t of_flow_add_t;
typedef of_object_t of_flow_delete_t;
typedef of_object_t of_flow_delete_strict_t;
typedef of_object_t of_flow_mod_t;
typedef of_object_t of_flow_mod_failed_error_msg_t;
typedef of_object_t of_flow_modify_t;
typedef of_object_t of_flow_modify_strict_t;
typedef of_object_t of_flow_monitor_failed_error_msg_t;
typedef of_object_t of_flow_removed_t;
typedef of_object_t of_flow_stats_reply_t;
typedef of_object_t of_flow_stats_request_t;
typedef of_object_t of_get_config_reply_t;
typedef of_object_t of_get_config_request_t;
typedef of_object_t of_group_add_t;
typedef of_object_t of_group_delete_t;
typedef of_object_t of_group_desc_stats_reply_t;
typedef of_object_t of_group_desc_stats_request_t;
typedef of_object_t of_group_features_stats_reply_t;
typedef of_object_t of_group_features_stats_request_t;
typedef of_object_t of_group_mod_t;
typedef of_object_t of_group_mod_failed_error_msg_t;
typedef of_object_t of_group_modify_t;
typedef of_object_t of_group_stats_reply_t;
typedef of_object_t of_group_stats_request_t;
typedef of_object_t of_header_t;
typedef of_object_t of_hello_t;
typedef of_object_t of_hello_failed_error_msg_t;
typedef of_object_t of_meter_config_stats_reply_t;
typedef of_object_t of_meter_config_stats_request_t;
typedef of_object_t of_meter_features_stats_reply_t;
typedef of_object_t of_meter_features_stats_request_t;
typedef of_object_t of_meter_mod_t;
typedef of_object_t of_meter_mod_failed_error_msg_t;
typedef of_object_t of_meter_stats_reply_t;
typedef of_object_t of_meter_stats_request_t;
typedef of_object_t of_nicira_controller_role_reply_t;
typedef of_object_t of_nicira_controller_role_request_t;
typedef of_object_t of_nicira_header_t;
typedef of_object_t of_packet_in_t;
typedef of_object_t of_packet_out_t;
typedef of_object_t of_port_desc_stats_reply_t;
typedef of_object_t of_port_desc_stats_request_t;
typedef of_object_t of_port_mod_t;
typedef of_object_t of_port_mod_failed_error_msg_t;
typedef of_object_t of_port_stats_reply_t;
typedef of_object_t of_port_stats_request_t;
typedef of_object_t of_port_status_t;
typedef of_object_t of_queue_desc_stats_reply_t;
typedef of_object_t of_queue_desc_stats_request_t;
typedef of_object_t of_queue_get_config_reply_t;
typedef of_object_t of_queue_get_config_request_t;
typedef of_object_t of_queue_op_failed_error_msg_t;
typedef of_object_t of_queue_stats_reply_t;
typedef of_object_t of_queue_stats_request_t;
typedef of_object_t of_requestforward_t;
typedef of_object_t of_role_reply_t;
typedef of_object_t of_role_request_t;
typedef of_object_t of_role_request_failed_error_msg_t;
typedef of_object_t of_role_status_t;
typedef of_object_t of_set_config_t;
typedef of_object_t of_stats_reply_t;
typedef of_object_t of_stats_request_t;
typedef of_object_t of_switch_config_failed_error_msg_t;
typedef of_object_t of_table_desc_stats_reply_t;
typedef of_object_t of_table_desc_stats_request_t;
typedef of_object_t of_table_features_failed_error_msg_t;
typedef of_object_t of_table_features_stats_reply_t;
typedef of_object_t of_table_features_stats_request_t;
typedef of_object_t of_table_mod_t;
typedef of_object_t of_table_mod_failed_error_msg_t;
typedef of_object_t of_table_stats_reply_t;
typedef of_object_t of_table_stats_request_t;
typedef of_object_t of_table_status_t;
typedef of_object_t of_action_t;
typedef of_object_t of_action_bsn_t;
typedef of_object_t of_action_bsn_checksum_t;
typedef of_object_t of_action_bsn_gentable_t;
typedef of_object_t of_action_bsn_mirror_t;
typedef of_object_t of_action_bsn_set_tunnel_dst_t;
typedef of_object_t of_action_copy_ttl_in_t;
typedef of_object_t of_action_copy_ttl_out_t;
typedef of_object_t of_action_dec_mpls_ttl_t;
typedef of_object_t of_action_dec_nw_ttl_t;
typedef of_object_t of_action_enqueue_t;
typedef of_object_t of_action_experimenter_t;
typedef of_object_t of_action_group_t;
typedef of_object_t of_action_id_t;
typedef of_object_t of_action_id_bsn_t;
typedef of_object_t of_action_id_bsn_checksum_t;
typedef of_object_t of_action_id_bsn_gentable_t;
typedef of_object_t of_action_id_bsn_mirror_t;
typedef of_object_t of_action_id_bsn_set_tunnel_dst_t;
typedef of_object_t of_action_id_copy_ttl_in_t;
typedef of_object_t of_action_id_copy_ttl_out_t;
typedef of_object_t of_action_id_dec_mpls_ttl_t;
typedef of_object_t of_action_id_dec_nw_ttl_t;
typedef of_object_t of_action_id_experimenter_t;
typedef of_object_t of_action_id_group_t;
typedef of_object_t of_action_id_nicira_t;
typedef of_object_t of_action_id_nicira_dec_ttl_t;
typedef of_object_t of_action_id_output_t;
typedef of_object_t of_action_id_pop_mpls_t;
typedef of_object_t of_action_id_pop_pbb_t;
typedef of_object_t of_action_id_pop_vlan_t;
typedef of_object_t of_action_id_push_mpls_t;
typedef of_object_t of_action_id_push_pbb_t;
typedef of_object_t of_action_id_push_vlan_t;
typedef of_object_t of_action_id_set_field_t;
typedef of_object_t of_action_id_set_mpls_ttl_t;
typedef of_object_t of_action_id_set_nw_ttl_t;
typedef of_object_t of_action_id_set_queue_t;
typedef of_object_t of_action_nicira_t;
typedef of_object_t of_action_nicira_dec_ttl_t;
typedef of_object_t of_action_output_t;
typedef of_object_t of_action_pop_mpls_t;
typedef of_object_t of_action_pop_pbb_t;
typedef of_object_t of_action_pop_vlan_t;
typedef of_object_t of_action_push_mpls_t;
typedef of_object_t of_action_push_pbb_t;
typedef of_object_t of_action_push_vlan_t;
typedef of_object_t of_action_set_dl_dst_t;
typedef of_object_t of_action_set_dl_src_t;
typedef of_object_t of_action_set_field_t;
typedef of_object_t of_action_set_mpls_label_t;
typedef of_object_t of_action_set_mpls_tc_t;
typedef of_object_t of_action_set_mpls_ttl_t;
typedef of_object_t of_action_set_nw_dst_t;
typedef of_object_t of_action_set_nw_ecn_t;
typedef of_object_t of_action_set_nw_src_t;
typedef of_object_t of_action_set_nw_tos_t;
typedef of_object_t of_action_set_nw_ttl_t;
typedef of_object_t of_action_set_queue_t;
typedef of_object_t of_action_set_tp_dst_t;
typedef of_object_t of_action_set_tp_src_t;
typedef of_object_t of_action_set_vlan_pcp_t;
typedef of_object_t of_action_set_vlan_vid_t;
typedef of_object_t of_action_strip_vlan_t;
typedef of_object_t of_async_config_prop_t;
typedef of_object_t of_async_config_prop_experimenter_master_t;
typedef of_object_t of_async_config_prop_experimenter_slave_t;
typedef of_object_t of_async_config_prop_flow_removed_master_t;
typedef of_object_t of_async_config_prop_flow_removed_slave_t;
typedef of_object_t of_async_config_prop_packet_in_master_t;
typedef of_object_t of_async_config_prop_packet_in_slave_t;
typedef of_object_t of_async_config_prop_port_status_master_t;
typedef of_object_t of_async_config_prop_port_status_slave_t;
typedef of_object_t of_async_config_prop_requestforward_master_t;
typedef of_object_t of_async_config_prop_requestforward_slave_t;
typedef of_object_t of_async_config_prop_role_status_master_t;
typedef of_object_t of_async_config_prop_role_status_slave_t;
typedef of_object_t of_async_config_prop_table_status_master_t;
typedef of_object_t of_async_config_prop_table_status_slave_t;
typedef of_object_t of_bsn_controller_connection_t;
typedef of_object_t of_bsn_debug_counter_desc_stats_entry_t;
typedef of_object_t of_bsn_debug_counter_stats_entry_t;
typedef of_object_t of_bsn_flow_checksum_bucket_stats_entry_t;
typedef of_object_t of_bsn_generic_stats_entry_t;
typedef of_object_t of_bsn_gentable_bucket_stats_entry_t;
typedef of_object_t of_bsn_gentable_desc_stats_entry_t;
typedef of_object_t of_bsn_gentable_entry_desc_stats_entry_t;
typedef of_object_t of_bsn_gentable_entry_stats_entry_t;
typedef of_object_t of_bsn_gentable_stats_entry_t;
typedef of_object_t of_bsn_interface_t;
typedef of_object_t of_bsn_lacp_stats_entry_t;
typedef of_object_t of_bsn_port_counter_stats_entry_t;
typedef of_object_t of_bsn_switch_pipeline_stats_entry_t;
typedef of_object_t of_bsn_table_checksum_stats_entry_t;
typedef of_object_t of_bsn_tlv_t;
typedef of_object_t of_bsn_tlv_actor_key_t;
typedef of_object_t of_bsn_tlv_actor_port_num_t;
typedef of_object_t of_bsn_tlv_actor_port_priority_t;
typedef of_object_t of_bsn_tlv_actor_state_t;
typedef of_object_t of_bsn_tlv_actor_system_mac_t;
typedef of_object_t of_bsn_tlv_actor_system_priority_t;
typedef of_object_t of_bsn_tlv_broadcast_query_timeout_t;
typedef of_object_t of_bsn_tlv_bucket_t;
typedef of_object_t of_bsn_tlv_circuit_id_t;
typedef of_object_t of_bsn_tlv_convergence_status_t;
typedef of_object_t of_bsn_tlv_crc_enabled_t;
typedef of_object_t of_bsn_tlv_data_t;
typedef of_object_t of_bsn_tlv_eth_dst_t;
typedef of_object_t of_bsn_tlv_eth_src_t;
typedef of_object_t of_bsn_tlv_external_gateway_ip_t;
typedef of_object_t of_bsn_tlv_external_gateway_mac_t;
typedef of_object_t of_bsn_tlv_external_ip_t;
typedef of_object_t of_bsn_tlv_external_mac_t;
typedef of_object_t of_bsn_tlv_external_netmask_t;
typedef of_object_t of_bsn_tlv_header_size_t;
typedef of_object_t of_bsn_tlv_icmp_code_t;
typedef of_object_t of_bsn_tlv_icmp_id_t;
typedef of_object_t of_bsn_tlv_icmp_type_t;
typedef of_object_t of_bsn_tlv_idle_notification_t;
typedef of_object_t of_bsn_tlv_idle_time_t;
typedef of_object_t of_bsn_tlv_idle_timeout_t;
typedef of_object_t of_bsn_tlv_internal_gateway_mac_t;
typedef of_object_t of_bsn_tlv_internal_mac_t;
typedef of_object_t of_bsn_tlv_interval_t;
typedef of_object_t of_bsn_tlv_ip_proto_t;
typedef of_object_t of_bsn_tlv_ipv4_t;
typedef of_object_t of_bsn_tlv_ipv4_dst_t;
typedef of_object_t of_bsn_tlv_ipv4_netmask_t;
typedef of_object_t of_bsn_tlv_ipv4_src_t;
typedef of_object_t of_bsn_tlv_mac_t;
typedef of_object_t of_bsn_tlv_mac_mask_t;
typedef of_object_t of_bsn_tlv_miss_packets_t;
typedef of_object_t of_bsn_tlv_mpls_control_word_t;
typedef of_object_t of_bsn_tlv_mpls_label_t;
typedef of_object_t of_bsn_tlv_mpls_sequenced_t;
typedef of_object_t of_bsn_tlv_name_t;
typedef of_object_t of_bsn_tlv_partner_key_t;
typedef of_object_t of_bsn_tlv_partner_port_num_t;
typedef of_object_t of_bsn_tlv_partner_port_priority_t;
typedef of_object_t of_bsn_tlv_partner_state_t;
typedef of_object_t of_bsn_tlv_partner_system_mac_t;
typedef of_object_t of_bsn_tlv_partner_system_priority_t;
typedef of_object_t of_bsn_tlv_port_t;
typedef of_object_t of_bsn_tlv_priority_t;
typedef of_object_t of_bsn_tlv_queue_id_t;
typedef of_object_t of_bsn_tlv_queue_weight_t;
typedef of_object_t of_bsn_tlv_reference_t;
typedef of_object_t of_bsn_tlv_reply_packets_t;
typedef of_object_t of_bsn_tlv_request_packets_t;
typedef of_object_t of_bsn_tlv_rx_bytes_t;
typedef of_object_t of_bsn_tlv_rx_packets_t;
typedef of_object_t of_bsn_tlv_sampling_rate_t;
typedef of_object_t of_bsn_tlv_sub_agent_id_t;
typedef of_object_t of_bsn_tlv_tcp_dst_t;
typedef of_object_t of_bsn_tlv_tcp_src_t;
typedef of_object_t of_bsn_tlv_tx_bytes_t;
typedef of_object_t of_bsn_tlv_tx_packets_t;
typedef of_object_t of_bsn_tlv_udf_anchor_t;
typedef of_object_t of_bsn_tlv_udf_id_t;
typedef of_object_t of_bsn_tlv_udf_length_t;
typedef of_object_t of_bsn_tlv_udf_offset_t;
typedef of_object_t of_bsn_tlv_udp_dst_t;
typedef of_object_t of_bsn_tlv_udp_src_t;
typedef of_object_t of_bsn_tlv_unicast_query_timeout_t;
typedef of_object_t of_bsn_tlv_vlan_vid_t;
typedef of_object_t of_bsn_tlv_vrf_t;
typedef of_object_t of_bsn_vlan_counter_stats_entry_t;
typedef of_object_t of_bsn_vport_t;
typedef of_object_t of_bsn_vport_l2gre_t;
typedef of_object_t of_bsn_vport_q_in_q_t;
typedef of_object_t of_bsn_vrf_counter_stats_entry_t;
typedef of_object_t of_bucket_t;
typedef of_object_t of_bucket_counter_t;
typedef of_object_t of_bundle_prop_t;
typedef of_object_t of_bundle_prop_experimenter_t;
typedef of_object_t of_flow_stats_entry_t;
typedef of_object_t of_group_desc_stats_entry_t;
typedef of_object_t of_group_stats_entry_t;
typedef of_object_t of_hello_elem_t;
typedef of_object_t of_hello_elem_versionbitmap_t;
typedef of_object_t of_instruction_t;
typedef of_object_t of_instruction_apply_actions_t;
typedef of_object_t of_instruction_bsn_t;
typedef of_object_t of_instruction_bsn_arp_offload_t;
typedef of_object_t of_instruction_bsn_auto_negotiation_t;
typedef of_object_t of_instruction_bsn_deny_t;
typedef of_object_t of_instruction_bsn_dhcp_offload_t;
typedef of_object_t of_instruction_bsn_disable_split_horizon_check_t;
typedef of_object_t of_instruction_bsn_disable_src_mac_check_t;
typedef of_object_t of_instruction_bsn_disable_vlan_counters_t;
typedef of_object_t of_instruction_bsn_packet_of_death_t;
typedef of_object_t of_instruction_bsn_permit_t;
typedef of_object_t of_instruction_bsn_prioritize_pdus_t;
typedef of_object_t of_instruction_bsn_require_vlan_xlate_t;
typedef of_object_t of_instruction_bsn_span_destination_t;
typedef of_object_t of_instruction_clear_actions_t;
typedef of_object_t of_instruction_experimenter_t;
typedef of_object_t of_instruction_goto_table_t;
typedef of_object_t of_instruction_id_t;
typedef of_object_t of_instruction_id_apply_actions_t;
typedef of_object_t of_instruction_id_bsn_t;
typedef of_object_t of_instruction_id_bsn_arp_offload_t;
typedef of_object_t of_instruction_id_bsn_auto_negotiation_t;
typedef of_object_t of_instruction_id_bsn_deny_t;
typedef of_object_t of_instruction_id_bsn_dhcp_offload_t;
typedef of_object_t of_instruction_id_bsn_disable_split_horizon_check_t;
typedef of_object_t of_instruction_id_bsn_disable_src_mac_check_t;
typedef of_object_t of_instruction_id_bsn_disable_vlan_counters_t;
typedef of_object_t of_instruction_id_bsn_packet_of_death_t;
typedef of_object_t of_instruction_id_bsn_permit_t;
typedef of_object_t of_instruction_id_bsn_prioritize_pdus_t;
typedef of_object_t of_instruction_id_bsn_require_vlan_xlate_t;
typedef of_object_t of_instruction_id_bsn_span_destination_t;
typedef of_object_t of_instruction_id_clear_actions_t;
typedef of_object_t of_instruction_id_experimenter_t;
typedef of_object_t of_instruction_id_goto_table_t;
typedef of_object_t of_instruction_id_meter_t;
typedef of_object_t of_instruction_id_write_actions_t;
typedef of_object_t of_instruction_id_write_metadata_t;
typedef of_object_t of_instruction_meter_t;
typedef of_object_t of_instruction_write_actions_t;
typedef of_object_t of_instruction_write_metadata_t;
typedef of_object_t of_match_v1_t;
typedef of_object_t of_match_v2_t;
typedef of_object_t of_match_v3_t;
typedef of_object_t of_meter_band_t;
typedef of_object_t of_meter_band_drop_t;
typedef of_object_t of_meter_band_dscp_remark_t;
typedef of_object_t of_meter_band_experimenter_t;
typedef of_object_t of_meter_band_stats_t;
typedef of_object_t of_meter_config_t;
typedef of_object_t of_meter_features_t;
typedef of_object_t of_meter_stats_t;
typedef of_object_t of_oxm_t;
typedef of_object_t of_oxm_arp_op_t;
typedef of_object_t of_oxm_arp_op_masked_t;
typedef of_object_t of_oxm_arp_sha_t;
typedef of_object_t of_oxm_arp_sha_masked_t;
typedef of_object_t of_oxm_arp_spa_t;
typedef of_object_t of_oxm_arp_spa_masked_t;
typedef of_object_t of_oxm_arp_tha_t;
typedef of_object_t of_oxm_arp_tha_masked_t;
typedef of_object_t of_oxm_arp_tpa_t;
typedef of_object_t of_oxm_arp_tpa_masked_t;
typedef of_object_t of_oxm_bsn_egr_port_group_id_t;
typedef of_object_t of_oxm_bsn_egr_port_group_id_masked_t;
typedef of_object_t of_oxm_bsn_global_vrf_allowed_t;
typedef of_object_t of_oxm_bsn_global_vrf_allowed_masked_t;
typedef of_object_t of_oxm_bsn_in_ports_128_t;
typedef of_object_t of_oxm_bsn_in_ports_128_masked_t;
typedef of_object_t of_oxm_bsn_in_ports_512_t;
typedef of_object_t of_oxm_bsn_in_ports_512_masked_t;
typedef of_object_t of_oxm_bsn_ingress_port_group_id_t;
typedef of_object_t of_oxm_bsn_ingress_port_group_id_masked_t;
typedef of_object_t of_oxm_bsn_l2_cache_hit_t;
typedef of_object_t of_oxm_bsn_l2_cache_hit_masked_t;
typedef of_object_t of_oxm_bsn_l3_dst_class_id_t;
typedef of_object_t of_oxm_bsn_l3_dst_class_id_masked_t;
typedef of_object_t of_oxm_bsn_l3_interface_class_id_t;
typedef of_object_t of_oxm_bsn_l3_interface_class_id_masked_t;
typedef of_object_t of_oxm_bsn_l3_src_class_id_t;
typedef of_object_t of_oxm_bsn_l3_src_class_id_masked_t;
typedef of_object_t of_oxm_bsn_lag_id_t;
typedef of_object_t of_oxm_bsn_lag_id_masked_t;
typedef of_object_t of_oxm_bsn_tcp_flags_t;
typedef of_object_t of_oxm_bsn_tcp_flags_masked_t;
typedef of_object_t of_oxm_bsn_udf0_t;
typedef of_object_t of_oxm_bsn_udf0_masked_t;
typedef of_object_t of_oxm_bsn_udf1_t;
typedef of_object_t of_oxm_bsn_udf1_masked_t;
typedef of_object_t of_oxm_bsn_udf2_t;
typedef of_object_t of_oxm_bsn_udf2_masked_t;
typedef of_object_t of_oxm_bsn_udf3_t;
typedef of_object_t of_oxm_bsn_udf3_masked_t;
typedef of_object_t of_oxm_bsn_udf4_t;
typedef of_object_t of_oxm_bsn_udf4_masked_t;
typedef of_object_t of_oxm_bsn_udf5_t;
typedef of_object_t of_oxm_bsn_udf5_masked_t;
typedef of_object_t of_oxm_bsn_udf6_t;
typedef of_object_t of_oxm_bsn_udf6_masked_t;
typedef of_object_t of_oxm_bsn_udf7_t;
typedef of_object_t of_oxm_bsn_udf7_masked_t;
typedef of_object_t of_oxm_bsn_vlan_xlate_port_group_id_t;
typedef of_object_t of_oxm_bsn_vlan_xlate_port_group_id_masked_t;
typedef of_object_t of_oxm_bsn_vrf_t;
typedef of_object_t of_oxm_bsn_vrf_masked_t;
typedef of_object_t of_oxm_eth_dst_t;
typedef of_object_t of_oxm_eth_dst_masked_t;
typedef of_object_t of_oxm_eth_src_t;
typedef of_object_t of_oxm_eth_src_masked_t;
typedef of_object_t of_oxm_eth_type_t;
typedef of_object_t of_oxm_eth_type_masked_t;
typedef of_object_t of_oxm_icmpv4_code_t;
typedef of_object_t of_oxm_icmpv4_code_masked_t;
typedef of_object_t of_oxm_icmpv4_type_t;
typedef of_object_t of_oxm_icmpv4_type_masked_t;
typedef of_object_t of_oxm_icmpv6_code_t;
typedef of_object_t of_oxm_icmpv6_code_masked_t;
typedef of_object_t of_oxm_icmpv6_type_t;
typedef of_object_t of_oxm_icmpv6_type_masked_t;
typedef of_object_t of_oxm_in_phy_port_t;
typedef of_object_t of_oxm_in_phy_port_masked_t;
typedef of_object_t of_oxm_in_port_t;
typedef of_object_t of_oxm_in_port_masked_t;
typedef of_object_t of_oxm_ip_dscp_t;
typedef of_object_t of_oxm_ip_dscp_masked_t;
typedef of_object_t of_oxm_ip_ecn_t;
typedef of_object_t of_oxm_ip_ecn_masked_t;
typedef of_object_t of_oxm_ip_proto_t;
typedef of_object_t of_oxm_ip_proto_masked_t;
typedef of_object_t of_oxm_ipv4_dst_t;
typedef of_object_t of_oxm_ipv4_dst_masked_t;
typedef of_object_t of_oxm_ipv4_src_t;
typedef of_object_t of_oxm_ipv4_src_masked_t;
typedef of_object_t of_oxm_ipv6_dst_t;
typedef of_object_t of_oxm_ipv6_dst_masked_t;
typedef of_object_t of_oxm_ipv6_exthdr_t;
typedef of_object_t of_oxm_ipv6_exthdr_masked_t;
typedef of_object_t of_oxm_ipv6_flabel_t;
typedef of_object_t of_oxm_ipv6_flabel_masked_t;
typedef of_object_t of_oxm_ipv6_nd_sll_t;
typedef of_object_t of_oxm_ipv6_nd_sll_masked_t;
typedef of_object_t of_oxm_ipv6_nd_target_t;
typedef of_object_t of_oxm_ipv6_nd_target_masked_t;
typedef of_object_t of_oxm_ipv6_nd_tll_t;
typedef of_object_t of_oxm_ipv6_nd_tll_masked_t;
typedef of_object_t of_oxm_ipv6_src_t;
typedef of_object_t of_oxm_ipv6_src_masked_t;
typedef of_object_t of_oxm_metadata_t;
typedef of_object_t of_oxm_metadata_masked_t;
typedef of_object_t of_oxm_mpls_bos_t;
typedef of_object_t of_oxm_mpls_bos_masked_t;
typedef of_object_t of_oxm_mpls_label_t;
typedef of_object_t of_oxm_mpls_label_masked_t;
typedef of_object_t of_oxm_mpls_tc_t;
typedef of_object_t of_oxm_mpls_tc_masked_t;
typedef of_object_t of_oxm_pbb_uca_t;
typedef of_object_t of_oxm_pbb_uca_masked_t;
typedef of_object_t of_oxm_sctp_dst_t;
typedef of_object_t of_oxm_sctp_dst_masked_t;
typedef of_object_t of_oxm_sctp_src_t;
typedef of_object_t of_oxm_sctp_src_masked_t;
typedef of_object_t of_oxm_tcp_dst_t;
typedef of_object_t of_oxm_tcp_dst_masked_t;
typedef of_object_t of_oxm_tcp_src_t;
typedef of_object_t of_oxm_tcp_src_masked_t;
typedef of_object_t of_oxm_tunnel_id_t;
typedef of_object_t of_oxm_tunnel_id_masked_t;
typedef of_object_t of_oxm_tunnel_ipv4_dst_t;
typedef of_object_t of_oxm_tunnel_ipv4_dst_masked_t;
typedef of_object_t of_oxm_tunnel_ipv4_src_t;
typedef of_object_t of_oxm_tunnel_ipv4_src_masked_t;
typedef of_object_t of_oxm_udp_dst_t;
typedef of_object_t of_oxm_udp_dst_masked_t;
typedef of_object_t of_oxm_udp_src_t;
typedef of_object_t of_oxm_udp_src_masked_t;
typedef of_object_t of_oxm_vlan_pcp_t;
typedef of_object_t of_oxm_vlan_pcp_masked_t;
typedef of_object_t of_oxm_vlan_vid_t;
typedef of_object_t of_oxm_vlan_vid_masked_t;
typedef of_object_t of_packet_queue_t;
typedef of_object_t of_port_desc_t;
typedef of_object_t of_port_desc_prop_t;
typedef of_object_t of_port_desc_prop_bsn_t;
typedef of_object_t of_port_desc_prop_bsn_uplink_t;
typedef of_object_t of_port_desc_prop_ethernet_t;
typedef of_object_t of_port_desc_prop_experimenter_t;
typedef of_object_t of_port_desc_prop_optical_t;
typedef of_object_t of_port_mod_prop_t;
typedef of_object_t of_port_mod_prop_ethernet_t;
typedef of_object_t of_port_mod_prop_experimenter_t;
typedef of_object_t of_port_mod_prop_optical_t;
typedef of_object_t of_port_stats_entry_t;
typedef of_object_t of_port_stats_prop_t;
typedef of_object_t of_port_stats_prop_ethernet_t;
typedef of_object_t of_port_stats_prop_experimenter_t;
typedef of_object_t of_port_stats_prop_optical_t;
typedef of_object_t of_queue_desc_t;
typedef of_object_t of_queue_desc_prop_t;
typedef of_object_t of_queue_desc_prop_experimenter_t;
typedef of_object_t of_queue_desc_prop_max_rate_t;
typedef of_object_t of_queue_desc_prop_min_rate_t;
typedef of_object_t of_queue_prop_t;
typedef of_object_t of_queue_prop_experimenter_t;
typedef of_object_t of_queue_prop_max_rate_t;
typedef of_object_t of_queue_prop_min_rate_t;
typedef of_object_t of_queue_stats_entry_t;
typedef of_object_t of_queue_stats_prop_t;
typedef of_object_t of_queue_stats_prop_experimenter_t;
typedef of_object_t of_role_prop_t;
typedef of_object_t of_role_prop_experimenter_t;
typedef of_object_t of_table_desc_t;
typedef of_object_t of_table_feature_prop_t;
typedef of_object_t of_table_feature_prop_apply_actions_t;
typedef of_object_t of_table_feature_prop_apply_actions_miss_t;
typedef of_object_t of_table_feature_prop_apply_setfield_t;
typedef of_object_t of_table_feature_prop_apply_setfield_miss_t;
typedef of_object_t of_table_feature_prop_experimenter_t;
typedef of_object_t of_table_feature_prop_experimenter_miss_t;
typedef of_object_t of_table_feature_prop_instructions_t;
typedef of_object_t of_table_feature_prop_instructions_miss_t;
typedef of_object_t of_table_feature_prop_match_t;
typedef of_object_t of_table_feature_prop_next_tables_t;
typedef of_object_t of_table_feature_prop_next_tables_miss_t;
typedef of_object_t of_table_feature_prop_table_sync_from_t;
typedef of_object_t of_table_feature_prop_wildcards_t;
typedef of_object_t of_table_feature_prop_write_actions_t;
typedef of_object_t of_table_feature_prop_write_actions_miss_t;
typedef of_object_t of_table_feature_prop_write_setfield_t;
typedef of_object_t of_table_feature_prop_write_setfield_miss_t;
typedef of_object_t of_table_features_t;
typedef of_object_t of_table_mod_prop_t;
typedef of_object_t of_table_mod_prop_eviction_t;
typedef of_object_t of_table_mod_prop_experimenter_t;
typedef of_object_t of_table_mod_prop_vacancy_t;
typedef of_object_t of_table_stats_entry_t;
typedef of_object_t of_uint32_t;
typedef of_object_t of_uint64_t;
typedef of_object_t of_uint8_t;
typedef of_object_t of_list_action_t;
typedef of_object_t of_list_action_id_t;
typedef of_object_t of_list_async_config_prop_t;
typedef of_object_t of_list_bsn_controller_connection_t;
typedef of_object_t of_list_bsn_debug_counter_desc_stats_entry_t;
typedef of_object_t of_list_bsn_debug_counter_stats_entry_t;
typedef of_object_t of_list_bsn_flow_checksum_bucket_stats_entry_t;
typedef of_object_t of_list_bsn_generic_stats_entry_t;
typedef of_object_t of_list_bsn_gentable_bucket_stats_entry_t;
typedef of_object_t of_list_bsn_gentable_desc_stats_entry_t;
typedef of_object_t of_list_bsn_gentable_entry_desc_stats_entry_t;
typedef of_object_t of_list_bsn_gentable_entry_stats_entry_t;
typedef of_object_t of_list_bsn_gentable_stats_entry_t;
typedef of_object_t of_list_bsn_interface_t;
typedef of_object_t of_list_bsn_lacp_stats_entry_t;
typedef of_object_t of_list_bsn_port_counter_stats_entry_t;
typedef of_object_t of_list_bsn_switch_pipeline_stats_entry_t;
typedef of_object_t of_list_bsn_table_checksum_stats_entry_t;
typedef of_object_t of_list_bsn_tlv_t;
typedef of_object_t of_list_bsn_vlan_counter_stats_entry_t;
typedef of_object_t of_list_bsn_vrf_counter_stats_entry_t;
typedef of_object_t of_list_bucket_t;
typedef of_object_t of_list_bucket_counter_t;
typedef of_object_t of_list_bundle_prop_t;
typedef of_object_t of_list_flow_stats_entry_t;
typedef of_object_t of_list_group_desc_stats_entry_t;
typedef of_object_t of_list_group_stats_entry_t;
typedef of_object_t of_list_hello_elem_t;
typedef of_object_t of_list_instruction_t;
typedef of_object_t of_list_instruction_id_t;
typedef of_object_t of_list_meter_band_t;
typedef of_object_t of_list_meter_band_stats_t;
typedef of_object_t of_list_meter_stats_t;
typedef of_object_t of_list_oxm_t;
typedef of_object_t of_list_packet_queue_t;
typedef of_object_t of_list_port_desc_t;
typedef of_object_t of_list_port_desc_prop_t;
typedef of_object_t of_list_port_mod_prop_t;
typedef of_object_t of_list_port_stats_entry_t;
typedef of_object_t of_list_port_stats_prop_t;
typedef of_object_t of_list_queue_desc_t;
typedef of_object_t of_list_queue_desc_prop_t;
typedef of_object_t of_list_queue_prop_t;
typedef of_object_t of_list_queue_stats_entry_t;
typedef of_object_t of_list_queue_stats_prop_t;
typedef of_object_t of_list_role_prop_t;
typedef of_object_t of_list_table_desc_t;
typedef of_object_t of_list_table_feature_prop_t;
typedef of_object_t of_list_table_features_t;
typedef of_object_t of_list_table_mod_prop_t;
typedef of_object_t of_list_table_stats_entry_t;
typedef of_object_t of_list_uint32_t;
typedef of_object_t of_list_uint64_t;
typedef of_object_t of_list_uint8_t;

/****************************************************************
 *
 * Additional of_object defines
 * These are needed for some static inline ops, so we put them here.
 *
 ****************************************************************/

/* Delete an OpenFlow object without reference to its type */
extern void of_object_delete(of_object_t *obj);


/****************************************************************
 *
 * New operator declarations
 *
 * _new: Create a new object for writing; includes init
 * _init: Initialize and optionally allocate buffer space for an
 *    automatic instance
 *
 * _new and requires a delete operation to be called on the object.
 *
 ****************************************************************/

extern of_object_t *
    of_aggregate_stats_reply_new(of_version_t version);
extern void of_aggregate_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_aggregate_stats_request_new(of_version_t version);
extern void of_aggregate_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_failed_error_msg_new(of_version_t version);
extern void of_async_config_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_get_reply_new(of_version_t version);
extern void of_async_get_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_get_request_new(of_version_t version);
extern void of_async_get_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_set_new(of_version_t version);
extern void of_async_set_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bad_action_error_msg_new(of_version_t version);
extern void of_bad_action_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bad_instruction_error_msg_new(of_version_t version);
extern void of_bad_instruction_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bad_match_error_msg_new(of_version_t version);
extern void of_bad_match_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bad_property_error_msg_new(of_version_t version);
extern void of_bad_property_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bad_request_error_msg_new(of_version_t version);
extern void of_bad_request_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_barrier_reply_new(of_version_t version);
extern void of_barrier_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_barrier_request_new(of_version_t version);
extern void of_barrier_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_arp_idle_new(of_version_t version);
extern void of_bsn_arp_idle_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_bw_clear_data_reply_new(of_version_t version);
extern void of_bsn_bw_clear_data_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_bw_clear_data_request_new(of_version_t version);
extern void of_bsn_bw_clear_data_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_bw_enable_get_reply_new(of_version_t version);
extern void of_bsn_bw_enable_get_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_bw_enable_get_request_new(of_version_t version);
extern void of_bsn_bw_enable_get_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_bw_enable_set_reply_new(of_version_t version);
extern void of_bsn_bw_enable_set_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_bw_enable_set_request_new(of_version_t version);
extern void of_bsn_bw_enable_set_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_controller_connections_reply_new(of_version_t version);
extern void of_bsn_controller_connections_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_controller_connections_request_new(of_version_t version);
extern void of_bsn_controller_connections_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_debug_counter_desc_stats_reply_new(of_version_t version);
extern void of_bsn_debug_counter_desc_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_debug_counter_desc_stats_request_new(of_version_t version);
extern void of_bsn_debug_counter_desc_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_debug_counter_stats_reply_new(of_version_t version);
extern void of_bsn_debug_counter_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_debug_counter_stats_request_new(of_version_t version);
extern void of_bsn_debug_counter_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_flow_checksum_bucket_stats_reply_new(of_version_t version);
extern void of_bsn_flow_checksum_bucket_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_flow_checksum_bucket_stats_request_new(of_version_t version);
extern void of_bsn_flow_checksum_bucket_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_flow_idle_new(of_version_t version);
extern void of_bsn_flow_idle_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_flow_idle_enable_get_reply_new(of_version_t version);
extern void of_bsn_flow_idle_enable_get_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_flow_idle_enable_get_request_new(of_version_t version);
extern void of_bsn_flow_idle_enable_get_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_flow_idle_enable_set_reply_new(of_version_t version);
extern void of_bsn_flow_idle_enable_set_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_flow_idle_enable_set_request_new(of_version_t version);
extern void of_bsn_flow_idle_enable_set_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_generic_stats_reply_new(of_version_t version);
extern void of_bsn_generic_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_generic_stats_request_new(of_version_t version);
extern void of_bsn_generic_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_bucket_stats_reply_new(of_version_t version);
extern void of_bsn_gentable_bucket_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_bucket_stats_request_new(of_version_t version);
extern void of_bsn_gentable_bucket_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_clear_reply_new(of_version_t version);
extern void of_bsn_gentable_clear_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_clear_request_new(of_version_t version);
extern void of_bsn_gentable_clear_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_desc_stats_reply_new(of_version_t version);
extern void of_bsn_gentable_desc_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_desc_stats_request_new(of_version_t version);
extern void of_bsn_gentable_desc_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_entry_add_new(of_version_t version);
extern void of_bsn_gentable_entry_add_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_entry_delete_new(of_version_t version);
extern void of_bsn_gentable_entry_delete_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_entry_desc_stats_reply_new(of_version_t version);
extern void of_bsn_gentable_entry_desc_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_entry_desc_stats_request_new(of_version_t version);
extern void of_bsn_gentable_entry_desc_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_entry_stats_reply_new(of_version_t version);
extern void of_bsn_gentable_entry_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_entry_stats_request_new(of_version_t version);
extern void of_bsn_gentable_entry_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_set_buckets_size_new(of_version_t version);
extern void of_bsn_gentable_set_buckets_size_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_stats_reply_new(of_version_t version);
extern void of_bsn_gentable_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_stats_request_new(of_version_t version);
extern void of_bsn_gentable_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_get_interfaces_reply_new(of_version_t version);
extern void of_bsn_get_interfaces_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_get_interfaces_request_new(of_version_t version);
extern void of_bsn_get_interfaces_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_get_ip_mask_reply_new(of_version_t version);
extern void of_bsn_get_ip_mask_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_get_ip_mask_request_new(of_version_t version);
extern void of_bsn_get_ip_mask_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_get_l2_table_reply_new(of_version_t version);
extern void of_bsn_get_l2_table_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_get_l2_table_request_new(of_version_t version);
extern void of_bsn_get_l2_table_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_get_mirroring_reply_new(of_version_t version);
extern void of_bsn_get_mirroring_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_get_mirroring_request_new(of_version_t version);
extern void of_bsn_get_mirroring_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_get_switch_pipeline_reply_new(of_version_t version);
extern void of_bsn_get_switch_pipeline_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_get_switch_pipeline_request_new(of_version_t version);
extern void of_bsn_get_switch_pipeline_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_header_new(of_version_t version);
extern void of_bsn_header_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_hybrid_get_reply_new(of_version_t version);
extern void of_bsn_hybrid_get_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_hybrid_get_request_new(of_version_t version);
extern void of_bsn_hybrid_get_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_image_desc_stats_reply_new(of_version_t version);
extern void of_bsn_image_desc_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_image_desc_stats_request_new(of_version_t version);
extern void of_bsn_image_desc_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_lacp_convergence_notif_new(of_version_t version);
extern void of_bsn_lacp_convergence_notif_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_lacp_stats_reply_new(of_version_t version);
extern void of_bsn_lacp_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_lacp_stats_request_new(of_version_t version);
extern void of_bsn_lacp_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_log_new(of_version_t version);
extern void of_bsn_log_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_lua_command_reply_new(of_version_t version);
extern void of_bsn_lua_command_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_lua_command_request_new(of_version_t version);
extern void of_bsn_lua_command_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_lua_notification_new(of_version_t version);
extern void of_bsn_lua_notification_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_lua_upload_new(of_version_t version);
extern void of_bsn_lua_upload_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_pdu_rx_reply_new(of_version_t version);
extern void of_bsn_pdu_rx_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_pdu_rx_request_new(of_version_t version);
extern void of_bsn_pdu_rx_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_pdu_rx_timeout_new(of_version_t version);
extern void of_bsn_pdu_rx_timeout_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_pdu_tx_reply_new(of_version_t version);
extern void of_bsn_pdu_tx_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_pdu_tx_request_new(of_version_t version);
extern void of_bsn_pdu_tx_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_port_counter_stats_reply_new(of_version_t version);
extern void of_bsn_port_counter_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_port_counter_stats_request_new(of_version_t version);
extern void of_bsn_port_counter_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_role_status_new(of_version_t version);
extern void of_bsn_role_status_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_set_aux_cxns_reply_new(of_version_t version);
extern void of_bsn_set_aux_cxns_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_set_aux_cxns_request_new(of_version_t version);
extern void of_bsn_set_aux_cxns_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_set_ip_mask_new(of_version_t version);
extern void of_bsn_set_ip_mask_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_set_l2_table_reply_new(of_version_t version);
extern void of_bsn_set_l2_table_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_set_l2_table_request_new(of_version_t version);
extern void of_bsn_set_l2_table_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_set_lacp_reply_new(of_version_t version);
extern void of_bsn_set_lacp_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_set_lacp_request_new(of_version_t version);
extern void of_bsn_set_lacp_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_set_mirroring_new(of_version_t version);
extern void of_bsn_set_mirroring_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_set_pktin_suppression_reply_new(of_version_t version);
extern void of_bsn_set_pktin_suppression_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_set_pktin_suppression_request_new(of_version_t version);
extern void of_bsn_set_pktin_suppression_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_set_switch_pipeline_reply_new(of_version_t version);
extern void of_bsn_set_switch_pipeline_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_set_switch_pipeline_request_new(of_version_t version);
extern void of_bsn_set_switch_pipeline_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_shell_command_new(of_version_t version);
extern void of_bsn_shell_command_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_shell_output_new(of_version_t version);
extern void of_bsn_shell_output_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_shell_status_new(of_version_t version);
extern void of_bsn_shell_status_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_stats_reply_new(of_version_t version);
extern void of_bsn_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_stats_request_new(of_version_t version);
extern void of_bsn_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_switch_pipeline_stats_reply_new(of_version_t version);
extern void of_bsn_switch_pipeline_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_switch_pipeline_stats_request_new(of_version_t version);
extern void of_bsn_switch_pipeline_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_table_checksum_stats_reply_new(of_version_t version);
extern void of_bsn_table_checksum_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_table_checksum_stats_request_new(of_version_t version);
extern void of_bsn_table_checksum_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_table_set_buckets_size_new(of_version_t version);
extern void of_bsn_table_set_buckets_size_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_time_reply_new(of_version_t version);
extern void of_bsn_time_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_time_request_new(of_version_t version);
extern void of_bsn_time_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_virtual_port_create_reply_new(of_version_t version);
extern void of_bsn_virtual_port_create_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_virtual_port_create_request_new(of_version_t version);
extern void of_bsn_virtual_port_create_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_virtual_port_remove_reply_new(of_version_t version);
extern void of_bsn_virtual_port_remove_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_virtual_port_remove_request_new(of_version_t version);
extern void of_bsn_virtual_port_remove_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_vlan_counter_stats_reply_new(of_version_t version);
extern void of_bsn_vlan_counter_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_vlan_counter_stats_request_new(of_version_t version);
extern void of_bsn_vlan_counter_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_vrf_counter_stats_reply_new(of_version_t version);
extern void of_bsn_vrf_counter_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_vrf_counter_stats_request_new(of_version_t version);
extern void of_bsn_vrf_counter_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bundle_add_msg_new(of_version_t version);
extern void of_bundle_add_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bundle_ctrl_msg_new(of_version_t version);
extern void of_bundle_ctrl_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bundle_failed_error_msg_new(of_version_t version);
extern void of_bundle_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_desc_stats_reply_new(of_version_t version);
extern void of_desc_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_desc_stats_request_new(of_version_t version);
extern void of_desc_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_echo_reply_new(of_version_t version);
extern void of_echo_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_echo_request_new(of_version_t version);
extern void of_echo_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_error_msg_new(of_version_t version);
extern void of_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_experimenter_new(of_version_t version);
extern void of_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_experimenter_error_msg_new(of_version_t version);
extern void of_experimenter_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_experimenter_stats_reply_new(of_version_t version);
extern void of_experimenter_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_experimenter_stats_request_new(of_version_t version);
extern void of_experimenter_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_features_reply_new(of_version_t version);
extern void of_features_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_features_request_new(of_version_t version);
extern void of_features_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_flow_add_new(of_version_t version);
extern void of_flow_add_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_flow_delete_new(of_version_t version);
extern void of_flow_delete_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_flow_delete_strict_new(of_version_t version);
extern void of_flow_delete_strict_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_flow_mod_new(of_version_t version);
extern void of_flow_mod_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_flow_mod_failed_error_msg_new(of_version_t version);
extern void of_flow_mod_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_flow_modify_new(of_version_t version);
extern void of_flow_modify_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_flow_modify_strict_new(of_version_t version);
extern void of_flow_modify_strict_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_flow_monitor_failed_error_msg_new(of_version_t version);
extern void of_flow_monitor_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_flow_removed_new(of_version_t version);
extern void of_flow_removed_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_flow_stats_reply_new(of_version_t version);
extern void of_flow_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_flow_stats_request_new(of_version_t version);
extern void of_flow_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_get_config_reply_new(of_version_t version);
extern void of_get_config_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_get_config_request_new(of_version_t version);
extern void of_get_config_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_add_new(of_version_t version);
extern void of_group_add_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_delete_new(of_version_t version);
extern void of_group_delete_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_desc_stats_reply_new(of_version_t version);
extern void of_group_desc_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_desc_stats_request_new(of_version_t version);
extern void of_group_desc_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_features_stats_reply_new(of_version_t version);
extern void of_group_features_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_features_stats_request_new(of_version_t version);
extern void of_group_features_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_mod_new(of_version_t version);
extern void of_group_mod_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_mod_failed_error_msg_new(of_version_t version);
extern void of_group_mod_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_modify_new(of_version_t version);
extern void of_group_modify_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_stats_reply_new(of_version_t version);
extern void of_group_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_stats_request_new(of_version_t version);
extern void of_group_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_header_new(of_version_t version);
extern void of_header_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_hello_new(of_version_t version);
extern void of_hello_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_hello_failed_error_msg_new(of_version_t version);
extern void of_hello_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_config_stats_reply_new(of_version_t version);
extern void of_meter_config_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_config_stats_request_new(of_version_t version);
extern void of_meter_config_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_features_stats_reply_new(of_version_t version);
extern void of_meter_features_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_features_stats_request_new(of_version_t version);
extern void of_meter_features_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_mod_new(of_version_t version);
extern void of_meter_mod_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_mod_failed_error_msg_new(of_version_t version);
extern void of_meter_mod_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_stats_reply_new(of_version_t version);
extern void of_meter_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_stats_request_new(of_version_t version);
extern void of_meter_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_nicira_controller_role_reply_new(of_version_t version);
extern void of_nicira_controller_role_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_nicira_controller_role_request_new(of_version_t version);
extern void of_nicira_controller_role_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_nicira_header_new(of_version_t version);
extern void of_nicira_header_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_packet_in_new(of_version_t version);
extern void of_packet_in_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_packet_out_new(of_version_t version);
extern void of_packet_out_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_desc_stats_reply_new(of_version_t version);
extern void of_port_desc_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_desc_stats_request_new(of_version_t version);
extern void of_port_desc_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_mod_new(of_version_t version);
extern void of_port_mod_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_mod_failed_error_msg_new(of_version_t version);
extern void of_port_mod_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_stats_reply_new(of_version_t version);
extern void of_port_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_stats_request_new(of_version_t version);
extern void of_port_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_status_new(of_version_t version);
extern void of_port_status_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_desc_stats_reply_new(of_version_t version);
extern void of_queue_desc_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_desc_stats_request_new(of_version_t version);
extern void of_queue_desc_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_get_config_reply_new(of_version_t version);
extern void of_queue_get_config_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_get_config_request_new(of_version_t version);
extern void of_queue_get_config_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_op_failed_error_msg_new(of_version_t version);
extern void of_queue_op_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_stats_reply_new(of_version_t version);
extern void of_queue_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_stats_request_new(of_version_t version);
extern void of_queue_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_requestforward_new(of_version_t version);
extern void of_requestforward_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_role_reply_new(of_version_t version);
extern void of_role_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_role_request_new(of_version_t version);
extern void of_role_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_role_request_failed_error_msg_new(of_version_t version);
extern void of_role_request_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_role_status_new(of_version_t version);
extern void of_role_status_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_set_config_new(of_version_t version);
extern void of_set_config_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_stats_reply_new(of_version_t version);
extern void of_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_stats_request_new(of_version_t version);
extern void of_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_switch_config_failed_error_msg_new(of_version_t version);
extern void of_switch_config_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_desc_stats_reply_new(of_version_t version);
extern void of_table_desc_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_desc_stats_request_new(of_version_t version);
extern void of_table_desc_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_features_failed_error_msg_new(of_version_t version);
extern void of_table_features_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_features_stats_reply_new(of_version_t version);
extern void of_table_features_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_features_stats_request_new(of_version_t version);
extern void of_table_features_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_mod_new(of_version_t version);
extern void of_table_mod_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_mod_failed_error_msg_new(of_version_t version);
extern void of_table_mod_failed_error_msg_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_stats_reply_new(of_version_t version);
extern void of_table_stats_reply_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_stats_request_new(of_version_t version);
extern void of_table_stats_request_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_status_new(of_version_t version);
extern void of_table_status_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_new(of_version_t version);
extern void of_action_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_bsn_new(of_version_t version);
extern void of_action_bsn_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_bsn_checksum_new(of_version_t version);
extern void of_action_bsn_checksum_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_bsn_gentable_new(of_version_t version);
extern void of_action_bsn_gentable_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_bsn_mirror_new(of_version_t version);
extern void of_action_bsn_mirror_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_bsn_set_tunnel_dst_new(of_version_t version);
extern void of_action_bsn_set_tunnel_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_copy_ttl_in_new(of_version_t version);
extern void of_action_copy_ttl_in_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_copy_ttl_out_new(of_version_t version);
extern void of_action_copy_ttl_out_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_dec_mpls_ttl_new(of_version_t version);
extern void of_action_dec_mpls_ttl_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_dec_nw_ttl_new(of_version_t version);
extern void of_action_dec_nw_ttl_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_enqueue_new(of_version_t version);
extern void of_action_enqueue_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_experimenter_new(of_version_t version);
extern void of_action_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_group_new(of_version_t version);
extern void of_action_group_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_new(of_version_t version);
extern void of_action_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_bsn_new(of_version_t version);
extern void of_action_id_bsn_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_bsn_checksum_new(of_version_t version);
extern void of_action_id_bsn_checksum_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_bsn_gentable_new(of_version_t version);
extern void of_action_id_bsn_gentable_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_bsn_mirror_new(of_version_t version);
extern void of_action_id_bsn_mirror_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_bsn_set_tunnel_dst_new(of_version_t version);
extern void of_action_id_bsn_set_tunnel_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_copy_ttl_in_new(of_version_t version);
extern void of_action_id_copy_ttl_in_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_copy_ttl_out_new(of_version_t version);
extern void of_action_id_copy_ttl_out_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_dec_mpls_ttl_new(of_version_t version);
extern void of_action_id_dec_mpls_ttl_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_dec_nw_ttl_new(of_version_t version);
extern void of_action_id_dec_nw_ttl_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_experimenter_new(of_version_t version);
extern void of_action_id_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_group_new(of_version_t version);
extern void of_action_id_group_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_nicira_new(of_version_t version);
extern void of_action_id_nicira_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_nicira_dec_ttl_new(of_version_t version);
extern void of_action_id_nicira_dec_ttl_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_output_new(of_version_t version);
extern void of_action_id_output_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_pop_mpls_new(of_version_t version);
extern void of_action_id_pop_mpls_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_pop_pbb_new(of_version_t version);
extern void of_action_id_pop_pbb_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_pop_vlan_new(of_version_t version);
extern void of_action_id_pop_vlan_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_push_mpls_new(of_version_t version);
extern void of_action_id_push_mpls_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_push_pbb_new(of_version_t version);
extern void of_action_id_push_pbb_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_push_vlan_new(of_version_t version);
extern void of_action_id_push_vlan_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_set_field_new(of_version_t version);
extern void of_action_id_set_field_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_set_mpls_ttl_new(of_version_t version);
extern void of_action_id_set_mpls_ttl_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_set_nw_ttl_new(of_version_t version);
extern void of_action_id_set_nw_ttl_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_id_set_queue_new(of_version_t version);
extern void of_action_id_set_queue_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_nicira_new(of_version_t version);
extern void of_action_nicira_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_nicira_dec_ttl_new(of_version_t version);
extern void of_action_nicira_dec_ttl_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_output_new(of_version_t version);
extern void of_action_output_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_pop_mpls_new(of_version_t version);
extern void of_action_pop_mpls_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_pop_pbb_new(of_version_t version);
extern void of_action_pop_pbb_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_pop_vlan_new(of_version_t version);
extern void of_action_pop_vlan_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_push_mpls_new(of_version_t version);
extern void of_action_push_mpls_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_push_pbb_new(of_version_t version);
extern void of_action_push_pbb_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_push_vlan_new(of_version_t version);
extern void of_action_push_vlan_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_dl_dst_new(of_version_t version);
extern void of_action_set_dl_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_dl_src_new(of_version_t version);
extern void of_action_set_dl_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_field_new(of_version_t version);
extern void of_action_set_field_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_mpls_label_new(of_version_t version);
extern void of_action_set_mpls_label_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_mpls_tc_new(of_version_t version);
extern void of_action_set_mpls_tc_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_mpls_ttl_new(of_version_t version);
extern void of_action_set_mpls_ttl_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_nw_dst_new(of_version_t version);
extern void of_action_set_nw_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_nw_ecn_new(of_version_t version);
extern void of_action_set_nw_ecn_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_nw_src_new(of_version_t version);
extern void of_action_set_nw_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_nw_tos_new(of_version_t version);
extern void of_action_set_nw_tos_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_nw_ttl_new(of_version_t version);
extern void of_action_set_nw_ttl_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_queue_new(of_version_t version);
extern void of_action_set_queue_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_tp_dst_new(of_version_t version);
extern void of_action_set_tp_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_tp_src_new(of_version_t version);
extern void of_action_set_tp_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_vlan_pcp_new(of_version_t version);
extern void of_action_set_vlan_pcp_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_set_vlan_vid_new(of_version_t version);
extern void of_action_set_vlan_vid_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_action_strip_vlan_new(of_version_t version);
extern void of_action_strip_vlan_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_new(of_version_t version);
extern void of_async_config_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_experimenter_master_new(of_version_t version);
extern void of_async_config_prop_experimenter_master_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_experimenter_slave_new(of_version_t version);
extern void of_async_config_prop_experimenter_slave_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_flow_removed_master_new(of_version_t version);
extern void of_async_config_prop_flow_removed_master_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_flow_removed_slave_new(of_version_t version);
extern void of_async_config_prop_flow_removed_slave_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_packet_in_master_new(of_version_t version);
extern void of_async_config_prop_packet_in_master_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_packet_in_slave_new(of_version_t version);
extern void of_async_config_prop_packet_in_slave_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_port_status_master_new(of_version_t version);
extern void of_async_config_prop_port_status_master_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_port_status_slave_new(of_version_t version);
extern void of_async_config_prop_port_status_slave_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_requestforward_master_new(of_version_t version);
extern void of_async_config_prop_requestforward_master_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_requestforward_slave_new(of_version_t version);
extern void of_async_config_prop_requestforward_slave_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_role_status_master_new(of_version_t version);
extern void of_async_config_prop_role_status_master_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_role_status_slave_new(of_version_t version);
extern void of_async_config_prop_role_status_slave_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_table_status_master_new(of_version_t version);
extern void of_async_config_prop_table_status_master_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_async_config_prop_table_status_slave_new(of_version_t version);
extern void of_async_config_prop_table_status_slave_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_controller_connection_new(of_version_t version);
extern void of_bsn_controller_connection_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_debug_counter_desc_stats_entry_new(of_version_t version);
extern void of_bsn_debug_counter_desc_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_debug_counter_stats_entry_new(of_version_t version);
extern void of_bsn_debug_counter_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_flow_checksum_bucket_stats_entry_new(of_version_t version);
extern void of_bsn_flow_checksum_bucket_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_generic_stats_entry_new(of_version_t version);
extern void of_bsn_generic_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_bucket_stats_entry_new(of_version_t version);
extern void of_bsn_gentable_bucket_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_desc_stats_entry_new(of_version_t version);
extern void of_bsn_gentable_desc_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_entry_desc_stats_entry_new(of_version_t version);
extern void of_bsn_gentable_entry_desc_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_entry_stats_entry_new(of_version_t version);
extern void of_bsn_gentable_entry_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_gentable_stats_entry_new(of_version_t version);
extern void of_bsn_gentable_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_interface_new(of_version_t version);
extern void of_bsn_interface_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_lacp_stats_entry_new(of_version_t version);
extern void of_bsn_lacp_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_port_counter_stats_entry_new(of_version_t version);
extern void of_bsn_port_counter_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_switch_pipeline_stats_entry_new(of_version_t version);
extern void of_bsn_switch_pipeline_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_table_checksum_stats_entry_new(of_version_t version);
extern void of_bsn_table_checksum_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_new(of_version_t version);
extern void of_bsn_tlv_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_actor_key_new(of_version_t version);
extern void of_bsn_tlv_actor_key_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_actor_port_num_new(of_version_t version);
extern void of_bsn_tlv_actor_port_num_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_actor_port_priority_new(of_version_t version);
extern void of_bsn_tlv_actor_port_priority_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_actor_state_new(of_version_t version);
extern void of_bsn_tlv_actor_state_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_actor_system_mac_new(of_version_t version);
extern void of_bsn_tlv_actor_system_mac_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_actor_system_priority_new(of_version_t version);
extern void of_bsn_tlv_actor_system_priority_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_broadcast_query_timeout_new(of_version_t version);
extern void of_bsn_tlv_broadcast_query_timeout_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_bucket_new(of_version_t version);
extern void of_bsn_tlv_bucket_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_circuit_id_new(of_version_t version);
extern void of_bsn_tlv_circuit_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_convergence_status_new(of_version_t version);
extern void of_bsn_tlv_convergence_status_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_crc_enabled_new(of_version_t version);
extern void of_bsn_tlv_crc_enabled_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_data_new(of_version_t version);
extern void of_bsn_tlv_data_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_eth_dst_new(of_version_t version);
extern void of_bsn_tlv_eth_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_eth_src_new(of_version_t version);
extern void of_bsn_tlv_eth_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_external_gateway_ip_new(of_version_t version);
extern void of_bsn_tlv_external_gateway_ip_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_external_gateway_mac_new(of_version_t version);
extern void of_bsn_tlv_external_gateway_mac_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_external_ip_new(of_version_t version);
extern void of_bsn_tlv_external_ip_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_external_mac_new(of_version_t version);
extern void of_bsn_tlv_external_mac_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_external_netmask_new(of_version_t version);
extern void of_bsn_tlv_external_netmask_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_header_size_new(of_version_t version);
extern void of_bsn_tlv_header_size_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_icmp_code_new(of_version_t version);
extern void of_bsn_tlv_icmp_code_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_icmp_id_new(of_version_t version);
extern void of_bsn_tlv_icmp_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_icmp_type_new(of_version_t version);
extern void of_bsn_tlv_icmp_type_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_idle_notification_new(of_version_t version);
extern void of_bsn_tlv_idle_notification_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_idle_time_new(of_version_t version);
extern void of_bsn_tlv_idle_time_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_idle_timeout_new(of_version_t version);
extern void of_bsn_tlv_idle_timeout_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_internal_gateway_mac_new(of_version_t version);
extern void of_bsn_tlv_internal_gateway_mac_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_internal_mac_new(of_version_t version);
extern void of_bsn_tlv_internal_mac_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_interval_new(of_version_t version);
extern void of_bsn_tlv_interval_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_ip_proto_new(of_version_t version);
extern void of_bsn_tlv_ip_proto_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_ipv4_new(of_version_t version);
extern void of_bsn_tlv_ipv4_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_ipv4_dst_new(of_version_t version);
extern void of_bsn_tlv_ipv4_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_ipv4_netmask_new(of_version_t version);
extern void of_bsn_tlv_ipv4_netmask_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_ipv4_src_new(of_version_t version);
extern void of_bsn_tlv_ipv4_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_mac_new(of_version_t version);
extern void of_bsn_tlv_mac_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_mac_mask_new(of_version_t version);
extern void of_bsn_tlv_mac_mask_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_miss_packets_new(of_version_t version);
extern void of_bsn_tlv_miss_packets_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_mpls_control_word_new(of_version_t version);
extern void of_bsn_tlv_mpls_control_word_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_mpls_label_new(of_version_t version);
extern void of_bsn_tlv_mpls_label_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_mpls_sequenced_new(of_version_t version);
extern void of_bsn_tlv_mpls_sequenced_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_name_new(of_version_t version);
extern void of_bsn_tlv_name_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_partner_key_new(of_version_t version);
extern void of_bsn_tlv_partner_key_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_partner_port_num_new(of_version_t version);
extern void of_bsn_tlv_partner_port_num_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_partner_port_priority_new(of_version_t version);
extern void of_bsn_tlv_partner_port_priority_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_partner_state_new(of_version_t version);
extern void of_bsn_tlv_partner_state_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_partner_system_mac_new(of_version_t version);
extern void of_bsn_tlv_partner_system_mac_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_partner_system_priority_new(of_version_t version);
extern void of_bsn_tlv_partner_system_priority_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_port_new(of_version_t version);
extern void of_bsn_tlv_port_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_priority_new(of_version_t version);
extern void of_bsn_tlv_priority_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_queue_id_new(of_version_t version);
extern void of_bsn_tlv_queue_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_queue_weight_new(of_version_t version);
extern void of_bsn_tlv_queue_weight_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_reference_new(of_version_t version);
extern void of_bsn_tlv_reference_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_reply_packets_new(of_version_t version);
extern void of_bsn_tlv_reply_packets_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_request_packets_new(of_version_t version);
extern void of_bsn_tlv_request_packets_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_rx_bytes_new(of_version_t version);
extern void of_bsn_tlv_rx_bytes_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_rx_packets_new(of_version_t version);
extern void of_bsn_tlv_rx_packets_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_sampling_rate_new(of_version_t version);
extern void of_bsn_tlv_sampling_rate_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_sub_agent_id_new(of_version_t version);
extern void of_bsn_tlv_sub_agent_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_tcp_dst_new(of_version_t version);
extern void of_bsn_tlv_tcp_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_tcp_src_new(of_version_t version);
extern void of_bsn_tlv_tcp_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_tx_bytes_new(of_version_t version);
extern void of_bsn_tlv_tx_bytes_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_tx_packets_new(of_version_t version);
extern void of_bsn_tlv_tx_packets_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_udf_anchor_new(of_version_t version);
extern void of_bsn_tlv_udf_anchor_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_udf_id_new(of_version_t version);
extern void of_bsn_tlv_udf_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_udf_length_new(of_version_t version);
extern void of_bsn_tlv_udf_length_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_udf_offset_new(of_version_t version);
extern void of_bsn_tlv_udf_offset_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_udp_dst_new(of_version_t version);
extern void of_bsn_tlv_udp_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_udp_src_new(of_version_t version);
extern void of_bsn_tlv_udp_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_unicast_query_timeout_new(of_version_t version);
extern void of_bsn_tlv_unicast_query_timeout_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_vlan_vid_new(of_version_t version);
extern void of_bsn_tlv_vlan_vid_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_tlv_vrf_new(of_version_t version);
extern void of_bsn_tlv_vrf_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_vlan_counter_stats_entry_new(of_version_t version);
extern void of_bsn_vlan_counter_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_vport_new(of_version_t version);
extern void of_bsn_vport_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_vport_l2gre_new(of_version_t version);
extern void of_bsn_vport_l2gre_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_vport_q_in_q_new(of_version_t version);
extern void of_bsn_vport_q_in_q_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bsn_vrf_counter_stats_entry_new(of_version_t version);
extern void of_bsn_vrf_counter_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bucket_new(of_version_t version);
extern void of_bucket_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bucket_counter_new(of_version_t version);
extern void of_bucket_counter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bundle_prop_new(of_version_t version);
extern void of_bundle_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_bundle_prop_experimenter_new(of_version_t version);
extern void of_bundle_prop_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_flow_stats_entry_new(of_version_t version);
extern void of_flow_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_desc_stats_entry_new(of_version_t version);
extern void of_group_desc_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_group_stats_entry_new(of_version_t version);
extern void of_group_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_hello_elem_new(of_version_t version);
extern void of_hello_elem_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_hello_elem_versionbitmap_new(of_version_t version);
extern void of_hello_elem_versionbitmap_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_new(of_version_t version);
extern void of_instruction_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_apply_actions_new(of_version_t version);
extern void of_instruction_apply_actions_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_new(of_version_t version);
extern void of_instruction_bsn_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_arp_offload_new(of_version_t version);
extern void of_instruction_bsn_arp_offload_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_auto_negotiation_new(of_version_t version);
extern void of_instruction_bsn_auto_negotiation_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_deny_new(of_version_t version);
extern void of_instruction_bsn_deny_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_dhcp_offload_new(of_version_t version);
extern void of_instruction_bsn_dhcp_offload_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_disable_split_horizon_check_new(of_version_t version);
extern void of_instruction_bsn_disable_split_horizon_check_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_disable_src_mac_check_new(of_version_t version);
extern void of_instruction_bsn_disable_src_mac_check_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_disable_vlan_counters_new(of_version_t version);
extern void of_instruction_bsn_disable_vlan_counters_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_packet_of_death_new(of_version_t version);
extern void of_instruction_bsn_packet_of_death_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_permit_new(of_version_t version);
extern void of_instruction_bsn_permit_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_prioritize_pdus_new(of_version_t version);
extern void of_instruction_bsn_prioritize_pdus_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_require_vlan_xlate_new(of_version_t version);
extern void of_instruction_bsn_require_vlan_xlate_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_bsn_span_destination_new(of_version_t version);
extern void of_instruction_bsn_span_destination_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_clear_actions_new(of_version_t version);
extern void of_instruction_clear_actions_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_experimenter_new(of_version_t version);
extern void of_instruction_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_goto_table_new(of_version_t version);
extern void of_instruction_goto_table_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_new(of_version_t version);
extern void of_instruction_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_apply_actions_new(of_version_t version);
extern void of_instruction_id_apply_actions_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_new(of_version_t version);
extern void of_instruction_id_bsn_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_arp_offload_new(of_version_t version);
extern void of_instruction_id_bsn_arp_offload_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_auto_negotiation_new(of_version_t version);
extern void of_instruction_id_bsn_auto_negotiation_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_deny_new(of_version_t version);
extern void of_instruction_id_bsn_deny_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_dhcp_offload_new(of_version_t version);
extern void of_instruction_id_bsn_dhcp_offload_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_disable_split_horizon_check_new(of_version_t version);
extern void of_instruction_id_bsn_disable_split_horizon_check_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_disable_src_mac_check_new(of_version_t version);
extern void of_instruction_id_bsn_disable_src_mac_check_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_disable_vlan_counters_new(of_version_t version);
extern void of_instruction_id_bsn_disable_vlan_counters_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_packet_of_death_new(of_version_t version);
extern void of_instruction_id_bsn_packet_of_death_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_permit_new(of_version_t version);
extern void of_instruction_id_bsn_permit_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_prioritize_pdus_new(of_version_t version);
extern void of_instruction_id_bsn_prioritize_pdus_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_require_vlan_xlate_new(of_version_t version);
extern void of_instruction_id_bsn_require_vlan_xlate_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_bsn_span_destination_new(of_version_t version);
extern void of_instruction_id_bsn_span_destination_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_clear_actions_new(of_version_t version);
extern void of_instruction_id_clear_actions_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_experimenter_new(of_version_t version);
extern void of_instruction_id_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_goto_table_new(of_version_t version);
extern void of_instruction_id_goto_table_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_meter_new(of_version_t version);
extern void of_instruction_id_meter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_write_actions_new(of_version_t version);
extern void of_instruction_id_write_actions_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_id_write_metadata_new(of_version_t version);
extern void of_instruction_id_write_metadata_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_meter_new(of_version_t version);
extern void of_instruction_meter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_write_actions_new(of_version_t version);
extern void of_instruction_write_actions_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_instruction_write_metadata_new(of_version_t version);
extern void of_instruction_write_metadata_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_match_v1_new(of_version_t version);
extern void of_match_v1_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_match_v2_new(of_version_t version);
extern void of_match_v2_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_match_v3_new(of_version_t version);
extern void of_match_v3_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_band_new(of_version_t version);
extern void of_meter_band_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_band_drop_new(of_version_t version);
extern void of_meter_band_drop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_band_dscp_remark_new(of_version_t version);
extern void of_meter_band_dscp_remark_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_band_experimenter_new(of_version_t version);
extern void of_meter_band_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_band_stats_new(of_version_t version);
extern void of_meter_band_stats_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_config_new(of_version_t version);
extern void of_meter_config_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_features_new(of_version_t version);
extern void of_meter_features_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_meter_stats_new(of_version_t version);
extern void of_meter_stats_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_new(of_version_t version);
extern void of_oxm_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_arp_op_new(of_version_t version);
extern void of_oxm_arp_op_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_arp_op_masked_new(of_version_t version);
extern void of_oxm_arp_op_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_arp_sha_new(of_version_t version);
extern void of_oxm_arp_sha_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_arp_sha_masked_new(of_version_t version);
extern void of_oxm_arp_sha_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_arp_spa_new(of_version_t version);
extern void of_oxm_arp_spa_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_arp_spa_masked_new(of_version_t version);
extern void of_oxm_arp_spa_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_arp_tha_new(of_version_t version);
extern void of_oxm_arp_tha_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_arp_tha_masked_new(of_version_t version);
extern void of_oxm_arp_tha_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_arp_tpa_new(of_version_t version);
extern void of_oxm_arp_tpa_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_arp_tpa_masked_new(of_version_t version);
extern void of_oxm_arp_tpa_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_egr_port_group_id_new(of_version_t version);
extern void of_oxm_bsn_egr_port_group_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_egr_port_group_id_masked_new(of_version_t version);
extern void of_oxm_bsn_egr_port_group_id_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_global_vrf_allowed_new(of_version_t version);
extern void of_oxm_bsn_global_vrf_allowed_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_global_vrf_allowed_masked_new(of_version_t version);
extern void of_oxm_bsn_global_vrf_allowed_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_in_ports_128_new(of_version_t version);
extern void of_oxm_bsn_in_ports_128_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_in_ports_128_masked_new(of_version_t version);
extern void of_oxm_bsn_in_ports_128_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_in_ports_512_new(of_version_t version);
extern void of_oxm_bsn_in_ports_512_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_in_ports_512_masked_new(of_version_t version);
extern void of_oxm_bsn_in_ports_512_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_ingress_port_group_id_new(of_version_t version);
extern void of_oxm_bsn_ingress_port_group_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_ingress_port_group_id_masked_new(of_version_t version);
extern void of_oxm_bsn_ingress_port_group_id_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_l2_cache_hit_new(of_version_t version);
extern void of_oxm_bsn_l2_cache_hit_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_l2_cache_hit_masked_new(of_version_t version);
extern void of_oxm_bsn_l2_cache_hit_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_l3_dst_class_id_new(of_version_t version);
extern void of_oxm_bsn_l3_dst_class_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_l3_dst_class_id_masked_new(of_version_t version);
extern void of_oxm_bsn_l3_dst_class_id_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_l3_interface_class_id_new(of_version_t version);
extern void of_oxm_bsn_l3_interface_class_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_l3_interface_class_id_masked_new(of_version_t version);
extern void of_oxm_bsn_l3_interface_class_id_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_l3_src_class_id_new(of_version_t version);
extern void of_oxm_bsn_l3_src_class_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_l3_src_class_id_masked_new(of_version_t version);
extern void of_oxm_bsn_l3_src_class_id_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_lag_id_new(of_version_t version);
extern void of_oxm_bsn_lag_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_lag_id_masked_new(of_version_t version);
extern void of_oxm_bsn_lag_id_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_tcp_flags_new(of_version_t version);
extern void of_oxm_bsn_tcp_flags_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_tcp_flags_masked_new(of_version_t version);
extern void of_oxm_bsn_tcp_flags_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf0_new(of_version_t version);
extern void of_oxm_bsn_udf0_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf0_masked_new(of_version_t version);
extern void of_oxm_bsn_udf0_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf1_new(of_version_t version);
extern void of_oxm_bsn_udf1_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf1_masked_new(of_version_t version);
extern void of_oxm_bsn_udf1_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf2_new(of_version_t version);
extern void of_oxm_bsn_udf2_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf2_masked_new(of_version_t version);
extern void of_oxm_bsn_udf2_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf3_new(of_version_t version);
extern void of_oxm_bsn_udf3_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf3_masked_new(of_version_t version);
extern void of_oxm_bsn_udf3_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf4_new(of_version_t version);
extern void of_oxm_bsn_udf4_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf4_masked_new(of_version_t version);
extern void of_oxm_bsn_udf4_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf5_new(of_version_t version);
extern void of_oxm_bsn_udf5_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf5_masked_new(of_version_t version);
extern void of_oxm_bsn_udf5_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf6_new(of_version_t version);
extern void of_oxm_bsn_udf6_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf6_masked_new(of_version_t version);
extern void of_oxm_bsn_udf6_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf7_new(of_version_t version);
extern void of_oxm_bsn_udf7_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_udf7_masked_new(of_version_t version);
extern void of_oxm_bsn_udf7_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_vlan_xlate_port_group_id_new(of_version_t version);
extern void of_oxm_bsn_vlan_xlate_port_group_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_vlan_xlate_port_group_id_masked_new(of_version_t version);
extern void of_oxm_bsn_vlan_xlate_port_group_id_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_vrf_new(of_version_t version);
extern void of_oxm_bsn_vrf_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_bsn_vrf_masked_new(of_version_t version);
extern void of_oxm_bsn_vrf_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_eth_dst_new(of_version_t version);
extern void of_oxm_eth_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_eth_dst_masked_new(of_version_t version);
extern void of_oxm_eth_dst_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_eth_src_new(of_version_t version);
extern void of_oxm_eth_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_eth_src_masked_new(of_version_t version);
extern void of_oxm_eth_src_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_eth_type_new(of_version_t version);
extern void of_oxm_eth_type_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_eth_type_masked_new(of_version_t version);
extern void of_oxm_eth_type_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_icmpv4_code_new(of_version_t version);
extern void of_oxm_icmpv4_code_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_icmpv4_code_masked_new(of_version_t version);
extern void of_oxm_icmpv4_code_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_icmpv4_type_new(of_version_t version);
extern void of_oxm_icmpv4_type_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_icmpv4_type_masked_new(of_version_t version);
extern void of_oxm_icmpv4_type_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_icmpv6_code_new(of_version_t version);
extern void of_oxm_icmpv6_code_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_icmpv6_code_masked_new(of_version_t version);
extern void of_oxm_icmpv6_code_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_icmpv6_type_new(of_version_t version);
extern void of_oxm_icmpv6_type_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_icmpv6_type_masked_new(of_version_t version);
extern void of_oxm_icmpv6_type_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_in_phy_port_new(of_version_t version);
extern void of_oxm_in_phy_port_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_in_phy_port_masked_new(of_version_t version);
extern void of_oxm_in_phy_port_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_in_port_new(of_version_t version);
extern void of_oxm_in_port_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_in_port_masked_new(of_version_t version);
extern void of_oxm_in_port_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ip_dscp_new(of_version_t version);
extern void of_oxm_ip_dscp_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ip_dscp_masked_new(of_version_t version);
extern void of_oxm_ip_dscp_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ip_ecn_new(of_version_t version);
extern void of_oxm_ip_ecn_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ip_ecn_masked_new(of_version_t version);
extern void of_oxm_ip_ecn_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ip_proto_new(of_version_t version);
extern void of_oxm_ip_proto_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ip_proto_masked_new(of_version_t version);
extern void of_oxm_ip_proto_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv4_dst_new(of_version_t version);
extern void of_oxm_ipv4_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv4_dst_masked_new(of_version_t version);
extern void of_oxm_ipv4_dst_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv4_src_new(of_version_t version);
extern void of_oxm_ipv4_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv4_src_masked_new(of_version_t version);
extern void of_oxm_ipv4_src_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_dst_new(of_version_t version);
extern void of_oxm_ipv6_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_dst_masked_new(of_version_t version);
extern void of_oxm_ipv6_dst_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_exthdr_new(of_version_t version);
extern void of_oxm_ipv6_exthdr_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_exthdr_masked_new(of_version_t version);
extern void of_oxm_ipv6_exthdr_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_flabel_new(of_version_t version);
extern void of_oxm_ipv6_flabel_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_flabel_masked_new(of_version_t version);
extern void of_oxm_ipv6_flabel_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_nd_sll_new(of_version_t version);
extern void of_oxm_ipv6_nd_sll_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_nd_sll_masked_new(of_version_t version);
extern void of_oxm_ipv6_nd_sll_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_nd_target_new(of_version_t version);
extern void of_oxm_ipv6_nd_target_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_nd_target_masked_new(of_version_t version);
extern void of_oxm_ipv6_nd_target_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_nd_tll_new(of_version_t version);
extern void of_oxm_ipv6_nd_tll_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_nd_tll_masked_new(of_version_t version);
extern void of_oxm_ipv6_nd_tll_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_src_new(of_version_t version);
extern void of_oxm_ipv6_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_ipv6_src_masked_new(of_version_t version);
extern void of_oxm_ipv6_src_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_metadata_new(of_version_t version);
extern void of_oxm_metadata_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_metadata_masked_new(of_version_t version);
extern void of_oxm_metadata_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_mpls_bos_new(of_version_t version);
extern void of_oxm_mpls_bos_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_mpls_bos_masked_new(of_version_t version);
extern void of_oxm_mpls_bos_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_mpls_label_new(of_version_t version);
extern void of_oxm_mpls_label_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_mpls_label_masked_new(of_version_t version);
extern void of_oxm_mpls_label_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_mpls_tc_new(of_version_t version);
extern void of_oxm_mpls_tc_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_mpls_tc_masked_new(of_version_t version);
extern void of_oxm_mpls_tc_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_pbb_uca_new(of_version_t version);
extern void of_oxm_pbb_uca_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_pbb_uca_masked_new(of_version_t version);
extern void of_oxm_pbb_uca_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_sctp_dst_new(of_version_t version);
extern void of_oxm_sctp_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_sctp_dst_masked_new(of_version_t version);
extern void of_oxm_sctp_dst_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_sctp_src_new(of_version_t version);
extern void of_oxm_sctp_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_sctp_src_masked_new(of_version_t version);
extern void of_oxm_sctp_src_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_tcp_dst_new(of_version_t version);
extern void of_oxm_tcp_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_tcp_dst_masked_new(of_version_t version);
extern void of_oxm_tcp_dst_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_tcp_src_new(of_version_t version);
extern void of_oxm_tcp_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_tcp_src_masked_new(of_version_t version);
extern void of_oxm_tcp_src_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_tunnel_id_new(of_version_t version);
extern void of_oxm_tunnel_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_tunnel_id_masked_new(of_version_t version);
extern void of_oxm_tunnel_id_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_tunnel_ipv4_dst_new(of_version_t version);
extern void of_oxm_tunnel_ipv4_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_tunnel_ipv4_dst_masked_new(of_version_t version);
extern void of_oxm_tunnel_ipv4_dst_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_tunnel_ipv4_src_new(of_version_t version);
extern void of_oxm_tunnel_ipv4_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_tunnel_ipv4_src_masked_new(of_version_t version);
extern void of_oxm_tunnel_ipv4_src_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_udp_dst_new(of_version_t version);
extern void of_oxm_udp_dst_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_udp_dst_masked_new(of_version_t version);
extern void of_oxm_udp_dst_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_udp_src_new(of_version_t version);
extern void of_oxm_udp_src_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_udp_src_masked_new(of_version_t version);
extern void of_oxm_udp_src_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_vlan_pcp_new(of_version_t version);
extern void of_oxm_vlan_pcp_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_vlan_pcp_masked_new(of_version_t version);
extern void of_oxm_vlan_pcp_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_vlan_vid_new(of_version_t version);
extern void of_oxm_vlan_vid_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_oxm_vlan_vid_masked_new(of_version_t version);
extern void of_oxm_vlan_vid_masked_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_packet_queue_new(of_version_t version);
extern void of_packet_queue_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_desc_new(of_version_t version);
extern void of_port_desc_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_desc_prop_new(of_version_t version);
extern void of_port_desc_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_desc_prop_bsn_new(of_version_t version);
extern void of_port_desc_prop_bsn_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_desc_prop_bsn_uplink_new(of_version_t version);
extern void of_port_desc_prop_bsn_uplink_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_desc_prop_ethernet_new(of_version_t version);
extern void of_port_desc_prop_ethernet_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_desc_prop_experimenter_new(of_version_t version);
extern void of_port_desc_prop_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_desc_prop_optical_new(of_version_t version);
extern void of_port_desc_prop_optical_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_mod_prop_new(of_version_t version);
extern void of_port_mod_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_mod_prop_ethernet_new(of_version_t version);
extern void of_port_mod_prop_ethernet_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_mod_prop_experimenter_new(of_version_t version);
extern void of_port_mod_prop_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_mod_prop_optical_new(of_version_t version);
extern void of_port_mod_prop_optical_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_stats_entry_new(of_version_t version);
extern void of_port_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_stats_prop_new(of_version_t version);
extern void of_port_stats_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_stats_prop_ethernet_new(of_version_t version);
extern void of_port_stats_prop_ethernet_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_stats_prop_experimenter_new(of_version_t version);
extern void of_port_stats_prop_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_port_stats_prop_optical_new(of_version_t version);
extern void of_port_stats_prop_optical_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_desc_new(of_version_t version);
extern void of_queue_desc_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_desc_prop_new(of_version_t version);
extern void of_queue_desc_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_desc_prop_experimenter_new(of_version_t version);
extern void of_queue_desc_prop_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_desc_prop_max_rate_new(of_version_t version);
extern void of_queue_desc_prop_max_rate_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_desc_prop_min_rate_new(of_version_t version);
extern void of_queue_desc_prop_min_rate_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_prop_new(of_version_t version);
extern void of_queue_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_prop_experimenter_new(of_version_t version);
extern void of_queue_prop_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_prop_max_rate_new(of_version_t version);
extern void of_queue_prop_max_rate_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_prop_min_rate_new(of_version_t version);
extern void of_queue_prop_min_rate_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_stats_entry_new(of_version_t version);
extern void of_queue_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_stats_prop_new(of_version_t version);
extern void of_queue_stats_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_queue_stats_prop_experimenter_new(of_version_t version);
extern void of_queue_stats_prop_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_role_prop_new(of_version_t version);
extern void of_role_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_role_prop_experimenter_new(of_version_t version);
extern void of_role_prop_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_desc_new(of_version_t version);
extern void of_table_desc_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_new(of_version_t version);
extern void of_table_feature_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_apply_actions_new(of_version_t version);
extern void of_table_feature_prop_apply_actions_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_apply_actions_miss_new(of_version_t version);
extern void of_table_feature_prop_apply_actions_miss_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_apply_setfield_new(of_version_t version);
extern void of_table_feature_prop_apply_setfield_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_apply_setfield_miss_new(of_version_t version);
extern void of_table_feature_prop_apply_setfield_miss_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_experimenter_new(of_version_t version);
extern void of_table_feature_prop_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_experimenter_miss_new(of_version_t version);
extern void of_table_feature_prop_experimenter_miss_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_instructions_new(of_version_t version);
extern void of_table_feature_prop_instructions_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_instructions_miss_new(of_version_t version);
extern void of_table_feature_prop_instructions_miss_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_match_new(of_version_t version);
extern void of_table_feature_prop_match_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_next_tables_new(of_version_t version);
extern void of_table_feature_prop_next_tables_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_next_tables_miss_new(of_version_t version);
extern void of_table_feature_prop_next_tables_miss_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_table_sync_from_new(of_version_t version);
extern void of_table_feature_prop_table_sync_from_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_wildcards_new(of_version_t version);
extern void of_table_feature_prop_wildcards_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_write_actions_new(of_version_t version);
extern void of_table_feature_prop_write_actions_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_write_actions_miss_new(of_version_t version);
extern void of_table_feature_prop_write_actions_miss_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_write_setfield_new(of_version_t version);
extern void of_table_feature_prop_write_setfield_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_feature_prop_write_setfield_miss_new(of_version_t version);
extern void of_table_feature_prop_write_setfield_miss_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_features_new(of_version_t version);
extern void of_table_features_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_mod_prop_new(of_version_t version);
extern void of_table_mod_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_mod_prop_eviction_new(of_version_t version);
extern void of_table_mod_prop_eviction_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_mod_prop_experimenter_new(of_version_t version);
extern void of_table_mod_prop_experimenter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_mod_prop_vacancy_new(of_version_t version);
extern void of_table_mod_prop_vacancy_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_table_stats_entry_new(of_version_t version);
extern void of_table_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_uint32_new(of_version_t version);
extern void of_uint32_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_uint64_new(of_version_t version);
extern void of_uint64_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_uint8_new(of_version_t version);
extern void of_uint8_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_action_new(of_version_t version);
extern void of_list_action_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_action_id_new(of_version_t version);
extern void of_list_action_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_async_config_prop_new(of_version_t version);
extern void of_list_async_config_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_controller_connection_new(of_version_t version);
extern void of_list_bsn_controller_connection_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_debug_counter_desc_stats_entry_new(of_version_t version);
extern void of_list_bsn_debug_counter_desc_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_debug_counter_stats_entry_new(of_version_t version);
extern void of_list_bsn_debug_counter_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_flow_checksum_bucket_stats_entry_new(of_version_t version);
extern void of_list_bsn_flow_checksum_bucket_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_generic_stats_entry_new(of_version_t version);
extern void of_list_bsn_generic_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_gentable_bucket_stats_entry_new(of_version_t version);
extern void of_list_bsn_gentable_bucket_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_gentable_desc_stats_entry_new(of_version_t version);
extern void of_list_bsn_gentable_desc_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_gentable_entry_desc_stats_entry_new(of_version_t version);
extern void of_list_bsn_gentable_entry_desc_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_gentable_entry_stats_entry_new(of_version_t version);
extern void of_list_bsn_gentable_entry_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_gentable_stats_entry_new(of_version_t version);
extern void of_list_bsn_gentable_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_interface_new(of_version_t version);
extern void of_list_bsn_interface_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_lacp_stats_entry_new(of_version_t version);
extern void of_list_bsn_lacp_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_port_counter_stats_entry_new(of_version_t version);
extern void of_list_bsn_port_counter_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_switch_pipeline_stats_entry_new(of_version_t version);
extern void of_list_bsn_switch_pipeline_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_table_checksum_stats_entry_new(of_version_t version);
extern void of_list_bsn_table_checksum_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_tlv_new(of_version_t version);
extern void of_list_bsn_tlv_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_vlan_counter_stats_entry_new(of_version_t version);
extern void of_list_bsn_vlan_counter_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bsn_vrf_counter_stats_entry_new(of_version_t version);
extern void of_list_bsn_vrf_counter_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bucket_new(of_version_t version);
extern void of_list_bucket_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bucket_counter_new(of_version_t version);
extern void of_list_bucket_counter_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_bundle_prop_new(of_version_t version);
extern void of_list_bundle_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_flow_stats_entry_new(of_version_t version);
extern void of_list_flow_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_group_desc_stats_entry_new(of_version_t version);
extern void of_list_group_desc_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_group_stats_entry_new(of_version_t version);
extern void of_list_group_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_hello_elem_new(of_version_t version);
extern void of_list_hello_elem_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_instruction_new(of_version_t version);
extern void of_list_instruction_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_instruction_id_new(of_version_t version);
extern void of_list_instruction_id_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_meter_band_new(of_version_t version);
extern void of_list_meter_band_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_meter_band_stats_new(of_version_t version);
extern void of_list_meter_band_stats_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_meter_stats_new(of_version_t version);
extern void of_list_meter_stats_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_oxm_new(of_version_t version);
extern void of_list_oxm_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_packet_queue_new(of_version_t version);
extern void of_list_packet_queue_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_port_desc_new(of_version_t version);
extern void of_list_port_desc_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_port_desc_prop_new(of_version_t version);
extern void of_list_port_desc_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_port_mod_prop_new(of_version_t version);
extern void of_list_port_mod_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_port_stats_entry_new(of_version_t version);
extern void of_list_port_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_port_stats_prop_new(of_version_t version);
extern void of_list_port_stats_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_queue_desc_new(of_version_t version);
extern void of_list_queue_desc_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_queue_desc_prop_new(of_version_t version);
extern void of_list_queue_desc_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_queue_prop_new(of_version_t version);
extern void of_list_queue_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_queue_stats_entry_new(of_version_t version);
extern void of_list_queue_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_queue_stats_prop_new(of_version_t version);
extern void of_list_queue_stats_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_role_prop_new(of_version_t version);
extern void of_list_role_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_table_desc_new(of_version_t version);
extern void of_list_table_desc_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_table_feature_prop_new(of_version_t version);
extern void of_list_table_feature_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_table_features_new(of_version_t version);
extern void of_list_table_features_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_table_mod_prop_new(of_version_t version);
extern void of_list_table_mod_prop_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_table_stats_entry_new(of_version_t version);
extern void of_list_table_stats_entry_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_uint32_new(of_version_t version);
extern void of_list_uint32_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_uint64_new(of_version_t version);
extern void of_list_uint64_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

extern of_object_t *
    of_list_uint8_new(of_version_t version);
extern void of_list_uint8_init(
    of_object_t *obj, of_version_t version, int bytes, int clean_wire);

/****************************************************************
 *
 * Delete operator static inline definitions.
 * These are here for type checking purposes only
 *
 ****************************************************************/

/**
 * Delete an object of type of_aggregate_stats_reply_t
 * @param obj An instance of type of_aggregate_stats_reply_t
 *
 * \ingroup of_aggregate_stats_reply
 */
static inline void
of_aggregate_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_aggregate_stats_request_t
 * @param obj An instance of type of_aggregate_stats_request_t
 *
 * \ingroup of_aggregate_stats_request
 */
static inline void
of_aggregate_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_failed_error_msg_t
 * @param obj An instance of type of_async_config_failed_error_msg_t
 *
 * \ingroup of_async_config_failed_error_msg
 */
static inline void
of_async_config_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_get_reply_t
 * @param obj An instance of type of_async_get_reply_t
 *
 * \ingroup of_async_get_reply
 */
static inline void
of_async_get_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_get_request_t
 * @param obj An instance of type of_async_get_request_t
 *
 * \ingroup of_async_get_request
 */
static inline void
of_async_get_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_set_t
 * @param obj An instance of type of_async_set_t
 *
 * \ingroup of_async_set
 */
static inline void
of_async_set_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bad_action_error_msg_t
 * @param obj An instance of type of_bad_action_error_msg_t
 *
 * \ingroup of_bad_action_error_msg
 */
static inline void
of_bad_action_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bad_instruction_error_msg_t
 * @param obj An instance of type of_bad_instruction_error_msg_t
 *
 * \ingroup of_bad_instruction_error_msg
 */
static inline void
of_bad_instruction_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bad_match_error_msg_t
 * @param obj An instance of type of_bad_match_error_msg_t
 *
 * \ingroup of_bad_match_error_msg
 */
static inline void
of_bad_match_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bad_property_error_msg_t
 * @param obj An instance of type of_bad_property_error_msg_t
 *
 * \ingroup of_bad_property_error_msg
 */
static inline void
of_bad_property_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bad_request_error_msg_t
 * @param obj An instance of type of_bad_request_error_msg_t
 *
 * \ingroup of_bad_request_error_msg
 */
static inline void
of_bad_request_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_barrier_reply_t
 * @param obj An instance of type of_barrier_reply_t
 *
 * \ingroup of_barrier_reply
 */
static inline void
of_barrier_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_barrier_request_t
 * @param obj An instance of type of_barrier_request_t
 *
 * \ingroup of_barrier_request
 */
static inline void
of_barrier_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_arp_idle_t
 * @param obj An instance of type of_bsn_arp_idle_t
 *
 * \ingroup of_bsn_arp_idle
 */
static inline void
of_bsn_arp_idle_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_bw_clear_data_reply_t
 * @param obj An instance of type of_bsn_bw_clear_data_reply_t
 *
 * \ingroup of_bsn_bw_clear_data_reply
 */
static inline void
of_bsn_bw_clear_data_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_bw_clear_data_request_t
 * @param obj An instance of type of_bsn_bw_clear_data_request_t
 *
 * \ingroup of_bsn_bw_clear_data_request
 */
static inline void
of_bsn_bw_clear_data_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_bw_enable_get_reply_t
 * @param obj An instance of type of_bsn_bw_enable_get_reply_t
 *
 * \ingroup of_bsn_bw_enable_get_reply
 */
static inline void
of_bsn_bw_enable_get_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_bw_enable_get_request_t
 * @param obj An instance of type of_bsn_bw_enable_get_request_t
 *
 * \ingroup of_bsn_bw_enable_get_request
 */
static inline void
of_bsn_bw_enable_get_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_bw_enable_set_reply_t
 * @param obj An instance of type of_bsn_bw_enable_set_reply_t
 *
 * \ingroup of_bsn_bw_enable_set_reply
 */
static inline void
of_bsn_bw_enable_set_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_bw_enable_set_request_t
 * @param obj An instance of type of_bsn_bw_enable_set_request_t
 *
 * \ingroup of_bsn_bw_enable_set_request
 */
static inline void
of_bsn_bw_enable_set_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_controller_connections_reply_t
 * @param obj An instance of type of_bsn_controller_connections_reply_t
 *
 * \ingroup of_bsn_controller_connections_reply
 */
static inline void
of_bsn_controller_connections_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_controller_connections_request_t
 * @param obj An instance of type of_bsn_controller_connections_request_t
 *
 * \ingroup of_bsn_controller_connections_request
 */
static inline void
of_bsn_controller_connections_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_debug_counter_desc_stats_reply_t
 * @param obj An instance of type of_bsn_debug_counter_desc_stats_reply_t
 *
 * \ingroup of_bsn_debug_counter_desc_stats_reply
 */
static inline void
of_bsn_debug_counter_desc_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_debug_counter_desc_stats_request_t
 * @param obj An instance of type of_bsn_debug_counter_desc_stats_request_t
 *
 * \ingroup of_bsn_debug_counter_desc_stats_request
 */
static inline void
of_bsn_debug_counter_desc_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_debug_counter_stats_reply_t
 * @param obj An instance of type of_bsn_debug_counter_stats_reply_t
 *
 * \ingroup of_bsn_debug_counter_stats_reply
 */
static inline void
of_bsn_debug_counter_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_debug_counter_stats_request_t
 * @param obj An instance of type of_bsn_debug_counter_stats_request_t
 *
 * \ingroup of_bsn_debug_counter_stats_request
 */
static inline void
of_bsn_debug_counter_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_flow_checksum_bucket_stats_reply_t
 * @param obj An instance of type of_bsn_flow_checksum_bucket_stats_reply_t
 *
 * \ingroup of_bsn_flow_checksum_bucket_stats_reply
 */
static inline void
of_bsn_flow_checksum_bucket_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_flow_checksum_bucket_stats_request_t
 * @param obj An instance of type of_bsn_flow_checksum_bucket_stats_request_t
 *
 * \ingroup of_bsn_flow_checksum_bucket_stats_request
 */
static inline void
of_bsn_flow_checksum_bucket_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_flow_idle_t
 * @param obj An instance of type of_bsn_flow_idle_t
 *
 * \ingroup of_bsn_flow_idle
 */
static inline void
of_bsn_flow_idle_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_flow_idle_enable_get_reply_t
 * @param obj An instance of type of_bsn_flow_idle_enable_get_reply_t
 *
 * \ingroup of_bsn_flow_idle_enable_get_reply
 */
static inline void
of_bsn_flow_idle_enable_get_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_flow_idle_enable_get_request_t
 * @param obj An instance of type of_bsn_flow_idle_enable_get_request_t
 *
 * \ingroup of_bsn_flow_idle_enable_get_request
 */
static inline void
of_bsn_flow_idle_enable_get_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_flow_idle_enable_set_reply_t
 * @param obj An instance of type of_bsn_flow_idle_enable_set_reply_t
 *
 * \ingroup of_bsn_flow_idle_enable_set_reply
 */
static inline void
of_bsn_flow_idle_enable_set_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_flow_idle_enable_set_request_t
 * @param obj An instance of type of_bsn_flow_idle_enable_set_request_t
 *
 * \ingroup of_bsn_flow_idle_enable_set_request
 */
static inline void
of_bsn_flow_idle_enable_set_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_generic_stats_reply_t
 * @param obj An instance of type of_bsn_generic_stats_reply_t
 *
 * \ingroup of_bsn_generic_stats_reply
 */
static inline void
of_bsn_generic_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_generic_stats_request_t
 * @param obj An instance of type of_bsn_generic_stats_request_t
 *
 * \ingroup of_bsn_generic_stats_request
 */
static inline void
of_bsn_generic_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_bucket_stats_reply_t
 * @param obj An instance of type of_bsn_gentable_bucket_stats_reply_t
 *
 * \ingroup of_bsn_gentable_bucket_stats_reply
 */
static inline void
of_bsn_gentable_bucket_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_bucket_stats_request_t
 * @param obj An instance of type of_bsn_gentable_bucket_stats_request_t
 *
 * \ingroup of_bsn_gentable_bucket_stats_request
 */
static inline void
of_bsn_gentable_bucket_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_clear_reply_t
 * @param obj An instance of type of_bsn_gentable_clear_reply_t
 *
 * \ingroup of_bsn_gentable_clear_reply
 */
static inline void
of_bsn_gentable_clear_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_clear_request_t
 * @param obj An instance of type of_bsn_gentable_clear_request_t
 *
 * \ingroup of_bsn_gentable_clear_request
 */
static inline void
of_bsn_gentable_clear_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_desc_stats_reply_t
 * @param obj An instance of type of_bsn_gentable_desc_stats_reply_t
 *
 * \ingroup of_bsn_gentable_desc_stats_reply
 */
static inline void
of_bsn_gentable_desc_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_desc_stats_request_t
 * @param obj An instance of type of_bsn_gentable_desc_stats_request_t
 *
 * \ingroup of_bsn_gentable_desc_stats_request
 */
static inline void
of_bsn_gentable_desc_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_entry_add_t
 * @param obj An instance of type of_bsn_gentable_entry_add_t
 *
 * \ingroup of_bsn_gentable_entry_add
 */
static inline void
of_bsn_gentable_entry_add_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_entry_delete_t
 * @param obj An instance of type of_bsn_gentable_entry_delete_t
 *
 * \ingroup of_bsn_gentable_entry_delete
 */
static inline void
of_bsn_gentable_entry_delete_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_entry_desc_stats_reply_t
 * @param obj An instance of type of_bsn_gentable_entry_desc_stats_reply_t
 *
 * \ingroup of_bsn_gentable_entry_desc_stats_reply
 */
static inline void
of_bsn_gentable_entry_desc_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_entry_desc_stats_request_t
 * @param obj An instance of type of_bsn_gentable_entry_desc_stats_request_t
 *
 * \ingroup of_bsn_gentable_entry_desc_stats_request
 */
static inline void
of_bsn_gentable_entry_desc_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_entry_stats_reply_t
 * @param obj An instance of type of_bsn_gentable_entry_stats_reply_t
 *
 * \ingroup of_bsn_gentable_entry_stats_reply
 */
static inline void
of_bsn_gentable_entry_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_entry_stats_request_t
 * @param obj An instance of type of_bsn_gentable_entry_stats_request_t
 *
 * \ingroup of_bsn_gentable_entry_stats_request
 */
static inline void
of_bsn_gentable_entry_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_set_buckets_size_t
 * @param obj An instance of type of_bsn_gentable_set_buckets_size_t
 *
 * \ingroup of_bsn_gentable_set_buckets_size
 */
static inline void
of_bsn_gentable_set_buckets_size_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_stats_reply_t
 * @param obj An instance of type of_bsn_gentable_stats_reply_t
 *
 * \ingroup of_bsn_gentable_stats_reply
 */
static inline void
of_bsn_gentable_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_stats_request_t
 * @param obj An instance of type of_bsn_gentable_stats_request_t
 *
 * \ingroup of_bsn_gentable_stats_request
 */
static inline void
of_bsn_gentable_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_get_interfaces_reply_t
 * @param obj An instance of type of_bsn_get_interfaces_reply_t
 *
 * \ingroup of_bsn_get_interfaces_reply
 */
static inline void
of_bsn_get_interfaces_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_get_interfaces_request_t
 * @param obj An instance of type of_bsn_get_interfaces_request_t
 *
 * \ingroup of_bsn_get_interfaces_request
 */
static inline void
of_bsn_get_interfaces_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_get_ip_mask_reply_t
 * @param obj An instance of type of_bsn_get_ip_mask_reply_t
 *
 * \ingroup of_bsn_get_ip_mask_reply
 */
static inline void
of_bsn_get_ip_mask_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_get_ip_mask_request_t
 * @param obj An instance of type of_bsn_get_ip_mask_request_t
 *
 * \ingroup of_bsn_get_ip_mask_request
 */
static inline void
of_bsn_get_ip_mask_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_get_l2_table_reply_t
 * @param obj An instance of type of_bsn_get_l2_table_reply_t
 *
 * \ingroup of_bsn_get_l2_table_reply
 */
static inline void
of_bsn_get_l2_table_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_get_l2_table_request_t
 * @param obj An instance of type of_bsn_get_l2_table_request_t
 *
 * \ingroup of_bsn_get_l2_table_request
 */
static inline void
of_bsn_get_l2_table_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_get_mirroring_reply_t
 * @param obj An instance of type of_bsn_get_mirroring_reply_t
 *
 * \ingroup of_bsn_get_mirroring_reply
 */
static inline void
of_bsn_get_mirroring_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_get_mirroring_request_t
 * @param obj An instance of type of_bsn_get_mirroring_request_t
 *
 * \ingroup of_bsn_get_mirroring_request
 */
static inline void
of_bsn_get_mirroring_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_get_switch_pipeline_reply_t
 * @param obj An instance of type of_bsn_get_switch_pipeline_reply_t
 *
 * \ingroup of_bsn_get_switch_pipeline_reply
 */
static inline void
of_bsn_get_switch_pipeline_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_get_switch_pipeline_request_t
 * @param obj An instance of type of_bsn_get_switch_pipeline_request_t
 *
 * \ingroup of_bsn_get_switch_pipeline_request
 */
static inline void
of_bsn_get_switch_pipeline_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_header_t
 * @param obj An instance of type of_bsn_header_t
 *
 * \ingroup of_bsn_header
 */
static inline void
of_bsn_header_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_hybrid_get_reply_t
 * @param obj An instance of type of_bsn_hybrid_get_reply_t
 *
 * \ingroup of_bsn_hybrid_get_reply
 */
static inline void
of_bsn_hybrid_get_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_hybrid_get_request_t
 * @param obj An instance of type of_bsn_hybrid_get_request_t
 *
 * \ingroup of_bsn_hybrid_get_request
 */
static inline void
of_bsn_hybrid_get_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_image_desc_stats_reply_t
 * @param obj An instance of type of_bsn_image_desc_stats_reply_t
 *
 * \ingroup of_bsn_image_desc_stats_reply
 */
static inline void
of_bsn_image_desc_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_image_desc_stats_request_t
 * @param obj An instance of type of_bsn_image_desc_stats_request_t
 *
 * \ingroup of_bsn_image_desc_stats_request
 */
static inline void
of_bsn_image_desc_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_lacp_convergence_notif_t
 * @param obj An instance of type of_bsn_lacp_convergence_notif_t
 *
 * \ingroup of_bsn_lacp_convergence_notif
 */
static inline void
of_bsn_lacp_convergence_notif_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_lacp_stats_reply_t
 * @param obj An instance of type of_bsn_lacp_stats_reply_t
 *
 * \ingroup of_bsn_lacp_stats_reply
 */
static inline void
of_bsn_lacp_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_lacp_stats_request_t
 * @param obj An instance of type of_bsn_lacp_stats_request_t
 *
 * \ingroup of_bsn_lacp_stats_request
 */
static inline void
of_bsn_lacp_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_log_t
 * @param obj An instance of type of_bsn_log_t
 *
 * \ingroup of_bsn_log
 */
static inline void
of_bsn_log_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_lua_command_reply_t
 * @param obj An instance of type of_bsn_lua_command_reply_t
 *
 * \ingroup of_bsn_lua_command_reply
 */
static inline void
of_bsn_lua_command_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_lua_command_request_t
 * @param obj An instance of type of_bsn_lua_command_request_t
 *
 * \ingroup of_bsn_lua_command_request
 */
static inline void
of_bsn_lua_command_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_lua_notification_t
 * @param obj An instance of type of_bsn_lua_notification_t
 *
 * \ingroup of_bsn_lua_notification
 */
static inline void
of_bsn_lua_notification_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_lua_upload_t
 * @param obj An instance of type of_bsn_lua_upload_t
 *
 * \ingroup of_bsn_lua_upload
 */
static inline void
of_bsn_lua_upload_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_pdu_rx_reply_t
 * @param obj An instance of type of_bsn_pdu_rx_reply_t
 *
 * \ingroup of_bsn_pdu_rx_reply
 */
static inline void
of_bsn_pdu_rx_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_pdu_rx_request_t
 * @param obj An instance of type of_bsn_pdu_rx_request_t
 *
 * \ingroup of_bsn_pdu_rx_request
 */
static inline void
of_bsn_pdu_rx_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_pdu_rx_timeout_t
 * @param obj An instance of type of_bsn_pdu_rx_timeout_t
 *
 * \ingroup of_bsn_pdu_rx_timeout
 */
static inline void
of_bsn_pdu_rx_timeout_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_pdu_tx_reply_t
 * @param obj An instance of type of_bsn_pdu_tx_reply_t
 *
 * \ingroup of_bsn_pdu_tx_reply
 */
static inline void
of_bsn_pdu_tx_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_pdu_tx_request_t
 * @param obj An instance of type of_bsn_pdu_tx_request_t
 *
 * \ingroup of_bsn_pdu_tx_request
 */
static inline void
of_bsn_pdu_tx_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_port_counter_stats_reply_t
 * @param obj An instance of type of_bsn_port_counter_stats_reply_t
 *
 * \ingroup of_bsn_port_counter_stats_reply
 */
static inline void
of_bsn_port_counter_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_port_counter_stats_request_t
 * @param obj An instance of type of_bsn_port_counter_stats_request_t
 *
 * \ingroup of_bsn_port_counter_stats_request
 */
static inline void
of_bsn_port_counter_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_role_status_t
 * @param obj An instance of type of_bsn_role_status_t
 *
 * \ingroup of_bsn_role_status
 */
static inline void
of_bsn_role_status_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_set_aux_cxns_reply_t
 * @param obj An instance of type of_bsn_set_aux_cxns_reply_t
 *
 * \ingroup of_bsn_set_aux_cxns_reply
 */
static inline void
of_bsn_set_aux_cxns_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_set_aux_cxns_request_t
 * @param obj An instance of type of_bsn_set_aux_cxns_request_t
 *
 * \ingroup of_bsn_set_aux_cxns_request
 */
static inline void
of_bsn_set_aux_cxns_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_set_ip_mask_t
 * @param obj An instance of type of_bsn_set_ip_mask_t
 *
 * \ingroup of_bsn_set_ip_mask
 */
static inline void
of_bsn_set_ip_mask_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_set_l2_table_reply_t
 * @param obj An instance of type of_bsn_set_l2_table_reply_t
 *
 * \ingroup of_bsn_set_l2_table_reply
 */
static inline void
of_bsn_set_l2_table_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_set_l2_table_request_t
 * @param obj An instance of type of_bsn_set_l2_table_request_t
 *
 * \ingroup of_bsn_set_l2_table_request
 */
static inline void
of_bsn_set_l2_table_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_set_lacp_reply_t
 * @param obj An instance of type of_bsn_set_lacp_reply_t
 *
 * \ingroup of_bsn_set_lacp_reply
 */
static inline void
of_bsn_set_lacp_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_set_lacp_request_t
 * @param obj An instance of type of_bsn_set_lacp_request_t
 *
 * \ingroup of_bsn_set_lacp_request
 */
static inline void
of_bsn_set_lacp_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_set_mirroring_t
 * @param obj An instance of type of_bsn_set_mirroring_t
 *
 * \ingroup of_bsn_set_mirroring
 */
static inline void
of_bsn_set_mirroring_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_set_pktin_suppression_reply_t
 * @param obj An instance of type of_bsn_set_pktin_suppression_reply_t
 *
 * \ingroup of_bsn_set_pktin_suppression_reply
 */
static inline void
of_bsn_set_pktin_suppression_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_set_pktin_suppression_request_t
 * @param obj An instance of type of_bsn_set_pktin_suppression_request_t
 *
 * \ingroup of_bsn_set_pktin_suppression_request
 */
static inline void
of_bsn_set_pktin_suppression_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_set_switch_pipeline_reply_t
 * @param obj An instance of type of_bsn_set_switch_pipeline_reply_t
 *
 * \ingroup of_bsn_set_switch_pipeline_reply
 */
static inline void
of_bsn_set_switch_pipeline_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_set_switch_pipeline_request_t
 * @param obj An instance of type of_bsn_set_switch_pipeline_request_t
 *
 * \ingroup of_bsn_set_switch_pipeline_request
 */
static inline void
of_bsn_set_switch_pipeline_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_shell_command_t
 * @param obj An instance of type of_bsn_shell_command_t
 *
 * \ingroup of_bsn_shell_command
 */
static inline void
of_bsn_shell_command_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_shell_output_t
 * @param obj An instance of type of_bsn_shell_output_t
 *
 * \ingroup of_bsn_shell_output
 */
static inline void
of_bsn_shell_output_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_shell_status_t
 * @param obj An instance of type of_bsn_shell_status_t
 *
 * \ingroup of_bsn_shell_status
 */
static inline void
of_bsn_shell_status_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_stats_reply_t
 * @param obj An instance of type of_bsn_stats_reply_t
 *
 * \ingroup of_bsn_stats_reply
 */
static inline void
of_bsn_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_stats_request_t
 * @param obj An instance of type of_bsn_stats_request_t
 *
 * \ingroup of_bsn_stats_request
 */
static inline void
of_bsn_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_switch_pipeline_stats_reply_t
 * @param obj An instance of type of_bsn_switch_pipeline_stats_reply_t
 *
 * \ingroup of_bsn_switch_pipeline_stats_reply
 */
static inline void
of_bsn_switch_pipeline_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_switch_pipeline_stats_request_t
 * @param obj An instance of type of_bsn_switch_pipeline_stats_request_t
 *
 * \ingroup of_bsn_switch_pipeline_stats_request
 */
static inline void
of_bsn_switch_pipeline_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_table_checksum_stats_reply_t
 * @param obj An instance of type of_bsn_table_checksum_stats_reply_t
 *
 * \ingroup of_bsn_table_checksum_stats_reply
 */
static inline void
of_bsn_table_checksum_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_table_checksum_stats_request_t
 * @param obj An instance of type of_bsn_table_checksum_stats_request_t
 *
 * \ingroup of_bsn_table_checksum_stats_request
 */
static inline void
of_bsn_table_checksum_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_table_set_buckets_size_t
 * @param obj An instance of type of_bsn_table_set_buckets_size_t
 *
 * \ingroup of_bsn_table_set_buckets_size
 */
static inline void
of_bsn_table_set_buckets_size_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_time_reply_t
 * @param obj An instance of type of_bsn_time_reply_t
 *
 * \ingroup of_bsn_time_reply
 */
static inline void
of_bsn_time_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_time_request_t
 * @param obj An instance of type of_bsn_time_request_t
 *
 * \ingroup of_bsn_time_request
 */
static inline void
of_bsn_time_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_virtual_port_create_reply_t
 * @param obj An instance of type of_bsn_virtual_port_create_reply_t
 *
 * \ingroup of_bsn_virtual_port_create_reply
 */
static inline void
of_bsn_virtual_port_create_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_virtual_port_create_request_t
 * @param obj An instance of type of_bsn_virtual_port_create_request_t
 *
 * \ingroup of_bsn_virtual_port_create_request
 */
static inline void
of_bsn_virtual_port_create_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_virtual_port_remove_reply_t
 * @param obj An instance of type of_bsn_virtual_port_remove_reply_t
 *
 * \ingroup of_bsn_virtual_port_remove_reply
 */
static inline void
of_bsn_virtual_port_remove_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_virtual_port_remove_request_t
 * @param obj An instance of type of_bsn_virtual_port_remove_request_t
 *
 * \ingroup of_bsn_virtual_port_remove_request
 */
static inline void
of_bsn_virtual_port_remove_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_vlan_counter_stats_reply_t
 * @param obj An instance of type of_bsn_vlan_counter_stats_reply_t
 *
 * \ingroup of_bsn_vlan_counter_stats_reply
 */
static inline void
of_bsn_vlan_counter_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_vlan_counter_stats_request_t
 * @param obj An instance of type of_bsn_vlan_counter_stats_request_t
 *
 * \ingroup of_bsn_vlan_counter_stats_request
 */
static inline void
of_bsn_vlan_counter_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_vrf_counter_stats_reply_t
 * @param obj An instance of type of_bsn_vrf_counter_stats_reply_t
 *
 * \ingroup of_bsn_vrf_counter_stats_reply
 */
static inline void
of_bsn_vrf_counter_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_vrf_counter_stats_request_t
 * @param obj An instance of type of_bsn_vrf_counter_stats_request_t
 *
 * \ingroup of_bsn_vrf_counter_stats_request
 */
static inline void
of_bsn_vrf_counter_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bundle_add_msg_t
 * @param obj An instance of type of_bundle_add_msg_t
 *
 * \ingroup of_bundle_add_msg
 */
static inline void
of_bundle_add_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bundle_ctrl_msg_t
 * @param obj An instance of type of_bundle_ctrl_msg_t
 *
 * \ingroup of_bundle_ctrl_msg
 */
static inline void
of_bundle_ctrl_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bundle_failed_error_msg_t
 * @param obj An instance of type of_bundle_failed_error_msg_t
 *
 * \ingroup of_bundle_failed_error_msg
 */
static inline void
of_bundle_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_desc_stats_reply_t
 * @param obj An instance of type of_desc_stats_reply_t
 *
 * \ingroup of_desc_stats_reply
 */
static inline void
of_desc_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_desc_stats_request_t
 * @param obj An instance of type of_desc_stats_request_t
 *
 * \ingroup of_desc_stats_request
 */
static inline void
of_desc_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_echo_reply_t
 * @param obj An instance of type of_echo_reply_t
 *
 * \ingroup of_echo_reply
 */
static inline void
of_echo_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_echo_request_t
 * @param obj An instance of type of_echo_request_t
 *
 * \ingroup of_echo_request
 */
static inline void
of_echo_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_error_msg_t
 * @param obj An instance of type of_error_msg_t
 *
 * \ingroup of_error_msg
 */
static inline void
of_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_experimenter_t
 * @param obj An instance of type of_experimenter_t
 *
 * \ingroup of_experimenter
 */
static inline void
of_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_experimenter_error_msg_t
 * @param obj An instance of type of_experimenter_error_msg_t
 *
 * \ingroup of_experimenter_error_msg
 */
static inline void
of_experimenter_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_experimenter_stats_reply_t
 * @param obj An instance of type of_experimenter_stats_reply_t
 *
 * \ingroup of_experimenter_stats_reply
 */
static inline void
of_experimenter_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_experimenter_stats_request_t
 * @param obj An instance of type of_experimenter_stats_request_t
 *
 * \ingroup of_experimenter_stats_request
 */
static inline void
of_experimenter_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_features_reply_t
 * @param obj An instance of type of_features_reply_t
 *
 * \ingroup of_features_reply
 */
static inline void
of_features_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_features_request_t
 * @param obj An instance of type of_features_request_t
 *
 * \ingroup of_features_request
 */
static inline void
of_features_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_flow_add_t
 * @param obj An instance of type of_flow_add_t
 *
 * \ingroup of_flow_add
 */
static inline void
of_flow_add_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_flow_delete_t
 * @param obj An instance of type of_flow_delete_t
 *
 * \ingroup of_flow_delete
 */
static inline void
of_flow_delete_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_flow_delete_strict_t
 * @param obj An instance of type of_flow_delete_strict_t
 *
 * \ingroup of_flow_delete_strict
 */
static inline void
of_flow_delete_strict_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_flow_mod_t
 * @param obj An instance of type of_flow_mod_t
 *
 * \ingroup of_flow_mod
 */
static inline void
of_flow_mod_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_flow_mod_failed_error_msg_t
 * @param obj An instance of type of_flow_mod_failed_error_msg_t
 *
 * \ingroup of_flow_mod_failed_error_msg
 */
static inline void
of_flow_mod_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_flow_modify_t
 * @param obj An instance of type of_flow_modify_t
 *
 * \ingroup of_flow_modify
 */
static inline void
of_flow_modify_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_flow_modify_strict_t
 * @param obj An instance of type of_flow_modify_strict_t
 *
 * \ingroup of_flow_modify_strict
 */
static inline void
of_flow_modify_strict_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_flow_monitor_failed_error_msg_t
 * @param obj An instance of type of_flow_monitor_failed_error_msg_t
 *
 * \ingroup of_flow_monitor_failed_error_msg
 */
static inline void
of_flow_monitor_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_flow_removed_t
 * @param obj An instance of type of_flow_removed_t
 *
 * \ingroup of_flow_removed
 */
static inline void
of_flow_removed_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_flow_stats_reply_t
 * @param obj An instance of type of_flow_stats_reply_t
 *
 * \ingroup of_flow_stats_reply
 */
static inline void
of_flow_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_flow_stats_request_t
 * @param obj An instance of type of_flow_stats_request_t
 *
 * \ingroup of_flow_stats_request
 */
static inline void
of_flow_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_get_config_reply_t
 * @param obj An instance of type of_get_config_reply_t
 *
 * \ingroup of_get_config_reply
 */
static inline void
of_get_config_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_get_config_request_t
 * @param obj An instance of type of_get_config_request_t
 *
 * \ingroup of_get_config_request
 */
static inline void
of_get_config_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_add_t
 * @param obj An instance of type of_group_add_t
 *
 * \ingroup of_group_add
 */
static inline void
of_group_add_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_delete_t
 * @param obj An instance of type of_group_delete_t
 *
 * \ingroup of_group_delete
 */
static inline void
of_group_delete_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_desc_stats_reply_t
 * @param obj An instance of type of_group_desc_stats_reply_t
 *
 * \ingroup of_group_desc_stats_reply
 */
static inline void
of_group_desc_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_desc_stats_request_t
 * @param obj An instance of type of_group_desc_stats_request_t
 *
 * \ingroup of_group_desc_stats_request
 */
static inline void
of_group_desc_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_features_stats_reply_t
 * @param obj An instance of type of_group_features_stats_reply_t
 *
 * \ingroup of_group_features_stats_reply
 */
static inline void
of_group_features_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_features_stats_request_t
 * @param obj An instance of type of_group_features_stats_request_t
 *
 * \ingroup of_group_features_stats_request
 */
static inline void
of_group_features_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_mod_t
 * @param obj An instance of type of_group_mod_t
 *
 * \ingroup of_group_mod
 */
static inline void
of_group_mod_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_mod_failed_error_msg_t
 * @param obj An instance of type of_group_mod_failed_error_msg_t
 *
 * \ingroup of_group_mod_failed_error_msg
 */
static inline void
of_group_mod_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_modify_t
 * @param obj An instance of type of_group_modify_t
 *
 * \ingroup of_group_modify
 */
static inline void
of_group_modify_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_stats_reply_t
 * @param obj An instance of type of_group_stats_reply_t
 *
 * \ingroup of_group_stats_reply
 */
static inline void
of_group_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_stats_request_t
 * @param obj An instance of type of_group_stats_request_t
 *
 * \ingroup of_group_stats_request
 */
static inline void
of_group_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_header_t
 * @param obj An instance of type of_header_t
 *
 * \ingroup of_header
 */
static inline void
of_header_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_hello_t
 * @param obj An instance of type of_hello_t
 *
 * \ingroup of_hello
 */
static inline void
of_hello_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_hello_failed_error_msg_t
 * @param obj An instance of type of_hello_failed_error_msg_t
 *
 * \ingroup of_hello_failed_error_msg
 */
static inline void
of_hello_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_config_stats_reply_t
 * @param obj An instance of type of_meter_config_stats_reply_t
 *
 * \ingroup of_meter_config_stats_reply
 */
static inline void
of_meter_config_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_config_stats_request_t
 * @param obj An instance of type of_meter_config_stats_request_t
 *
 * \ingroup of_meter_config_stats_request
 */
static inline void
of_meter_config_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_features_stats_reply_t
 * @param obj An instance of type of_meter_features_stats_reply_t
 *
 * \ingroup of_meter_features_stats_reply
 */
static inline void
of_meter_features_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_features_stats_request_t
 * @param obj An instance of type of_meter_features_stats_request_t
 *
 * \ingroup of_meter_features_stats_request
 */
static inline void
of_meter_features_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_mod_t
 * @param obj An instance of type of_meter_mod_t
 *
 * \ingroup of_meter_mod
 */
static inline void
of_meter_mod_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_mod_failed_error_msg_t
 * @param obj An instance of type of_meter_mod_failed_error_msg_t
 *
 * \ingroup of_meter_mod_failed_error_msg
 */
static inline void
of_meter_mod_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_stats_reply_t
 * @param obj An instance of type of_meter_stats_reply_t
 *
 * \ingroup of_meter_stats_reply
 */
static inline void
of_meter_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_stats_request_t
 * @param obj An instance of type of_meter_stats_request_t
 *
 * \ingroup of_meter_stats_request
 */
static inline void
of_meter_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_nicira_controller_role_reply_t
 * @param obj An instance of type of_nicira_controller_role_reply_t
 *
 * \ingroup of_nicira_controller_role_reply
 */
static inline void
of_nicira_controller_role_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_nicira_controller_role_request_t
 * @param obj An instance of type of_nicira_controller_role_request_t
 *
 * \ingroup of_nicira_controller_role_request
 */
static inline void
of_nicira_controller_role_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_nicira_header_t
 * @param obj An instance of type of_nicira_header_t
 *
 * \ingroup of_nicira_header
 */
static inline void
of_nicira_header_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_packet_in_t
 * @param obj An instance of type of_packet_in_t
 *
 * \ingroup of_packet_in
 */
static inline void
of_packet_in_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_packet_out_t
 * @param obj An instance of type of_packet_out_t
 *
 * \ingroup of_packet_out
 */
static inline void
of_packet_out_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_desc_stats_reply_t
 * @param obj An instance of type of_port_desc_stats_reply_t
 *
 * \ingroup of_port_desc_stats_reply
 */
static inline void
of_port_desc_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_desc_stats_request_t
 * @param obj An instance of type of_port_desc_stats_request_t
 *
 * \ingroup of_port_desc_stats_request
 */
static inline void
of_port_desc_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_mod_t
 * @param obj An instance of type of_port_mod_t
 *
 * \ingroup of_port_mod
 */
static inline void
of_port_mod_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_mod_failed_error_msg_t
 * @param obj An instance of type of_port_mod_failed_error_msg_t
 *
 * \ingroup of_port_mod_failed_error_msg
 */
static inline void
of_port_mod_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_stats_reply_t
 * @param obj An instance of type of_port_stats_reply_t
 *
 * \ingroup of_port_stats_reply
 */
static inline void
of_port_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_stats_request_t
 * @param obj An instance of type of_port_stats_request_t
 *
 * \ingroup of_port_stats_request
 */
static inline void
of_port_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_status_t
 * @param obj An instance of type of_port_status_t
 *
 * \ingroup of_port_status
 */
static inline void
of_port_status_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_desc_stats_reply_t
 * @param obj An instance of type of_queue_desc_stats_reply_t
 *
 * \ingroup of_queue_desc_stats_reply
 */
static inline void
of_queue_desc_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_desc_stats_request_t
 * @param obj An instance of type of_queue_desc_stats_request_t
 *
 * \ingroup of_queue_desc_stats_request
 */
static inline void
of_queue_desc_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_get_config_reply_t
 * @param obj An instance of type of_queue_get_config_reply_t
 *
 * \ingroup of_queue_get_config_reply
 */
static inline void
of_queue_get_config_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_get_config_request_t
 * @param obj An instance of type of_queue_get_config_request_t
 *
 * \ingroup of_queue_get_config_request
 */
static inline void
of_queue_get_config_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_op_failed_error_msg_t
 * @param obj An instance of type of_queue_op_failed_error_msg_t
 *
 * \ingroup of_queue_op_failed_error_msg
 */
static inline void
of_queue_op_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_stats_reply_t
 * @param obj An instance of type of_queue_stats_reply_t
 *
 * \ingroup of_queue_stats_reply
 */
static inline void
of_queue_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_stats_request_t
 * @param obj An instance of type of_queue_stats_request_t
 *
 * \ingroup of_queue_stats_request
 */
static inline void
of_queue_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_requestforward_t
 * @param obj An instance of type of_requestforward_t
 *
 * \ingroup of_requestforward
 */
static inline void
of_requestforward_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_role_reply_t
 * @param obj An instance of type of_role_reply_t
 *
 * \ingroup of_role_reply
 */
static inline void
of_role_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_role_request_t
 * @param obj An instance of type of_role_request_t
 *
 * \ingroup of_role_request
 */
static inline void
of_role_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_role_request_failed_error_msg_t
 * @param obj An instance of type of_role_request_failed_error_msg_t
 *
 * \ingroup of_role_request_failed_error_msg
 */
static inline void
of_role_request_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_role_status_t
 * @param obj An instance of type of_role_status_t
 *
 * \ingroup of_role_status
 */
static inline void
of_role_status_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_set_config_t
 * @param obj An instance of type of_set_config_t
 *
 * \ingroup of_set_config
 */
static inline void
of_set_config_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_stats_reply_t
 * @param obj An instance of type of_stats_reply_t
 *
 * \ingroup of_stats_reply
 */
static inline void
of_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_stats_request_t
 * @param obj An instance of type of_stats_request_t
 *
 * \ingroup of_stats_request
 */
static inline void
of_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_switch_config_failed_error_msg_t
 * @param obj An instance of type of_switch_config_failed_error_msg_t
 *
 * \ingroup of_switch_config_failed_error_msg
 */
static inline void
of_switch_config_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_desc_stats_reply_t
 * @param obj An instance of type of_table_desc_stats_reply_t
 *
 * \ingroup of_table_desc_stats_reply
 */
static inline void
of_table_desc_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_desc_stats_request_t
 * @param obj An instance of type of_table_desc_stats_request_t
 *
 * \ingroup of_table_desc_stats_request
 */
static inline void
of_table_desc_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_features_failed_error_msg_t
 * @param obj An instance of type of_table_features_failed_error_msg_t
 *
 * \ingroup of_table_features_failed_error_msg
 */
static inline void
of_table_features_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_features_stats_reply_t
 * @param obj An instance of type of_table_features_stats_reply_t
 *
 * \ingroup of_table_features_stats_reply
 */
static inline void
of_table_features_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_features_stats_request_t
 * @param obj An instance of type of_table_features_stats_request_t
 *
 * \ingroup of_table_features_stats_request
 */
static inline void
of_table_features_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_mod_t
 * @param obj An instance of type of_table_mod_t
 *
 * \ingroup of_table_mod
 */
static inline void
of_table_mod_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_mod_failed_error_msg_t
 * @param obj An instance of type of_table_mod_failed_error_msg_t
 *
 * \ingroup of_table_mod_failed_error_msg
 */
static inline void
of_table_mod_failed_error_msg_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_stats_reply_t
 * @param obj An instance of type of_table_stats_reply_t
 *
 * \ingroup of_table_stats_reply
 */
static inline void
of_table_stats_reply_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_stats_request_t
 * @param obj An instance of type of_table_stats_request_t
 *
 * \ingroup of_table_stats_request
 */
static inline void
of_table_stats_request_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_status_t
 * @param obj An instance of type of_table_status_t
 *
 * \ingroup of_table_status
 */
static inline void
of_table_status_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_t
 * @param obj An instance of type of_action_t
 *
 * \ingroup of_action
 */
static inline void
of_action_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_bsn_t
 * @param obj An instance of type of_action_bsn_t
 *
 * \ingroup of_action_bsn
 */
static inline void
of_action_bsn_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_bsn_checksum_t
 * @param obj An instance of type of_action_bsn_checksum_t
 *
 * \ingroup of_action_bsn_checksum
 */
static inline void
of_action_bsn_checksum_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_bsn_gentable_t
 * @param obj An instance of type of_action_bsn_gentable_t
 *
 * \ingroup of_action_bsn_gentable
 */
static inline void
of_action_bsn_gentable_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_bsn_mirror_t
 * @param obj An instance of type of_action_bsn_mirror_t
 *
 * \ingroup of_action_bsn_mirror
 */
static inline void
of_action_bsn_mirror_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_bsn_set_tunnel_dst_t
 * @param obj An instance of type of_action_bsn_set_tunnel_dst_t
 *
 * \ingroup of_action_bsn_set_tunnel_dst
 */
static inline void
of_action_bsn_set_tunnel_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_copy_ttl_in_t
 * @param obj An instance of type of_action_copy_ttl_in_t
 *
 * \ingroup of_action_copy_ttl_in
 */
static inline void
of_action_copy_ttl_in_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_copy_ttl_out_t
 * @param obj An instance of type of_action_copy_ttl_out_t
 *
 * \ingroup of_action_copy_ttl_out
 */
static inline void
of_action_copy_ttl_out_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_dec_mpls_ttl_t
 * @param obj An instance of type of_action_dec_mpls_ttl_t
 *
 * \ingroup of_action_dec_mpls_ttl
 */
static inline void
of_action_dec_mpls_ttl_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_dec_nw_ttl_t
 * @param obj An instance of type of_action_dec_nw_ttl_t
 *
 * \ingroup of_action_dec_nw_ttl
 */
static inline void
of_action_dec_nw_ttl_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_enqueue_t
 * @param obj An instance of type of_action_enqueue_t
 *
 * \ingroup of_action_enqueue
 */
static inline void
of_action_enqueue_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_experimenter_t
 * @param obj An instance of type of_action_experimenter_t
 *
 * \ingroup of_action_experimenter
 */
static inline void
of_action_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_group_t
 * @param obj An instance of type of_action_group_t
 *
 * \ingroup of_action_group
 */
static inline void
of_action_group_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_t
 * @param obj An instance of type of_action_id_t
 *
 * \ingroup of_action_id
 */
static inline void
of_action_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_bsn_t
 * @param obj An instance of type of_action_id_bsn_t
 *
 * \ingroup of_action_id_bsn
 */
static inline void
of_action_id_bsn_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_bsn_checksum_t
 * @param obj An instance of type of_action_id_bsn_checksum_t
 *
 * \ingroup of_action_id_bsn_checksum
 */
static inline void
of_action_id_bsn_checksum_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_bsn_gentable_t
 * @param obj An instance of type of_action_id_bsn_gentable_t
 *
 * \ingroup of_action_id_bsn_gentable
 */
static inline void
of_action_id_bsn_gentable_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_bsn_mirror_t
 * @param obj An instance of type of_action_id_bsn_mirror_t
 *
 * \ingroup of_action_id_bsn_mirror
 */
static inline void
of_action_id_bsn_mirror_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_bsn_set_tunnel_dst_t
 * @param obj An instance of type of_action_id_bsn_set_tunnel_dst_t
 *
 * \ingroup of_action_id_bsn_set_tunnel_dst
 */
static inline void
of_action_id_bsn_set_tunnel_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_copy_ttl_in_t
 * @param obj An instance of type of_action_id_copy_ttl_in_t
 *
 * \ingroup of_action_id_copy_ttl_in
 */
static inline void
of_action_id_copy_ttl_in_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_copy_ttl_out_t
 * @param obj An instance of type of_action_id_copy_ttl_out_t
 *
 * \ingroup of_action_id_copy_ttl_out
 */
static inline void
of_action_id_copy_ttl_out_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_dec_mpls_ttl_t
 * @param obj An instance of type of_action_id_dec_mpls_ttl_t
 *
 * \ingroup of_action_id_dec_mpls_ttl
 */
static inline void
of_action_id_dec_mpls_ttl_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_dec_nw_ttl_t
 * @param obj An instance of type of_action_id_dec_nw_ttl_t
 *
 * \ingroup of_action_id_dec_nw_ttl
 */
static inline void
of_action_id_dec_nw_ttl_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_experimenter_t
 * @param obj An instance of type of_action_id_experimenter_t
 *
 * \ingroup of_action_id_experimenter
 */
static inline void
of_action_id_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_group_t
 * @param obj An instance of type of_action_id_group_t
 *
 * \ingroup of_action_id_group
 */
static inline void
of_action_id_group_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_nicira_t
 * @param obj An instance of type of_action_id_nicira_t
 *
 * \ingroup of_action_id_nicira
 */
static inline void
of_action_id_nicira_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_nicira_dec_ttl_t
 * @param obj An instance of type of_action_id_nicira_dec_ttl_t
 *
 * \ingroup of_action_id_nicira_dec_ttl
 */
static inline void
of_action_id_nicira_dec_ttl_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_output_t
 * @param obj An instance of type of_action_id_output_t
 *
 * \ingroup of_action_id_output
 */
static inline void
of_action_id_output_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_pop_mpls_t
 * @param obj An instance of type of_action_id_pop_mpls_t
 *
 * \ingroup of_action_id_pop_mpls
 */
static inline void
of_action_id_pop_mpls_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_pop_pbb_t
 * @param obj An instance of type of_action_id_pop_pbb_t
 *
 * \ingroup of_action_id_pop_pbb
 */
static inline void
of_action_id_pop_pbb_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_pop_vlan_t
 * @param obj An instance of type of_action_id_pop_vlan_t
 *
 * \ingroup of_action_id_pop_vlan
 */
static inline void
of_action_id_pop_vlan_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_push_mpls_t
 * @param obj An instance of type of_action_id_push_mpls_t
 *
 * \ingroup of_action_id_push_mpls
 */
static inline void
of_action_id_push_mpls_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_push_pbb_t
 * @param obj An instance of type of_action_id_push_pbb_t
 *
 * \ingroup of_action_id_push_pbb
 */
static inline void
of_action_id_push_pbb_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_push_vlan_t
 * @param obj An instance of type of_action_id_push_vlan_t
 *
 * \ingroup of_action_id_push_vlan
 */
static inline void
of_action_id_push_vlan_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_set_field_t
 * @param obj An instance of type of_action_id_set_field_t
 *
 * \ingroup of_action_id_set_field
 */
static inline void
of_action_id_set_field_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_set_mpls_ttl_t
 * @param obj An instance of type of_action_id_set_mpls_ttl_t
 *
 * \ingroup of_action_id_set_mpls_ttl
 */
static inline void
of_action_id_set_mpls_ttl_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_set_nw_ttl_t
 * @param obj An instance of type of_action_id_set_nw_ttl_t
 *
 * \ingroup of_action_id_set_nw_ttl
 */
static inline void
of_action_id_set_nw_ttl_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_id_set_queue_t
 * @param obj An instance of type of_action_id_set_queue_t
 *
 * \ingroup of_action_id_set_queue
 */
static inline void
of_action_id_set_queue_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_nicira_t
 * @param obj An instance of type of_action_nicira_t
 *
 * \ingroup of_action_nicira
 */
static inline void
of_action_nicira_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_nicira_dec_ttl_t
 * @param obj An instance of type of_action_nicira_dec_ttl_t
 *
 * \ingroup of_action_nicira_dec_ttl
 */
static inline void
of_action_nicira_dec_ttl_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_output_t
 * @param obj An instance of type of_action_output_t
 *
 * \ingroup of_action_output
 */
static inline void
of_action_output_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_pop_mpls_t
 * @param obj An instance of type of_action_pop_mpls_t
 *
 * \ingroup of_action_pop_mpls
 */
static inline void
of_action_pop_mpls_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_pop_pbb_t
 * @param obj An instance of type of_action_pop_pbb_t
 *
 * \ingroup of_action_pop_pbb
 */
static inline void
of_action_pop_pbb_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_pop_vlan_t
 * @param obj An instance of type of_action_pop_vlan_t
 *
 * \ingroup of_action_pop_vlan
 */
static inline void
of_action_pop_vlan_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_push_mpls_t
 * @param obj An instance of type of_action_push_mpls_t
 *
 * \ingroup of_action_push_mpls
 */
static inline void
of_action_push_mpls_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_push_pbb_t
 * @param obj An instance of type of_action_push_pbb_t
 *
 * \ingroup of_action_push_pbb
 */
static inline void
of_action_push_pbb_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_push_vlan_t
 * @param obj An instance of type of_action_push_vlan_t
 *
 * \ingroup of_action_push_vlan
 */
static inline void
of_action_push_vlan_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_dl_dst_t
 * @param obj An instance of type of_action_set_dl_dst_t
 *
 * \ingroup of_action_set_dl_dst
 */
static inline void
of_action_set_dl_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_dl_src_t
 * @param obj An instance of type of_action_set_dl_src_t
 *
 * \ingroup of_action_set_dl_src
 */
static inline void
of_action_set_dl_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_field_t
 * @param obj An instance of type of_action_set_field_t
 *
 * \ingroup of_action_set_field
 */
static inline void
of_action_set_field_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_mpls_label_t
 * @param obj An instance of type of_action_set_mpls_label_t
 *
 * \ingroup of_action_set_mpls_label
 */
static inline void
of_action_set_mpls_label_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_mpls_tc_t
 * @param obj An instance of type of_action_set_mpls_tc_t
 *
 * \ingroup of_action_set_mpls_tc
 */
static inline void
of_action_set_mpls_tc_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_mpls_ttl_t
 * @param obj An instance of type of_action_set_mpls_ttl_t
 *
 * \ingroup of_action_set_mpls_ttl
 */
static inline void
of_action_set_mpls_ttl_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_nw_dst_t
 * @param obj An instance of type of_action_set_nw_dst_t
 *
 * \ingroup of_action_set_nw_dst
 */
static inline void
of_action_set_nw_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_nw_ecn_t
 * @param obj An instance of type of_action_set_nw_ecn_t
 *
 * \ingroup of_action_set_nw_ecn
 */
static inline void
of_action_set_nw_ecn_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_nw_src_t
 * @param obj An instance of type of_action_set_nw_src_t
 *
 * \ingroup of_action_set_nw_src
 */
static inline void
of_action_set_nw_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_nw_tos_t
 * @param obj An instance of type of_action_set_nw_tos_t
 *
 * \ingroup of_action_set_nw_tos
 */
static inline void
of_action_set_nw_tos_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_nw_ttl_t
 * @param obj An instance of type of_action_set_nw_ttl_t
 *
 * \ingroup of_action_set_nw_ttl
 */
static inline void
of_action_set_nw_ttl_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_queue_t
 * @param obj An instance of type of_action_set_queue_t
 *
 * \ingroup of_action_set_queue
 */
static inline void
of_action_set_queue_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_tp_dst_t
 * @param obj An instance of type of_action_set_tp_dst_t
 *
 * \ingroup of_action_set_tp_dst
 */
static inline void
of_action_set_tp_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_tp_src_t
 * @param obj An instance of type of_action_set_tp_src_t
 *
 * \ingroup of_action_set_tp_src
 */
static inline void
of_action_set_tp_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_vlan_pcp_t
 * @param obj An instance of type of_action_set_vlan_pcp_t
 *
 * \ingroup of_action_set_vlan_pcp
 */
static inline void
of_action_set_vlan_pcp_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_set_vlan_vid_t
 * @param obj An instance of type of_action_set_vlan_vid_t
 *
 * \ingroup of_action_set_vlan_vid
 */
static inline void
of_action_set_vlan_vid_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_action_strip_vlan_t
 * @param obj An instance of type of_action_strip_vlan_t
 *
 * \ingroup of_action_strip_vlan
 */
static inline void
of_action_strip_vlan_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_t
 * @param obj An instance of type of_async_config_prop_t
 *
 * \ingroup of_async_config_prop
 */
static inline void
of_async_config_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_experimenter_master_t
 * @param obj An instance of type of_async_config_prop_experimenter_master_t
 *
 * \ingroup of_async_config_prop_experimenter_master
 */
static inline void
of_async_config_prop_experimenter_master_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_experimenter_slave_t
 * @param obj An instance of type of_async_config_prop_experimenter_slave_t
 *
 * \ingroup of_async_config_prop_experimenter_slave
 */
static inline void
of_async_config_prop_experimenter_slave_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_flow_removed_master_t
 * @param obj An instance of type of_async_config_prop_flow_removed_master_t
 *
 * \ingroup of_async_config_prop_flow_removed_master
 */
static inline void
of_async_config_prop_flow_removed_master_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_flow_removed_slave_t
 * @param obj An instance of type of_async_config_prop_flow_removed_slave_t
 *
 * \ingroup of_async_config_prop_flow_removed_slave
 */
static inline void
of_async_config_prop_flow_removed_slave_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_packet_in_master_t
 * @param obj An instance of type of_async_config_prop_packet_in_master_t
 *
 * \ingroup of_async_config_prop_packet_in_master
 */
static inline void
of_async_config_prop_packet_in_master_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_packet_in_slave_t
 * @param obj An instance of type of_async_config_prop_packet_in_slave_t
 *
 * \ingroup of_async_config_prop_packet_in_slave
 */
static inline void
of_async_config_prop_packet_in_slave_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_port_status_master_t
 * @param obj An instance of type of_async_config_prop_port_status_master_t
 *
 * \ingroup of_async_config_prop_port_status_master
 */
static inline void
of_async_config_prop_port_status_master_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_port_status_slave_t
 * @param obj An instance of type of_async_config_prop_port_status_slave_t
 *
 * \ingroup of_async_config_prop_port_status_slave
 */
static inline void
of_async_config_prop_port_status_slave_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_requestforward_master_t
 * @param obj An instance of type of_async_config_prop_requestforward_master_t
 *
 * \ingroup of_async_config_prop_requestforward_master
 */
static inline void
of_async_config_prop_requestforward_master_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_requestforward_slave_t
 * @param obj An instance of type of_async_config_prop_requestforward_slave_t
 *
 * \ingroup of_async_config_prop_requestforward_slave
 */
static inline void
of_async_config_prop_requestforward_slave_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_role_status_master_t
 * @param obj An instance of type of_async_config_prop_role_status_master_t
 *
 * \ingroup of_async_config_prop_role_status_master
 */
static inline void
of_async_config_prop_role_status_master_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_role_status_slave_t
 * @param obj An instance of type of_async_config_prop_role_status_slave_t
 *
 * \ingroup of_async_config_prop_role_status_slave
 */
static inline void
of_async_config_prop_role_status_slave_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_table_status_master_t
 * @param obj An instance of type of_async_config_prop_table_status_master_t
 *
 * \ingroup of_async_config_prop_table_status_master
 */
static inline void
of_async_config_prop_table_status_master_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_async_config_prop_table_status_slave_t
 * @param obj An instance of type of_async_config_prop_table_status_slave_t
 *
 * \ingroup of_async_config_prop_table_status_slave
 */
static inline void
of_async_config_prop_table_status_slave_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_controller_connection_t
 * @param obj An instance of type of_bsn_controller_connection_t
 *
 * \ingroup of_bsn_controller_connection
 */
static inline void
of_bsn_controller_connection_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_debug_counter_desc_stats_entry_t
 * @param obj An instance of type of_bsn_debug_counter_desc_stats_entry_t
 *
 * \ingroup of_bsn_debug_counter_desc_stats_entry
 */
static inline void
of_bsn_debug_counter_desc_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_debug_counter_stats_entry_t
 * @param obj An instance of type of_bsn_debug_counter_stats_entry_t
 *
 * \ingroup of_bsn_debug_counter_stats_entry
 */
static inline void
of_bsn_debug_counter_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_flow_checksum_bucket_stats_entry_t
 * @param obj An instance of type of_bsn_flow_checksum_bucket_stats_entry_t
 *
 * \ingroup of_bsn_flow_checksum_bucket_stats_entry
 */
static inline void
of_bsn_flow_checksum_bucket_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_generic_stats_entry_t
 * @param obj An instance of type of_bsn_generic_stats_entry_t
 *
 * \ingroup of_bsn_generic_stats_entry
 */
static inline void
of_bsn_generic_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_bucket_stats_entry_t
 * @param obj An instance of type of_bsn_gentable_bucket_stats_entry_t
 *
 * \ingroup of_bsn_gentable_bucket_stats_entry
 */
static inline void
of_bsn_gentable_bucket_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_desc_stats_entry_t
 * @param obj An instance of type of_bsn_gentable_desc_stats_entry_t
 *
 * \ingroup of_bsn_gentable_desc_stats_entry
 */
static inline void
of_bsn_gentable_desc_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_entry_desc_stats_entry_t
 * @param obj An instance of type of_bsn_gentable_entry_desc_stats_entry_t
 *
 * \ingroup of_bsn_gentable_entry_desc_stats_entry
 */
static inline void
of_bsn_gentable_entry_desc_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_entry_stats_entry_t
 * @param obj An instance of type of_bsn_gentable_entry_stats_entry_t
 *
 * \ingroup of_bsn_gentable_entry_stats_entry
 */
static inline void
of_bsn_gentable_entry_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_gentable_stats_entry_t
 * @param obj An instance of type of_bsn_gentable_stats_entry_t
 *
 * \ingroup of_bsn_gentable_stats_entry
 */
static inline void
of_bsn_gentable_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_interface_t
 * @param obj An instance of type of_bsn_interface_t
 *
 * \ingroup of_bsn_interface
 */
static inline void
of_bsn_interface_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_lacp_stats_entry_t
 * @param obj An instance of type of_bsn_lacp_stats_entry_t
 *
 * \ingroup of_bsn_lacp_stats_entry
 */
static inline void
of_bsn_lacp_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_port_counter_stats_entry_t
 * @param obj An instance of type of_bsn_port_counter_stats_entry_t
 *
 * \ingroup of_bsn_port_counter_stats_entry
 */
static inline void
of_bsn_port_counter_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_switch_pipeline_stats_entry_t
 * @param obj An instance of type of_bsn_switch_pipeline_stats_entry_t
 *
 * \ingroup of_bsn_switch_pipeline_stats_entry
 */
static inline void
of_bsn_switch_pipeline_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_table_checksum_stats_entry_t
 * @param obj An instance of type of_bsn_table_checksum_stats_entry_t
 *
 * \ingroup of_bsn_table_checksum_stats_entry
 */
static inline void
of_bsn_table_checksum_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_t
 * @param obj An instance of type of_bsn_tlv_t
 *
 * \ingroup of_bsn_tlv
 */
static inline void
of_bsn_tlv_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_actor_key_t
 * @param obj An instance of type of_bsn_tlv_actor_key_t
 *
 * \ingroup of_bsn_tlv_actor_key
 */
static inline void
of_bsn_tlv_actor_key_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_actor_port_num_t
 * @param obj An instance of type of_bsn_tlv_actor_port_num_t
 *
 * \ingroup of_bsn_tlv_actor_port_num
 */
static inline void
of_bsn_tlv_actor_port_num_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_actor_port_priority_t
 * @param obj An instance of type of_bsn_tlv_actor_port_priority_t
 *
 * \ingroup of_bsn_tlv_actor_port_priority
 */
static inline void
of_bsn_tlv_actor_port_priority_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_actor_state_t
 * @param obj An instance of type of_bsn_tlv_actor_state_t
 *
 * \ingroup of_bsn_tlv_actor_state
 */
static inline void
of_bsn_tlv_actor_state_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_actor_system_mac_t
 * @param obj An instance of type of_bsn_tlv_actor_system_mac_t
 *
 * \ingroup of_bsn_tlv_actor_system_mac
 */
static inline void
of_bsn_tlv_actor_system_mac_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_actor_system_priority_t
 * @param obj An instance of type of_bsn_tlv_actor_system_priority_t
 *
 * \ingroup of_bsn_tlv_actor_system_priority
 */
static inline void
of_bsn_tlv_actor_system_priority_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_broadcast_query_timeout_t
 * @param obj An instance of type of_bsn_tlv_broadcast_query_timeout_t
 *
 * \ingroup of_bsn_tlv_broadcast_query_timeout
 */
static inline void
of_bsn_tlv_broadcast_query_timeout_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_bucket_t
 * @param obj An instance of type of_bsn_tlv_bucket_t
 *
 * \ingroup of_bsn_tlv_bucket
 */
static inline void
of_bsn_tlv_bucket_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_circuit_id_t
 * @param obj An instance of type of_bsn_tlv_circuit_id_t
 *
 * \ingroup of_bsn_tlv_circuit_id
 */
static inline void
of_bsn_tlv_circuit_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_convergence_status_t
 * @param obj An instance of type of_bsn_tlv_convergence_status_t
 *
 * \ingroup of_bsn_tlv_convergence_status
 */
static inline void
of_bsn_tlv_convergence_status_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_crc_enabled_t
 * @param obj An instance of type of_bsn_tlv_crc_enabled_t
 *
 * \ingroup of_bsn_tlv_crc_enabled
 */
static inline void
of_bsn_tlv_crc_enabled_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_data_t
 * @param obj An instance of type of_bsn_tlv_data_t
 *
 * \ingroup of_bsn_tlv_data
 */
static inline void
of_bsn_tlv_data_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_eth_dst_t
 * @param obj An instance of type of_bsn_tlv_eth_dst_t
 *
 * \ingroup of_bsn_tlv_eth_dst
 */
static inline void
of_bsn_tlv_eth_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_eth_src_t
 * @param obj An instance of type of_bsn_tlv_eth_src_t
 *
 * \ingroup of_bsn_tlv_eth_src
 */
static inline void
of_bsn_tlv_eth_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_external_gateway_ip_t
 * @param obj An instance of type of_bsn_tlv_external_gateway_ip_t
 *
 * \ingroup of_bsn_tlv_external_gateway_ip
 */
static inline void
of_bsn_tlv_external_gateway_ip_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_external_gateway_mac_t
 * @param obj An instance of type of_bsn_tlv_external_gateway_mac_t
 *
 * \ingroup of_bsn_tlv_external_gateway_mac
 */
static inline void
of_bsn_tlv_external_gateway_mac_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_external_ip_t
 * @param obj An instance of type of_bsn_tlv_external_ip_t
 *
 * \ingroup of_bsn_tlv_external_ip
 */
static inline void
of_bsn_tlv_external_ip_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_external_mac_t
 * @param obj An instance of type of_bsn_tlv_external_mac_t
 *
 * \ingroup of_bsn_tlv_external_mac
 */
static inline void
of_bsn_tlv_external_mac_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_external_netmask_t
 * @param obj An instance of type of_bsn_tlv_external_netmask_t
 *
 * \ingroup of_bsn_tlv_external_netmask
 */
static inline void
of_bsn_tlv_external_netmask_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_header_size_t
 * @param obj An instance of type of_bsn_tlv_header_size_t
 *
 * \ingroup of_bsn_tlv_header_size
 */
static inline void
of_bsn_tlv_header_size_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_icmp_code_t
 * @param obj An instance of type of_bsn_tlv_icmp_code_t
 *
 * \ingroup of_bsn_tlv_icmp_code
 */
static inline void
of_bsn_tlv_icmp_code_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_icmp_id_t
 * @param obj An instance of type of_bsn_tlv_icmp_id_t
 *
 * \ingroup of_bsn_tlv_icmp_id
 */
static inline void
of_bsn_tlv_icmp_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_icmp_type_t
 * @param obj An instance of type of_bsn_tlv_icmp_type_t
 *
 * \ingroup of_bsn_tlv_icmp_type
 */
static inline void
of_bsn_tlv_icmp_type_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_idle_notification_t
 * @param obj An instance of type of_bsn_tlv_idle_notification_t
 *
 * \ingroup of_bsn_tlv_idle_notification
 */
static inline void
of_bsn_tlv_idle_notification_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_idle_time_t
 * @param obj An instance of type of_bsn_tlv_idle_time_t
 *
 * \ingroup of_bsn_tlv_idle_time
 */
static inline void
of_bsn_tlv_idle_time_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_idle_timeout_t
 * @param obj An instance of type of_bsn_tlv_idle_timeout_t
 *
 * \ingroup of_bsn_tlv_idle_timeout
 */
static inline void
of_bsn_tlv_idle_timeout_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_internal_gateway_mac_t
 * @param obj An instance of type of_bsn_tlv_internal_gateway_mac_t
 *
 * \ingroup of_bsn_tlv_internal_gateway_mac
 */
static inline void
of_bsn_tlv_internal_gateway_mac_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_internal_mac_t
 * @param obj An instance of type of_bsn_tlv_internal_mac_t
 *
 * \ingroup of_bsn_tlv_internal_mac
 */
static inline void
of_bsn_tlv_internal_mac_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_interval_t
 * @param obj An instance of type of_bsn_tlv_interval_t
 *
 * \ingroup of_bsn_tlv_interval
 */
static inline void
of_bsn_tlv_interval_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_ip_proto_t
 * @param obj An instance of type of_bsn_tlv_ip_proto_t
 *
 * \ingroup of_bsn_tlv_ip_proto
 */
static inline void
of_bsn_tlv_ip_proto_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_ipv4_t
 * @param obj An instance of type of_bsn_tlv_ipv4_t
 *
 * \ingroup of_bsn_tlv_ipv4
 */
static inline void
of_bsn_tlv_ipv4_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_ipv4_dst_t
 * @param obj An instance of type of_bsn_tlv_ipv4_dst_t
 *
 * \ingroup of_bsn_tlv_ipv4_dst
 */
static inline void
of_bsn_tlv_ipv4_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_ipv4_netmask_t
 * @param obj An instance of type of_bsn_tlv_ipv4_netmask_t
 *
 * \ingroup of_bsn_tlv_ipv4_netmask
 */
static inline void
of_bsn_tlv_ipv4_netmask_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_ipv4_src_t
 * @param obj An instance of type of_bsn_tlv_ipv4_src_t
 *
 * \ingroup of_bsn_tlv_ipv4_src
 */
static inline void
of_bsn_tlv_ipv4_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_mac_t
 * @param obj An instance of type of_bsn_tlv_mac_t
 *
 * \ingroup of_bsn_tlv_mac
 */
static inline void
of_bsn_tlv_mac_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_mac_mask_t
 * @param obj An instance of type of_bsn_tlv_mac_mask_t
 *
 * \ingroup of_bsn_tlv_mac_mask
 */
static inline void
of_bsn_tlv_mac_mask_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_miss_packets_t
 * @param obj An instance of type of_bsn_tlv_miss_packets_t
 *
 * \ingroup of_bsn_tlv_miss_packets
 */
static inline void
of_bsn_tlv_miss_packets_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_mpls_control_word_t
 * @param obj An instance of type of_bsn_tlv_mpls_control_word_t
 *
 * \ingroup of_bsn_tlv_mpls_control_word
 */
static inline void
of_bsn_tlv_mpls_control_word_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_mpls_label_t
 * @param obj An instance of type of_bsn_tlv_mpls_label_t
 *
 * \ingroup of_bsn_tlv_mpls_label
 */
static inline void
of_bsn_tlv_mpls_label_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_mpls_sequenced_t
 * @param obj An instance of type of_bsn_tlv_mpls_sequenced_t
 *
 * \ingroup of_bsn_tlv_mpls_sequenced
 */
static inline void
of_bsn_tlv_mpls_sequenced_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_name_t
 * @param obj An instance of type of_bsn_tlv_name_t
 *
 * \ingroup of_bsn_tlv_name
 */
static inline void
of_bsn_tlv_name_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_partner_key_t
 * @param obj An instance of type of_bsn_tlv_partner_key_t
 *
 * \ingroup of_bsn_tlv_partner_key
 */
static inline void
of_bsn_tlv_partner_key_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_partner_port_num_t
 * @param obj An instance of type of_bsn_tlv_partner_port_num_t
 *
 * \ingroup of_bsn_tlv_partner_port_num
 */
static inline void
of_bsn_tlv_partner_port_num_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_partner_port_priority_t
 * @param obj An instance of type of_bsn_tlv_partner_port_priority_t
 *
 * \ingroup of_bsn_tlv_partner_port_priority
 */
static inline void
of_bsn_tlv_partner_port_priority_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_partner_state_t
 * @param obj An instance of type of_bsn_tlv_partner_state_t
 *
 * \ingroup of_bsn_tlv_partner_state
 */
static inline void
of_bsn_tlv_partner_state_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_partner_system_mac_t
 * @param obj An instance of type of_bsn_tlv_partner_system_mac_t
 *
 * \ingroup of_bsn_tlv_partner_system_mac
 */
static inline void
of_bsn_tlv_partner_system_mac_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_partner_system_priority_t
 * @param obj An instance of type of_bsn_tlv_partner_system_priority_t
 *
 * \ingroup of_bsn_tlv_partner_system_priority
 */
static inline void
of_bsn_tlv_partner_system_priority_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_port_t
 * @param obj An instance of type of_bsn_tlv_port_t
 *
 * \ingroup of_bsn_tlv_port
 */
static inline void
of_bsn_tlv_port_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_priority_t
 * @param obj An instance of type of_bsn_tlv_priority_t
 *
 * \ingroup of_bsn_tlv_priority
 */
static inline void
of_bsn_tlv_priority_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_queue_id_t
 * @param obj An instance of type of_bsn_tlv_queue_id_t
 *
 * \ingroup of_bsn_tlv_queue_id
 */
static inline void
of_bsn_tlv_queue_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_queue_weight_t
 * @param obj An instance of type of_bsn_tlv_queue_weight_t
 *
 * \ingroup of_bsn_tlv_queue_weight
 */
static inline void
of_bsn_tlv_queue_weight_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_reference_t
 * @param obj An instance of type of_bsn_tlv_reference_t
 *
 * \ingroup of_bsn_tlv_reference
 */
static inline void
of_bsn_tlv_reference_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_reply_packets_t
 * @param obj An instance of type of_bsn_tlv_reply_packets_t
 *
 * \ingroup of_bsn_tlv_reply_packets
 */
static inline void
of_bsn_tlv_reply_packets_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_request_packets_t
 * @param obj An instance of type of_bsn_tlv_request_packets_t
 *
 * \ingroup of_bsn_tlv_request_packets
 */
static inline void
of_bsn_tlv_request_packets_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_rx_bytes_t
 * @param obj An instance of type of_bsn_tlv_rx_bytes_t
 *
 * \ingroup of_bsn_tlv_rx_bytes
 */
static inline void
of_bsn_tlv_rx_bytes_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_rx_packets_t
 * @param obj An instance of type of_bsn_tlv_rx_packets_t
 *
 * \ingroup of_bsn_tlv_rx_packets
 */
static inline void
of_bsn_tlv_rx_packets_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_sampling_rate_t
 * @param obj An instance of type of_bsn_tlv_sampling_rate_t
 *
 * \ingroup of_bsn_tlv_sampling_rate
 */
static inline void
of_bsn_tlv_sampling_rate_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_sub_agent_id_t
 * @param obj An instance of type of_bsn_tlv_sub_agent_id_t
 *
 * \ingroup of_bsn_tlv_sub_agent_id
 */
static inline void
of_bsn_tlv_sub_agent_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_tcp_dst_t
 * @param obj An instance of type of_bsn_tlv_tcp_dst_t
 *
 * \ingroup of_bsn_tlv_tcp_dst
 */
static inline void
of_bsn_tlv_tcp_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_tcp_src_t
 * @param obj An instance of type of_bsn_tlv_tcp_src_t
 *
 * \ingroup of_bsn_tlv_tcp_src
 */
static inline void
of_bsn_tlv_tcp_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_tx_bytes_t
 * @param obj An instance of type of_bsn_tlv_tx_bytes_t
 *
 * \ingroup of_bsn_tlv_tx_bytes
 */
static inline void
of_bsn_tlv_tx_bytes_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_tx_packets_t
 * @param obj An instance of type of_bsn_tlv_tx_packets_t
 *
 * \ingroup of_bsn_tlv_tx_packets
 */
static inline void
of_bsn_tlv_tx_packets_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_udf_anchor_t
 * @param obj An instance of type of_bsn_tlv_udf_anchor_t
 *
 * \ingroup of_bsn_tlv_udf_anchor
 */
static inline void
of_bsn_tlv_udf_anchor_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_udf_id_t
 * @param obj An instance of type of_bsn_tlv_udf_id_t
 *
 * \ingroup of_bsn_tlv_udf_id
 */
static inline void
of_bsn_tlv_udf_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_udf_length_t
 * @param obj An instance of type of_bsn_tlv_udf_length_t
 *
 * \ingroup of_bsn_tlv_udf_length
 */
static inline void
of_bsn_tlv_udf_length_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_udf_offset_t
 * @param obj An instance of type of_bsn_tlv_udf_offset_t
 *
 * \ingroup of_bsn_tlv_udf_offset
 */
static inline void
of_bsn_tlv_udf_offset_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_udp_dst_t
 * @param obj An instance of type of_bsn_tlv_udp_dst_t
 *
 * \ingroup of_bsn_tlv_udp_dst
 */
static inline void
of_bsn_tlv_udp_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_udp_src_t
 * @param obj An instance of type of_bsn_tlv_udp_src_t
 *
 * \ingroup of_bsn_tlv_udp_src
 */
static inline void
of_bsn_tlv_udp_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_unicast_query_timeout_t
 * @param obj An instance of type of_bsn_tlv_unicast_query_timeout_t
 *
 * \ingroup of_bsn_tlv_unicast_query_timeout
 */
static inline void
of_bsn_tlv_unicast_query_timeout_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_vlan_vid_t
 * @param obj An instance of type of_bsn_tlv_vlan_vid_t
 *
 * \ingroup of_bsn_tlv_vlan_vid
 */
static inline void
of_bsn_tlv_vlan_vid_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_tlv_vrf_t
 * @param obj An instance of type of_bsn_tlv_vrf_t
 *
 * \ingroup of_bsn_tlv_vrf
 */
static inline void
of_bsn_tlv_vrf_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_vlan_counter_stats_entry_t
 * @param obj An instance of type of_bsn_vlan_counter_stats_entry_t
 *
 * \ingroup of_bsn_vlan_counter_stats_entry
 */
static inline void
of_bsn_vlan_counter_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_vport_t
 * @param obj An instance of type of_bsn_vport_t
 *
 * \ingroup of_bsn_vport
 */
static inline void
of_bsn_vport_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_vport_l2gre_t
 * @param obj An instance of type of_bsn_vport_l2gre_t
 *
 * \ingroup of_bsn_vport_l2gre
 */
static inline void
of_bsn_vport_l2gre_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_vport_q_in_q_t
 * @param obj An instance of type of_bsn_vport_q_in_q_t
 *
 * \ingroup of_bsn_vport_q_in_q
 */
static inline void
of_bsn_vport_q_in_q_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bsn_vrf_counter_stats_entry_t
 * @param obj An instance of type of_bsn_vrf_counter_stats_entry_t
 *
 * \ingroup of_bsn_vrf_counter_stats_entry
 */
static inline void
of_bsn_vrf_counter_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bucket_t
 * @param obj An instance of type of_bucket_t
 *
 * \ingroup of_bucket
 */
static inline void
of_bucket_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bucket_counter_t
 * @param obj An instance of type of_bucket_counter_t
 *
 * \ingroup of_bucket_counter
 */
static inline void
of_bucket_counter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bundle_prop_t
 * @param obj An instance of type of_bundle_prop_t
 *
 * \ingroup of_bundle_prop
 */
static inline void
of_bundle_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_bundle_prop_experimenter_t
 * @param obj An instance of type of_bundle_prop_experimenter_t
 *
 * \ingroup of_bundle_prop_experimenter
 */
static inline void
of_bundle_prop_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_flow_stats_entry_t
 * @param obj An instance of type of_flow_stats_entry_t
 *
 * \ingroup of_flow_stats_entry
 */
static inline void
of_flow_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_desc_stats_entry_t
 * @param obj An instance of type of_group_desc_stats_entry_t
 *
 * \ingroup of_group_desc_stats_entry
 */
static inline void
of_group_desc_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_group_stats_entry_t
 * @param obj An instance of type of_group_stats_entry_t
 *
 * \ingroup of_group_stats_entry
 */
static inline void
of_group_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_hello_elem_t
 * @param obj An instance of type of_hello_elem_t
 *
 * \ingroup of_hello_elem
 */
static inline void
of_hello_elem_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_hello_elem_versionbitmap_t
 * @param obj An instance of type of_hello_elem_versionbitmap_t
 *
 * \ingroup of_hello_elem_versionbitmap
 */
static inline void
of_hello_elem_versionbitmap_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_t
 * @param obj An instance of type of_instruction_t
 *
 * \ingroup of_instruction
 */
static inline void
of_instruction_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_apply_actions_t
 * @param obj An instance of type of_instruction_apply_actions_t
 *
 * \ingroup of_instruction_apply_actions
 */
static inline void
of_instruction_apply_actions_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_t
 * @param obj An instance of type of_instruction_bsn_t
 *
 * \ingroup of_instruction_bsn
 */
static inline void
of_instruction_bsn_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_arp_offload_t
 * @param obj An instance of type of_instruction_bsn_arp_offload_t
 *
 * \ingroup of_instruction_bsn_arp_offload
 */
static inline void
of_instruction_bsn_arp_offload_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_auto_negotiation_t
 * @param obj An instance of type of_instruction_bsn_auto_negotiation_t
 *
 * \ingroup of_instruction_bsn_auto_negotiation
 */
static inline void
of_instruction_bsn_auto_negotiation_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_deny_t
 * @param obj An instance of type of_instruction_bsn_deny_t
 *
 * \ingroup of_instruction_bsn_deny
 */
static inline void
of_instruction_bsn_deny_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_dhcp_offload_t
 * @param obj An instance of type of_instruction_bsn_dhcp_offload_t
 *
 * \ingroup of_instruction_bsn_dhcp_offload
 */
static inline void
of_instruction_bsn_dhcp_offload_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_disable_split_horizon_check_t
 * @param obj An instance of type of_instruction_bsn_disable_split_horizon_check_t
 *
 * \ingroup of_instruction_bsn_disable_split_horizon_check
 */
static inline void
of_instruction_bsn_disable_split_horizon_check_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_disable_src_mac_check_t
 * @param obj An instance of type of_instruction_bsn_disable_src_mac_check_t
 *
 * \ingroup of_instruction_bsn_disable_src_mac_check
 */
static inline void
of_instruction_bsn_disable_src_mac_check_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_disable_vlan_counters_t
 * @param obj An instance of type of_instruction_bsn_disable_vlan_counters_t
 *
 * \ingroup of_instruction_bsn_disable_vlan_counters
 */
static inline void
of_instruction_bsn_disable_vlan_counters_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_packet_of_death_t
 * @param obj An instance of type of_instruction_bsn_packet_of_death_t
 *
 * \ingroup of_instruction_bsn_packet_of_death
 */
static inline void
of_instruction_bsn_packet_of_death_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_permit_t
 * @param obj An instance of type of_instruction_bsn_permit_t
 *
 * \ingroup of_instruction_bsn_permit
 */
static inline void
of_instruction_bsn_permit_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_prioritize_pdus_t
 * @param obj An instance of type of_instruction_bsn_prioritize_pdus_t
 *
 * \ingroup of_instruction_bsn_prioritize_pdus
 */
static inline void
of_instruction_bsn_prioritize_pdus_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_require_vlan_xlate_t
 * @param obj An instance of type of_instruction_bsn_require_vlan_xlate_t
 *
 * \ingroup of_instruction_bsn_require_vlan_xlate
 */
static inline void
of_instruction_bsn_require_vlan_xlate_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_bsn_span_destination_t
 * @param obj An instance of type of_instruction_bsn_span_destination_t
 *
 * \ingroup of_instruction_bsn_span_destination
 */
static inline void
of_instruction_bsn_span_destination_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_clear_actions_t
 * @param obj An instance of type of_instruction_clear_actions_t
 *
 * \ingroup of_instruction_clear_actions
 */
static inline void
of_instruction_clear_actions_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_experimenter_t
 * @param obj An instance of type of_instruction_experimenter_t
 *
 * \ingroup of_instruction_experimenter
 */
static inline void
of_instruction_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_goto_table_t
 * @param obj An instance of type of_instruction_goto_table_t
 *
 * \ingroup of_instruction_goto_table
 */
static inline void
of_instruction_goto_table_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_t
 * @param obj An instance of type of_instruction_id_t
 *
 * \ingroup of_instruction_id
 */
static inline void
of_instruction_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_apply_actions_t
 * @param obj An instance of type of_instruction_id_apply_actions_t
 *
 * \ingroup of_instruction_id_apply_actions
 */
static inline void
of_instruction_id_apply_actions_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_t
 * @param obj An instance of type of_instruction_id_bsn_t
 *
 * \ingroup of_instruction_id_bsn
 */
static inline void
of_instruction_id_bsn_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_arp_offload_t
 * @param obj An instance of type of_instruction_id_bsn_arp_offload_t
 *
 * \ingroup of_instruction_id_bsn_arp_offload
 */
static inline void
of_instruction_id_bsn_arp_offload_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_auto_negotiation_t
 * @param obj An instance of type of_instruction_id_bsn_auto_negotiation_t
 *
 * \ingroup of_instruction_id_bsn_auto_negotiation
 */
static inline void
of_instruction_id_bsn_auto_negotiation_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_deny_t
 * @param obj An instance of type of_instruction_id_bsn_deny_t
 *
 * \ingroup of_instruction_id_bsn_deny
 */
static inline void
of_instruction_id_bsn_deny_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_dhcp_offload_t
 * @param obj An instance of type of_instruction_id_bsn_dhcp_offload_t
 *
 * \ingroup of_instruction_id_bsn_dhcp_offload
 */
static inline void
of_instruction_id_bsn_dhcp_offload_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_disable_split_horizon_check_t
 * @param obj An instance of type of_instruction_id_bsn_disable_split_horizon_check_t
 *
 * \ingroup of_instruction_id_bsn_disable_split_horizon_check
 */
static inline void
of_instruction_id_bsn_disable_split_horizon_check_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_disable_src_mac_check_t
 * @param obj An instance of type of_instruction_id_bsn_disable_src_mac_check_t
 *
 * \ingroup of_instruction_id_bsn_disable_src_mac_check
 */
static inline void
of_instruction_id_bsn_disable_src_mac_check_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_disable_vlan_counters_t
 * @param obj An instance of type of_instruction_id_bsn_disable_vlan_counters_t
 *
 * \ingroup of_instruction_id_bsn_disable_vlan_counters
 */
static inline void
of_instruction_id_bsn_disable_vlan_counters_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_packet_of_death_t
 * @param obj An instance of type of_instruction_id_bsn_packet_of_death_t
 *
 * \ingroup of_instruction_id_bsn_packet_of_death
 */
static inline void
of_instruction_id_bsn_packet_of_death_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_permit_t
 * @param obj An instance of type of_instruction_id_bsn_permit_t
 *
 * \ingroup of_instruction_id_bsn_permit
 */
static inline void
of_instruction_id_bsn_permit_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_prioritize_pdus_t
 * @param obj An instance of type of_instruction_id_bsn_prioritize_pdus_t
 *
 * \ingroup of_instruction_id_bsn_prioritize_pdus
 */
static inline void
of_instruction_id_bsn_prioritize_pdus_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_require_vlan_xlate_t
 * @param obj An instance of type of_instruction_id_bsn_require_vlan_xlate_t
 *
 * \ingroup of_instruction_id_bsn_require_vlan_xlate
 */
static inline void
of_instruction_id_bsn_require_vlan_xlate_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_bsn_span_destination_t
 * @param obj An instance of type of_instruction_id_bsn_span_destination_t
 *
 * \ingroup of_instruction_id_bsn_span_destination
 */
static inline void
of_instruction_id_bsn_span_destination_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_clear_actions_t
 * @param obj An instance of type of_instruction_id_clear_actions_t
 *
 * \ingroup of_instruction_id_clear_actions
 */
static inline void
of_instruction_id_clear_actions_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_experimenter_t
 * @param obj An instance of type of_instruction_id_experimenter_t
 *
 * \ingroup of_instruction_id_experimenter
 */
static inline void
of_instruction_id_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_goto_table_t
 * @param obj An instance of type of_instruction_id_goto_table_t
 *
 * \ingroup of_instruction_id_goto_table
 */
static inline void
of_instruction_id_goto_table_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_meter_t
 * @param obj An instance of type of_instruction_id_meter_t
 *
 * \ingroup of_instruction_id_meter
 */
static inline void
of_instruction_id_meter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_write_actions_t
 * @param obj An instance of type of_instruction_id_write_actions_t
 *
 * \ingroup of_instruction_id_write_actions
 */
static inline void
of_instruction_id_write_actions_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_id_write_metadata_t
 * @param obj An instance of type of_instruction_id_write_metadata_t
 *
 * \ingroup of_instruction_id_write_metadata
 */
static inline void
of_instruction_id_write_metadata_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_meter_t
 * @param obj An instance of type of_instruction_meter_t
 *
 * \ingroup of_instruction_meter
 */
static inline void
of_instruction_meter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_write_actions_t
 * @param obj An instance of type of_instruction_write_actions_t
 *
 * \ingroup of_instruction_write_actions
 */
static inline void
of_instruction_write_actions_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_instruction_write_metadata_t
 * @param obj An instance of type of_instruction_write_metadata_t
 *
 * \ingroup of_instruction_write_metadata
 */
static inline void
of_instruction_write_metadata_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_match_v1_t
 * @param obj An instance of type of_match_v1_t
 *
 * \ingroup of_match_v1
 */
static inline void
of_match_v1_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_match_v2_t
 * @param obj An instance of type of_match_v2_t
 *
 * \ingroup of_match_v2
 */
static inline void
of_match_v2_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_match_v3_t
 * @param obj An instance of type of_match_v3_t
 *
 * \ingroup of_match_v3
 */
static inline void
of_match_v3_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_band_t
 * @param obj An instance of type of_meter_band_t
 *
 * \ingroup of_meter_band
 */
static inline void
of_meter_band_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_band_drop_t
 * @param obj An instance of type of_meter_band_drop_t
 *
 * \ingroup of_meter_band_drop
 */
static inline void
of_meter_band_drop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_band_dscp_remark_t
 * @param obj An instance of type of_meter_band_dscp_remark_t
 *
 * \ingroup of_meter_band_dscp_remark
 */
static inline void
of_meter_band_dscp_remark_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_band_experimenter_t
 * @param obj An instance of type of_meter_band_experimenter_t
 *
 * \ingroup of_meter_band_experimenter
 */
static inline void
of_meter_band_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_band_stats_t
 * @param obj An instance of type of_meter_band_stats_t
 *
 * \ingroup of_meter_band_stats
 */
static inline void
of_meter_band_stats_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_config_t
 * @param obj An instance of type of_meter_config_t
 *
 * \ingroup of_meter_config
 */
static inline void
of_meter_config_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_features_t
 * @param obj An instance of type of_meter_features_t
 *
 * \ingroup of_meter_features
 */
static inline void
of_meter_features_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_meter_stats_t
 * @param obj An instance of type of_meter_stats_t
 *
 * \ingroup of_meter_stats
 */
static inline void
of_meter_stats_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_t
 * @param obj An instance of type of_oxm_t
 *
 * \ingroup of_oxm
 */
static inline void
of_oxm_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_arp_op_t
 * @param obj An instance of type of_oxm_arp_op_t
 *
 * \ingroup of_oxm_arp_op
 */
static inline void
of_oxm_arp_op_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_arp_op_masked_t
 * @param obj An instance of type of_oxm_arp_op_masked_t
 *
 * \ingroup of_oxm_arp_op_masked
 */
static inline void
of_oxm_arp_op_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_arp_sha_t
 * @param obj An instance of type of_oxm_arp_sha_t
 *
 * \ingroup of_oxm_arp_sha
 */
static inline void
of_oxm_arp_sha_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_arp_sha_masked_t
 * @param obj An instance of type of_oxm_arp_sha_masked_t
 *
 * \ingroup of_oxm_arp_sha_masked
 */
static inline void
of_oxm_arp_sha_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_arp_spa_t
 * @param obj An instance of type of_oxm_arp_spa_t
 *
 * \ingroup of_oxm_arp_spa
 */
static inline void
of_oxm_arp_spa_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_arp_spa_masked_t
 * @param obj An instance of type of_oxm_arp_spa_masked_t
 *
 * \ingroup of_oxm_arp_spa_masked
 */
static inline void
of_oxm_arp_spa_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_arp_tha_t
 * @param obj An instance of type of_oxm_arp_tha_t
 *
 * \ingroup of_oxm_arp_tha
 */
static inline void
of_oxm_arp_tha_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_arp_tha_masked_t
 * @param obj An instance of type of_oxm_arp_tha_masked_t
 *
 * \ingroup of_oxm_arp_tha_masked
 */
static inline void
of_oxm_arp_tha_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_arp_tpa_t
 * @param obj An instance of type of_oxm_arp_tpa_t
 *
 * \ingroup of_oxm_arp_tpa
 */
static inline void
of_oxm_arp_tpa_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_arp_tpa_masked_t
 * @param obj An instance of type of_oxm_arp_tpa_masked_t
 *
 * \ingroup of_oxm_arp_tpa_masked
 */
static inline void
of_oxm_arp_tpa_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_egr_port_group_id_t
 * @param obj An instance of type of_oxm_bsn_egr_port_group_id_t
 *
 * \ingroup of_oxm_bsn_egr_port_group_id
 */
static inline void
of_oxm_bsn_egr_port_group_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_egr_port_group_id_masked_t
 * @param obj An instance of type of_oxm_bsn_egr_port_group_id_masked_t
 *
 * \ingroup of_oxm_bsn_egr_port_group_id_masked
 */
static inline void
of_oxm_bsn_egr_port_group_id_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_global_vrf_allowed_t
 * @param obj An instance of type of_oxm_bsn_global_vrf_allowed_t
 *
 * \ingroup of_oxm_bsn_global_vrf_allowed
 */
static inline void
of_oxm_bsn_global_vrf_allowed_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_global_vrf_allowed_masked_t
 * @param obj An instance of type of_oxm_bsn_global_vrf_allowed_masked_t
 *
 * \ingroup of_oxm_bsn_global_vrf_allowed_masked
 */
static inline void
of_oxm_bsn_global_vrf_allowed_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_in_ports_128_t
 * @param obj An instance of type of_oxm_bsn_in_ports_128_t
 *
 * \ingroup of_oxm_bsn_in_ports_128
 */
static inline void
of_oxm_bsn_in_ports_128_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_in_ports_128_masked_t
 * @param obj An instance of type of_oxm_bsn_in_ports_128_masked_t
 *
 * \ingroup of_oxm_bsn_in_ports_128_masked
 */
static inline void
of_oxm_bsn_in_ports_128_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_in_ports_512_t
 * @param obj An instance of type of_oxm_bsn_in_ports_512_t
 *
 * \ingroup of_oxm_bsn_in_ports_512
 */
static inline void
of_oxm_bsn_in_ports_512_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_in_ports_512_masked_t
 * @param obj An instance of type of_oxm_bsn_in_ports_512_masked_t
 *
 * \ingroup of_oxm_bsn_in_ports_512_masked
 */
static inline void
of_oxm_bsn_in_ports_512_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_ingress_port_group_id_t
 * @param obj An instance of type of_oxm_bsn_ingress_port_group_id_t
 *
 * \ingroup of_oxm_bsn_ingress_port_group_id
 */
static inline void
of_oxm_bsn_ingress_port_group_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_ingress_port_group_id_masked_t
 * @param obj An instance of type of_oxm_bsn_ingress_port_group_id_masked_t
 *
 * \ingroup of_oxm_bsn_ingress_port_group_id_masked
 */
static inline void
of_oxm_bsn_ingress_port_group_id_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_l2_cache_hit_t
 * @param obj An instance of type of_oxm_bsn_l2_cache_hit_t
 *
 * \ingroup of_oxm_bsn_l2_cache_hit
 */
static inline void
of_oxm_bsn_l2_cache_hit_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_l2_cache_hit_masked_t
 * @param obj An instance of type of_oxm_bsn_l2_cache_hit_masked_t
 *
 * \ingroup of_oxm_bsn_l2_cache_hit_masked
 */
static inline void
of_oxm_bsn_l2_cache_hit_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_l3_dst_class_id_t
 * @param obj An instance of type of_oxm_bsn_l3_dst_class_id_t
 *
 * \ingroup of_oxm_bsn_l3_dst_class_id
 */
static inline void
of_oxm_bsn_l3_dst_class_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_l3_dst_class_id_masked_t
 * @param obj An instance of type of_oxm_bsn_l3_dst_class_id_masked_t
 *
 * \ingroup of_oxm_bsn_l3_dst_class_id_masked
 */
static inline void
of_oxm_bsn_l3_dst_class_id_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_l3_interface_class_id_t
 * @param obj An instance of type of_oxm_bsn_l3_interface_class_id_t
 *
 * \ingroup of_oxm_bsn_l3_interface_class_id
 */
static inline void
of_oxm_bsn_l3_interface_class_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_l3_interface_class_id_masked_t
 * @param obj An instance of type of_oxm_bsn_l3_interface_class_id_masked_t
 *
 * \ingroup of_oxm_bsn_l3_interface_class_id_masked
 */
static inline void
of_oxm_bsn_l3_interface_class_id_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_l3_src_class_id_t
 * @param obj An instance of type of_oxm_bsn_l3_src_class_id_t
 *
 * \ingroup of_oxm_bsn_l3_src_class_id
 */
static inline void
of_oxm_bsn_l3_src_class_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_l3_src_class_id_masked_t
 * @param obj An instance of type of_oxm_bsn_l3_src_class_id_masked_t
 *
 * \ingroup of_oxm_bsn_l3_src_class_id_masked
 */
static inline void
of_oxm_bsn_l3_src_class_id_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_lag_id_t
 * @param obj An instance of type of_oxm_bsn_lag_id_t
 *
 * \ingroup of_oxm_bsn_lag_id
 */
static inline void
of_oxm_bsn_lag_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_lag_id_masked_t
 * @param obj An instance of type of_oxm_bsn_lag_id_masked_t
 *
 * \ingroup of_oxm_bsn_lag_id_masked
 */
static inline void
of_oxm_bsn_lag_id_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_tcp_flags_t
 * @param obj An instance of type of_oxm_bsn_tcp_flags_t
 *
 * \ingroup of_oxm_bsn_tcp_flags
 */
static inline void
of_oxm_bsn_tcp_flags_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_tcp_flags_masked_t
 * @param obj An instance of type of_oxm_bsn_tcp_flags_masked_t
 *
 * \ingroup of_oxm_bsn_tcp_flags_masked
 */
static inline void
of_oxm_bsn_tcp_flags_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf0_t
 * @param obj An instance of type of_oxm_bsn_udf0_t
 *
 * \ingroup of_oxm_bsn_udf0
 */
static inline void
of_oxm_bsn_udf0_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf0_masked_t
 * @param obj An instance of type of_oxm_bsn_udf0_masked_t
 *
 * \ingroup of_oxm_bsn_udf0_masked
 */
static inline void
of_oxm_bsn_udf0_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf1_t
 * @param obj An instance of type of_oxm_bsn_udf1_t
 *
 * \ingroup of_oxm_bsn_udf1
 */
static inline void
of_oxm_bsn_udf1_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf1_masked_t
 * @param obj An instance of type of_oxm_bsn_udf1_masked_t
 *
 * \ingroup of_oxm_bsn_udf1_masked
 */
static inline void
of_oxm_bsn_udf1_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf2_t
 * @param obj An instance of type of_oxm_bsn_udf2_t
 *
 * \ingroup of_oxm_bsn_udf2
 */
static inline void
of_oxm_bsn_udf2_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf2_masked_t
 * @param obj An instance of type of_oxm_bsn_udf2_masked_t
 *
 * \ingroup of_oxm_bsn_udf2_masked
 */
static inline void
of_oxm_bsn_udf2_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf3_t
 * @param obj An instance of type of_oxm_bsn_udf3_t
 *
 * \ingroup of_oxm_bsn_udf3
 */
static inline void
of_oxm_bsn_udf3_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf3_masked_t
 * @param obj An instance of type of_oxm_bsn_udf3_masked_t
 *
 * \ingroup of_oxm_bsn_udf3_masked
 */
static inline void
of_oxm_bsn_udf3_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf4_t
 * @param obj An instance of type of_oxm_bsn_udf4_t
 *
 * \ingroup of_oxm_bsn_udf4
 */
static inline void
of_oxm_bsn_udf4_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf4_masked_t
 * @param obj An instance of type of_oxm_bsn_udf4_masked_t
 *
 * \ingroup of_oxm_bsn_udf4_masked
 */
static inline void
of_oxm_bsn_udf4_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf5_t
 * @param obj An instance of type of_oxm_bsn_udf5_t
 *
 * \ingroup of_oxm_bsn_udf5
 */
static inline void
of_oxm_bsn_udf5_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf5_masked_t
 * @param obj An instance of type of_oxm_bsn_udf5_masked_t
 *
 * \ingroup of_oxm_bsn_udf5_masked
 */
static inline void
of_oxm_bsn_udf5_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf6_t
 * @param obj An instance of type of_oxm_bsn_udf6_t
 *
 * \ingroup of_oxm_bsn_udf6
 */
static inline void
of_oxm_bsn_udf6_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf6_masked_t
 * @param obj An instance of type of_oxm_bsn_udf6_masked_t
 *
 * \ingroup of_oxm_bsn_udf6_masked
 */
static inline void
of_oxm_bsn_udf6_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf7_t
 * @param obj An instance of type of_oxm_bsn_udf7_t
 *
 * \ingroup of_oxm_bsn_udf7
 */
static inline void
of_oxm_bsn_udf7_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_udf7_masked_t
 * @param obj An instance of type of_oxm_bsn_udf7_masked_t
 *
 * \ingroup of_oxm_bsn_udf7_masked
 */
static inline void
of_oxm_bsn_udf7_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_vlan_xlate_port_group_id_t
 * @param obj An instance of type of_oxm_bsn_vlan_xlate_port_group_id_t
 *
 * \ingroup of_oxm_bsn_vlan_xlate_port_group_id
 */
static inline void
of_oxm_bsn_vlan_xlate_port_group_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_vlan_xlate_port_group_id_masked_t
 * @param obj An instance of type of_oxm_bsn_vlan_xlate_port_group_id_masked_t
 *
 * \ingroup of_oxm_bsn_vlan_xlate_port_group_id_masked
 */
static inline void
of_oxm_bsn_vlan_xlate_port_group_id_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_vrf_t
 * @param obj An instance of type of_oxm_bsn_vrf_t
 *
 * \ingroup of_oxm_bsn_vrf
 */
static inline void
of_oxm_bsn_vrf_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_bsn_vrf_masked_t
 * @param obj An instance of type of_oxm_bsn_vrf_masked_t
 *
 * \ingroup of_oxm_bsn_vrf_masked
 */
static inline void
of_oxm_bsn_vrf_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_eth_dst_t
 * @param obj An instance of type of_oxm_eth_dst_t
 *
 * \ingroup of_oxm_eth_dst
 */
static inline void
of_oxm_eth_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_eth_dst_masked_t
 * @param obj An instance of type of_oxm_eth_dst_masked_t
 *
 * \ingroup of_oxm_eth_dst_masked
 */
static inline void
of_oxm_eth_dst_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_eth_src_t
 * @param obj An instance of type of_oxm_eth_src_t
 *
 * \ingroup of_oxm_eth_src
 */
static inline void
of_oxm_eth_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_eth_src_masked_t
 * @param obj An instance of type of_oxm_eth_src_masked_t
 *
 * \ingroup of_oxm_eth_src_masked
 */
static inline void
of_oxm_eth_src_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_eth_type_t
 * @param obj An instance of type of_oxm_eth_type_t
 *
 * \ingroup of_oxm_eth_type
 */
static inline void
of_oxm_eth_type_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_eth_type_masked_t
 * @param obj An instance of type of_oxm_eth_type_masked_t
 *
 * \ingroup of_oxm_eth_type_masked
 */
static inline void
of_oxm_eth_type_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_icmpv4_code_t
 * @param obj An instance of type of_oxm_icmpv4_code_t
 *
 * \ingroup of_oxm_icmpv4_code
 */
static inline void
of_oxm_icmpv4_code_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_icmpv4_code_masked_t
 * @param obj An instance of type of_oxm_icmpv4_code_masked_t
 *
 * \ingroup of_oxm_icmpv4_code_masked
 */
static inline void
of_oxm_icmpv4_code_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_icmpv4_type_t
 * @param obj An instance of type of_oxm_icmpv4_type_t
 *
 * \ingroup of_oxm_icmpv4_type
 */
static inline void
of_oxm_icmpv4_type_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_icmpv4_type_masked_t
 * @param obj An instance of type of_oxm_icmpv4_type_masked_t
 *
 * \ingroup of_oxm_icmpv4_type_masked
 */
static inline void
of_oxm_icmpv4_type_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_icmpv6_code_t
 * @param obj An instance of type of_oxm_icmpv6_code_t
 *
 * \ingroup of_oxm_icmpv6_code
 */
static inline void
of_oxm_icmpv6_code_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_icmpv6_code_masked_t
 * @param obj An instance of type of_oxm_icmpv6_code_masked_t
 *
 * \ingroup of_oxm_icmpv6_code_masked
 */
static inline void
of_oxm_icmpv6_code_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_icmpv6_type_t
 * @param obj An instance of type of_oxm_icmpv6_type_t
 *
 * \ingroup of_oxm_icmpv6_type
 */
static inline void
of_oxm_icmpv6_type_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_icmpv6_type_masked_t
 * @param obj An instance of type of_oxm_icmpv6_type_masked_t
 *
 * \ingroup of_oxm_icmpv6_type_masked
 */
static inline void
of_oxm_icmpv6_type_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_in_phy_port_t
 * @param obj An instance of type of_oxm_in_phy_port_t
 *
 * \ingroup of_oxm_in_phy_port
 */
static inline void
of_oxm_in_phy_port_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_in_phy_port_masked_t
 * @param obj An instance of type of_oxm_in_phy_port_masked_t
 *
 * \ingroup of_oxm_in_phy_port_masked
 */
static inline void
of_oxm_in_phy_port_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_in_port_t
 * @param obj An instance of type of_oxm_in_port_t
 *
 * \ingroup of_oxm_in_port
 */
static inline void
of_oxm_in_port_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_in_port_masked_t
 * @param obj An instance of type of_oxm_in_port_masked_t
 *
 * \ingroup of_oxm_in_port_masked
 */
static inline void
of_oxm_in_port_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ip_dscp_t
 * @param obj An instance of type of_oxm_ip_dscp_t
 *
 * \ingroup of_oxm_ip_dscp
 */
static inline void
of_oxm_ip_dscp_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ip_dscp_masked_t
 * @param obj An instance of type of_oxm_ip_dscp_masked_t
 *
 * \ingroup of_oxm_ip_dscp_masked
 */
static inline void
of_oxm_ip_dscp_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ip_ecn_t
 * @param obj An instance of type of_oxm_ip_ecn_t
 *
 * \ingroup of_oxm_ip_ecn
 */
static inline void
of_oxm_ip_ecn_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ip_ecn_masked_t
 * @param obj An instance of type of_oxm_ip_ecn_masked_t
 *
 * \ingroup of_oxm_ip_ecn_masked
 */
static inline void
of_oxm_ip_ecn_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ip_proto_t
 * @param obj An instance of type of_oxm_ip_proto_t
 *
 * \ingroup of_oxm_ip_proto
 */
static inline void
of_oxm_ip_proto_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ip_proto_masked_t
 * @param obj An instance of type of_oxm_ip_proto_masked_t
 *
 * \ingroup of_oxm_ip_proto_masked
 */
static inline void
of_oxm_ip_proto_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv4_dst_t
 * @param obj An instance of type of_oxm_ipv4_dst_t
 *
 * \ingroup of_oxm_ipv4_dst
 */
static inline void
of_oxm_ipv4_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv4_dst_masked_t
 * @param obj An instance of type of_oxm_ipv4_dst_masked_t
 *
 * \ingroup of_oxm_ipv4_dst_masked
 */
static inline void
of_oxm_ipv4_dst_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv4_src_t
 * @param obj An instance of type of_oxm_ipv4_src_t
 *
 * \ingroup of_oxm_ipv4_src
 */
static inline void
of_oxm_ipv4_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv4_src_masked_t
 * @param obj An instance of type of_oxm_ipv4_src_masked_t
 *
 * \ingroup of_oxm_ipv4_src_masked
 */
static inline void
of_oxm_ipv4_src_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_dst_t
 * @param obj An instance of type of_oxm_ipv6_dst_t
 *
 * \ingroup of_oxm_ipv6_dst
 */
static inline void
of_oxm_ipv6_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_dst_masked_t
 * @param obj An instance of type of_oxm_ipv6_dst_masked_t
 *
 * \ingroup of_oxm_ipv6_dst_masked
 */
static inline void
of_oxm_ipv6_dst_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_exthdr_t
 * @param obj An instance of type of_oxm_ipv6_exthdr_t
 *
 * \ingroup of_oxm_ipv6_exthdr
 */
static inline void
of_oxm_ipv6_exthdr_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_exthdr_masked_t
 * @param obj An instance of type of_oxm_ipv6_exthdr_masked_t
 *
 * \ingroup of_oxm_ipv6_exthdr_masked
 */
static inline void
of_oxm_ipv6_exthdr_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_flabel_t
 * @param obj An instance of type of_oxm_ipv6_flabel_t
 *
 * \ingroup of_oxm_ipv6_flabel
 */
static inline void
of_oxm_ipv6_flabel_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_flabel_masked_t
 * @param obj An instance of type of_oxm_ipv6_flabel_masked_t
 *
 * \ingroup of_oxm_ipv6_flabel_masked
 */
static inline void
of_oxm_ipv6_flabel_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_nd_sll_t
 * @param obj An instance of type of_oxm_ipv6_nd_sll_t
 *
 * \ingroup of_oxm_ipv6_nd_sll
 */
static inline void
of_oxm_ipv6_nd_sll_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_nd_sll_masked_t
 * @param obj An instance of type of_oxm_ipv6_nd_sll_masked_t
 *
 * \ingroup of_oxm_ipv6_nd_sll_masked
 */
static inline void
of_oxm_ipv6_nd_sll_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_nd_target_t
 * @param obj An instance of type of_oxm_ipv6_nd_target_t
 *
 * \ingroup of_oxm_ipv6_nd_target
 */
static inline void
of_oxm_ipv6_nd_target_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_nd_target_masked_t
 * @param obj An instance of type of_oxm_ipv6_nd_target_masked_t
 *
 * \ingroup of_oxm_ipv6_nd_target_masked
 */
static inline void
of_oxm_ipv6_nd_target_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_nd_tll_t
 * @param obj An instance of type of_oxm_ipv6_nd_tll_t
 *
 * \ingroup of_oxm_ipv6_nd_tll
 */
static inline void
of_oxm_ipv6_nd_tll_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_nd_tll_masked_t
 * @param obj An instance of type of_oxm_ipv6_nd_tll_masked_t
 *
 * \ingroup of_oxm_ipv6_nd_tll_masked
 */
static inline void
of_oxm_ipv6_nd_tll_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_src_t
 * @param obj An instance of type of_oxm_ipv6_src_t
 *
 * \ingroup of_oxm_ipv6_src
 */
static inline void
of_oxm_ipv6_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_ipv6_src_masked_t
 * @param obj An instance of type of_oxm_ipv6_src_masked_t
 *
 * \ingroup of_oxm_ipv6_src_masked
 */
static inline void
of_oxm_ipv6_src_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_metadata_t
 * @param obj An instance of type of_oxm_metadata_t
 *
 * \ingroup of_oxm_metadata
 */
static inline void
of_oxm_metadata_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_metadata_masked_t
 * @param obj An instance of type of_oxm_metadata_masked_t
 *
 * \ingroup of_oxm_metadata_masked
 */
static inline void
of_oxm_metadata_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_mpls_bos_t
 * @param obj An instance of type of_oxm_mpls_bos_t
 *
 * \ingroup of_oxm_mpls_bos
 */
static inline void
of_oxm_mpls_bos_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_mpls_bos_masked_t
 * @param obj An instance of type of_oxm_mpls_bos_masked_t
 *
 * \ingroup of_oxm_mpls_bos_masked
 */
static inline void
of_oxm_mpls_bos_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_mpls_label_t
 * @param obj An instance of type of_oxm_mpls_label_t
 *
 * \ingroup of_oxm_mpls_label
 */
static inline void
of_oxm_mpls_label_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_mpls_label_masked_t
 * @param obj An instance of type of_oxm_mpls_label_masked_t
 *
 * \ingroup of_oxm_mpls_label_masked
 */
static inline void
of_oxm_mpls_label_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_mpls_tc_t
 * @param obj An instance of type of_oxm_mpls_tc_t
 *
 * \ingroup of_oxm_mpls_tc
 */
static inline void
of_oxm_mpls_tc_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_mpls_tc_masked_t
 * @param obj An instance of type of_oxm_mpls_tc_masked_t
 *
 * \ingroup of_oxm_mpls_tc_masked
 */
static inline void
of_oxm_mpls_tc_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_pbb_uca_t
 * @param obj An instance of type of_oxm_pbb_uca_t
 *
 * \ingroup of_oxm_pbb_uca
 */
static inline void
of_oxm_pbb_uca_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_pbb_uca_masked_t
 * @param obj An instance of type of_oxm_pbb_uca_masked_t
 *
 * \ingroup of_oxm_pbb_uca_masked
 */
static inline void
of_oxm_pbb_uca_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_sctp_dst_t
 * @param obj An instance of type of_oxm_sctp_dst_t
 *
 * \ingroup of_oxm_sctp_dst
 */
static inline void
of_oxm_sctp_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_sctp_dst_masked_t
 * @param obj An instance of type of_oxm_sctp_dst_masked_t
 *
 * \ingroup of_oxm_sctp_dst_masked
 */
static inline void
of_oxm_sctp_dst_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_sctp_src_t
 * @param obj An instance of type of_oxm_sctp_src_t
 *
 * \ingroup of_oxm_sctp_src
 */
static inline void
of_oxm_sctp_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_sctp_src_masked_t
 * @param obj An instance of type of_oxm_sctp_src_masked_t
 *
 * \ingroup of_oxm_sctp_src_masked
 */
static inline void
of_oxm_sctp_src_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_tcp_dst_t
 * @param obj An instance of type of_oxm_tcp_dst_t
 *
 * \ingroup of_oxm_tcp_dst
 */
static inline void
of_oxm_tcp_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_tcp_dst_masked_t
 * @param obj An instance of type of_oxm_tcp_dst_masked_t
 *
 * \ingroup of_oxm_tcp_dst_masked
 */
static inline void
of_oxm_tcp_dst_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_tcp_src_t
 * @param obj An instance of type of_oxm_tcp_src_t
 *
 * \ingroup of_oxm_tcp_src
 */
static inline void
of_oxm_tcp_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_tcp_src_masked_t
 * @param obj An instance of type of_oxm_tcp_src_masked_t
 *
 * \ingroup of_oxm_tcp_src_masked
 */
static inline void
of_oxm_tcp_src_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_tunnel_id_t
 * @param obj An instance of type of_oxm_tunnel_id_t
 *
 * \ingroup of_oxm_tunnel_id
 */
static inline void
of_oxm_tunnel_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_tunnel_id_masked_t
 * @param obj An instance of type of_oxm_tunnel_id_masked_t
 *
 * \ingroup of_oxm_tunnel_id_masked
 */
static inline void
of_oxm_tunnel_id_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_tunnel_ipv4_dst_t
 * @param obj An instance of type of_oxm_tunnel_ipv4_dst_t
 *
 * \ingroup of_oxm_tunnel_ipv4_dst
 */
static inline void
of_oxm_tunnel_ipv4_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_tunnel_ipv4_dst_masked_t
 * @param obj An instance of type of_oxm_tunnel_ipv4_dst_masked_t
 *
 * \ingroup of_oxm_tunnel_ipv4_dst_masked
 */
static inline void
of_oxm_tunnel_ipv4_dst_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_tunnel_ipv4_src_t
 * @param obj An instance of type of_oxm_tunnel_ipv4_src_t
 *
 * \ingroup of_oxm_tunnel_ipv4_src
 */
static inline void
of_oxm_tunnel_ipv4_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_tunnel_ipv4_src_masked_t
 * @param obj An instance of type of_oxm_tunnel_ipv4_src_masked_t
 *
 * \ingroup of_oxm_tunnel_ipv4_src_masked
 */
static inline void
of_oxm_tunnel_ipv4_src_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_udp_dst_t
 * @param obj An instance of type of_oxm_udp_dst_t
 *
 * \ingroup of_oxm_udp_dst
 */
static inline void
of_oxm_udp_dst_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_udp_dst_masked_t
 * @param obj An instance of type of_oxm_udp_dst_masked_t
 *
 * \ingroup of_oxm_udp_dst_masked
 */
static inline void
of_oxm_udp_dst_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_udp_src_t
 * @param obj An instance of type of_oxm_udp_src_t
 *
 * \ingroup of_oxm_udp_src
 */
static inline void
of_oxm_udp_src_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_udp_src_masked_t
 * @param obj An instance of type of_oxm_udp_src_masked_t
 *
 * \ingroup of_oxm_udp_src_masked
 */
static inline void
of_oxm_udp_src_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_vlan_pcp_t
 * @param obj An instance of type of_oxm_vlan_pcp_t
 *
 * \ingroup of_oxm_vlan_pcp
 */
static inline void
of_oxm_vlan_pcp_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_vlan_pcp_masked_t
 * @param obj An instance of type of_oxm_vlan_pcp_masked_t
 *
 * \ingroup of_oxm_vlan_pcp_masked
 */
static inline void
of_oxm_vlan_pcp_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_vlan_vid_t
 * @param obj An instance of type of_oxm_vlan_vid_t
 *
 * \ingroup of_oxm_vlan_vid
 */
static inline void
of_oxm_vlan_vid_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_oxm_vlan_vid_masked_t
 * @param obj An instance of type of_oxm_vlan_vid_masked_t
 *
 * \ingroup of_oxm_vlan_vid_masked
 */
static inline void
of_oxm_vlan_vid_masked_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_packet_queue_t
 * @param obj An instance of type of_packet_queue_t
 *
 * \ingroup of_packet_queue
 */
static inline void
of_packet_queue_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_desc_t
 * @param obj An instance of type of_port_desc_t
 *
 * \ingroup of_port_desc
 */
static inline void
of_port_desc_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_desc_prop_t
 * @param obj An instance of type of_port_desc_prop_t
 *
 * \ingroup of_port_desc_prop
 */
static inline void
of_port_desc_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_desc_prop_bsn_t
 * @param obj An instance of type of_port_desc_prop_bsn_t
 *
 * \ingroup of_port_desc_prop_bsn
 */
static inline void
of_port_desc_prop_bsn_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_desc_prop_bsn_uplink_t
 * @param obj An instance of type of_port_desc_prop_bsn_uplink_t
 *
 * \ingroup of_port_desc_prop_bsn_uplink
 */
static inline void
of_port_desc_prop_bsn_uplink_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_desc_prop_ethernet_t
 * @param obj An instance of type of_port_desc_prop_ethernet_t
 *
 * \ingroup of_port_desc_prop_ethernet
 */
static inline void
of_port_desc_prop_ethernet_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_desc_prop_experimenter_t
 * @param obj An instance of type of_port_desc_prop_experimenter_t
 *
 * \ingroup of_port_desc_prop_experimenter
 */
static inline void
of_port_desc_prop_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_desc_prop_optical_t
 * @param obj An instance of type of_port_desc_prop_optical_t
 *
 * \ingroup of_port_desc_prop_optical
 */
static inline void
of_port_desc_prop_optical_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_mod_prop_t
 * @param obj An instance of type of_port_mod_prop_t
 *
 * \ingroup of_port_mod_prop
 */
static inline void
of_port_mod_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_mod_prop_ethernet_t
 * @param obj An instance of type of_port_mod_prop_ethernet_t
 *
 * \ingroup of_port_mod_prop_ethernet
 */
static inline void
of_port_mod_prop_ethernet_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_mod_prop_experimenter_t
 * @param obj An instance of type of_port_mod_prop_experimenter_t
 *
 * \ingroup of_port_mod_prop_experimenter
 */
static inline void
of_port_mod_prop_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_mod_prop_optical_t
 * @param obj An instance of type of_port_mod_prop_optical_t
 *
 * \ingroup of_port_mod_prop_optical
 */
static inline void
of_port_mod_prop_optical_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_stats_entry_t
 * @param obj An instance of type of_port_stats_entry_t
 *
 * \ingroup of_port_stats_entry
 */
static inline void
of_port_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_stats_prop_t
 * @param obj An instance of type of_port_stats_prop_t
 *
 * \ingroup of_port_stats_prop
 */
static inline void
of_port_stats_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_stats_prop_ethernet_t
 * @param obj An instance of type of_port_stats_prop_ethernet_t
 *
 * \ingroup of_port_stats_prop_ethernet
 */
static inline void
of_port_stats_prop_ethernet_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_stats_prop_experimenter_t
 * @param obj An instance of type of_port_stats_prop_experimenter_t
 *
 * \ingroup of_port_stats_prop_experimenter
 */
static inline void
of_port_stats_prop_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_port_stats_prop_optical_t
 * @param obj An instance of type of_port_stats_prop_optical_t
 *
 * \ingroup of_port_stats_prop_optical
 */
static inline void
of_port_stats_prop_optical_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_desc_t
 * @param obj An instance of type of_queue_desc_t
 *
 * \ingroup of_queue_desc
 */
static inline void
of_queue_desc_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_desc_prop_t
 * @param obj An instance of type of_queue_desc_prop_t
 *
 * \ingroup of_queue_desc_prop
 */
static inline void
of_queue_desc_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_desc_prop_experimenter_t
 * @param obj An instance of type of_queue_desc_prop_experimenter_t
 *
 * \ingroup of_queue_desc_prop_experimenter
 */
static inline void
of_queue_desc_prop_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_desc_prop_max_rate_t
 * @param obj An instance of type of_queue_desc_prop_max_rate_t
 *
 * \ingroup of_queue_desc_prop_max_rate
 */
static inline void
of_queue_desc_prop_max_rate_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_desc_prop_min_rate_t
 * @param obj An instance of type of_queue_desc_prop_min_rate_t
 *
 * \ingroup of_queue_desc_prop_min_rate
 */
static inline void
of_queue_desc_prop_min_rate_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_prop_t
 * @param obj An instance of type of_queue_prop_t
 *
 * \ingroup of_queue_prop
 */
static inline void
of_queue_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_prop_experimenter_t
 * @param obj An instance of type of_queue_prop_experimenter_t
 *
 * \ingroup of_queue_prop_experimenter
 */
static inline void
of_queue_prop_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_prop_max_rate_t
 * @param obj An instance of type of_queue_prop_max_rate_t
 *
 * \ingroup of_queue_prop_max_rate
 */
static inline void
of_queue_prop_max_rate_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_prop_min_rate_t
 * @param obj An instance of type of_queue_prop_min_rate_t
 *
 * \ingroup of_queue_prop_min_rate
 */
static inline void
of_queue_prop_min_rate_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_stats_entry_t
 * @param obj An instance of type of_queue_stats_entry_t
 *
 * \ingroup of_queue_stats_entry
 */
static inline void
of_queue_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_stats_prop_t
 * @param obj An instance of type of_queue_stats_prop_t
 *
 * \ingroup of_queue_stats_prop
 */
static inline void
of_queue_stats_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_queue_stats_prop_experimenter_t
 * @param obj An instance of type of_queue_stats_prop_experimenter_t
 *
 * \ingroup of_queue_stats_prop_experimenter
 */
static inline void
of_queue_stats_prop_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_role_prop_t
 * @param obj An instance of type of_role_prop_t
 *
 * \ingroup of_role_prop
 */
static inline void
of_role_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_role_prop_experimenter_t
 * @param obj An instance of type of_role_prop_experimenter_t
 *
 * \ingroup of_role_prop_experimenter
 */
static inline void
of_role_prop_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_desc_t
 * @param obj An instance of type of_table_desc_t
 *
 * \ingroup of_table_desc
 */
static inline void
of_table_desc_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_t
 * @param obj An instance of type of_table_feature_prop_t
 *
 * \ingroup of_table_feature_prop
 */
static inline void
of_table_feature_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_apply_actions_t
 * @param obj An instance of type of_table_feature_prop_apply_actions_t
 *
 * \ingroup of_table_feature_prop_apply_actions
 */
static inline void
of_table_feature_prop_apply_actions_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_apply_actions_miss_t
 * @param obj An instance of type of_table_feature_prop_apply_actions_miss_t
 *
 * \ingroup of_table_feature_prop_apply_actions_miss
 */
static inline void
of_table_feature_prop_apply_actions_miss_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_apply_setfield_t
 * @param obj An instance of type of_table_feature_prop_apply_setfield_t
 *
 * \ingroup of_table_feature_prop_apply_setfield
 */
static inline void
of_table_feature_prop_apply_setfield_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_apply_setfield_miss_t
 * @param obj An instance of type of_table_feature_prop_apply_setfield_miss_t
 *
 * \ingroup of_table_feature_prop_apply_setfield_miss
 */
static inline void
of_table_feature_prop_apply_setfield_miss_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_experimenter_t
 * @param obj An instance of type of_table_feature_prop_experimenter_t
 *
 * \ingroup of_table_feature_prop_experimenter
 */
static inline void
of_table_feature_prop_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_experimenter_miss_t
 * @param obj An instance of type of_table_feature_prop_experimenter_miss_t
 *
 * \ingroup of_table_feature_prop_experimenter_miss
 */
static inline void
of_table_feature_prop_experimenter_miss_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_instructions_t
 * @param obj An instance of type of_table_feature_prop_instructions_t
 *
 * \ingroup of_table_feature_prop_instructions
 */
static inline void
of_table_feature_prop_instructions_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_instructions_miss_t
 * @param obj An instance of type of_table_feature_prop_instructions_miss_t
 *
 * \ingroup of_table_feature_prop_instructions_miss
 */
static inline void
of_table_feature_prop_instructions_miss_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_match_t
 * @param obj An instance of type of_table_feature_prop_match_t
 *
 * \ingroup of_table_feature_prop_match
 */
static inline void
of_table_feature_prop_match_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_next_tables_t
 * @param obj An instance of type of_table_feature_prop_next_tables_t
 *
 * \ingroup of_table_feature_prop_next_tables
 */
static inline void
of_table_feature_prop_next_tables_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_next_tables_miss_t
 * @param obj An instance of type of_table_feature_prop_next_tables_miss_t
 *
 * \ingroup of_table_feature_prop_next_tables_miss
 */
static inline void
of_table_feature_prop_next_tables_miss_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_table_sync_from_t
 * @param obj An instance of type of_table_feature_prop_table_sync_from_t
 *
 * \ingroup of_table_feature_prop_table_sync_from
 */
static inline void
of_table_feature_prop_table_sync_from_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_wildcards_t
 * @param obj An instance of type of_table_feature_prop_wildcards_t
 *
 * \ingroup of_table_feature_prop_wildcards
 */
static inline void
of_table_feature_prop_wildcards_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_write_actions_t
 * @param obj An instance of type of_table_feature_prop_write_actions_t
 *
 * \ingroup of_table_feature_prop_write_actions
 */
static inline void
of_table_feature_prop_write_actions_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_write_actions_miss_t
 * @param obj An instance of type of_table_feature_prop_write_actions_miss_t
 *
 * \ingroup of_table_feature_prop_write_actions_miss
 */
static inline void
of_table_feature_prop_write_actions_miss_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_write_setfield_t
 * @param obj An instance of type of_table_feature_prop_write_setfield_t
 *
 * \ingroup of_table_feature_prop_write_setfield
 */
static inline void
of_table_feature_prop_write_setfield_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_feature_prop_write_setfield_miss_t
 * @param obj An instance of type of_table_feature_prop_write_setfield_miss_t
 *
 * \ingroup of_table_feature_prop_write_setfield_miss
 */
static inline void
of_table_feature_prop_write_setfield_miss_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_features_t
 * @param obj An instance of type of_table_features_t
 *
 * \ingroup of_table_features
 */
static inline void
of_table_features_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_mod_prop_t
 * @param obj An instance of type of_table_mod_prop_t
 *
 * \ingroup of_table_mod_prop
 */
static inline void
of_table_mod_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_mod_prop_eviction_t
 * @param obj An instance of type of_table_mod_prop_eviction_t
 *
 * \ingroup of_table_mod_prop_eviction
 */
static inline void
of_table_mod_prop_eviction_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_mod_prop_experimenter_t
 * @param obj An instance of type of_table_mod_prop_experimenter_t
 *
 * \ingroup of_table_mod_prop_experimenter
 */
static inline void
of_table_mod_prop_experimenter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_mod_prop_vacancy_t
 * @param obj An instance of type of_table_mod_prop_vacancy_t
 *
 * \ingroup of_table_mod_prop_vacancy
 */
static inline void
of_table_mod_prop_vacancy_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_table_stats_entry_t
 * @param obj An instance of type of_table_stats_entry_t
 *
 * \ingroup of_table_stats_entry
 */
static inline void
of_table_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_uint32_t
 * @param obj An instance of type of_uint32_t
 *
 * \ingroup of_uint32
 */
static inline void
of_uint32_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_uint64_t
 * @param obj An instance of type of_uint64_t
 *
 * \ingroup of_uint64
 */
static inline void
of_uint64_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_uint8_t
 * @param obj An instance of type of_uint8_t
 *
 * \ingroup of_uint8
 */
static inline void
of_uint8_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_action_t
 * @param obj An instance of type of_list_action_t
 *
 * \ingroup of_list_action
 */
static inline void
of_list_action_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_action_id_t
 * @param obj An instance of type of_list_action_id_t
 *
 * \ingroup of_list_action_id
 */
static inline void
of_list_action_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_async_config_prop_t
 * @param obj An instance of type of_list_async_config_prop_t
 *
 * \ingroup of_list_async_config_prop
 */
static inline void
of_list_async_config_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_controller_connection_t
 * @param obj An instance of type of_list_bsn_controller_connection_t
 *
 * \ingroup of_list_bsn_controller_connection
 */
static inline void
of_list_bsn_controller_connection_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_debug_counter_desc_stats_entry_t
 * @param obj An instance of type of_list_bsn_debug_counter_desc_stats_entry_t
 *
 * \ingroup of_list_bsn_debug_counter_desc_stats_entry
 */
static inline void
of_list_bsn_debug_counter_desc_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_debug_counter_stats_entry_t
 * @param obj An instance of type of_list_bsn_debug_counter_stats_entry_t
 *
 * \ingroup of_list_bsn_debug_counter_stats_entry
 */
static inline void
of_list_bsn_debug_counter_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_flow_checksum_bucket_stats_entry_t
 * @param obj An instance of type of_list_bsn_flow_checksum_bucket_stats_entry_t
 *
 * \ingroup of_list_bsn_flow_checksum_bucket_stats_entry
 */
static inline void
of_list_bsn_flow_checksum_bucket_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_generic_stats_entry_t
 * @param obj An instance of type of_list_bsn_generic_stats_entry_t
 *
 * \ingroup of_list_bsn_generic_stats_entry
 */
static inline void
of_list_bsn_generic_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_gentable_bucket_stats_entry_t
 * @param obj An instance of type of_list_bsn_gentable_bucket_stats_entry_t
 *
 * \ingroup of_list_bsn_gentable_bucket_stats_entry
 */
static inline void
of_list_bsn_gentable_bucket_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_gentable_desc_stats_entry_t
 * @param obj An instance of type of_list_bsn_gentable_desc_stats_entry_t
 *
 * \ingroup of_list_bsn_gentable_desc_stats_entry
 */
static inline void
of_list_bsn_gentable_desc_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_gentable_entry_desc_stats_entry_t
 * @param obj An instance of type of_list_bsn_gentable_entry_desc_stats_entry_t
 *
 * \ingroup of_list_bsn_gentable_entry_desc_stats_entry
 */
static inline void
of_list_bsn_gentable_entry_desc_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_gentable_entry_stats_entry_t
 * @param obj An instance of type of_list_bsn_gentable_entry_stats_entry_t
 *
 * \ingroup of_list_bsn_gentable_entry_stats_entry
 */
static inline void
of_list_bsn_gentable_entry_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_gentable_stats_entry_t
 * @param obj An instance of type of_list_bsn_gentable_stats_entry_t
 *
 * \ingroup of_list_bsn_gentable_stats_entry
 */
static inline void
of_list_bsn_gentable_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_interface_t
 * @param obj An instance of type of_list_bsn_interface_t
 *
 * \ingroup of_list_bsn_interface
 */
static inline void
of_list_bsn_interface_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_lacp_stats_entry_t
 * @param obj An instance of type of_list_bsn_lacp_stats_entry_t
 *
 * \ingroup of_list_bsn_lacp_stats_entry
 */
static inline void
of_list_bsn_lacp_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_port_counter_stats_entry_t
 * @param obj An instance of type of_list_bsn_port_counter_stats_entry_t
 *
 * \ingroup of_list_bsn_port_counter_stats_entry
 */
static inline void
of_list_bsn_port_counter_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_switch_pipeline_stats_entry_t
 * @param obj An instance of type of_list_bsn_switch_pipeline_stats_entry_t
 *
 * \ingroup of_list_bsn_switch_pipeline_stats_entry
 */
static inline void
of_list_bsn_switch_pipeline_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_table_checksum_stats_entry_t
 * @param obj An instance of type of_list_bsn_table_checksum_stats_entry_t
 *
 * \ingroup of_list_bsn_table_checksum_stats_entry
 */
static inline void
of_list_bsn_table_checksum_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_tlv_t
 * @param obj An instance of type of_list_bsn_tlv_t
 *
 * \ingroup of_list_bsn_tlv
 */
static inline void
of_list_bsn_tlv_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_vlan_counter_stats_entry_t
 * @param obj An instance of type of_list_bsn_vlan_counter_stats_entry_t
 *
 * \ingroup of_list_bsn_vlan_counter_stats_entry
 */
static inline void
of_list_bsn_vlan_counter_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bsn_vrf_counter_stats_entry_t
 * @param obj An instance of type of_list_bsn_vrf_counter_stats_entry_t
 *
 * \ingroup of_list_bsn_vrf_counter_stats_entry
 */
static inline void
of_list_bsn_vrf_counter_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bucket_t
 * @param obj An instance of type of_list_bucket_t
 *
 * \ingroup of_list_bucket
 */
static inline void
of_list_bucket_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bucket_counter_t
 * @param obj An instance of type of_list_bucket_counter_t
 *
 * \ingroup of_list_bucket_counter
 */
static inline void
of_list_bucket_counter_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_bundle_prop_t
 * @param obj An instance of type of_list_bundle_prop_t
 *
 * \ingroup of_list_bundle_prop
 */
static inline void
of_list_bundle_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_flow_stats_entry_t
 * @param obj An instance of type of_list_flow_stats_entry_t
 *
 * \ingroup of_list_flow_stats_entry
 */
static inline void
of_list_flow_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_group_desc_stats_entry_t
 * @param obj An instance of type of_list_group_desc_stats_entry_t
 *
 * \ingroup of_list_group_desc_stats_entry
 */
static inline void
of_list_group_desc_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_group_stats_entry_t
 * @param obj An instance of type of_list_group_stats_entry_t
 *
 * \ingroup of_list_group_stats_entry
 */
static inline void
of_list_group_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_hello_elem_t
 * @param obj An instance of type of_list_hello_elem_t
 *
 * \ingroup of_list_hello_elem
 */
static inline void
of_list_hello_elem_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_instruction_t
 * @param obj An instance of type of_list_instruction_t
 *
 * \ingroup of_list_instruction
 */
static inline void
of_list_instruction_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_instruction_id_t
 * @param obj An instance of type of_list_instruction_id_t
 *
 * \ingroup of_list_instruction_id
 */
static inline void
of_list_instruction_id_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_meter_band_t
 * @param obj An instance of type of_list_meter_band_t
 *
 * \ingroup of_list_meter_band
 */
static inline void
of_list_meter_band_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_meter_band_stats_t
 * @param obj An instance of type of_list_meter_band_stats_t
 *
 * \ingroup of_list_meter_band_stats
 */
static inline void
of_list_meter_band_stats_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_meter_stats_t
 * @param obj An instance of type of_list_meter_stats_t
 *
 * \ingroup of_list_meter_stats
 */
static inline void
of_list_meter_stats_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_oxm_t
 * @param obj An instance of type of_list_oxm_t
 *
 * \ingroup of_list_oxm
 */
static inline void
of_list_oxm_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_packet_queue_t
 * @param obj An instance of type of_list_packet_queue_t
 *
 * \ingroup of_list_packet_queue
 */
static inline void
of_list_packet_queue_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_port_desc_t
 * @param obj An instance of type of_list_port_desc_t
 *
 * \ingroup of_list_port_desc
 */
static inline void
of_list_port_desc_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_port_desc_prop_t
 * @param obj An instance of type of_list_port_desc_prop_t
 *
 * \ingroup of_list_port_desc_prop
 */
static inline void
of_list_port_desc_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_port_mod_prop_t
 * @param obj An instance of type of_list_port_mod_prop_t
 *
 * \ingroup of_list_port_mod_prop
 */
static inline void
of_list_port_mod_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_port_stats_entry_t
 * @param obj An instance of type of_list_port_stats_entry_t
 *
 * \ingroup of_list_port_stats_entry
 */
static inline void
of_list_port_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_port_stats_prop_t
 * @param obj An instance of type of_list_port_stats_prop_t
 *
 * \ingroup of_list_port_stats_prop
 */
static inline void
of_list_port_stats_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_queue_desc_t
 * @param obj An instance of type of_list_queue_desc_t
 *
 * \ingroup of_list_queue_desc
 */
static inline void
of_list_queue_desc_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_queue_desc_prop_t
 * @param obj An instance of type of_list_queue_desc_prop_t
 *
 * \ingroup of_list_queue_desc_prop
 */
static inline void
of_list_queue_desc_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_queue_prop_t
 * @param obj An instance of type of_list_queue_prop_t
 *
 * \ingroup of_list_queue_prop
 */
static inline void
of_list_queue_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_queue_stats_entry_t
 * @param obj An instance of type of_list_queue_stats_entry_t
 *
 * \ingroup of_list_queue_stats_entry
 */
static inline void
of_list_queue_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_queue_stats_prop_t
 * @param obj An instance of type of_list_queue_stats_prop_t
 *
 * \ingroup of_list_queue_stats_prop
 */
static inline void
of_list_queue_stats_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_role_prop_t
 * @param obj An instance of type of_list_role_prop_t
 *
 * \ingroup of_list_role_prop
 */
static inline void
of_list_role_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_table_desc_t
 * @param obj An instance of type of_list_table_desc_t
 *
 * \ingroup of_list_table_desc
 */
static inline void
of_list_table_desc_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_table_feature_prop_t
 * @param obj An instance of type of_list_table_feature_prop_t
 *
 * \ingroup of_list_table_feature_prop
 */
static inline void
of_list_table_feature_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_table_features_t
 * @param obj An instance of type of_list_table_features_t
 *
 * \ingroup of_list_table_features
 */
static inline void
of_list_table_features_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_table_mod_prop_t
 * @param obj An instance of type of_list_table_mod_prop_t
 *
 * \ingroup of_list_table_mod_prop
 */
static inline void
of_list_table_mod_prop_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_table_stats_entry_t
 * @param obj An instance of type of_list_table_stats_entry_t
 *
 * \ingroup of_list_table_stats_entry
 */
static inline void
of_list_table_stats_entry_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_uint32_t
 * @param obj An instance of type of_list_uint32_t
 *
 * \ingroup of_list_uint32
 */
static inline void
of_list_uint32_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_uint64_t
 * @param obj An instance of type of_list_uint64_t
 *
 * \ingroup of_list_uint64
 */
static inline void
of_list_uint64_delete(of_object_t *obj) {
    of_object_delete(obj);
}

/**
 * Delete an object of type of_list_uint8_t
 * @param obj An instance of type of_list_uint8_t
 *
 * \ingroup of_list_uint8
 */
static inline void
of_list_uint8_delete(of_object_t *obj) {
    of_object_delete(obj);
}

typedef void (*of_object_init_f)(of_object_t *obj, of_version_t version,
    int bytes, int clean_wire);
extern const of_object_init_f of_object_init_map[];

/****************************************************************
 *
 * Function pointer initialization functions
 * These are part of the "coerce" type casting for objects
 *
 ****************************************************************/

/****************************************************************
 *
 * Unified, per-member accessor function declarations
 *
 ****************************************************************/

/* Unified accessor functions for of_aggregate_stats_reply */

extern void of_aggregate_stats_reply_xid_set(
    of_aggregate_stats_reply_t *obj,
    uint32_t xid);
extern void of_aggregate_stats_reply_xid_get(
    of_aggregate_stats_reply_t *obj,
    uint32_t *xid);

extern void of_aggregate_stats_reply_flags_set(
    of_aggregate_stats_reply_t *obj,
    uint16_t flags);
extern void of_aggregate_stats_reply_flags_get(
    of_aggregate_stats_reply_t *obj,
    uint16_t *flags);

extern void of_aggregate_stats_reply_packet_count_set(
    of_aggregate_stats_reply_t *obj,
    uint64_t packet_count);
extern void of_aggregate_stats_reply_packet_count_get(
    of_aggregate_stats_reply_t *obj,
    uint64_t *packet_count);

extern void of_aggregate_stats_reply_byte_count_set(
    of_aggregate_stats_reply_t *obj,
    uint64_t byte_count);
extern void of_aggregate_stats_reply_byte_count_get(
    of_aggregate_stats_reply_t *obj,
    uint64_t *byte_count);

extern void of_aggregate_stats_reply_flow_count_set(
    of_aggregate_stats_reply_t *obj,
    uint32_t flow_count);
extern void of_aggregate_stats_reply_flow_count_get(
    of_aggregate_stats_reply_t *obj,
    uint32_t *flow_count);

/* Unified accessor functions for of_aggregate_stats_request */

extern void of_aggregate_stats_request_xid_set(
    of_aggregate_stats_request_t *obj,
    uint32_t xid);
extern void of_aggregate_stats_request_xid_get(
    of_aggregate_stats_request_t *obj,
    uint32_t *xid);

extern void of_aggregate_stats_request_flags_set(
    of_aggregate_stats_request_t *obj,
    uint16_t flags);
extern void of_aggregate_stats_request_flags_get(
    of_aggregate_stats_request_t *obj,
    uint16_t *flags);

extern void of_aggregate_stats_request_table_id_set(
    of_aggregate_stats_request_t *obj,
    uint8_t table_id);
extern void of_aggregate_stats_request_table_id_get(
    of_aggregate_stats_request_t *obj,
    uint8_t *table_id);

extern void of_aggregate_stats_request_out_port_set(
    of_aggregate_stats_request_t *obj,
    of_port_no_t out_port);
extern void of_aggregate_stats_request_out_port_get(
    of_aggregate_stats_request_t *obj,
    of_port_no_t *out_port);

extern void of_aggregate_stats_request_out_group_set(
    of_aggregate_stats_request_t *obj,
    uint32_t out_group);
extern void of_aggregate_stats_request_out_group_get(
    of_aggregate_stats_request_t *obj,
    uint32_t *out_group);

extern void of_aggregate_stats_request_cookie_set(
    of_aggregate_stats_request_t *obj,
    uint64_t cookie);
extern void of_aggregate_stats_request_cookie_get(
    of_aggregate_stats_request_t *obj,
    uint64_t *cookie);

extern void of_aggregate_stats_request_cookie_mask_set(
    of_aggregate_stats_request_t *obj,
    uint64_t cookie_mask);
extern void of_aggregate_stats_request_cookie_mask_get(
    of_aggregate_stats_request_t *obj,
    uint64_t *cookie_mask);

extern int WARN_UNUSED_RESULT of_aggregate_stats_request_match_set(
    of_aggregate_stats_request_t *obj,
    of_match_t *match);
extern int WARN_UNUSED_RESULT of_aggregate_stats_request_match_get(
    of_aggregate_stats_request_t *obj,
    of_match_t *match);

/* Unified accessor functions for of_async_config_failed_error_msg */

extern void of_async_config_failed_error_msg_xid_set(
    of_async_config_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_async_config_failed_error_msg_xid_get(
    of_async_config_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_async_config_failed_error_msg_code_set(
    of_async_config_failed_error_msg_t *obj,
    uint16_t code);
extern void of_async_config_failed_error_msg_code_get(
    of_async_config_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_async_config_failed_error_msg_data_set(
    of_async_config_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_async_config_failed_error_msg_data_get(
    of_async_config_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_async_get_reply */

extern void of_async_get_reply_xid_set(
    of_async_get_reply_t *obj,
    uint32_t xid);
extern void of_async_get_reply_xid_get(
    of_async_get_reply_t *obj,
    uint32_t *xid);

extern int WARN_UNUSED_RESULT of_async_get_reply_properties_set(
    of_async_get_reply_t *obj,
    of_list_async_config_prop_t *properties);
extern void of_async_get_reply_properties_bind(
    of_async_get_reply_t *obj,
    of_list_async_config_prop_t *properties);
extern of_list_async_config_prop_t *of_async_get_reply_properties_get(
    of_async_get_reply_t *obj);

extern void of_async_get_reply_packet_in_mask_equal_master_set(
    of_async_get_reply_t *obj,
    uint32_t packet_in_mask_equal_master);
extern void of_async_get_reply_packet_in_mask_equal_master_get(
    of_async_get_reply_t *obj,
    uint32_t *packet_in_mask_equal_master);

extern void of_async_get_reply_packet_in_mask_slave_set(
    of_async_get_reply_t *obj,
    uint32_t packet_in_mask_slave);
extern void of_async_get_reply_packet_in_mask_slave_get(
    of_async_get_reply_t *obj,
    uint32_t *packet_in_mask_slave);

extern void of_async_get_reply_port_status_mask_equal_master_set(
    of_async_get_reply_t *obj,
    uint32_t port_status_mask_equal_master);
extern void of_async_get_reply_port_status_mask_equal_master_get(
    of_async_get_reply_t *obj,
    uint32_t *port_status_mask_equal_master);

extern void of_async_get_reply_port_status_mask_slave_set(
    of_async_get_reply_t *obj,
    uint32_t port_status_mask_slave);
extern void of_async_get_reply_port_status_mask_slave_get(
    of_async_get_reply_t *obj,
    uint32_t *port_status_mask_slave);

extern void of_async_get_reply_flow_removed_mask_equal_master_set(
    of_async_get_reply_t *obj,
    uint32_t flow_removed_mask_equal_master);
extern void of_async_get_reply_flow_removed_mask_equal_master_get(
    of_async_get_reply_t *obj,
    uint32_t *flow_removed_mask_equal_master);

extern void of_async_get_reply_flow_removed_mask_slave_set(
    of_async_get_reply_t *obj,
    uint32_t flow_removed_mask_slave);
extern void of_async_get_reply_flow_removed_mask_slave_get(
    of_async_get_reply_t *obj,
    uint32_t *flow_removed_mask_slave);

/* Unified accessor functions for of_async_get_request */

extern void of_async_get_request_xid_set(
    of_async_get_request_t *obj,
    uint32_t xid);
extern void of_async_get_request_xid_get(
    of_async_get_request_t *obj,
    uint32_t *xid);

extern int WARN_UNUSED_RESULT of_async_get_request_properties_set(
    of_async_get_request_t *obj,
    of_list_async_config_prop_t *properties);
extern void of_async_get_request_properties_bind(
    of_async_get_request_t *obj,
    of_list_async_config_prop_t *properties);
extern of_list_async_config_prop_t *of_async_get_request_properties_get(
    of_async_get_request_t *obj);

extern void of_async_get_request_packet_in_mask_equal_master_set(
    of_async_get_request_t *obj,
    uint32_t packet_in_mask_equal_master);
extern void of_async_get_request_packet_in_mask_equal_master_get(
    of_async_get_request_t *obj,
    uint32_t *packet_in_mask_equal_master);

extern void of_async_get_request_packet_in_mask_slave_set(
    of_async_get_request_t *obj,
    uint32_t packet_in_mask_slave);
extern void of_async_get_request_packet_in_mask_slave_get(
    of_async_get_request_t *obj,
    uint32_t *packet_in_mask_slave);

extern void of_async_get_request_port_status_mask_equal_master_set(
    of_async_get_request_t *obj,
    uint32_t port_status_mask_equal_master);
extern void of_async_get_request_port_status_mask_equal_master_get(
    of_async_get_request_t *obj,
    uint32_t *port_status_mask_equal_master);

extern void of_async_get_request_port_status_mask_slave_set(
    of_async_get_request_t *obj,
    uint32_t port_status_mask_slave);
extern void of_async_get_request_port_status_mask_slave_get(
    of_async_get_request_t *obj,
    uint32_t *port_status_mask_slave);

extern void of_async_get_request_flow_removed_mask_equal_master_set(
    of_async_get_request_t *obj,
    uint32_t flow_removed_mask_equal_master);
extern void of_async_get_request_flow_removed_mask_equal_master_get(
    of_async_get_request_t *obj,
    uint32_t *flow_removed_mask_equal_master);

extern void of_async_get_request_flow_removed_mask_slave_set(
    of_async_get_request_t *obj,
    uint32_t flow_removed_mask_slave);
extern void of_async_get_request_flow_removed_mask_slave_get(
    of_async_get_request_t *obj,
    uint32_t *flow_removed_mask_slave);

/* Unified accessor functions for of_async_set */

extern void of_async_set_xid_set(
    of_async_set_t *obj,
    uint32_t xid);
extern void of_async_set_xid_get(
    of_async_set_t *obj,
    uint32_t *xid);

extern int WARN_UNUSED_RESULT of_async_set_properties_set(
    of_async_set_t *obj,
    of_list_async_config_prop_t *properties);
extern void of_async_set_properties_bind(
    of_async_set_t *obj,
    of_list_async_config_prop_t *properties);
extern of_list_async_config_prop_t *of_async_set_properties_get(
    of_async_set_t *obj);

extern void of_async_set_packet_in_mask_equal_master_set(
    of_async_set_t *obj,
    uint32_t packet_in_mask_equal_master);
extern void of_async_set_packet_in_mask_equal_master_get(
    of_async_set_t *obj,
    uint32_t *packet_in_mask_equal_master);

extern void of_async_set_packet_in_mask_slave_set(
    of_async_set_t *obj,
    uint32_t packet_in_mask_slave);
extern void of_async_set_packet_in_mask_slave_get(
    of_async_set_t *obj,
    uint32_t *packet_in_mask_slave);

extern void of_async_set_port_status_mask_equal_master_set(
    of_async_set_t *obj,
    uint32_t port_status_mask_equal_master);
extern void of_async_set_port_status_mask_equal_master_get(
    of_async_set_t *obj,
    uint32_t *port_status_mask_equal_master);

extern void of_async_set_port_status_mask_slave_set(
    of_async_set_t *obj,
    uint32_t port_status_mask_slave);
extern void of_async_set_port_status_mask_slave_get(
    of_async_set_t *obj,
    uint32_t *port_status_mask_slave);

extern void of_async_set_flow_removed_mask_equal_master_set(
    of_async_set_t *obj,
    uint32_t flow_removed_mask_equal_master);
extern void of_async_set_flow_removed_mask_equal_master_get(
    of_async_set_t *obj,
    uint32_t *flow_removed_mask_equal_master);

extern void of_async_set_flow_removed_mask_slave_set(
    of_async_set_t *obj,
    uint32_t flow_removed_mask_slave);
extern void of_async_set_flow_removed_mask_slave_get(
    of_async_set_t *obj,
    uint32_t *flow_removed_mask_slave);

/* Unified accessor functions for of_bad_action_error_msg */

extern void of_bad_action_error_msg_xid_set(
    of_bad_action_error_msg_t *obj,
    uint32_t xid);
extern void of_bad_action_error_msg_xid_get(
    of_bad_action_error_msg_t *obj,
    uint32_t *xid);

extern void of_bad_action_error_msg_code_set(
    of_bad_action_error_msg_t *obj,
    uint16_t code);
extern void of_bad_action_error_msg_code_get(
    of_bad_action_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_bad_action_error_msg_data_set(
    of_bad_action_error_msg_t *obj,
    of_octets_t *data);
extern void of_bad_action_error_msg_data_get(
    of_bad_action_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bad_instruction_error_msg */

extern void of_bad_instruction_error_msg_xid_set(
    of_bad_instruction_error_msg_t *obj,
    uint32_t xid);
extern void of_bad_instruction_error_msg_xid_get(
    of_bad_instruction_error_msg_t *obj,
    uint32_t *xid);

extern void of_bad_instruction_error_msg_code_set(
    of_bad_instruction_error_msg_t *obj,
    uint16_t code);
extern void of_bad_instruction_error_msg_code_get(
    of_bad_instruction_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_bad_instruction_error_msg_data_set(
    of_bad_instruction_error_msg_t *obj,
    of_octets_t *data);
extern void of_bad_instruction_error_msg_data_get(
    of_bad_instruction_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bad_match_error_msg */

extern void of_bad_match_error_msg_xid_set(
    of_bad_match_error_msg_t *obj,
    uint32_t xid);
extern void of_bad_match_error_msg_xid_get(
    of_bad_match_error_msg_t *obj,
    uint32_t *xid);

extern void of_bad_match_error_msg_code_set(
    of_bad_match_error_msg_t *obj,
    uint16_t code);
extern void of_bad_match_error_msg_code_get(
    of_bad_match_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_bad_match_error_msg_data_set(
    of_bad_match_error_msg_t *obj,
    of_octets_t *data);
extern void of_bad_match_error_msg_data_get(
    of_bad_match_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bad_property_error_msg */

extern void of_bad_property_error_msg_xid_set(
    of_bad_property_error_msg_t *obj,
    uint32_t xid);
extern void of_bad_property_error_msg_xid_get(
    of_bad_property_error_msg_t *obj,
    uint32_t *xid);

extern void of_bad_property_error_msg_code_set(
    of_bad_property_error_msg_t *obj,
    uint16_t code);
extern void of_bad_property_error_msg_code_get(
    of_bad_property_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_bad_property_error_msg_data_set(
    of_bad_property_error_msg_t *obj,
    of_octets_t *data);
extern void of_bad_property_error_msg_data_get(
    of_bad_property_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bad_request_error_msg */

extern void of_bad_request_error_msg_xid_set(
    of_bad_request_error_msg_t *obj,
    uint32_t xid);
extern void of_bad_request_error_msg_xid_get(
    of_bad_request_error_msg_t *obj,
    uint32_t *xid);

extern void of_bad_request_error_msg_code_set(
    of_bad_request_error_msg_t *obj,
    uint16_t code);
extern void of_bad_request_error_msg_code_get(
    of_bad_request_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_bad_request_error_msg_data_set(
    of_bad_request_error_msg_t *obj,
    of_octets_t *data);
extern void of_bad_request_error_msg_data_get(
    of_bad_request_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_barrier_reply */

extern void of_barrier_reply_xid_set(
    of_barrier_reply_t *obj,
    uint32_t xid);
extern void of_barrier_reply_xid_get(
    of_barrier_reply_t *obj,
    uint32_t *xid);

/* Unified accessor functions for of_barrier_request */

extern void of_barrier_request_xid_set(
    of_barrier_request_t *obj,
    uint32_t xid);
extern void of_barrier_request_xid_get(
    of_barrier_request_t *obj,
    uint32_t *xid);

/* Unified accessor functions for of_bsn_arp_idle */

extern void of_bsn_arp_idle_xid_set(
    of_bsn_arp_idle_t *obj,
    uint32_t xid);
extern void of_bsn_arp_idle_xid_get(
    of_bsn_arp_idle_t *obj,
    uint32_t *xid);

extern void of_bsn_arp_idle_experimenter_set(
    of_bsn_arp_idle_t *obj,
    uint32_t experimenter);
extern void of_bsn_arp_idle_experimenter_get(
    of_bsn_arp_idle_t *obj,
    uint32_t *experimenter);

extern void of_bsn_arp_idle_subtype_set(
    of_bsn_arp_idle_t *obj,
    uint32_t subtype);
extern void of_bsn_arp_idle_subtype_get(
    of_bsn_arp_idle_t *obj,
    uint32_t *subtype);

extern void of_bsn_arp_idle_vlan_vid_set(
    of_bsn_arp_idle_t *obj,
    uint16_t vlan_vid);
extern void of_bsn_arp_idle_vlan_vid_get(
    of_bsn_arp_idle_t *obj,
    uint16_t *vlan_vid);

extern void of_bsn_arp_idle_ipv4_addr_set(
    of_bsn_arp_idle_t *obj,
    of_ipv4_t ipv4_addr);
extern void of_bsn_arp_idle_ipv4_addr_get(
    of_bsn_arp_idle_t *obj,
    of_ipv4_t *ipv4_addr);

/* Unified accessor functions for of_bsn_bw_clear_data_reply */

extern void of_bsn_bw_clear_data_reply_xid_set(
    of_bsn_bw_clear_data_reply_t *obj,
    uint32_t xid);
extern void of_bsn_bw_clear_data_reply_xid_get(
    of_bsn_bw_clear_data_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_bw_clear_data_reply_experimenter_set(
    of_bsn_bw_clear_data_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_bw_clear_data_reply_experimenter_get(
    of_bsn_bw_clear_data_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_bw_clear_data_reply_subtype_set(
    of_bsn_bw_clear_data_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_bw_clear_data_reply_subtype_get(
    of_bsn_bw_clear_data_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_bw_clear_data_reply_status_set(
    of_bsn_bw_clear_data_reply_t *obj,
    uint32_t status);
extern void of_bsn_bw_clear_data_reply_status_get(
    of_bsn_bw_clear_data_reply_t *obj,
    uint32_t *status);

/* Unified accessor functions for of_bsn_bw_clear_data_request */

extern void of_bsn_bw_clear_data_request_xid_set(
    of_bsn_bw_clear_data_request_t *obj,
    uint32_t xid);
extern void of_bsn_bw_clear_data_request_xid_get(
    of_bsn_bw_clear_data_request_t *obj,
    uint32_t *xid);

extern void of_bsn_bw_clear_data_request_experimenter_set(
    of_bsn_bw_clear_data_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_bw_clear_data_request_experimenter_get(
    of_bsn_bw_clear_data_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_bw_clear_data_request_subtype_set(
    of_bsn_bw_clear_data_request_t *obj,
    uint32_t subtype);
extern void of_bsn_bw_clear_data_request_subtype_get(
    of_bsn_bw_clear_data_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_bw_enable_get_reply */

extern void of_bsn_bw_enable_get_reply_xid_set(
    of_bsn_bw_enable_get_reply_t *obj,
    uint32_t xid);
extern void of_bsn_bw_enable_get_reply_xid_get(
    of_bsn_bw_enable_get_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_bw_enable_get_reply_experimenter_set(
    of_bsn_bw_enable_get_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_bw_enable_get_reply_experimenter_get(
    of_bsn_bw_enable_get_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_bw_enable_get_reply_subtype_set(
    of_bsn_bw_enable_get_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_bw_enable_get_reply_subtype_get(
    of_bsn_bw_enable_get_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_bw_enable_get_reply_enabled_set(
    of_bsn_bw_enable_get_reply_t *obj,
    uint32_t enabled);
extern void of_bsn_bw_enable_get_reply_enabled_get(
    of_bsn_bw_enable_get_reply_t *obj,
    uint32_t *enabled);

/* Unified accessor functions for of_bsn_bw_enable_get_request */

extern void of_bsn_bw_enable_get_request_xid_set(
    of_bsn_bw_enable_get_request_t *obj,
    uint32_t xid);
extern void of_bsn_bw_enable_get_request_xid_get(
    of_bsn_bw_enable_get_request_t *obj,
    uint32_t *xid);

extern void of_bsn_bw_enable_get_request_experimenter_set(
    of_bsn_bw_enable_get_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_bw_enable_get_request_experimenter_get(
    of_bsn_bw_enable_get_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_bw_enable_get_request_subtype_set(
    of_bsn_bw_enable_get_request_t *obj,
    uint32_t subtype);
extern void of_bsn_bw_enable_get_request_subtype_get(
    of_bsn_bw_enable_get_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_bw_enable_set_reply */

extern void of_bsn_bw_enable_set_reply_xid_set(
    of_bsn_bw_enable_set_reply_t *obj,
    uint32_t xid);
extern void of_bsn_bw_enable_set_reply_xid_get(
    of_bsn_bw_enable_set_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_bw_enable_set_reply_experimenter_set(
    of_bsn_bw_enable_set_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_bw_enable_set_reply_experimenter_get(
    of_bsn_bw_enable_set_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_bw_enable_set_reply_subtype_set(
    of_bsn_bw_enable_set_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_bw_enable_set_reply_subtype_get(
    of_bsn_bw_enable_set_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_bw_enable_set_reply_enable_set(
    of_bsn_bw_enable_set_reply_t *obj,
    uint32_t enable);
extern void of_bsn_bw_enable_set_reply_enable_get(
    of_bsn_bw_enable_set_reply_t *obj,
    uint32_t *enable);

extern void of_bsn_bw_enable_set_reply_status_set(
    of_bsn_bw_enable_set_reply_t *obj,
    uint32_t status);
extern void of_bsn_bw_enable_set_reply_status_get(
    of_bsn_bw_enable_set_reply_t *obj,
    uint32_t *status);

/* Unified accessor functions for of_bsn_bw_enable_set_request */

extern void of_bsn_bw_enable_set_request_xid_set(
    of_bsn_bw_enable_set_request_t *obj,
    uint32_t xid);
extern void of_bsn_bw_enable_set_request_xid_get(
    of_bsn_bw_enable_set_request_t *obj,
    uint32_t *xid);

extern void of_bsn_bw_enable_set_request_experimenter_set(
    of_bsn_bw_enable_set_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_bw_enable_set_request_experimenter_get(
    of_bsn_bw_enable_set_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_bw_enable_set_request_subtype_set(
    of_bsn_bw_enable_set_request_t *obj,
    uint32_t subtype);
extern void of_bsn_bw_enable_set_request_subtype_get(
    of_bsn_bw_enable_set_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_bw_enable_set_request_enable_set(
    of_bsn_bw_enable_set_request_t *obj,
    uint32_t enable);
extern void of_bsn_bw_enable_set_request_enable_get(
    of_bsn_bw_enable_set_request_t *obj,
    uint32_t *enable);

/* Unified accessor functions for of_bsn_controller_connections_reply */

extern void of_bsn_controller_connections_reply_xid_set(
    of_bsn_controller_connections_reply_t *obj,
    uint32_t xid);
extern void of_bsn_controller_connections_reply_xid_get(
    of_bsn_controller_connections_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_controller_connections_reply_experimenter_set(
    of_bsn_controller_connections_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_controller_connections_reply_experimenter_get(
    of_bsn_controller_connections_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_controller_connections_reply_subtype_set(
    of_bsn_controller_connections_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_controller_connections_reply_subtype_get(
    of_bsn_controller_connections_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_controller_connections_reply_connections_set(
    of_bsn_controller_connections_reply_t *obj,
    of_list_bsn_controller_connection_t *connections);
extern void of_bsn_controller_connections_reply_connections_bind(
    of_bsn_controller_connections_reply_t *obj,
    of_list_bsn_controller_connection_t *connections);
extern of_list_bsn_controller_connection_t *of_bsn_controller_connections_reply_connections_get(
    of_bsn_controller_connections_reply_t *obj);

/* Unified accessor functions for of_bsn_controller_connections_request */

extern void of_bsn_controller_connections_request_xid_set(
    of_bsn_controller_connections_request_t *obj,
    uint32_t xid);
extern void of_bsn_controller_connections_request_xid_get(
    of_bsn_controller_connections_request_t *obj,
    uint32_t *xid);

extern void of_bsn_controller_connections_request_experimenter_set(
    of_bsn_controller_connections_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_controller_connections_request_experimenter_get(
    of_bsn_controller_connections_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_controller_connections_request_subtype_set(
    of_bsn_controller_connections_request_t *obj,
    uint32_t subtype);
extern void of_bsn_controller_connections_request_subtype_get(
    of_bsn_controller_connections_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_debug_counter_desc_stats_reply */

extern void of_bsn_debug_counter_desc_stats_reply_xid_set(
    of_bsn_debug_counter_desc_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_debug_counter_desc_stats_reply_xid_get(
    of_bsn_debug_counter_desc_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_debug_counter_desc_stats_reply_flags_set(
    of_bsn_debug_counter_desc_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_debug_counter_desc_stats_reply_flags_get(
    of_bsn_debug_counter_desc_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_debug_counter_desc_stats_reply_experimenter_set(
    of_bsn_debug_counter_desc_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_debug_counter_desc_stats_reply_experimenter_get(
    of_bsn_debug_counter_desc_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_debug_counter_desc_stats_reply_subtype_set(
    of_bsn_debug_counter_desc_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_debug_counter_desc_stats_reply_subtype_get(
    of_bsn_debug_counter_desc_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_debug_counter_desc_stats_reply_entries_set(
    of_bsn_debug_counter_desc_stats_reply_t *obj,
    of_list_bsn_debug_counter_desc_stats_entry_t *entries);
extern void of_bsn_debug_counter_desc_stats_reply_entries_bind(
    of_bsn_debug_counter_desc_stats_reply_t *obj,
    of_list_bsn_debug_counter_desc_stats_entry_t *entries);
extern of_list_bsn_debug_counter_desc_stats_entry_t *of_bsn_debug_counter_desc_stats_reply_entries_get(
    of_bsn_debug_counter_desc_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_debug_counter_desc_stats_request */

extern void of_bsn_debug_counter_desc_stats_request_xid_set(
    of_bsn_debug_counter_desc_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_debug_counter_desc_stats_request_xid_get(
    of_bsn_debug_counter_desc_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_debug_counter_desc_stats_request_flags_set(
    of_bsn_debug_counter_desc_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_debug_counter_desc_stats_request_flags_get(
    of_bsn_debug_counter_desc_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_debug_counter_desc_stats_request_experimenter_set(
    of_bsn_debug_counter_desc_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_debug_counter_desc_stats_request_experimenter_get(
    of_bsn_debug_counter_desc_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_debug_counter_desc_stats_request_subtype_set(
    of_bsn_debug_counter_desc_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_debug_counter_desc_stats_request_subtype_get(
    of_bsn_debug_counter_desc_stats_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_debug_counter_stats_reply */

extern void of_bsn_debug_counter_stats_reply_xid_set(
    of_bsn_debug_counter_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_debug_counter_stats_reply_xid_get(
    of_bsn_debug_counter_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_debug_counter_stats_reply_flags_set(
    of_bsn_debug_counter_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_debug_counter_stats_reply_flags_get(
    of_bsn_debug_counter_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_debug_counter_stats_reply_experimenter_set(
    of_bsn_debug_counter_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_debug_counter_stats_reply_experimenter_get(
    of_bsn_debug_counter_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_debug_counter_stats_reply_subtype_set(
    of_bsn_debug_counter_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_debug_counter_stats_reply_subtype_get(
    of_bsn_debug_counter_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_debug_counter_stats_reply_entries_set(
    of_bsn_debug_counter_stats_reply_t *obj,
    of_list_bsn_debug_counter_stats_entry_t *entries);
extern void of_bsn_debug_counter_stats_reply_entries_bind(
    of_bsn_debug_counter_stats_reply_t *obj,
    of_list_bsn_debug_counter_stats_entry_t *entries);
extern of_list_bsn_debug_counter_stats_entry_t *of_bsn_debug_counter_stats_reply_entries_get(
    of_bsn_debug_counter_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_debug_counter_stats_request */

extern void of_bsn_debug_counter_stats_request_xid_set(
    of_bsn_debug_counter_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_debug_counter_stats_request_xid_get(
    of_bsn_debug_counter_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_debug_counter_stats_request_flags_set(
    of_bsn_debug_counter_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_debug_counter_stats_request_flags_get(
    of_bsn_debug_counter_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_debug_counter_stats_request_experimenter_set(
    of_bsn_debug_counter_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_debug_counter_stats_request_experimenter_get(
    of_bsn_debug_counter_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_debug_counter_stats_request_subtype_set(
    of_bsn_debug_counter_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_debug_counter_stats_request_subtype_get(
    of_bsn_debug_counter_stats_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_flow_checksum_bucket_stats_reply */

extern void of_bsn_flow_checksum_bucket_stats_reply_xid_set(
    of_bsn_flow_checksum_bucket_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_flow_checksum_bucket_stats_reply_xid_get(
    of_bsn_flow_checksum_bucket_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_flow_checksum_bucket_stats_reply_flags_set(
    of_bsn_flow_checksum_bucket_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_flow_checksum_bucket_stats_reply_flags_get(
    of_bsn_flow_checksum_bucket_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_flow_checksum_bucket_stats_reply_experimenter_set(
    of_bsn_flow_checksum_bucket_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_flow_checksum_bucket_stats_reply_experimenter_get(
    of_bsn_flow_checksum_bucket_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_flow_checksum_bucket_stats_reply_subtype_set(
    of_bsn_flow_checksum_bucket_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_flow_checksum_bucket_stats_reply_subtype_get(
    of_bsn_flow_checksum_bucket_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_flow_checksum_bucket_stats_reply_entries_set(
    of_bsn_flow_checksum_bucket_stats_reply_t *obj,
    of_list_bsn_flow_checksum_bucket_stats_entry_t *entries);
extern void of_bsn_flow_checksum_bucket_stats_reply_entries_bind(
    of_bsn_flow_checksum_bucket_stats_reply_t *obj,
    of_list_bsn_flow_checksum_bucket_stats_entry_t *entries);
extern of_list_bsn_flow_checksum_bucket_stats_entry_t *of_bsn_flow_checksum_bucket_stats_reply_entries_get(
    of_bsn_flow_checksum_bucket_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_flow_checksum_bucket_stats_request */

extern void of_bsn_flow_checksum_bucket_stats_request_xid_set(
    of_bsn_flow_checksum_bucket_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_flow_checksum_bucket_stats_request_xid_get(
    of_bsn_flow_checksum_bucket_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_flow_checksum_bucket_stats_request_flags_set(
    of_bsn_flow_checksum_bucket_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_flow_checksum_bucket_stats_request_flags_get(
    of_bsn_flow_checksum_bucket_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_flow_checksum_bucket_stats_request_experimenter_set(
    of_bsn_flow_checksum_bucket_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_flow_checksum_bucket_stats_request_experimenter_get(
    of_bsn_flow_checksum_bucket_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_flow_checksum_bucket_stats_request_subtype_set(
    of_bsn_flow_checksum_bucket_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_flow_checksum_bucket_stats_request_subtype_get(
    of_bsn_flow_checksum_bucket_stats_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_flow_checksum_bucket_stats_request_table_id_set(
    of_bsn_flow_checksum_bucket_stats_request_t *obj,
    uint8_t table_id);
extern void of_bsn_flow_checksum_bucket_stats_request_table_id_get(
    of_bsn_flow_checksum_bucket_stats_request_t *obj,
    uint8_t *table_id);

/* Unified accessor functions for of_bsn_flow_idle */

extern void of_bsn_flow_idle_xid_set(
    of_bsn_flow_idle_t *obj,
    uint32_t xid);
extern void of_bsn_flow_idle_xid_get(
    of_bsn_flow_idle_t *obj,
    uint32_t *xid);

extern void of_bsn_flow_idle_experimenter_set(
    of_bsn_flow_idle_t *obj,
    uint32_t experimenter);
extern void of_bsn_flow_idle_experimenter_get(
    of_bsn_flow_idle_t *obj,
    uint32_t *experimenter);

extern void of_bsn_flow_idle_subtype_set(
    of_bsn_flow_idle_t *obj,
    uint32_t subtype);
extern void of_bsn_flow_idle_subtype_get(
    of_bsn_flow_idle_t *obj,
    uint32_t *subtype);

extern void of_bsn_flow_idle_cookie_set(
    of_bsn_flow_idle_t *obj,
    uint64_t cookie);
extern void of_bsn_flow_idle_cookie_get(
    of_bsn_flow_idle_t *obj,
    uint64_t *cookie);

extern void of_bsn_flow_idle_priority_set(
    of_bsn_flow_idle_t *obj,
    uint16_t priority);
extern void of_bsn_flow_idle_priority_get(
    of_bsn_flow_idle_t *obj,
    uint16_t *priority);

extern void of_bsn_flow_idle_table_id_set(
    of_bsn_flow_idle_t *obj,
    uint8_t table_id);
extern void of_bsn_flow_idle_table_id_get(
    of_bsn_flow_idle_t *obj,
    uint8_t *table_id);

extern int WARN_UNUSED_RESULT of_bsn_flow_idle_match_set(
    of_bsn_flow_idle_t *obj,
    of_match_t *match);
extern int WARN_UNUSED_RESULT of_bsn_flow_idle_match_get(
    of_bsn_flow_idle_t *obj,
    of_match_t *match);

/* Unified accessor functions for of_bsn_flow_idle_enable_get_reply */

extern void of_bsn_flow_idle_enable_get_reply_xid_set(
    of_bsn_flow_idle_enable_get_reply_t *obj,
    uint32_t xid);
extern void of_bsn_flow_idle_enable_get_reply_xid_get(
    of_bsn_flow_idle_enable_get_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_flow_idle_enable_get_reply_experimenter_set(
    of_bsn_flow_idle_enable_get_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_flow_idle_enable_get_reply_experimenter_get(
    of_bsn_flow_idle_enable_get_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_flow_idle_enable_get_reply_subtype_set(
    of_bsn_flow_idle_enable_get_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_flow_idle_enable_get_reply_subtype_get(
    of_bsn_flow_idle_enable_get_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_flow_idle_enable_get_reply_enabled_set(
    of_bsn_flow_idle_enable_get_reply_t *obj,
    uint32_t enabled);
extern void of_bsn_flow_idle_enable_get_reply_enabled_get(
    of_bsn_flow_idle_enable_get_reply_t *obj,
    uint32_t *enabled);

/* Unified accessor functions for of_bsn_flow_idle_enable_get_request */

extern void of_bsn_flow_idle_enable_get_request_xid_set(
    of_bsn_flow_idle_enable_get_request_t *obj,
    uint32_t xid);
extern void of_bsn_flow_idle_enable_get_request_xid_get(
    of_bsn_flow_idle_enable_get_request_t *obj,
    uint32_t *xid);

extern void of_bsn_flow_idle_enable_get_request_experimenter_set(
    of_bsn_flow_idle_enable_get_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_flow_idle_enable_get_request_experimenter_get(
    of_bsn_flow_idle_enable_get_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_flow_idle_enable_get_request_subtype_set(
    of_bsn_flow_idle_enable_get_request_t *obj,
    uint32_t subtype);
extern void of_bsn_flow_idle_enable_get_request_subtype_get(
    of_bsn_flow_idle_enable_get_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_flow_idle_enable_set_reply */

extern void of_bsn_flow_idle_enable_set_reply_xid_set(
    of_bsn_flow_idle_enable_set_reply_t *obj,
    uint32_t xid);
extern void of_bsn_flow_idle_enable_set_reply_xid_get(
    of_bsn_flow_idle_enable_set_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_flow_idle_enable_set_reply_experimenter_set(
    of_bsn_flow_idle_enable_set_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_flow_idle_enable_set_reply_experimenter_get(
    of_bsn_flow_idle_enable_set_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_flow_idle_enable_set_reply_subtype_set(
    of_bsn_flow_idle_enable_set_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_flow_idle_enable_set_reply_subtype_get(
    of_bsn_flow_idle_enable_set_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_flow_idle_enable_set_reply_enable_set(
    of_bsn_flow_idle_enable_set_reply_t *obj,
    uint32_t enable);
extern void of_bsn_flow_idle_enable_set_reply_enable_get(
    of_bsn_flow_idle_enable_set_reply_t *obj,
    uint32_t *enable);

extern void of_bsn_flow_idle_enable_set_reply_status_set(
    of_bsn_flow_idle_enable_set_reply_t *obj,
    uint32_t status);
extern void of_bsn_flow_idle_enable_set_reply_status_get(
    of_bsn_flow_idle_enable_set_reply_t *obj,
    uint32_t *status);

/* Unified accessor functions for of_bsn_flow_idle_enable_set_request */

extern void of_bsn_flow_idle_enable_set_request_xid_set(
    of_bsn_flow_idle_enable_set_request_t *obj,
    uint32_t xid);
extern void of_bsn_flow_idle_enable_set_request_xid_get(
    of_bsn_flow_idle_enable_set_request_t *obj,
    uint32_t *xid);

extern void of_bsn_flow_idle_enable_set_request_experimenter_set(
    of_bsn_flow_idle_enable_set_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_flow_idle_enable_set_request_experimenter_get(
    of_bsn_flow_idle_enable_set_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_flow_idle_enable_set_request_subtype_set(
    of_bsn_flow_idle_enable_set_request_t *obj,
    uint32_t subtype);
extern void of_bsn_flow_idle_enable_set_request_subtype_get(
    of_bsn_flow_idle_enable_set_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_flow_idle_enable_set_request_enable_set(
    of_bsn_flow_idle_enable_set_request_t *obj,
    uint32_t enable);
extern void of_bsn_flow_idle_enable_set_request_enable_get(
    of_bsn_flow_idle_enable_set_request_t *obj,
    uint32_t *enable);

/* Unified accessor functions for of_bsn_generic_stats_reply */

extern void of_bsn_generic_stats_reply_xid_set(
    of_bsn_generic_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_generic_stats_reply_xid_get(
    of_bsn_generic_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_generic_stats_reply_flags_set(
    of_bsn_generic_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_generic_stats_reply_flags_get(
    of_bsn_generic_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_generic_stats_reply_experimenter_set(
    of_bsn_generic_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_generic_stats_reply_experimenter_get(
    of_bsn_generic_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_generic_stats_reply_subtype_set(
    of_bsn_generic_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_generic_stats_reply_subtype_get(
    of_bsn_generic_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_generic_stats_reply_entries_set(
    of_bsn_generic_stats_reply_t *obj,
    of_list_bsn_generic_stats_entry_t *entries);
extern void of_bsn_generic_stats_reply_entries_bind(
    of_bsn_generic_stats_reply_t *obj,
    of_list_bsn_generic_stats_entry_t *entries);
extern of_list_bsn_generic_stats_entry_t *of_bsn_generic_stats_reply_entries_get(
    of_bsn_generic_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_generic_stats_request */

extern void of_bsn_generic_stats_request_xid_set(
    of_bsn_generic_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_generic_stats_request_xid_get(
    of_bsn_generic_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_generic_stats_request_flags_set(
    of_bsn_generic_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_generic_stats_request_flags_get(
    of_bsn_generic_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_generic_stats_request_experimenter_set(
    of_bsn_generic_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_generic_stats_request_experimenter_get(
    of_bsn_generic_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_generic_stats_request_subtype_set(
    of_bsn_generic_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_generic_stats_request_subtype_get(
    of_bsn_generic_stats_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_generic_stats_request_name_set(
    of_bsn_generic_stats_request_t *obj,
    of_str64_t name);
extern void of_bsn_generic_stats_request_name_get(
    of_bsn_generic_stats_request_t *obj,
    of_str64_t *name);

extern int WARN_UNUSED_RESULT of_bsn_generic_stats_request_tlvs_set(
    of_bsn_generic_stats_request_t *obj,
    of_list_bsn_tlv_t *tlvs);
extern void of_bsn_generic_stats_request_tlvs_bind(
    of_bsn_generic_stats_request_t *obj,
    of_list_bsn_tlv_t *tlvs);
extern of_list_bsn_tlv_t *of_bsn_generic_stats_request_tlvs_get(
    of_bsn_generic_stats_request_t *obj);

/* Unified accessor functions for of_bsn_gentable_bucket_stats_reply */

extern void of_bsn_gentable_bucket_stats_reply_xid_set(
    of_bsn_gentable_bucket_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_bucket_stats_reply_xid_get(
    of_bsn_gentable_bucket_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_bucket_stats_reply_flags_set(
    of_bsn_gentable_bucket_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_gentable_bucket_stats_reply_flags_get(
    of_bsn_gentable_bucket_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_gentable_bucket_stats_reply_experimenter_set(
    of_bsn_gentable_bucket_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_bucket_stats_reply_experimenter_get(
    of_bsn_gentable_bucket_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_bucket_stats_reply_subtype_set(
    of_bsn_gentable_bucket_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_bucket_stats_reply_subtype_get(
    of_bsn_gentable_bucket_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_gentable_bucket_stats_reply_entries_set(
    of_bsn_gentable_bucket_stats_reply_t *obj,
    of_list_bsn_gentable_bucket_stats_entry_t *entries);
extern void of_bsn_gentable_bucket_stats_reply_entries_bind(
    of_bsn_gentable_bucket_stats_reply_t *obj,
    of_list_bsn_gentable_bucket_stats_entry_t *entries);
extern of_list_bsn_gentable_bucket_stats_entry_t *of_bsn_gentable_bucket_stats_reply_entries_get(
    of_bsn_gentable_bucket_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_gentable_bucket_stats_request */

extern void of_bsn_gentable_bucket_stats_request_xid_set(
    of_bsn_gentable_bucket_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_bucket_stats_request_xid_get(
    of_bsn_gentable_bucket_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_bucket_stats_request_flags_set(
    of_bsn_gentable_bucket_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_gentable_bucket_stats_request_flags_get(
    of_bsn_gentable_bucket_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_gentable_bucket_stats_request_experimenter_set(
    of_bsn_gentable_bucket_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_bucket_stats_request_experimenter_get(
    of_bsn_gentable_bucket_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_bucket_stats_request_subtype_set(
    of_bsn_gentable_bucket_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_bucket_stats_request_subtype_get(
    of_bsn_gentable_bucket_stats_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_gentable_bucket_stats_request_table_id_set(
    of_bsn_gentable_bucket_stats_request_t *obj,
    uint16_t table_id);
extern void of_bsn_gentable_bucket_stats_request_table_id_get(
    of_bsn_gentable_bucket_stats_request_t *obj,
    uint16_t *table_id);

/* Unified accessor functions for of_bsn_gentable_clear_reply */

extern void of_bsn_gentable_clear_reply_xid_set(
    of_bsn_gentable_clear_reply_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_clear_reply_xid_get(
    of_bsn_gentable_clear_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_clear_reply_experimenter_set(
    of_bsn_gentable_clear_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_clear_reply_experimenter_get(
    of_bsn_gentable_clear_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_clear_reply_subtype_set(
    of_bsn_gentable_clear_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_clear_reply_subtype_get(
    of_bsn_gentable_clear_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_gentable_clear_reply_table_id_set(
    of_bsn_gentable_clear_reply_t *obj,
    uint16_t table_id);
extern void of_bsn_gentable_clear_reply_table_id_get(
    of_bsn_gentable_clear_reply_t *obj,
    uint16_t *table_id);

extern void of_bsn_gentable_clear_reply_deleted_count_set(
    of_bsn_gentable_clear_reply_t *obj,
    uint32_t deleted_count);
extern void of_bsn_gentable_clear_reply_deleted_count_get(
    of_bsn_gentable_clear_reply_t *obj,
    uint32_t *deleted_count);

extern void of_bsn_gentable_clear_reply_error_count_set(
    of_bsn_gentable_clear_reply_t *obj,
    uint32_t error_count);
extern void of_bsn_gentable_clear_reply_error_count_get(
    of_bsn_gentable_clear_reply_t *obj,
    uint32_t *error_count);

/* Unified accessor functions for of_bsn_gentable_clear_request */

extern void of_bsn_gentable_clear_request_xid_set(
    of_bsn_gentable_clear_request_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_clear_request_xid_get(
    of_bsn_gentable_clear_request_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_clear_request_experimenter_set(
    of_bsn_gentable_clear_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_clear_request_experimenter_get(
    of_bsn_gentable_clear_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_clear_request_subtype_set(
    of_bsn_gentable_clear_request_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_clear_request_subtype_get(
    of_bsn_gentable_clear_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_gentable_clear_request_table_id_set(
    of_bsn_gentable_clear_request_t *obj,
    uint16_t table_id);
extern void of_bsn_gentable_clear_request_table_id_get(
    of_bsn_gentable_clear_request_t *obj,
    uint16_t *table_id);

extern void of_bsn_gentable_clear_request_checksum_set(
    of_bsn_gentable_clear_request_t *obj,
    of_checksum_128_t checksum);
extern void of_bsn_gentable_clear_request_checksum_get(
    of_bsn_gentable_clear_request_t *obj,
    of_checksum_128_t *checksum);

extern void of_bsn_gentable_clear_request_checksum_mask_set(
    of_bsn_gentable_clear_request_t *obj,
    of_checksum_128_t checksum_mask);
extern void of_bsn_gentable_clear_request_checksum_mask_get(
    of_bsn_gentable_clear_request_t *obj,
    of_checksum_128_t *checksum_mask);

/* Unified accessor functions for of_bsn_gentable_desc_stats_reply */

extern void of_bsn_gentable_desc_stats_reply_xid_set(
    of_bsn_gentable_desc_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_desc_stats_reply_xid_get(
    of_bsn_gentable_desc_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_desc_stats_reply_flags_set(
    of_bsn_gentable_desc_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_gentable_desc_stats_reply_flags_get(
    of_bsn_gentable_desc_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_gentable_desc_stats_reply_experimenter_set(
    of_bsn_gentable_desc_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_desc_stats_reply_experimenter_get(
    of_bsn_gentable_desc_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_desc_stats_reply_subtype_set(
    of_bsn_gentable_desc_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_desc_stats_reply_subtype_get(
    of_bsn_gentable_desc_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_gentable_desc_stats_reply_entries_set(
    of_bsn_gentable_desc_stats_reply_t *obj,
    of_list_bsn_gentable_desc_stats_entry_t *entries);
extern void of_bsn_gentable_desc_stats_reply_entries_bind(
    of_bsn_gentable_desc_stats_reply_t *obj,
    of_list_bsn_gentable_desc_stats_entry_t *entries);
extern of_list_bsn_gentable_desc_stats_entry_t *of_bsn_gentable_desc_stats_reply_entries_get(
    of_bsn_gentable_desc_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_gentable_desc_stats_request */

extern void of_bsn_gentable_desc_stats_request_xid_set(
    of_bsn_gentable_desc_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_desc_stats_request_xid_get(
    of_bsn_gentable_desc_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_desc_stats_request_flags_set(
    of_bsn_gentable_desc_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_gentable_desc_stats_request_flags_get(
    of_bsn_gentable_desc_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_gentable_desc_stats_request_experimenter_set(
    of_bsn_gentable_desc_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_desc_stats_request_experimenter_get(
    of_bsn_gentable_desc_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_desc_stats_request_subtype_set(
    of_bsn_gentable_desc_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_desc_stats_request_subtype_get(
    of_bsn_gentable_desc_stats_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_gentable_entry_add */

extern void of_bsn_gentable_entry_add_xid_set(
    of_bsn_gentable_entry_add_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_entry_add_xid_get(
    of_bsn_gentable_entry_add_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_entry_add_experimenter_set(
    of_bsn_gentable_entry_add_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_entry_add_experimenter_get(
    of_bsn_gentable_entry_add_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_entry_add_subtype_set(
    of_bsn_gentable_entry_add_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_entry_add_subtype_get(
    of_bsn_gentable_entry_add_t *obj,
    uint32_t *subtype);

extern void of_bsn_gentable_entry_add_table_id_set(
    of_bsn_gentable_entry_add_t *obj,
    uint16_t table_id);
extern void of_bsn_gentable_entry_add_table_id_get(
    of_bsn_gentable_entry_add_t *obj,
    uint16_t *table_id);

extern void of_bsn_gentable_entry_add_checksum_set(
    of_bsn_gentable_entry_add_t *obj,
    of_checksum_128_t checksum);
extern void of_bsn_gentable_entry_add_checksum_get(
    of_bsn_gentable_entry_add_t *obj,
    of_checksum_128_t *checksum);

extern int WARN_UNUSED_RESULT of_bsn_gentable_entry_add_key_set(
    of_bsn_gentable_entry_add_t *obj,
    of_list_bsn_tlv_t *key);
extern void of_bsn_gentable_entry_add_key_bind(
    of_bsn_gentable_entry_add_t *obj,
    of_list_bsn_tlv_t *key);
extern of_list_bsn_tlv_t *of_bsn_gentable_entry_add_key_get(
    of_bsn_gentable_entry_add_t *obj);

extern int WARN_UNUSED_RESULT of_bsn_gentable_entry_add_value_set(
    of_bsn_gentable_entry_add_t *obj,
    of_list_bsn_tlv_t *value);
extern void of_bsn_gentable_entry_add_value_bind(
    of_bsn_gentable_entry_add_t *obj,
    of_list_bsn_tlv_t *value);
extern of_list_bsn_tlv_t *of_bsn_gentable_entry_add_value_get(
    of_bsn_gentable_entry_add_t *obj);

/* Unified accessor functions for of_bsn_gentable_entry_delete */

extern void of_bsn_gentable_entry_delete_xid_set(
    of_bsn_gentable_entry_delete_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_entry_delete_xid_get(
    of_bsn_gentable_entry_delete_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_entry_delete_experimenter_set(
    of_bsn_gentable_entry_delete_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_entry_delete_experimenter_get(
    of_bsn_gentable_entry_delete_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_entry_delete_subtype_set(
    of_bsn_gentable_entry_delete_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_entry_delete_subtype_get(
    of_bsn_gentable_entry_delete_t *obj,
    uint32_t *subtype);

extern void of_bsn_gentable_entry_delete_table_id_set(
    of_bsn_gentable_entry_delete_t *obj,
    uint16_t table_id);
extern void of_bsn_gentable_entry_delete_table_id_get(
    of_bsn_gentable_entry_delete_t *obj,
    uint16_t *table_id);

extern int WARN_UNUSED_RESULT of_bsn_gentable_entry_delete_key_set(
    of_bsn_gentable_entry_delete_t *obj,
    of_list_bsn_tlv_t *key);
extern void of_bsn_gentable_entry_delete_key_bind(
    of_bsn_gentable_entry_delete_t *obj,
    of_list_bsn_tlv_t *key);
extern of_list_bsn_tlv_t *of_bsn_gentable_entry_delete_key_get(
    of_bsn_gentable_entry_delete_t *obj);

/* Unified accessor functions for of_bsn_gentable_entry_desc_stats_reply */

extern void of_bsn_gentable_entry_desc_stats_reply_xid_set(
    of_bsn_gentable_entry_desc_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_entry_desc_stats_reply_xid_get(
    of_bsn_gentable_entry_desc_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_entry_desc_stats_reply_flags_set(
    of_bsn_gentable_entry_desc_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_gentable_entry_desc_stats_reply_flags_get(
    of_bsn_gentable_entry_desc_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_gentable_entry_desc_stats_reply_experimenter_set(
    of_bsn_gentable_entry_desc_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_entry_desc_stats_reply_experimenter_get(
    of_bsn_gentable_entry_desc_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_entry_desc_stats_reply_subtype_set(
    of_bsn_gentable_entry_desc_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_entry_desc_stats_reply_subtype_get(
    of_bsn_gentable_entry_desc_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_gentable_entry_desc_stats_reply_entries_set(
    of_bsn_gentable_entry_desc_stats_reply_t *obj,
    of_list_bsn_gentable_entry_desc_stats_entry_t *entries);
extern void of_bsn_gentable_entry_desc_stats_reply_entries_bind(
    of_bsn_gentable_entry_desc_stats_reply_t *obj,
    of_list_bsn_gentable_entry_desc_stats_entry_t *entries);
extern of_list_bsn_gentable_entry_desc_stats_entry_t *of_bsn_gentable_entry_desc_stats_reply_entries_get(
    of_bsn_gentable_entry_desc_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_gentable_entry_desc_stats_request */

extern void of_bsn_gentable_entry_desc_stats_request_xid_set(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_entry_desc_stats_request_xid_get(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_entry_desc_stats_request_flags_set(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_gentable_entry_desc_stats_request_flags_get(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_gentable_entry_desc_stats_request_experimenter_set(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_entry_desc_stats_request_experimenter_get(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_entry_desc_stats_request_subtype_set(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_entry_desc_stats_request_subtype_get(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_gentable_entry_desc_stats_request_table_id_set(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    uint16_t table_id);
extern void of_bsn_gentable_entry_desc_stats_request_table_id_get(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    uint16_t *table_id);

extern void of_bsn_gentable_entry_desc_stats_request_checksum_set(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    of_checksum_128_t checksum);
extern void of_bsn_gentable_entry_desc_stats_request_checksum_get(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    of_checksum_128_t *checksum);

extern void of_bsn_gentable_entry_desc_stats_request_checksum_mask_set(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    of_checksum_128_t checksum_mask);
extern void of_bsn_gentable_entry_desc_stats_request_checksum_mask_get(
    of_bsn_gentable_entry_desc_stats_request_t *obj,
    of_checksum_128_t *checksum_mask);

/* Unified accessor functions for of_bsn_gentable_entry_stats_reply */

extern void of_bsn_gentable_entry_stats_reply_xid_set(
    of_bsn_gentable_entry_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_entry_stats_reply_xid_get(
    of_bsn_gentable_entry_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_entry_stats_reply_flags_set(
    of_bsn_gentable_entry_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_gentable_entry_stats_reply_flags_get(
    of_bsn_gentable_entry_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_gentable_entry_stats_reply_experimenter_set(
    of_bsn_gentable_entry_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_entry_stats_reply_experimenter_get(
    of_bsn_gentable_entry_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_entry_stats_reply_subtype_set(
    of_bsn_gentable_entry_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_entry_stats_reply_subtype_get(
    of_bsn_gentable_entry_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_gentable_entry_stats_reply_entries_set(
    of_bsn_gentable_entry_stats_reply_t *obj,
    of_list_bsn_gentable_entry_stats_entry_t *entries);
extern void of_bsn_gentable_entry_stats_reply_entries_bind(
    of_bsn_gentable_entry_stats_reply_t *obj,
    of_list_bsn_gentable_entry_stats_entry_t *entries);
extern of_list_bsn_gentable_entry_stats_entry_t *of_bsn_gentable_entry_stats_reply_entries_get(
    of_bsn_gentable_entry_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_gentable_entry_stats_request */

extern void of_bsn_gentable_entry_stats_request_xid_set(
    of_bsn_gentable_entry_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_entry_stats_request_xid_get(
    of_bsn_gentable_entry_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_entry_stats_request_flags_set(
    of_bsn_gentable_entry_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_gentable_entry_stats_request_flags_get(
    of_bsn_gentable_entry_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_gentable_entry_stats_request_experimenter_set(
    of_bsn_gentable_entry_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_entry_stats_request_experimenter_get(
    of_bsn_gentable_entry_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_entry_stats_request_subtype_set(
    of_bsn_gentable_entry_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_entry_stats_request_subtype_get(
    of_bsn_gentable_entry_stats_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_gentable_entry_stats_request_table_id_set(
    of_bsn_gentable_entry_stats_request_t *obj,
    uint16_t table_id);
extern void of_bsn_gentable_entry_stats_request_table_id_get(
    of_bsn_gentable_entry_stats_request_t *obj,
    uint16_t *table_id);

extern void of_bsn_gentable_entry_stats_request_checksum_set(
    of_bsn_gentable_entry_stats_request_t *obj,
    of_checksum_128_t checksum);
extern void of_bsn_gentable_entry_stats_request_checksum_get(
    of_bsn_gentable_entry_stats_request_t *obj,
    of_checksum_128_t *checksum);

extern void of_bsn_gentable_entry_stats_request_checksum_mask_set(
    of_bsn_gentable_entry_stats_request_t *obj,
    of_checksum_128_t checksum_mask);
extern void of_bsn_gentable_entry_stats_request_checksum_mask_get(
    of_bsn_gentable_entry_stats_request_t *obj,
    of_checksum_128_t *checksum_mask);

/* Unified accessor functions for of_bsn_gentable_set_buckets_size */

extern void of_bsn_gentable_set_buckets_size_xid_set(
    of_bsn_gentable_set_buckets_size_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_set_buckets_size_xid_get(
    of_bsn_gentable_set_buckets_size_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_set_buckets_size_experimenter_set(
    of_bsn_gentable_set_buckets_size_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_set_buckets_size_experimenter_get(
    of_bsn_gentable_set_buckets_size_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_set_buckets_size_subtype_set(
    of_bsn_gentable_set_buckets_size_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_set_buckets_size_subtype_get(
    of_bsn_gentable_set_buckets_size_t *obj,
    uint32_t *subtype);

extern void of_bsn_gentable_set_buckets_size_table_id_set(
    of_bsn_gentable_set_buckets_size_t *obj,
    uint16_t table_id);
extern void of_bsn_gentable_set_buckets_size_table_id_get(
    of_bsn_gentable_set_buckets_size_t *obj,
    uint16_t *table_id);

extern void of_bsn_gentable_set_buckets_size_buckets_size_set(
    of_bsn_gentable_set_buckets_size_t *obj,
    uint32_t buckets_size);
extern void of_bsn_gentable_set_buckets_size_buckets_size_get(
    of_bsn_gentable_set_buckets_size_t *obj,
    uint32_t *buckets_size);

/* Unified accessor functions for of_bsn_gentable_stats_reply */

extern void of_bsn_gentable_stats_reply_xid_set(
    of_bsn_gentable_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_stats_reply_xid_get(
    of_bsn_gentable_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_stats_reply_flags_set(
    of_bsn_gentable_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_gentable_stats_reply_flags_get(
    of_bsn_gentable_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_gentable_stats_reply_experimenter_set(
    of_bsn_gentable_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_stats_reply_experimenter_get(
    of_bsn_gentable_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_stats_reply_subtype_set(
    of_bsn_gentable_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_stats_reply_subtype_get(
    of_bsn_gentable_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_gentable_stats_reply_entries_set(
    of_bsn_gentable_stats_reply_t *obj,
    of_list_bsn_gentable_stats_entry_t *entries);
extern void of_bsn_gentable_stats_reply_entries_bind(
    of_bsn_gentable_stats_reply_t *obj,
    of_list_bsn_gentable_stats_entry_t *entries);
extern of_list_bsn_gentable_stats_entry_t *of_bsn_gentable_stats_reply_entries_get(
    of_bsn_gentable_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_gentable_stats_request */

extern void of_bsn_gentable_stats_request_xid_set(
    of_bsn_gentable_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_gentable_stats_request_xid_get(
    of_bsn_gentable_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_gentable_stats_request_flags_set(
    of_bsn_gentable_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_gentable_stats_request_flags_get(
    of_bsn_gentable_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_gentable_stats_request_experimenter_set(
    of_bsn_gentable_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_gentable_stats_request_experimenter_get(
    of_bsn_gentable_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_gentable_stats_request_subtype_set(
    of_bsn_gentable_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_gentable_stats_request_subtype_get(
    of_bsn_gentable_stats_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_get_interfaces_reply */

extern void of_bsn_get_interfaces_reply_xid_set(
    of_bsn_get_interfaces_reply_t *obj,
    uint32_t xid);
extern void of_bsn_get_interfaces_reply_xid_get(
    of_bsn_get_interfaces_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_get_interfaces_reply_experimenter_set(
    of_bsn_get_interfaces_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_get_interfaces_reply_experimenter_get(
    of_bsn_get_interfaces_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_get_interfaces_reply_subtype_set(
    of_bsn_get_interfaces_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_get_interfaces_reply_subtype_get(
    of_bsn_get_interfaces_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_get_interfaces_reply_interfaces_set(
    of_bsn_get_interfaces_reply_t *obj,
    of_list_bsn_interface_t *interfaces);
extern void of_bsn_get_interfaces_reply_interfaces_bind(
    of_bsn_get_interfaces_reply_t *obj,
    of_list_bsn_interface_t *interfaces);
extern of_list_bsn_interface_t *of_bsn_get_interfaces_reply_interfaces_get(
    of_bsn_get_interfaces_reply_t *obj);

/* Unified accessor functions for of_bsn_get_interfaces_request */

extern void of_bsn_get_interfaces_request_xid_set(
    of_bsn_get_interfaces_request_t *obj,
    uint32_t xid);
extern void of_bsn_get_interfaces_request_xid_get(
    of_bsn_get_interfaces_request_t *obj,
    uint32_t *xid);

extern void of_bsn_get_interfaces_request_experimenter_set(
    of_bsn_get_interfaces_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_get_interfaces_request_experimenter_get(
    of_bsn_get_interfaces_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_get_interfaces_request_subtype_set(
    of_bsn_get_interfaces_request_t *obj,
    uint32_t subtype);
extern void of_bsn_get_interfaces_request_subtype_get(
    of_bsn_get_interfaces_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_get_ip_mask_reply */

extern void of_bsn_get_ip_mask_reply_xid_set(
    of_bsn_get_ip_mask_reply_t *obj,
    uint32_t xid);
extern void of_bsn_get_ip_mask_reply_xid_get(
    of_bsn_get_ip_mask_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_get_ip_mask_reply_experimenter_set(
    of_bsn_get_ip_mask_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_get_ip_mask_reply_experimenter_get(
    of_bsn_get_ip_mask_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_get_ip_mask_reply_subtype_set(
    of_bsn_get_ip_mask_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_get_ip_mask_reply_subtype_get(
    of_bsn_get_ip_mask_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_get_ip_mask_reply_index_set(
    of_bsn_get_ip_mask_reply_t *obj,
    uint8_t index);
extern void of_bsn_get_ip_mask_reply_index_get(
    of_bsn_get_ip_mask_reply_t *obj,
    uint8_t *index);

extern void of_bsn_get_ip_mask_reply_mask_set(
    of_bsn_get_ip_mask_reply_t *obj,
    uint32_t mask);
extern void of_bsn_get_ip_mask_reply_mask_get(
    of_bsn_get_ip_mask_reply_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_bsn_get_ip_mask_request */

extern void of_bsn_get_ip_mask_request_xid_set(
    of_bsn_get_ip_mask_request_t *obj,
    uint32_t xid);
extern void of_bsn_get_ip_mask_request_xid_get(
    of_bsn_get_ip_mask_request_t *obj,
    uint32_t *xid);

extern void of_bsn_get_ip_mask_request_experimenter_set(
    of_bsn_get_ip_mask_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_get_ip_mask_request_experimenter_get(
    of_bsn_get_ip_mask_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_get_ip_mask_request_subtype_set(
    of_bsn_get_ip_mask_request_t *obj,
    uint32_t subtype);
extern void of_bsn_get_ip_mask_request_subtype_get(
    of_bsn_get_ip_mask_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_get_ip_mask_request_index_set(
    of_bsn_get_ip_mask_request_t *obj,
    uint8_t index);
extern void of_bsn_get_ip_mask_request_index_get(
    of_bsn_get_ip_mask_request_t *obj,
    uint8_t *index);

/* Unified accessor functions for of_bsn_get_l2_table_reply */

extern void of_bsn_get_l2_table_reply_xid_set(
    of_bsn_get_l2_table_reply_t *obj,
    uint32_t xid);
extern void of_bsn_get_l2_table_reply_xid_get(
    of_bsn_get_l2_table_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_get_l2_table_reply_experimenter_set(
    of_bsn_get_l2_table_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_get_l2_table_reply_experimenter_get(
    of_bsn_get_l2_table_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_get_l2_table_reply_subtype_set(
    of_bsn_get_l2_table_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_get_l2_table_reply_subtype_get(
    of_bsn_get_l2_table_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_get_l2_table_reply_l2_table_enable_set(
    of_bsn_get_l2_table_reply_t *obj,
    uint8_t l2_table_enable);
extern void of_bsn_get_l2_table_reply_l2_table_enable_get(
    of_bsn_get_l2_table_reply_t *obj,
    uint8_t *l2_table_enable);

extern void of_bsn_get_l2_table_reply_l2_table_priority_set(
    of_bsn_get_l2_table_reply_t *obj,
    uint16_t l2_table_priority);
extern void of_bsn_get_l2_table_reply_l2_table_priority_get(
    of_bsn_get_l2_table_reply_t *obj,
    uint16_t *l2_table_priority);

/* Unified accessor functions for of_bsn_get_l2_table_request */

extern void of_bsn_get_l2_table_request_xid_set(
    of_bsn_get_l2_table_request_t *obj,
    uint32_t xid);
extern void of_bsn_get_l2_table_request_xid_get(
    of_bsn_get_l2_table_request_t *obj,
    uint32_t *xid);

extern void of_bsn_get_l2_table_request_experimenter_set(
    of_bsn_get_l2_table_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_get_l2_table_request_experimenter_get(
    of_bsn_get_l2_table_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_get_l2_table_request_subtype_set(
    of_bsn_get_l2_table_request_t *obj,
    uint32_t subtype);
extern void of_bsn_get_l2_table_request_subtype_get(
    of_bsn_get_l2_table_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_get_mirroring_reply */

extern void of_bsn_get_mirroring_reply_xid_set(
    of_bsn_get_mirroring_reply_t *obj,
    uint32_t xid);
extern void of_bsn_get_mirroring_reply_xid_get(
    of_bsn_get_mirroring_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_get_mirroring_reply_experimenter_set(
    of_bsn_get_mirroring_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_get_mirroring_reply_experimenter_get(
    of_bsn_get_mirroring_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_get_mirroring_reply_subtype_set(
    of_bsn_get_mirroring_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_get_mirroring_reply_subtype_get(
    of_bsn_get_mirroring_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_get_mirroring_reply_report_mirror_ports_set(
    of_bsn_get_mirroring_reply_t *obj,
    uint8_t report_mirror_ports);
extern void of_bsn_get_mirroring_reply_report_mirror_ports_get(
    of_bsn_get_mirroring_reply_t *obj,
    uint8_t *report_mirror_ports);

/* Unified accessor functions for of_bsn_get_mirroring_request */

extern void of_bsn_get_mirroring_request_xid_set(
    of_bsn_get_mirroring_request_t *obj,
    uint32_t xid);
extern void of_bsn_get_mirroring_request_xid_get(
    of_bsn_get_mirroring_request_t *obj,
    uint32_t *xid);

extern void of_bsn_get_mirroring_request_experimenter_set(
    of_bsn_get_mirroring_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_get_mirroring_request_experimenter_get(
    of_bsn_get_mirroring_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_get_mirroring_request_subtype_set(
    of_bsn_get_mirroring_request_t *obj,
    uint32_t subtype);
extern void of_bsn_get_mirroring_request_subtype_get(
    of_bsn_get_mirroring_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_get_mirroring_request_report_mirror_ports_set(
    of_bsn_get_mirroring_request_t *obj,
    uint8_t report_mirror_ports);
extern void of_bsn_get_mirroring_request_report_mirror_ports_get(
    of_bsn_get_mirroring_request_t *obj,
    uint8_t *report_mirror_ports);

/* Unified accessor functions for of_bsn_get_switch_pipeline_reply */

extern void of_bsn_get_switch_pipeline_reply_xid_set(
    of_bsn_get_switch_pipeline_reply_t *obj,
    uint32_t xid);
extern void of_bsn_get_switch_pipeline_reply_xid_get(
    of_bsn_get_switch_pipeline_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_get_switch_pipeline_reply_experimenter_set(
    of_bsn_get_switch_pipeline_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_get_switch_pipeline_reply_experimenter_get(
    of_bsn_get_switch_pipeline_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_get_switch_pipeline_reply_subtype_set(
    of_bsn_get_switch_pipeline_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_get_switch_pipeline_reply_subtype_get(
    of_bsn_get_switch_pipeline_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_get_switch_pipeline_reply_pipeline_set(
    of_bsn_get_switch_pipeline_reply_t *obj,
    of_desc_str_t pipeline);
extern void of_bsn_get_switch_pipeline_reply_pipeline_get(
    of_bsn_get_switch_pipeline_reply_t *obj,
    of_desc_str_t *pipeline);

/* Unified accessor functions for of_bsn_get_switch_pipeline_request */

extern void of_bsn_get_switch_pipeline_request_xid_set(
    of_bsn_get_switch_pipeline_request_t *obj,
    uint32_t xid);
extern void of_bsn_get_switch_pipeline_request_xid_get(
    of_bsn_get_switch_pipeline_request_t *obj,
    uint32_t *xid);

extern void of_bsn_get_switch_pipeline_request_experimenter_set(
    of_bsn_get_switch_pipeline_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_get_switch_pipeline_request_experimenter_get(
    of_bsn_get_switch_pipeline_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_get_switch_pipeline_request_subtype_set(
    of_bsn_get_switch_pipeline_request_t *obj,
    uint32_t subtype);
extern void of_bsn_get_switch_pipeline_request_subtype_get(
    of_bsn_get_switch_pipeline_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_hybrid_get_reply */

extern void of_bsn_hybrid_get_reply_xid_set(
    of_bsn_hybrid_get_reply_t *obj,
    uint32_t xid);
extern void of_bsn_hybrid_get_reply_xid_get(
    of_bsn_hybrid_get_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_hybrid_get_reply_experimenter_set(
    of_bsn_hybrid_get_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_hybrid_get_reply_experimenter_get(
    of_bsn_hybrid_get_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_hybrid_get_reply_subtype_set(
    of_bsn_hybrid_get_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_hybrid_get_reply_subtype_get(
    of_bsn_hybrid_get_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_hybrid_get_reply_hybrid_enable_set(
    of_bsn_hybrid_get_reply_t *obj,
    uint8_t hybrid_enable);
extern void of_bsn_hybrid_get_reply_hybrid_enable_get(
    of_bsn_hybrid_get_reply_t *obj,
    uint8_t *hybrid_enable);

extern void of_bsn_hybrid_get_reply_hybrid_version_set(
    of_bsn_hybrid_get_reply_t *obj,
    uint16_t hybrid_version);
extern void of_bsn_hybrid_get_reply_hybrid_version_get(
    of_bsn_hybrid_get_reply_t *obj,
    uint16_t *hybrid_version);

/* Unified accessor functions for of_bsn_hybrid_get_request */

extern void of_bsn_hybrid_get_request_xid_set(
    of_bsn_hybrid_get_request_t *obj,
    uint32_t xid);
extern void of_bsn_hybrid_get_request_xid_get(
    of_bsn_hybrid_get_request_t *obj,
    uint32_t *xid);

extern void of_bsn_hybrid_get_request_experimenter_set(
    of_bsn_hybrid_get_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_hybrid_get_request_experimenter_get(
    of_bsn_hybrid_get_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_hybrid_get_request_subtype_set(
    of_bsn_hybrid_get_request_t *obj,
    uint32_t subtype);
extern void of_bsn_hybrid_get_request_subtype_get(
    of_bsn_hybrid_get_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_image_desc_stats_reply */

extern void of_bsn_image_desc_stats_reply_xid_set(
    of_bsn_image_desc_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_image_desc_stats_reply_xid_get(
    of_bsn_image_desc_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_image_desc_stats_reply_flags_set(
    of_bsn_image_desc_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_image_desc_stats_reply_flags_get(
    of_bsn_image_desc_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_image_desc_stats_reply_experimenter_set(
    of_bsn_image_desc_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_image_desc_stats_reply_experimenter_get(
    of_bsn_image_desc_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_image_desc_stats_reply_subtype_set(
    of_bsn_image_desc_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_image_desc_stats_reply_subtype_get(
    of_bsn_image_desc_stats_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_image_desc_stats_reply_image_checksum_set(
    of_bsn_image_desc_stats_reply_t *obj,
    of_desc_str_t image_checksum);
extern void of_bsn_image_desc_stats_reply_image_checksum_get(
    of_bsn_image_desc_stats_reply_t *obj,
    of_desc_str_t *image_checksum);

extern void of_bsn_image_desc_stats_reply_startup_config_checksum_set(
    of_bsn_image_desc_stats_reply_t *obj,
    of_desc_str_t startup_config_checksum);
extern void of_bsn_image_desc_stats_reply_startup_config_checksum_get(
    of_bsn_image_desc_stats_reply_t *obj,
    of_desc_str_t *startup_config_checksum);

/* Unified accessor functions for of_bsn_image_desc_stats_request */

extern void of_bsn_image_desc_stats_request_xid_set(
    of_bsn_image_desc_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_image_desc_stats_request_xid_get(
    of_bsn_image_desc_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_image_desc_stats_request_flags_set(
    of_bsn_image_desc_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_image_desc_stats_request_flags_get(
    of_bsn_image_desc_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_image_desc_stats_request_experimenter_set(
    of_bsn_image_desc_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_image_desc_stats_request_experimenter_get(
    of_bsn_image_desc_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_image_desc_stats_request_subtype_set(
    of_bsn_image_desc_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_image_desc_stats_request_subtype_get(
    of_bsn_image_desc_stats_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_lacp_convergence_notif */

extern void of_bsn_lacp_convergence_notif_xid_set(
    of_bsn_lacp_convergence_notif_t *obj,
    uint32_t xid);
extern void of_bsn_lacp_convergence_notif_xid_get(
    of_bsn_lacp_convergence_notif_t *obj,
    uint32_t *xid);

extern void of_bsn_lacp_convergence_notif_experimenter_set(
    of_bsn_lacp_convergence_notif_t *obj,
    uint32_t experimenter);
extern void of_bsn_lacp_convergence_notif_experimenter_get(
    of_bsn_lacp_convergence_notif_t *obj,
    uint32_t *experimenter);

extern void of_bsn_lacp_convergence_notif_subtype_set(
    of_bsn_lacp_convergence_notif_t *obj,
    uint32_t subtype);
extern void of_bsn_lacp_convergence_notif_subtype_get(
    of_bsn_lacp_convergence_notif_t *obj,
    uint32_t *subtype);

extern void of_bsn_lacp_convergence_notif_convergence_status_set(
    of_bsn_lacp_convergence_notif_t *obj,
    uint8_t convergence_status);
extern void of_bsn_lacp_convergence_notif_convergence_status_get(
    of_bsn_lacp_convergence_notif_t *obj,
    uint8_t *convergence_status);

extern void of_bsn_lacp_convergence_notif_port_no_set(
    of_bsn_lacp_convergence_notif_t *obj,
    of_port_no_t port_no);
extern void of_bsn_lacp_convergence_notif_port_no_get(
    of_bsn_lacp_convergence_notif_t *obj,
    of_port_no_t *port_no);

extern void of_bsn_lacp_convergence_notif_actor_sys_priority_set(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t actor_sys_priority);
extern void of_bsn_lacp_convergence_notif_actor_sys_priority_get(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t *actor_sys_priority);

extern void of_bsn_lacp_convergence_notif_actor_sys_mac_set(
    of_bsn_lacp_convergence_notif_t *obj,
    of_mac_addr_t actor_sys_mac);
extern void of_bsn_lacp_convergence_notif_actor_sys_mac_get(
    of_bsn_lacp_convergence_notif_t *obj,
    of_mac_addr_t *actor_sys_mac);

extern void of_bsn_lacp_convergence_notif_actor_port_priority_set(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t actor_port_priority);
extern void of_bsn_lacp_convergence_notif_actor_port_priority_get(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t *actor_port_priority);

extern void of_bsn_lacp_convergence_notif_actor_port_num_set(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t actor_port_num);
extern void of_bsn_lacp_convergence_notif_actor_port_num_get(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t *actor_port_num);

extern void of_bsn_lacp_convergence_notif_actor_key_set(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t actor_key);
extern void of_bsn_lacp_convergence_notif_actor_key_get(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t *actor_key);

extern void of_bsn_lacp_convergence_notif_partner_sys_priority_set(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t partner_sys_priority);
extern void of_bsn_lacp_convergence_notif_partner_sys_priority_get(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t *partner_sys_priority);

extern void of_bsn_lacp_convergence_notif_partner_sys_mac_set(
    of_bsn_lacp_convergence_notif_t *obj,
    of_mac_addr_t partner_sys_mac);
extern void of_bsn_lacp_convergence_notif_partner_sys_mac_get(
    of_bsn_lacp_convergence_notif_t *obj,
    of_mac_addr_t *partner_sys_mac);

extern void of_bsn_lacp_convergence_notif_partner_port_priority_set(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t partner_port_priority);
extern void of_bsn_lacp_convergence_notif_partner_port_priority_get(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t *partner_port_priority);

extern void of_bsn_lacp_convergence_notif_partner_port_num_set(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t partner_port_num);
extern void of_bsn_lacp_convergence_notif_partner_port_num_get(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t *partner_port_num);

extern void of_bsn_lacp_convergence_notif_partner_key_set(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t partner_key);
extern void of_bsn_lacp_convergence_notif_partner_key_get(
    of_bsn_lacp_convergence_notif_t *obj,
    uint16_t *partner_key);

/* Unified accessor functions for of_bsn_lacp_stats_reply */

extern void of_bsn_lacp_stats_reply_xid_set(
    of_bsn_lacp_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_lacp_stats_reply_xid_get(
    of_bsn_lacp_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_lacp_stats_reply_flags_set(
    of_bsn_lacp_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_lacp_stats_reply_flags_get(
    of_bsn_lacp_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_lacp_stats_reply_experimenter_set(
    of_bsn_lacp_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_lacp_stats_reply_experimenter_get(
    of_bsn_lacp_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_lacp_stats_reply_subtype_set(
    of_bsn_lacp_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_lacp_stats_reply_subtype_get(
    of_bsn_lacp_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_lacp_stats_reply_entries_set(
    of_bsn_lacp_stats_reply_t *obj,
    of_list_bsn_lacp_stats_entry_t *entries);
extern void of_bsn_lacp_stats_reply_entries_bind(
    of_bsn_lacp_stats_reply_t *obj,
    of_list_bsn_lacp_stats_entry_t *entries);
extern of_list_bsn_lacp_stats_entry_t *of_bsn_lacp_stats_reply_entries_get(
    of_bsn_lacp_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_lacp_stats_request */

extern void of_bsn_lacp_stats_request_xid_set(
    of_bsn_lacp_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_lacp_stats_request_xid_get(
    of_bsn_lacp_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_lacp_stats_request_flags_set(
    of_bsn_lacp_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_lacp_stats_request_flags_get(
    of_bsn_lacp_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_lacp_stats_request_experimenter_set(
    of_bsn_lacp_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_lacp_stats_request_experimenter_get(
    of_bsn_lacp_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_lacp_stats_request_subtype_set(
    of_bsn_lacp_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_lacp_stats_request_subtype_get(
    of_bsn_lacp_stats_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_log */

extern void of_bsn_log_xid_set(
    of_bsn_log_t *obj,
    uint32_t xid);
extern void of_bsn_log_xid_get(
    of_bsn_log_t *obj,
    uint32_t *xid);

extern void of_bsn_log_experimenter_set(
    of_bsn_log_t *obj,
    uint32_t experimenter);
extern void of_bsn_log_experimenter_get(
    of_bsn_log_t *obj,
    uint32_t *experimenter);

extern void of_bsn_log_subtype_set(
    of_bsn_log_t *obj,
    uint32_t subtype);
extern void of_bsn_log_subtype_get(
    of_bsn_log_t *obj,
    uint32_t *subtype);

extern void of_bsn_log_loglevel_set(
    of_bsn_log_t *obj,
    uint8_t loglevel);
extern void of_bsn_log_loglevel_get(
    of_bsn_log_t *obj,
    uint8_t *loglevel);

extern int WARN_UNUSED_RESULT of_bsn_log_data_set(
    of_bsn_log_t *obj,
    of_octets_t *data);
extern void of_bsn_log_data_get(
    of_bsn_log_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bsn_lua_command_reply */

extern void of_bsn_lua_command_reply_xid_set(
    of_bsn_lua_command_reply_t *obj,
    uint32_t xid);
extern void of_bsn_lua_command_reply_xid_get(
    of_bsn_lua_command_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_lua_command_reply_experimenter_set(
    of_bsn_lua_command_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_lua_command_reply_experimenter_get(
    of_bsn_lua_command_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_lua_command_reply_subtype_set(
    of_bsn_lua_command_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_lua_command_reply_subtype_get(
    of_bsn_lua_command_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_lua_command_reply_data_set(
    of_bsn_lua_command_reply_t *obj,
    of_octets_t *data);
extern void of_bsn_lua_command_reply_data_get(
    of_bsn_lua_command_reply_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bsn_lua_command_request */

extern void of_bsn_lua_command_request_xid_set(
    of_bsn_lua_command_request_t *obj,
    uint32_t xid);
extern void of_bsn_lua_command_request_xid_get(
    of_bsn_lua_command_request_t *obj,
    uint32_t *xid);

extern void of_bsn_lua_command_request_experimenter_set(
    of_bsn_lua_command_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_lua_command_request_experimenter_get(
    of_bsn_lua_command_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_lua_command_request_subtype_set(
    of_bsn_lua_command_request_t *obj,
    uint32_t subtype);
extern void of_bsn_lua_command_request_subtype_get(
    of_bsn_lua_command_request_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_lua_command_request_data_set(
    of_bsn_lua_command_request_t *obj,
    of_octets_t *data);
extern void of_bsn_lua_command_request_data_get(
    of_bsn_lua_command_request_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bsn_lua_notification */

extern void of_bsn_lua_notification_xid_set(
    of_bsn_lua_notification_t *obj,
    uint32_t xid);
extern void of_bsn_lua_notification_xid_get(
    of_bsn_lua_notification_t *obj,
    uint32_t *xid);

extern void of_bsn_lua_notification_experimenter_set(
    of_bsn_lua_notification_t *obj,
    uint32_t experimenter);
extern void of_bsn_lua_notification_experimenter_get(
    of_bsn_lua_notification_t *obj,
    uint32_t *experimenter);

extern void of_bsn_lua_notification_subtype_set(
    of_bsn_lua_notification_t *obj,
    uint32_t subtype);
extern void of_bsn_lua_notification_subtype_get(
    of_bsn_lua_notification_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_lua_notification_data_set(
    of_bsn_lua_notification_t *obj,
    of_octets_t *data);
extern void of_bsn_lua_notification_data_get(
    of_bsn_lua_notification_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bsn_lua_upload */

extern void of_bsn_lua_upload_xid_set(
    of_bsn_lua_upload_t *obj,
    uint32_t xid);
extern void of_bsn_lua_upload_xid_get(
    of_bsn_lua_upload_t *obj,
    uint32_t *xid);

extern void of_bsn_lua_upload_experimenter_set(
    of_bsn_lua_upload_t *obj,
    uint32_t experimenter);
extern void of_bsn_lua_upload_experimenter_get(
    of_bsn_lua_upload_t *obj,
    uint32_t *experimenter);

extern void of_bsn_lua_upload_subtype_set(
    of_bsn_lua_upload_t *obj,
    uint32_t subtype);
extern void of_bsn_lua_upload_subtype_get(
    of_bsn_lua_upload_t *obj,
    uint32_t *subtype);

extern void of_bsn_lua_upload_flags_set(
    of_bsn_lua_upload_t *obj,
    uint16_t flags);
extern void of_bsn_lua_upload_flags_get(
    of_bsn_lua_upload_t *obj,
    uint16_t *flags);

extern void of_bsn_lua_upload_filename_set(
    of_bsn_lua_upload_t *obj,
    of_str64_t filename);
extern void of_bsn_lua_upload_filename_get(
    of_bsn_lua_upload_t *obj,
    of_str64_t *filename);

extern int WARN_UNUSED_RESULT of_bsn_lua_upload_data_set(
    of_bsn_lua_upload_t *obj,
    of_octets_t *data);
extern void of_bsn_lua_upload_data_get(
    of_bsn_lua_upload_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bsn_pdu_rx_reply */

extern void of_bsn_pdu_rx_reply_xid_set(
    of_bsn_pdu_rx_reply_t *obj,
    uint32_t xid);
extern void of_bsn_pdu_rx_reply_xid_get(
    of_bsn_pdu_rx_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_pdu_rx_reply_experimenter_set(
    of_bsn_pdu_rx_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_pdu_rx_reply_experimenter_get(
    of_bsn_pdu_rx_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_pdu_rx_reply_subtype_set(
    of_bsn_pdu_rx_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_pdu_rx_reply_subtype_get(
    of_bsn_pdu_rx_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_pdu_rx_reply_status_set(
    of_bsn_pdu_rx_reply_t *obj,
    uint32_t status);
extern void of_bsn_pdu_rx_reply_status_get(
    of_bsn_pdu_rx_reply_t *obj,
    uint32_t *status);

extern void of_bsn_pdu_rx_reply_port_no_set(
    of_bsn_pdu_rx_reply_t *obj,
    of_port_no_t port_no);
extern void of_bsn_pdu_rx_reply_port_no_get(
    of_bsn_pdu_rx_reply_t *obj,
    of_port_no_t *port_no);

extern void of_bsn_pdu_rx_reply_slot_num_set(
    of_bsn_pdu_rx_reply_t *obj,
    uint8_t slot_num);
extern void of_bsn_pdu_rx_reply_slot_num_get(
    of_bsn_pdu_rx_reply_t *obj,
    uint8_t *slot_num);

/* Unified accessor functions for of_bsn_pdu_rx_request */

extern void of_bsn_pdu_rx_request_xid_set(
    of_bsn_pdu_rx_request_t *obj,
    uint32_t xid);
extern void of_bsn_pdu_rx_request_xid_get(
    of_bsn_pdu_rx_request_t *obj,
    uint32_t *xid);

extern void of_bsn_pdu_rx_request_experimenter_set(
    of_bsn_pdu_rx_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_pdu_rx_request_experimenter_get(
    of_bsn_pdu_rx_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_pdu_rx_request_subtype_set(
    of_bsn_pdu_rx_request_t *obj,
    uint32_t subtype);
extern void of_bsn_pdu_rx_request_subtype_get(
    of_bsn_pdu_rx_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_pdu_rx_request_timeout_ms_set(
    of_bsn_pdu_rx_request_t *obj,
    uint32_t timeout_ms);
extern void of_bsn_pdu_rx_request_timeout_ms_get(
    of_bsn_pdu_rx_request_t *obj,
    uint32_t *timeout_ms);

extern void of_bsn_pdu_rx_request_port_no_set(
    of_bsn_pdu_rx_request_t *obj,
    of_port_no_t port_no);
extern void of_bsn_pdu_rx_request_port_no_get(
    of_bsn_pdu_rx_request_t *obj,
    of_port_no_t *port_no);

extern void of_bsn_pdu_rx_request_slot_num_set(
    of_bsn_pdu_rx_request_t *obj,
    uint8_t slot_num);
extern void of_bsn_pdu_rx_request_slot_num_get(
    of_bsn_pdu_rx_request_t *obj,
    uint8_t *slot_num);

extern int WARN_UNUSED_RESULT of_bsn_pdu_rx_request_data_set(
    of_bsn_pdu_rx_request_t *obj,
    of_octets_t *data);
extern void of_bsn_pdu_rx_request_data_get(
    of_bsn_pdu_rx_request_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bsn_pdu_rx_timeout */

extern void of_bsn_pdu_rx_timeout_xid_set(
    of_bsn_pdu_rx_timeout_t *obj,
    uint32_t xid);
extern void of_bsn_pdu_rx_timeout_xid_get(
    of_bsn_pdu_rx_timeout_t *obj,
    uint32_t *xid);

extern void of_bsn_pdu_rx_timeout_experimenter_set(
    of_bsn_pdu_rx_timeout_t *obj,
    uint32_t experimenter);
extern void of_bsn_pdu_rx_timeout_experimenter_get(
    of_bsn_pdu_rx_timeout_t *obj,
    uint32_t *experimenter);

extern void of_bsn_pdu_rx_timeout_subtype_set(
    of_bsn_pdu_rx_timeout_t *obj,
    uint32_t subtype);
extern void of_bsn_pdu_rx_timeout_subtype_get(
    of_bsn_pdu_rx_timeout_t *obj,
    uint32_t *subtype);

extern void of_bsn_pdu_rx_timeout_port_no_set(
    of_bsn_pdu_rx_timeout_t *obj,
    of_port_no_t port_no);
extern void of_bsn_pdu_rx_timeout_port_no_get(
    of_bsn_pdu_rx_timeout_t *obj,
    of_port_no_t *port_no);

extern void of_bsn_pdu_rx_timeout_slot_num_set(
    of_bsn_pdu_rx_timeout_t *obj,
    uint8_t slot_num);
extern void of_bsn_pdu_rx_timeout_slot_num_get(
    of_bsn_pdu_rx_timeout_t *obj,
    uint8_t *slot_num);

/* Unified accessor functions for of_bsn_pdu_tx_reply */

extern void of_bsn_pdu_tx_reply_xid_set(
    of_bsn_pdu_tx_reply_t *obj,
    uint32_t xid);
extern void of_bsn_pdu_tx_reply_xid_get(
    of_bsn_pdu_tx_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_pdu_tx_reply_experimenter_set(
    of_bsn_pdu_tx_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_pdu_tx_reply_experimenter_get(
    of_bsn_pdu_tx_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_pdu_tx_reply_subtype_set(
    of_bsn_pdu_tx_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_pdu_tx_reply_subtype_get(
    of_bsn_pdu_tx_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_pdu_tx_reply_status_set(
    of_bsn_pdu_tx_reply_t *obj,
    uint32_t status);
extern void of_bsn_pdu_tx_reply_status_get(
    of_bsn_pdu_tx_reply_t *obj,
    uint32_t *status);

extern void of_bsn_pdu_tx_reply_port_no_set(
    of_bsn_pdu_tx_reply_t *obj,
    of_port_no_t port_no);
extern void of_bsn_pdu_tx_reply_port_no_get(
    of_bsn_pdu_tx_reply_t *obj,
    of_port_no_t *port_no);

extern void of_bsn_pdu_tx_reply_slot_num_set(
    of_bsn_pdu_tx_reply_t *obj,
    uint8_t slot_num);
extern void of_bsn_pdu_tx_reply_slot_num_get(
    of_bsn_pdu_tx_reply_t *obj,
    uint8_t *slot_num);

/* Unified accessor functions for of_bsn_pdu_tx_request */

extern void of_bsn_pdu_tx_request_xid_set(
    of_bsn_pdu_tx_request_t *obj,
    uint32_t xid);
extern void of_bsn_pdu_tx_request_xid_get(
    of_bsn_pdu_tx_request_t *obj,
    uint32_t *xid);

extern void of_bsn_pdu_tx_request_experimenter_set(
    of_bsn_pdu_tx_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_pdu_tx_request_experimenter_get(
    of_bsn_pdu_tx_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_pdu_tx_request_subtype_set(
    of_bsn_pdu_tx_request_t *obj,
    uint32_t subtype);
extern void of_bsn_pdu_tx_request_subtype_get(
    of_bsn_pdu_tx_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_pdu_tx_request_tx_interval_ms_set(
    of_bsn_pdu_tx_request_t *obj,
    uint32_t tx_interval_ms);
extern void of_bsn_pdu_tx_request_tx_interval_ms_get(
    of_bsn_pdu_tx_request_t *obj,
    uint32_t *tx_interval_ms);

extern void of_bsn_pdu_tx_request_port_no_set(
    of_bsn_pdu_tx_request_t *obj,
    of_port_no_t port_no);
extern void of_bsn_pdu_tx_request_port_no_get(
    of_bsn_pdu_tx_request_t *obj,
    of_port_no_t *port_no);

extern void of_bsn_pdu_tx_request_slot_num_set(
    of_bsn_pdu_tx_request_t *obj,
    uint8_t slot_num);
extern void of_bsn_pdu_tx_request_slot_num_get(
    of_bsn_pdu_tx_request_t *obj,
    uint8_t *slot_num);

extern int WARN_UNUSED_RESULT of_bsn_pdu_tx_request_data_set(
    of_bsn_pdu_tx_request_t *obj,
    of_octets_t *data);
extern void of_bsn_pdu_tx_request_data_get(
    of_bsn_pdu_tx_request_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bsn_port_counter_stats_reply */

extern void of_bsn_port_counter_stats_reply_xid_set(
    of_bsn_port_counter_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_port_counter_stats_reply_xid_get(
    of_bsn_port_counter_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_port_counter_stats_reply_flags_set(
    of_bsn_port_counter_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_port_counter_stats_reply_flags_get(
    of_bsn_port_counter_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_port_counter_stats_reply_experimenter_set(
    of_bsn_port_counter_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_port_counter_stats_reply_experimenter_get(
    of_bsn_port_counter_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_port_counter_stats_reply_subtype_set(
    of_bsn_port_counter_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_port_counter_stats_reply_subtype_get(
    of_bsn_port_counter_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_port_counter_stats_reply_entries_set(
    of_bsn_port_counter_stats_reply_t *obj,
    of_list_bsn_port_counter_stats_entry_t *entries);
extern void of_bsn_port_counter_stats_reply_entries_bind(
    of_bsn_port_counter_stats_reply_t *obj,
    of_list_bsn_port_counter_stats_entry_t *entries);
extern of_list_bsn_port_counter_stats_entry_t *of_bsn_port_counter_stats_reply_entries_get(
    of_bsn_port_counter_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_port_counter_stats_request */

extern void of_bsn_port_counter_stats_request_xid_set(
    of_bsn_port_counter_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_port_counter_stats_request_xid_get(
    of_bsn_port_counter_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_port_counter_stats_request_flags_set(
    of_bsn_port_counter_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_port_counter_stats_request_flags_get(
    of_bsn_port_counter_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_port_counter_stats_request_experimenter_set(
    of_bsn_port_counter_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_port_counter_stats_request_experimenter_get(
    of_bsn_port_counter_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_port_counter_stats_request_subtype_set(
    of_bsn_port_counter_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_port_counter_stats_request_subtype_get(
    of_bsn_port_counter_stats_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_port_counter_stats_request_port_no_set(
    of_bsn_port_counter_stats_request_t *obj,
    of_port_no_t port_no);
extern void of_bsn_port_counter_stats_request_port_no_get(
    of_bsn_port_counter_stats_request_t *obj,
    of_port_no_t *port_no);

/* Unified accessor functions for of_bsn_role_status */

extern void of_bsn_role_status_xid_set(
    of_bsn_role_status_t *obj,
    uint32_t xid);
extern void of_bsn_role_status_xid_get(
    of_bsn_role_status_t *obj,
    uint32_t *xid);

extern void of_bsn_role_status_experimenter_set(
    of_bsn_role_status_t *obj,
    uint32_t experimenter);
extern void of_bsn_role_status_experimenter_get(
    of_bsn_role_status_t *obj,
    uint32_t *experimenter);

extern void of_bsn_role_status_subtype_set(
    of_bsn_role_status_t *obj,
    uint32_t subtype);
extern void of_bsn_role_status_subtype_get(
    of_bsn_role_status_t *obj,
    uint32_t *subtype);

extern void of_bsn_role_status_role_set(
    of_bsn_role_status_t *obj,
    uint32_t role);
extern void of_bsn_role_status_role_get(
    of_bsn_role_status_t *obj,
    uint32_t *role);

extern void of_bsn_role_status_reason_set(
    of_bsn_role_status_t *obj,
    uint8_t reason);
extern void of_bsn_role_status_reason_get(
    of_bsn_role_status_t *obj,
    uint8_t *reason);

extern void of_bsn_role_status_generation_id_set(
    of_bsn_role_status_t *obj,
    uint64_t generation_id);
extern void of_bsn_role_status_generation_id_get(
    of_bsn_role_status_t *obj,
    uint64_t *generation_id);

/* Unified accessor functions for of_bsn_set_aux_cxns_reply */

extern void of_bsn_set_aux_cxns_reply_xid_set(
    of_bsn_set_aux_cxns_reply_t *obj,
    uint32_t xid);
extern void of_bsn_set_aux_cxns_reply_xid_get(
    of_bsn_set_aux_cxns_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_set_aux_cxns_reply_experimenter_set(
    of_bsn_set_aux_cxns_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_set_aux_cxns_reply_experimenter_get(
    of_bsn_set_aux_cxns_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_set_aux_cxns_reply_subtype_set(
    of_bsn_set_aux_cxns_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_set_aux_cxns_reply_subtype_get(
    of_bsn_set_aux_cxns_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_set_aux_cxns_reply_num_aux_set(
    of_bsn_set_aux_cxns_reply_t *obj,
    uint32_t num_aux);
extern void of_bsn_set_aux_cxns_reply_num_aux_get(
    of_bsn_set_aux_cxns_reply_t *obj,
    uint32_t *num_aux);

extern void of_bsn_set_aux_cxns_reply_status_set(
    of_bsn_set_aux_cxns_reply_t *obj,
    uint32_t status);
extern void of_bsn_set_aux_cxns_reply_status_get(
    of_bsn_set_aux_cxns_reply_t *obj,
    uint32_t *status);

/* Unified accessor functions for of_bsn_set_aux_cxns_request */

extern void of_bsn_set_aux_cxns_request_xid_set(
    of_bsn_set_aux_cxns_request_t *obj,
    uint32_t xid);
extern void of_bsn_set_aux_cxns_request_xid_get(
    of_bsn_set_aux_cxns_request_t *obj,
    uint32_t *xid);

extern void of_bsn_set_aux_cxns_request_experimenter_set(
    of_bsn_set_aux_cxns_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_set_aux_cxns_request_experimenter_get(
    of_bsn_set_aux_cxns_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_set_aux_cxns_request_subtype_set(
    of_bsn_set_aux_cxns_request_t *obj,
    uint32_t subtype);
extern void of_bsn_set_aux_cxns_request_subtype_get(
    of_bsn_set_aux_cxns_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_set_aux_cxns_request_num_aux_set(
    of_bsn_set_aux_cxns_request_t *obj,
    uint32_t num_aux);
extern void of_bsn_set_aux_cxns_request_num_aux_get(
    of_bsn_set_aux_cxns_request_t *obj,
    uint32_t *num_aux);

/* Unified accessor functions for of_bsn_set_ip_mask */

extern void of_bsn_set_ip_mask_xid_set(
    of_bsn_set_ip_mask_t *obj,
    uint32_t xid);
extern void of_bsn_set_ip_mask_xid_get(
    of_bsn_set_ip_mask_t *obj,
    uint32_t *xid);

extern void of_bsn_set_ip_mask_experimenter_set(
    of_bsn_set_ip_mask_t *obj,
    uint32_t experimenter);
extern void of_bsn_set_ip_mask_experimenter_get(
    of_bsn_set_ip_mask_t *obj,
    uint32_t *experimenter);

extern void of_bsn_set_ip_mask_subtype_set(
    of_bsn_set_ip_mask_t *obj,
    uint32_t subtype);
extern void of_bsn_set_ip_mask_subtype_get(
    of_bsn_set_ip_mask_t *obj,
    uint32_t *subtype);

extern void of_bsn_set_ip_mask_index_set(
    of_bsn_set_ip_mask_t *obj,
    uint8_t index);
extern void of_bsn_set_ip_mask_index_get(
    of_bsn_set_ip_mask_t *obj,
    uint8_t *index);

extern void of_bsn_set_ip_mask_mask_set(
    of_bsn_set_ip_mask_t *obj,
    uint32_t mask);
extern void of_bsn_set_ip_mask_mask_get(
    of_bsn_set_ip_mask_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_bsn_set_l2_table_reply */

extern void of_bsn_set_l2_table_reply_xid_set(
    of_bsn_set_l2_table_reply_t *obj,
    uint32_t xid);
extern void of_bsn_set_l2_table_reply_xid_get(
    of_bsn_set_l2_table_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_set_l2_table_reply_experimenter_set(
    of_bsn_set_l2_table_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_set_l2_table_reply_experimenter_get(
    of_bsn_set_l2_table_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_set_l2_table_reply_subtype_set(
    of_bsn_set_l2_table_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_set_l2_table_reply_subtype_get(
    of_bsn_set_l2_table_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_set_l2_table_reply_l2_table_enable_set(
    of_bsn_set_l2_table_reply_t *obj,
    uint8_t l2_table_enable);
extern void of_bsn_set_l2_table_reply_l2_table_enable_get(
    of_bsn_set_l2_table_reply_t *obj,
    uint8_t *l2_table_enable);

extern void of_bsn_set_l2_table_reply_l2_table_priority_set(
    of_bsn_set_l2_table_reply_t *obj,
    uint16_t l2_table_priority);
extern void of_bsn_set_l2_table_reply_l2_table_priority_get(
    of_bsn_set_l2_table_reply_t *obj,
    uint16_t *l2_table_priority);

extern void of_bsn_set_l2_table_reply_status_set(
    of_bsn_set_l2_table_reply_t *obj,
    uint32_t status);
extern void of_bsn_set_l2_table_reply_status_get(
    of_bsn_set_l2_table_reply_t *obj,
    uint32_t *status);

/* Unified accessor functions for of_bsn_set_l2_table_request */

extern void of_bsn_set_l2_table_request_xid_set(
    of_bsn_set_l2_table_request_t *obj,
    uint32_t xid);
extern void of_bsn_set_l2_table_request_xid_get(
    of_bsn_set_l2_table_request_t *obj,
    uint32_t *xid);

extern void of_bsn_set_l2_table_request_experimenter_set(
    of_bsn_set_l2_table_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_set_l2_table_request_experimenter_get(
    of_bsn_set_l2_table_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_set_l2_table_request_subtype_set(
    of_bsn_set_l2_table_request_t *obj,
    uint32_t subtype);
extern void of_bsn_set_l2_table_request_subtype_get(
    of_bsn_set_l2_table_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_set_l2_table_request_l2_table_enable_set(
    of_bsn_set_l2_table_request_t *obj,
    uint8_t l2_table_enable);
extern void of_bsn_set_l2_table_request_l2_table_enable_get(
    of_bsn_set_l2_table_request_t *obj,
    uint8_t *l2_table_enable);

extern void of_bsn_set_l2_table_request_l2_table_priority_set(
    of_bsn_set_l2_table_request_t *obj,
    uint16_t l2_table_priority);
extern void of_bsn_set_l2_table_request_l2_table_priority_get(
    of_bsn_set_l2_table_request_t *obj,
    uint16_t *l2_table_priority);

/* Unified accessor functions for of_bsn_set_lacp_reply */

extern void of_bsn_set_lacp_reply_xid_set(
    of_bsn_set_lacp_reply_t *obj,
    uint32_t xid);
extern void of_bsn_set_lacp_reply_xid_get(
    of_bsn_set_lacp_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_set_lacp_reply_experimenter_set(
    of_bsn_set_lacp_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_set_lacp_reply_experimenter_get(
    of_bsn_set_lacp_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_set_lacp_reply_subtype_set(
    of_bsn_set_lacp_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_set_lacp_reply_subtype_get(
    of_bsn_set_lacp_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_set_lacp_reply_status_set(
    of_bsn_set_lacp_reply_t *obj,
    uint32_t status);
extern void of_bsn_set_lacp_reply_status_get(
    of_bsn_set_lacp_reply_t *obj,
    uint32_t *status);

extern void of_bsn_set_lacp_reply_port_no_set(
    of_bsn_set_lacp_reply_t *obj,
    of_port_no_t port_no);
extern void of_bsn_set_lacp_reply_port_no_get(
    of_bsn_set_lacp_reply_t *obj,
    of_port_no_t *port_no);

/* Unified accessor functions for of_bsn_set_lacp_request */

extern void of_bsn_set_lacp_request_xid_set(
    of_bsn_set_lacp_request_t *obj,
    uint32_t xid);
extern void of_bsn_set_lacp_request_xid_get(
    of_bsn_set_lacp_request_t *obj,
    uint32_t *xid);

extern void of_bsn_set_lacp_request_experimenter_set(
    of_bsn_set_lacp_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_set_lacp_request_experimenter_get(
    of_bsn_set_lacp_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_set_lacp_request_subtype_set(
    of_bsn_set_lacp_request_t *obj,
    uint32_t subtype);
extern void of_bsn_set_lacp_request_subtype_get(
    of_bsn_set_lacp_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_set_lacp_request_enabled_set(
    of_bsn_set_lacp_request_t *obj,
    uint8_t enabled);
extern void of_bsn_set_lacp_request_enabled_get(
    of_bsn_set_lacp_request_t *obj,
    uint8_t *enabled);

extern void of_bsn_set_lacp_request_port_no_set(
    of_bsn_set_lacp_request_t *obj,
    of_port_no_t port_no);
extern void of_bsn_set_lacp_request_port_no_get(
    of_bsn_set_lacp_request_t *obj,
    of_port_no_t *port_no);

extern void of_bsn_set_lacp_request_actor_sys_priority_set(
    of_bsn_set_lacp_request_t *obj,
    uint16_t actor_sys_priority);
extern void of_bsn_set_lacp_request_actor_sys_priority_get(
    of_bsn_set_lacp_request_t *obj,
    uint16_t *actor_sys_priority);

extern void of_bsn_set_lacp_request_actor_sys_mac_set(
    of_bsn_set_lacp_request_t *obj,
    of_mac_addr_t actor_sys_mac);
extern void of_bsn_set_lacp_request_actor_sys_mac_get(
    of_bsn_set_lacp_request_t *obj,
    of_mac_addr_t *actor_sys_mac);

extern void of_bsn_set_lacp_request_actor_port_priority_set(
    of_bsn_set_lacp_request_t *obj,
    uint16_t actor_port_priority);
extern void of_bsn_set_lacp_request_actor_port_priority_get(
    of_bsn_set_lacp_request_t *obj,
    uint16_t *actor_port_priority);

extern void of_bsn_set_lacp_request_actor_port_num_set(
    of_bsn_set_lacp_request_t *obj,
    uint16_t actor_port_num);
extern void of_bsn_set_lacp_request_actor_port_num_get(
    of_bsn_set_lacp_request_t *obj,
    uint16_t *actor_port_num);

extern void of_bsn_set_lacp_request_actor_key_set(
    of_bsn_set_lacp_request_t *obj,
    uint16_t actor_key);
extern void of_bsn_set_lacp_request_actor_key_get(
    of_bsn_set_lacp_request_t *obj,
    uint16_t *actor_key);

/* Unified accessor functions for of_bsn_set_mirroring */

extern void of_bsn_set_mirroring_xid_set(
    of_bsn_set_mirroring_t *obj,
    uint32_t xid);
extern void of_bsn_set_mirroring_xid_get(
    of_bsn_set_mirroring_t *obj,
    uint32_t *xid);

extern void of_bsn_set_mirroring_experimenter_set(
    of_bsn_set_mirroring_t *obj,
    uint32_t experimenter);
extern void of_bsn_set_mirroring_experimenter_get(
    of_bsn_set_mirroring_t *obj,
    uint32_t *experimenter);

extern void of_bsn_set_mirroring_subtype_set(
    of_bsn_set_mirroring_t *obj,
    uint32_t subtype);
extern void of_bsn_set_mirroring_subtype_get(
    of_bsn_set_mirroring_t *obj,
    uint32_t *subtype);

extern void of_bsn_set_mirroring_report_mirror_ports_set(
    of_bsn_set_mirroring_t *obj,
    uint8_t report_mirror_ports);
extern void of_bsn_set_mirroring_report_mirror_ports_get(
    of_bsn_set_mirroring_t *obj,
    uint8_t *report_mirror_ports);

/* Unified accessor functions for of_bsn_set_pktin_suppression_reply */

extern void of_bsn_set_pktin_suppression_reply_xid_set(
    of_bsn_set_pktin_suppression_reply_t *obj,
    uint32_t xid);
extern void of_bsn_set_pktin_suppression_reply_xid_get(
    of_bsn_set_pktin_suppression_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_set_pktin_suppression_reply_experimenter_set(
    of_bsn_set_pktin_suppression_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_set_pktin_suppression_reply_experimenter_get(
    of_bsn_set_pktin_suppression_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_set_pktin_suppression_reply_subtype_set(
    of_bsn_set_pktin_suppression_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_set_pktin_suppression_reply_subtype_get(
    of_bsn_set_pktin_suppression_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_set_pktin_suppression_reply_status_set(
    of_bsn_set_pktin_suppression_reply_t *obj,
    uint32_t status);
extern void of_bsn_set_pktin_suppression_reply_status_get(
    of_bsn_set_pktin_suppression_reply_t *obj,
    uint32_t *status);

/* Unified accessor functions for of_bsn_set_pktin_suppression_request */

extern void of_bsn_set_pktin_suppression_request_xid_set(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint32_t xid);
extern void of_bsn_set_pktin_suppression_request_xid_get(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint32_t *xid);

extern void of_bsn_set_pktin_suppression_request_experimenter_set(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_set_pktin_suppression_request_experimenter_get(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_set_pktin_suppression_request_subtype_set(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint32_t subtype);
extern void of_bsn_set_pktin_suppression_request_subtype_get(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_set_pktin_suppression_request_enabled_set(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint8_t enabled);
extern void of_bsn_set_pktin_suppression_request_enabled_get(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint8_t *enabled);

extern void of_bsn_set_pktin_suppression_request_idle_timeout_set(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint16_t idle_timeout);
extern void of_bsn_set_pktin_suppression_request_idle_timeout_get(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint16_t *idle_timeout);

extern void of_bsn_set_pktin_suppression_request_hard_timeout_set(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint16_t hard_timeout);
extern void of_bsn_set_pktin_suppression_request_hard_timeout_get(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint16_t *hard_timeout);

extern void of_bsn_set_pktin_suppression_request_priority_set(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint16_t priority);
extern void of_bsn_set_pktin_suppression_request_priority_get(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint16_t *priority);

extern void of_bsn_set_pktin_suppression_request_cookie_set(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint64_t cookie);
extern void of_bsn_set_pktin_suppression_request_cookie_get(
    of_bsn_set_pktin_suppression_request_t *obj,
    uint64_t *cookie);

/* Unified accessor functions for of_bsn_set_switch_pipeline_reply */

extern void of_bsn_set_switch_pipeline_reply_xid_set(
    of_bsn_set_switch_pipeline_reply_t *obj,
    uint32_t xid);
extern void of_bsn_set_switch_pipeline_reply_xid_get(
    of_bsn_set_switch_pipeline_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_set_switch_pipeline_reply_experimenter_set(
    of_bsn_set_switch_pipeline_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_set_switch_pipeline_reply_experimenter_get(
    of_bsn_set_switch_pipeline_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_set_switch_pipeline_reply_subtype_set(
    of_bsn_set_switch_pipeline_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_set_switch_pipeline_reply_subtype_get(
    of_bsn_set_switch_pipeline_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_set_switch_pipeline_reply_status_set(
    of_bsn_set_switch_pipeline_reply_t *obj,
    uint32_t status);
extern void of_bsn_set_switch_pipeline_reply_status_get(
    of_bsn_set_switch_pipeline_reply_t *obj,
    uint32_t *status);

/* Unified accessor functions for of_bsn_set_switch_pipeline_request */

extern void of_bsn_set_switch_pipeline_request_xid_set(
    of_bsn_set_switch_pipeline_request_t *obj,
    uint32_t xid);
extern void of_bsn_set_switch_pipeline_request_xid_get(
    of_bsn_set_switch_pipeline_request_t *obj,
    uint32_t *xid);

extern void of_bsn_set_switch_pipeline_request_experimenter_set(
    of_bsn_set_switch_pipeline_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_set_switch_pipeline_request_experimenter_get(
    of_bsn_set_switch_pipeline_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_set_switch_pipeline_request_subtype_set(
    of_bsn_set_switch_pipeline_request_t *obj,
    uint32_t subtype);
extern void of_bsn_set_switch_pipeline_request_subtype_get(
    of_bsn_set_switch_pipeline_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_set_switch_pipeline_request_pipeline_set(
    of_bsn_set_switch_pipeline_request_t *obj,
    of_desc_str_t pipeline);
extern void of_bsn_set_switch_pipeline_request_pipeline_get(
    of_bsn_set_switch_pipeline_request_t *obj,
    of_desc_str_t *pipeline);

/* Unified accessor functions for of_bsn_shell_command */

extern void of_bsn_shell_command_xid_set(
    of_bsn_shell_command_t *obj,
    uint32_t xid);
extern void of_bsn_shell_command_xid_get(
    of_bsn_shell_command_t *obj,
    uint32_t *xid);

extern void of_bsn_shell_command_experimenter_set(
    of_bsn_shell_command_t *obj,
    uint32_t experimenter);
extern void of_bsn_shell_command_experimenter_get(
    of_bsn_shell_command_t *obj,
    uint32_t *experimenter);

extern void of_bsn_shell_command_subtype_set(
    of_bsn_shell_command_t *obj,
    uint32_t subtype);
extern void of_bsn_shell_command_subtype_get(
    of_bsn_shell_command_t *obj,
    uint32_t *subtype);

extern void of_bsn_shell_command_service_set(
    of_bsn_shell_command_t *obj,
    uint32_t service);
extern void of_bsn_shell_command_service_get(
    of_bsn_shell_command_t *obj,
    uint32_t *service);

extern int WARN_UNUSED_RESULT of_bsn_shell_command_data_set(
    of_bsn_shell_command_t *obj,
    of_octets_t *data);
extern void of_bsn_shell_command_data_get(
    of_bsn_shell_command_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bsn_shell_output */

extern void of_bsn_shell_output_xid_set(
    of_bsn_shell_output_t *obj,
    uint32_t xid);
extern void of_bsn_shell_output_xid_get(
    of_bsn_shell_output_t *obj,
    uint32_t *xid);

extern void of_bsn_shell_output_experimenter_set(
    of_bsn_shell_output_t *obj,
    uint32_t experimenter);
extern void of_bsn_shell_output_experimenter_get(
    of_bsn_shell_output_t *obj,
    uint32_t *experimenter);

extern void of_bsn_shell_output_subtype_set(
    of_bsn_shell_output_t *obj,
    uint32_t subtype);
extern void of_bsn_shell_output_subtype_get(
    of_bsn_shell_output_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_shell_output_data_set(
    of_bsn_shell_output_t *obj,
    of_octets_t *data);
extern void of_bsn_shell_output_data_get(
    of_bsn_shell_output_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bsn_shell_status */

extern void of_bsn_shell_status_xid_set(
    of_bsn_shell_status_t *obj,
    uint32_t xid);
extern void of_bsn_shell_status_xid_get(
    of_bsn_shell_status_t *obj,
    uint32_t *xid);

extern void of_bsn_shell_status_experimenter_set(
    of_bsn_shell_status_t *obj,
    uint32_t experimenter);
extern void of_bsn_shell_status_experimenter_get(
    of_bsn_shell_status_t *obj,
    uint32_t *experimenter);

extern void of_bsn_shell_status_subtype_set(
    of_bsn_shell_status_t *obj,
    uint32_t subtype);
extern void of_bsn_shell_status_subtype_get(
    of_bsn_shell_status_t *obj,
    uint32_t *subtype);

extern void of_bsn_shell_status_status_set(
    of_bsn_shell_status_t *obj,
    uint32_t status);
extern void of_bsn_shell_status_status_get(
    of_bsn_shell_status_t *obj,
    uint32_t *status);

/* Unified accessor functions for of_bsn_switch_pipeline_stats_reply */

extern void of_bsn_switch_pipeline_stats_reply_xid_set(
    of_bsn_switch_pipeline_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_switch_pipeline_stats_reply_xid_get(
    of_bsn_switch_pipeline_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_switch_pipeline_stats_reply_flags_set(
    of_bsn_switch_pipeline_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_switch_pipeline_stats_reply_flags_get(
    of_bsn_switch_pipeline_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_switch_pipeline_stats_reply_experimenter_set(
    of_bsn_switch_pipeline_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_switch_pipeline_stats_reply_experimenter_get(
    of_bsn_switch_pipeline_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_switch_pipeline_stats_reply_subtype_set(
    of_bsn_switch_pipeline_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_switch_pipeline_stats_reply_subtype_get(
    of_bsn_switch_pipeline_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_switch_pipeline_stats_reply_entries_set(
    of_bsn_switch_pipeline_stats_reply_t *obj,
    of_list_bsn_switch_pipeline_stats_entry_t *entries);
extern void of_bsn_switch_pipeline_stats_reply_entries_bind(
    of_bsn_switch_pipeline_stats_reply_t *obj,
    of_list_bsn_switch_pipeline_stats_entry_t *entries);
extern of_list_bsn_switch_pipeline_stats_entry_t *of_bsn_switch_pipeline_stats_reply_entries_get(
    of_bsn_switch_pipeline_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_switch_pipeline_stats_request */

extern void of_bsn_switch_pipeline_stats_request_xid_set(
    of_bsn_switch_pipeline_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_switch_pipeline_stats_request_xid_get(
    of_bsn_switch_pipeline_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_switch_pipeline_stats_request_flags_set(
    of_bsn_switch_pipeline_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_switch_pipeline_stats_request_flags_get(
    of_bsn_switch_pipeline_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_switch_pipeline_stats_request_experimenter_set(
    of_bsn_switch_pipeline_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_switch_pipeline_stats_request_experimenter_get(
    of_bsn_switch_pipeline_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_switch_pipeline_stats_request_subtype_set(
    of_bsn_switch_pipeline_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_switch_pipeline_stats_request_subtype_get(
    of_bsn_switch_pipeline_stats_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_table_checksum_stats_reply */

extern void of_bsn_table_checksum_stats_reply_xid_set(
    of_bsn_table_checksum_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_table_checksum_stats_reply_xid_get(
    of_bsn_table_checksum_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_table_checksum_stats_reply_flags_set(
    of_bsn_table_checksum_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_table_checksum_stats_reply_flags_get(
    of_bsn_table_checksum_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_table_checksum_stats_reply_experimenter_set(
    of_bsn_table_checksum_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_table_checksum_stats_reply_experimenter_get(
    of_bsn_table_checksum_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_table_checksum_stats_reply_subtype_set(
    of_bsn_table_checksum_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_table_checksum_stats_reply_subtype_get(
    of_bsn_table_checksum_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_table_checksum_stats_reply_entries_set(
    of_bsn_table_checksum_stats_reply_t *obj,
    of_list_bsn_table_checksum_stats_entry_t *entries);
extern void of_bsn_table_checksum_stats_reply_entries_bind(
    of_bsn_table_checksum_stats_reply_t *obj,
    of_list_bsn_table_checksum_stats_entry_t *entries);
extern of_list_bsn_table_checksum_stats_entry_t *of_bsn_table_checksum_stats_reply_entries_get(
    of_bsn_table_checksum_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_table_checksum_stats_request */

extern void of_bsn_table_checksum_stats_request_xid_set(
    of_bsn_table_checksum_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_table_checksum_stats_request_xid_get(
    of_bsn_table_checksum_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_table_checksum_stats_request_flags_set(
    of_bsn_table_checksum_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_table_checksum_stats_request_flags_get(
    of_bsn_table_checksum_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_table_checksum_stats_request_experimenter_set(
    of_bsn_table_checksum_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_table_checksum_stats_request_experimenter_get(
    of_bsn_table_checksum_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_table_checksum_stats_request_subtype_set(
    of_bsn_table_checksum_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_table_checksum_stats_request_subtype_get(
    of_bsn_table_checksum_stats_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_table_set_buckets_size */

extern void of_bsn_table_set_buckets_size_xid_set(
    of_bsn_table_set_buckets_size_t *obj,
    uint32_t xid);
extern void of_bsn_table_set_buckets_size_xid_get(
    of_bsn_table_set_buckets_size_t *obj,
    uint32_t *xid);

extern void of_bsn_table_set_buckets_size_experimenter_set(
    of_bsn_table_set_buckets_size_t *obj,
    uint32_t experimenter);
extern void of_bsn_table_set_buckets_size_experimenter_get(
    of_bsn_table_set_buckets_size_t *obj,
    uint32_t *experimenter);

extern void of_bsn_table_set_buckets_size_subtype_set(
    of_bsn_table_set_buckets_size_t *obj,
    uint32_t subtype);
extern void of_bsn_table_set_buckets_size_subtype_get(
    of_bsn_table_set_buckets_size_t *obj,
    uint32_t *subtype);

extern void of_bsn_table_set_buckets_size_table_id_set(
    of_bsn_table_set_buckets_size_t *obj,
    uint8_t table_id);
extern void of_bsn_table_set_buckets_size_table_id_get(
    of_bsn_table_set_buckets_size_t *obj,
    uint8_t *table_id);

extern void of_bsn_table_set_buckets_size_buckets_size_set(
    of_bsn_table_set_buckets_size_t *obj,
    uint32_t buckets_size);
extern void of_bsn_table_set_buckets_size_buckets_size_get(
    of_bsn_table_set_buckets_size_t *obj,
    uint32_t *buckets_size);

/* Unified accessor functions for of_bsn_time_reply */

extern void of_bsn_time_reply_xid_set(
    of_bsn_time_reply_t *obj,
    uint32_t xid);
extern void of_bsn_time_reply_xid_get(
    of_bsn_time_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_time_reply_experimenter_set(
    of_bsn_time_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_time_reply_experimenter_get(
    of_bsn_time_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_time_reply_subtype_set(
    of_bsn_time_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_time_reply_subtype_get(
    of_bsn_time_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_time_reply_time_ms_set(
    of_bsn_time_reply_t *obj,
    uint64_t time_ms);
extern void of_bsn_time_reply_time_ms_get(
    of_bsn_time_reply_t *obj,
    uint64_t *time_ms);

/* Unified accessor functions for of_bsn_time_request */

extern void of_bsn_time_request_xid_set(
    of_bsn_time_request_t *obj,
    uint32_t xid);
extern void of_bsn_time_request_xid_get(
    of_bsn_time_request_t *obj,
    uint32_t *xid);

extern void of_bsn_time_request_experimenter_set(
    of_bsn_time_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_time_request_experimenter_get(
    of_bsn_time_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_time_request_subtype_set(
    of_bsn_time_request_t *obj,
    uint32_t subtype);
extern void of_bsn_time_request_subtype_get(
    of_bsn_time_request_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_bsn_virtual_port_create_reply */

extern void of_bsn_virtual_port_create_reply_xid_set(
    of_bsn_virtual_port_create_reply_t *obj,
    uint32_t xid);
extern void of_bsn_virtual_port_create_reply_xid_get(
    of_bsn_virtual_port_create_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_virtual_port_create_reply_experimenter_set(
    of_bsn_virtual_port_create_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_virtual_port_create_reply_experimenter_get(
    of_bsn_virtual_port_create_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_virtual_port_create_reply_subtype_set(
    of_bsn_virtual_port_create_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_virtual_port_create_reply_subtype_get(
    of_bsn_virtual_port_create_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_virtual_port_create_reply_status_set(
    of_bsn_virtual_port_create_reply_t *obj,
    uint32_t status);
extern void of_bsn_virtual_port_create_reply_status_get(
    of_bsn_virtual_port_create_reply_t *obj,
    uint32_t *status);

extern void of_bsn_virtual_port_create_reply_vport_no_set(
    of_bsn_virtual_port_create_reply_t *obj,
    uint32_t vport_no);
extern void of_bsn_virtual_port_create_reply_vport_no_get(
    of_bsn_virtual_port_create_reply_t *obj,
    uint32_t *vport_no);

/* Unified accessor functions for of_bsn_virtual_port_create_request */

extern void of_bsn_virtual_port_create_request_xid_set(
    of_bsn_virtual_port_create_request_t *obj,
    uint32_t xid);
extern void of_bsn_virtual_port_create_request_xid_get(
    of_bsn_virtual_port_create_request_t *obj,
    uint32_t *xid);

extern void of_bsn_virtual_port_create_request_experimenter_set(
    of_bsn_virtual_port_create_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_virtual_port_create_request_experimenter_get(
    of_bsn_virtual_port_create_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_virtual_port_create_request_subtype_set(
    of_bsn_virtual_port_create_request_t *obj,
    uint32_t subtype);
extern void of_bsn_virtual_port_create_request_subtype_get(
    of_bsn_virtual_port_create_request_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_virtual_port_create_request_vport_set(
    of_bsn_virtual_port_create_request_t *obj,
    of_bsn_vport_t *vport);
extern void of_bsn_virtual_port_create_request_vport_bind(
    of_bsn_virtual_port_create_request_t *obj,
    of_bsn_vport_t *vport);
extern of_bsn_vport_t *of_bsn_virtual_port_create_request_vport_get(
    of_bsn_virtual_port_create_request_t *obj);

/* Unified accessor functions for of_bsn_virtual_port_remove_reply */

extern void of_bsn_virtual_port_remove_reply_xid_set(
    of_bsn_virtual_port_remove_reply_t *obj,
    uint32_t xid);
extern void of_bsn_virtual_port_remove_reply_xid_get(
    of_bsn_virtual_port_remove_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_virtual_port_remove_reply_experimenter_set(
    of_bsn_virtual_port_remove_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_virtual_port_remove_reply_experimenter_get(
    of_bsn_virtual_port_remove_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_virtual_port_remove_reply_subtype_set(
    of_bsn_virtual_port_remove_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_virtual_port_remove_reply_subtype_get(
    of_bsn_virtual_port_remove_reply_t *obj,
    uint32_t *subtype);

extern void of_bsn_virtual_port_remove_reply_status_set(
    of_bsn_virtual_port_remove_reply_t *obj,
    uint32_t status);
extern void of_bsn_virtual_port_remove_reply_status_get(
    of_bsn_virtual_port_remove_reply_t *obj,
    uint32_t *status);

/* Unified accessor functions for of_bsn_virtual_port_remove_request */

extern void of_bsn_virtual_port_remove_request_xid_set(
    of_bsn_virtual_port_remove_request_t *obj,
    uint32_t xid);
extern void of_bsn_virtual_port_remove_request_xid_get(
    of_bsn_virtual_port_remove_request_t *obj,
    uint32_t *xid);

extern void of_bsn_virtual_port_remove_request_experimenter_set(
    of_bsn_virtual_port_remove_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_virtual_port_remove_request_experimenter_get(
    of_bsn_virtual_port_remove_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_virtual_port_remove_request_subtype_set(
    of_bsn_virtual_port_remove_request_t *obj,
    uint32_t subtype);
extern void of_bsn_virtual_port_remove_request_subtype_get(
    of_bsn_virtual_port_remove_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_virtual_port_remove_request_vport_no_set(
    of_bsn_virtual_port_remove_request_t *obj,
    uint32_t vport_no);
extern void of_bsn_virtual_port_remove_request_vport_no_get(
    of_bsn_virtual_port_remove_request_t *obj,
    uint32_t *vport_no);

/* Unified accessor functions for of_bsn_vlan_counter_stats_reply */

extern void of_bsn_vlan_counter_stats_reply_xid_set(
    of_bsn_vlan_counter_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_vlan_counter_stats_reply_xid_get(
    of_bsn_vlan_counter_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_vlan_counter_stats_reply_flags_set(
    of_bsn_vlan_counter_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_vlan_counter_stats_reply_flags_get(
    of_bsn_vlan_counter_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_vlan_counter_stats_reply_experimenter_set(
    of_bsn_vlan_counter_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_vlan_counter_stats_reply_experimenter_get(
    of_bsn_vlan_counter_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_vlan_counter_stats_reply_subtype_set(
    of_bsn_vlan_counter_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_vlan_counter_stats_reply_subtype_get(
    of_bsn_vlan_counter_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_vlan_counter_stats_reply_entries_set(
    of_bsn_vlan_counter_stats_reply_t *obj,
    of_list_bsn_vlan_counter_stats_entry_t *entries);
extern void of_bsn_vlan_counter_stats_reply_entries_bind(
    of_bsn_vlan_counter_stats_reply_t *obj,
    of_list_bsn_vlan_counter_stats_entry_t *entries);
extern of_list_bsn_vlan_counter_stats_entry_t *of_bsn_vlan_counter_stats_reply_entries_get(
    of_bsn_vlan_counter_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_vlan_counter_stats_request */

extern void of_bsn_vlan_counter_stats_request_xid_set(
    of_bsn_vlan_counter_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_vlan_counter_stats_request_xid_get(
    of_bsn_vlan_counter_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_vlan_counter_stats_request_flags_set(
    of_bsn_vlan_counter_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_vlan_counter_stats_request_flags_get(
    of_bsn_vlan_counter_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_vlan_counter_stats_request_experimenter_set(
    of_bsn_vlan_counter_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_vlan_counter_stats_request_experimenter_get(
    of_bsn_vlan_counter_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_vlan_counter_stats_request_subtype_set(
    of_bsn_vlan_counter_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_vlan_counter_stats_request_subtype_get(
    of_bsn_vlan_counter_stats_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_vlan_counter_stats_request_vlan_vid_set(
    of_bsn_vlan_counter_stats_request_t *obj,
    uint16_t vlan_vid);
extern void of_bsn_vlan_counter_stats_request_vlan_vid_get(
    of_bsn_vlan_counter_stats_request_t *obj,
    uint16_t *vlan_vid);

/* Unified accessor functions for of_bsn_vrf_counter_stats_reply */

extern void of_bsn_vrf_counter_stats_reply_xid_set(
    of_bsn_vrf_counter_stats_reply_t *obj,
    uint32_t xid);
extern void of_bsn_vrf_counter_stats_reply_xid_get(
    of_bsn_vrf_counter_stats_reply_t *obj,
    uint32_t *xid);

extern void of_bsn_vrf_counter_stats_reply_flags_set(
    of_bsn_vrf_counter_stats_reply_t *obj,
    uint16_t flags);
extern void of_bsn_vrf_counter_stats_reply_flags_get(
    of_bsn_vrf_counter_stats_reply_t *obj,
    uint16_t *flags);

extern void of_bsn_vrf_counter_stats_reply_experimenter_set(
    of_bsn_vrf_counter_stats_reply_t *obj,
    uint32_t experimenter);
extern void of_bsn_vrf_counter_stats_reply_experimenter_get(
    of_bsn_vrf_counter_stats_reply_t *obj,
    uint32_t *experimenter);

extern void of_bsn_vrf_counter_stats_reply_subtype_set(
    of_bsn_vrf_counter_stats_reply_t *obj,
    uint32_t subtype);
extern void of_bsn_vrf_counter_stats_reply_subtype_get(
    of_bsn_vrf_counter_stats_reply_t *obj,
    uint32_t *subtype);

extern int WARN_UNUSED_RESULT of_bsn_vrf_counter_stats_reply_entries_set(
    of_bsn_vrf_counter_stats_reply_t *obj,
    of_list_bsn_vrf_counter_stats_entry_t *entries);
extern void of_bsn_vrf_counter_stats_reply_entries_bind(
    of_bsn_vrf_counter_stats_reply_t *obj,
    of_list_bsn_vrf_counter_stats_entry_t *entries);
extern of_list_bsn_vrf_counter_stats_entry_t *of_bsn_vrf_counter_stats_reply_entries_get(
    of_bsn_vrf_counter_stats_reply_t *obj);

/* Unified accessor functions for of_bsn_vrf_counter_stats_request */

extern void of_bsn_vrf_counter_stats_request_xid_set(
    of_bsn_vrf_counter_stats_request_t *obj,
    uint32_t xid);
extern void of_bsn_vrf_counter_stats_request_xid_get(
    of_bsn_vrf_counter_stats_request_t *obj,
    uint32_t *xid);

extern void of_bsn_vrf_counter_stats_request_flags_set(
    of_bsn_vrf_counter_stats_request_t *obj,
    uint16_t flags);
extern void of_bsn_vrf_counter_stats_request_flags_get(
    of_bsn_vrf_counter_stats_request_t *obj,
    uint16_t *flags);

extern void of_bsn_vrf_counter_stats_request_experimenter_set(
    of_bsn_vrf_counter_stats_request_t *obj,
    uint32_t experimenter);
extern void of_bsn_vrf_counter_stats_request_experimenter_get(
    of_bsn_vrf_counter_stats_request_t *obj,
    uint32_t *experimenter);

extern void of_bsn_vrf_counter_stats_request_subtype_set(
    of_bsn_vrf_counter_stats_request_t *obj,
    uint32_t subtype);
extern void of_bsn_vrf_counter_stats_request_subtype_get(
    of_bsn_vrf_counter_stats_request_t *obj,
    uint32_t *subtype);

extern void of_bsn_vrf_counter_stats_request_vrf_set(
    of_bsn_vrf_counter_stats_request_t *obj,
    uint32_t vrf);
extern void of_bsn_vrf_counter_stats_request_vrf_get(
    of_bsn_vrf_counter_stats_request_t *obj,
    uint32_t *vrf);

/* Unified accessor functions for of_bundle_add_msg */

extern void of_bundle_add_msg_xid_set(
    of_bundle_add_msg_t *obj,
    uint32_t xid);
extern void of_bundle_add_msg_xid_get(
    of_bundle_add_msg_t *obj,
    uint32_t *xid);

extern void of_bundle_add_msg_bundle_id_set(
    of_bundle_add_msg_t *obj,
    uint32_t bundle_id);
extern void of_bundle_add_msg_bundle_id_get(
    of_bundle_add_msg_t *obj,
    uint32_t *bundle_id);

extern void of_bundle_add_msg_flags_set(
    of_bundle_add_msg_t *obj,
    uint16_t flags);
extern void of_bundle_add_msg_flags_get(
    of_bundle_add_msg_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_bundle_add_msg_data_set(
    of_bundle_add_msg_t *obj,
    of_octets_t *data);
extern void of_bundle_add_msg_data_get(
    of_bundle_add_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_bundle_ctrl_msg */

extern void of_bundle_ctrl_msg_xid_set(
    of_bundle_ctrl_msg_t *obj,
    uint32_t xid);
extern void of_bundle_ctrl_msg_xid_get(
    of_bundle_ctrl_msg_t *obj,
    uint32_t *xid);

extern void of_bundle_ctrl_msg_bundle_id_set(
    of_bundle_ctrl_msg_t *obj,
    uint32_t bundle_id);
extern void of_bundle_ctrl_msg_bundle_id_get(
    of_bundle_ctrl_msg_t *obj,
    uint32_t *bundle_id);

extern void of_bundle_ctrl_msg_bundle_ctrl_type_set(
    of_bundle_ctrl_msg_t *obj,
    uint16_t bundle_ctrl_type);
extern void of_bundle_ctrl_msg_bundle_ctrl_type_get(
    of_bundle_ctrl_msg_t *obj,
    uint16_t *bundle_ctrl_type);

extern void of_bundle_ctrl_msg_flags_set(
    of_bundle_ctrl_msg_t *obj,
    uint16_t flags);
extern void of_bundle_ctrl_msg_flags_get(
    of_bundle_ctrl_msg_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_bundle_ctrl_msg_properties_set(
    of_bundle_ctrl_msg_t *obj,
    of_list_bundle_prop_t *properties);
extern void of_bundle_ctrl_msg_properties_bind(
    of_bundle_ctrl_msg_t *obj,
    of_list_bundle_prop_t *properties);
extern of_list_bundle_prop_t *of_bundle_ctrl_msg_properties_get(
    of_bundle_ctrl_msg_t *obj);

/* Unified accessor functions for of_bundle_failed_error_msg */

extern void of_bundle_failed_error_msg_xid_set(
    of_bundle_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_bundle_failed_error_msg_xid_get(
    of_bundle_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_bundle_failed_error_msg_code_set(
    of_bundle_failed_error_msg_t *obj,
    uint16_t code);
extern void of_bundle_failed_error_msg_code_get(
    of_bundle_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_bundle_failed_error_msg_data_set(
    of_bundle_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_bundle_failed_error_msg_data_get(
    of_bundle_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_desc_stats_reply */

extern void of_desc_stats_reply_xid_set(
    of_desc_stats_reply_t *obj,
    uint32_t xid);
extern void of_desc_stats_reply_xid_get(
    of_desc_stats_reply_t *obj,
    uint32_t *xid);

extern void of_desc_stats_reply_flags_set(
    of_desc_stats_reply_t *obj,
    uint16_t flags);
extern void of_desc_stats_reply_flags_get(
    of_desc_stats_reply_t *obj,
    uint16_t *flags);

extern void of_desc_stats_reply_mfr_desc_set(
    of_desc_stats_reply_t *obj,
    of_desc_str_t mfr_desc);
extern void of_desc_stats_reply_mfr_desc_get(
    of_desc_stats_reply_t *obj,
    of_desc_str_t *mfr_desc);

extern void of_desc_stats_reply_hw_desc_set(
    of_desc_stats_reply_t *obj,
    of_desc_str_t hw_desc);
extern void of_desc_stats_reply_hw_desc_get(
    of_desc_stats_reply_t *obj,
    of_desc_str_t *hw_desc);

extern void of_desc_stats_reply_sw_desc_set(
    of_desc_stats_reply_t *obj,
    of_desc_str_t sw_desc);
extern void of_desc_stats_reply_sw_desc_get(
    of_desc_stats_reply_t *obj,
    of_desc_str_t *sw_desc);

extern void of_desc_stats_reply_serial_num_set(
    of_desc_stats_reply_t *obj,
    of_serial_num_t serial_num);
extern void of_desc_stats_reply_serial_num_get(
    of_desc_stats_reply_t *obj,
    of_serial_num_t *serial_num);

extern void of_desc_stats_reply_dp_desc_set(
    of_desc_stats_reply_t *obj,
    of_desc_str_t dp_desc);
extern void of_desc_stats_reply_dp_desc_get(
    of_desc_stats_reply_t *obj,
    of_desc_str_t *dp_desc);

/* Unified accessor functions for of_desc_stats_request */

extern void of_desc_stats_request_xid_set(
    of_desc_stats_request_t *obj,
    uint32_t xid);
extern void of_desc_stats_request_xid_get(
    of_desc_stats_request_t *obj,
    uint32_t *xid);

extern void of_desc_stats_request_flags_set(
    of_desc_stats_request_t *obj,
    uint16_t flags);
extern void of_desc_stats_request_flags_get(
    of_desc_stats_request_t *obj,
    uint16_t *flags);

/* Unified accessor functions for of_echo_reply */

extern void of_echo_reply_xid_set(
    of_echo_reply_t *obj,
    uint32_t xid);
extern void of_echo_reply_xid_get(
    of_echo_reply_t *obj,
    uint32_t *xid);

extern int WARN_UNUSED_RESULT of_echo_reply_data_set(
    of_echo_reply_t *obj,
    of_octets_t *data);
extern void of_echo_reply_data_get(
    of_echo_reply_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_echo_request */

extern void of_echo_request_xid_set(
    of_echo_request_t *obj,
    uint32_t xid);
extern void of_echo_request_xid_get(
    of_echo_request_t *obj,
    uint32_t *xid);

extern int WARN_UNUSED_RESULT of_echo_request_data_set(
    of_echo_request_t *obj,
    of_octets_t *data);
extern void of_echo_request_data_get(
    of_echo_request_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_experimenter_error_msg */

extern void of_experimenter_error_msg_xid_set(
    of_experimenter_error_msg_t *obj,
    uint32_t xid);
extern void of_experimenter_error_msg_xid_get(
    of_experimenter_error_msg_t *obj,
    uint32_t *xid);

extern void of_experimenter_error_msg_subtype_set(
    of_experimenter_error_msg_t *obj,
    uint16_t subtype);
extern void of_experimenter_error_msg_subtype_get(
    of_experimenter_error_msg_t *obj,
    uint16_t *subtype);

extern void of_experimenter_error_msg_experimenter_set(
    of_experimenter_error_msg_t *obj,
    uint32_t experimenter);
extern void of_experimenter_error_msg_experimenter_get(
    of_experimenter_error_msg_t *obj,
    uint32_t *experimenter);

extern int WARN_UNUSED_RESULT of_experimenter_error_msg_data_set(
    of_experimenter_error_msg_t *obj,
    of_octets_t *data);
extern void of_experimenter_error_msg_data_get(
    of_experimenter_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_features_reply */

extern void of_features_reply_xid_set(
    of_features_reply_t *obj,
    uint32_t xid);
extern void of_features_reply_xid_get(
    of_features_reply_t *obj,
    uint32_t *xid);

extern void of_features_reply_datapath_id_set(
    of_features_reply_t *obj,
    uint64_t datapath_id);
extern void of_features_reply_datapath_id_get(
    of_features_reply_t *obj,
    uint64_t *datapath_id);

extern void of_features_reply_n_buffers_set(
    of_features_reply_t *obj,
    uint32_t n_buffers);
extern void of_features_reply_n_buffers_get(
    of_features_reply_t *obj,
    uint32_t *n_buffers);

extern void of_features_reply_n_tables_set(
    of_features_reply_t *obj,
    uint8_t n_tables);
extern void of_features_reply_n_tables_get(
    of_features_reply_t *obj,
    uint8_t *n_tables);

extern void of_features_reply_auxiliary_id_set(
    of_features_reply_t *obj,
    uint8_t auxiliary_id);
extern void of_features_reply_auxiliary_id_get(
    of_features_reply_t *obj,
    uint8_t *auxiliary_id);

extern void of_features_reply_capabilities_set(
    of_features_reply_t *obj,
    uint32_t capabilities);
extern void of_features_reply_capabilities_get(
    of_features_reply_t *obj,
    uint32_t *capabilities);

extern void of_features_reply_reserved_set(
    of_features_reply_t *obj,
    uint32_t reserved);
extern void of_features_reply_reserved_get(
    of_features_reply_t *obj,
    uint32_t *reserved);

extern int WARN_UNUSED_RESULT of_features_reply_ports_set(
    of_features_reply_t *obj,
    of_list_port_desc_t *ports);
extern void of_features_reply_ports_bind(
    of_features_reply_t *obj,
    of_list_port_desc_t *ports);
extern of_list_port_desc_t *of_features_reply_ports_get(
    of_features_reply_t *obj);

extern void of_features_reply_actions_set(
    of_features_reply_t *obj,
    uint32_t actions);
extern void of_features_reply_actions_get(
    of_features_reply_t *obj,
    uint32_t *actions);

/* Unified accessor functions for of_features_request */

extern void of_features_request_xid_set(
    of_features_request_t *obj,
    uint32_t xid);
extern void of_features_request_xid_get(
    of_features_request_t *obj,
    uint32_t *xid);

/* Unified accessor functions for of_flow_add */

extern void of_flow_add_xid_set(
    of_flow_add_t *obj,
    uint32_t xid);
extern void of_flow_add_xid_get(
    of_flow_add_t *obj,
    uint32_t *xid);

extern void of_flow_add_cookie_set(
    of_flow_add_t *obj,
    uint64_t cookie);
extern void of_flow_add_cookie_get(
    of_flow_add_t *obj,
    uint64_t *cookie);

extern void of_flow_add_cookie_mask_set(
    of_flow_add_t *obj,
    uint64_t cookie_mask);
extern void of_flow_add_cookie_mask_get(
    of_flow_add_t *obj,
    uint64_t *cookie_mask);

extern void of_flow_add_table_id_set(
    of_flow_add_t *obj,
    uint8_t table_id);
extern void of_flow_add_table_id_get(
    of_flow_add_t *obj,
    uint8_t *table_id);

extern void of_flow_add_idle_timeout_set(
    of_flow_add_t *obj,
    uint16_t idle_timeout);
extern void of_flow_add_idle_timeout_get(
    of_flow_add_t *obj,
    uint16_t *idle_timeout);

extern void of_flow_add_hard_timeout_set(
    of_flow_add_t *obj,
    uint16_t hard_timeout);
extern void of_flow_add_hard_timeout_get(
    of_flow_add_t *obj,
    uint16_t *hard_timeout);

extern void of_flow_add_priority_set(
    of_flow_add_t *obj,
    uint16_t priority);
extern void of_flow_add_priority_get(
    of_flow_add_t *obj,
    uint16_t *priority);

extern void of_flow_add_buffer_id_set(
    of_flow_add_t *obj,
    uint32_t buffer_id);
extern void of_flow_add_buffer_id_get(
    of_flow_add_t *obj,
    uint32_t *buffer_id);

extern void of_flow_add_out_port_set(
    of_flow_add_t *obj,
    of_port_no_t out_port);
extern void of_flow_add_out_port_get(
    of_flow_add_t *obj,
    of_port_no_t *out_port);

extern void of_flow_add_out_group_set(
    of_flow_add_t *obj,
    uint32_t out_group);
extern void of_flow_add_out_group_get(
    of_flow_add_t *obj,
    uint32_t *out_group);

extern void of_flow_add_flags_set(
    of_flow_add_t *obj,
    uint16_t flags);
extern void of_flow_add_flags_get(
    of_flow_add_t *obj,
    uint16_t *flags);

extern void of_flow_add_importance_set(
    of_flow_add_t *obj,
    uint16_t importance);
extern void of_flow_add_importance_get(
    of_flow_add_t *obj,
    uint16_t *importance);

extern int WARN_UNUSED_RESULT of_flow_add_match_set(
    of_flow_add_t *obj,
    of_match_t *match);
extern int WARN_UNUSED_RESULT of_flow_add_match_get(
    of_flow_add_t *obj,
    of_match_t *match);

extern int WARN_UNUSED_RESULT of_flow_add_instructions_set(
    of_flow_add_t *obj,
    of_list_instruction_t *instructions);
extern void of_flow_add_instructions_bind(
    of_flow_add_t *obj,
    of_list_instruction_t *instructions);
extern of_list_instruction_t *of_flow_add_instructions_get(
    of_flow_add_t *obj);

extern int WARN_UNUSED_RESULT of_flow_add_actions_set(
    of_flow_add_t *obj,
    of_list_action_t *actions);
extern void of_flow_add_actions_bind(
    of_flow_add_t *obj,
    of_list_action_t *actions);
extern of_list_action_t *of_flow_add_actions_get(
    of_flow_add_t *obj);

/* Unified accessor functions for of_flow_delete */

extern void of_flow_delete_xid_set(
    of_flow_delete_t *obj,
    uint32_t xid);
extern void of_flow_delete_xid_get(
    of_flow_delete_t *obj,
    uint32_t *xid);

extern void of_flow_delete_cookie_set(
    of_flow_delete_t *obj,
    uint64_t cookie);
extern void of_flow_delete_cookie_get(
    of_flow_delete_t *obj,
    uint64_t *cookie);

extern void of_flow_delete_cookie_mask_set(
    of_flow_delete_t *obj,
    uint64_t cookie_mask);
extern void of_flow_delete_cookie_mask_get(
    of_flow_delete_t *obj,
    uint64_t *cookie_mask);

extern void of_flow_delete_table_id_set(
    of_flow_delete_t *obj,
    uint8_t table_id);
extern void of_flow_delete_table_id_get(
    of_flow_delete_t *obj,
    uint8_t *table_id);

extern void of_flow_delete_idle_timeout_set(
    of_flow_delete_t *obj,
    uint16_t idle_timeout);
extern void of_flow_delete_idle_timeout_get(
    of_flow_delete_t *obj,
    uint16_t *idle_timeout);

extern void of_flow_delete_hard_timeout_set(
    of_flow_delete_t *obj,
    uint16_t hard_timeout);
extern void of_flow_delete_hard_timeout_get(
    of_flow_delete_t *obj,
    uint16_t *hard_timeout);

extern void of_flow_delete_priority_set(
    of_flow_delete_t *obj,
    uint16_t priority);
extern void of_flow_delete_priority_get(
    of_flow_delete_t *obj,
    uint16_t *priority);

extern void of_flow_delete_buffer_id_set(
    of_flow_delete_t *obj,
    uint32_t buffer_id);
extern void of_flow_delete_buffer_id_get(
    of_flow_delete_t *obj,
    uint32_t *buffer_id);

extern void of_flow_delete_out_port_set(
    of_flow_delete_t *obj,
    of_port_no_t out_port);
extern void of_flow_delete_out_port_get(
    of_flow_delete_t *obj,
    of_port_no_t *out_port);

extern void of_flow_delete_out_group_set(
    of_flow_delete_t *obj,
    uint32_t out_group);
extern void of_flow_delete_out_group_get(
    of_flow_delete_t *obj,
    uint32_t *out_group);

extern void of_flow_delete_flags_set(
    of_flow_delete_t *obj,
    uint16_t flags);
extern void of_flow_delete_flags_get(
    of_flow_delete_t *obj,
    uint16_t *flags);

extern void of_flow_delete_importance_set(
    of_flow_delete_t *obj,
    uint16_t importance);
extern void of_flow_delete_importance_get(
    of_flow_delete_t *obj,
    uint16_t *importance);

extern int WARN_UNUSED_RESULT of_flow_delete_match_set(
    of_flow_delete_t *obj,
    of_match_t *match);
extern int WARN_UNUSED_RESULT of_flow_delete_match_get(
    of_flow_delete_t *obj,
    of_match_t *match);

extern int WARN_UNUSED_RESULT of_flow_delete_instructions_set(
    of_flow_delete_t *obj,
    of_list_instruction_t *instructions);
extern void of_flow_delete_instructions_bind(
    of_flow_delete_t *obj,
    of_list_instruction_t *instructions);
extern of_list_instruction_t *of_flow_delete_instructions_get(
    of_flow_delete_t *obj);

extern int WARN_UNUSED_RESULT of_flow_delete_actions_set(
    of_flow_delete_t *obj,
    of_list_action_t *actions);
extern void of_flow_delete_actions_bind(
    of_flow_delete_t *obj,
    of_list_action_t *actions);
extern of_list_action_t *of_flow_delete_actions_get(
    of_flow_delete_t *obj);

/* Unified accessor functions for of_flow_delete_strict */

extern void of_flow_delete_strict_xid_set(
    of_flow_delete_strict_t *obj,
    uint32_t xid);
extern void of_flow_delete_strict_xid_get(
    of_flow_delete_strict_t *obj,
    uint32_t *xid);

extern void of_flow_delete_strict_cookie_set(
    of_flow_delete_strict_t *obj,
    uint64_t cookie);
extern void of_flow_delete_strict_cookie_get(
    of_flow_delete_strict_t *obj,
    uint64_t *cookie);

extern void of_flow_delete_strict_cookie_mask_set(
    of_flow_delete_strict_t *obj,
    uint64_t cookie_mask);
extern void of_flow_delete_strict_cookie_mask_get(
    of_flow_delete_strict_t *obj,
    uint64_t *cookie_mask);

extern void of_flow_delete_strict_table_id_set(
    of_flow_delete_strict_t *obj,
    uint8_t table_id);
extern void of_flow_delete_strict_table_id_get(
    of_flow_delete_strict_t *obj,
    uint8_t *table_id);

extern void of_flow_delete_strict_idle_timeout_set(
    of_flow_delete_strict_t *obj,
    uint16_t idle_timeout);
extern void of_flow_delete_strict_idle_timeout_get(
    of_flow_delete_strict_t *obj,
    uint16_t *idle_timeout);

extern void of_flow_delete_strict_hard_timeout_set(
    of_flow_delete_strict_t *obj,
    uint16_t hard_timeout);
extern void of_flow_delete_strict_hard_timeout_get(
    of_flow_delete_strict_t *obj,
    uint16_t *hard_timeout);

extern void of_flow_delete_strict_priority_set(
    of_flow_delete_strict_t *obj,
    uint16_t priority);
extern void of_flow_delete_strict_priority_get(
    of_flow_delete_strict_t *obj,
    uint16_t *priority);

extern void of_flow_delete_strict_buffer_id_set(
    of_flow_delete_strict_t *obj,
    uint32_t buffer_id);
extern void of_flow_delete_strict_buffer_id_get(
    of_flow_delete_strict_t *obj,
    uint32_t *buffer_id);

extern void of_flow_delete_strict_out_port_set(
    of_flow_delete_strict_t *obj,
    of_port_no_t out_port);
extern void of_flow_delete_strict_out_port_get(
    of_flow_delete_strict_t *obj,
    of_port_no_t *out_port);

extern void of_flow_delete_strict_out_group_set(
    of_flow_delete_strict_t *obj,
    uint32_t out_group);
extern void of_flow_delete_strict_out_group_get(
    of_flow_delete_strict_t *obj,
    uint32_t *out_group);

extern void of_flow_delete_strict_flags_set(
    of_flow_delete_strict_t *obj,
    uint16_t flags);
extern void of_flow_delete_strict_flags_get(
    of_flow_delete_strict_t *obj,
    uint16_t *flags);

extern void of_flow_delete_strict_importance_set(
    of_flow_delete_strict_t *obj,
    uint16_t importance);
extern void of_flow_delete_strict_importance_get(
    of_flow_delete_strict_t *obj,
    uint16_t *importance);

extern int WARN_UNUSED_RESULT of_flow_delete_strict_match_set(
    of_flow_delete_strict_t *obj,
    of_match_t *match);
extern int WARN_UNUSED_RESULT of_flow_delete_strict_match_get(
    of_flow_delete_strict_t *obj,
    of_match_t *match);

extern int WARN_UNUSED_RESULT of_flow_delete_strict_instructions_set(
    of_flow_delete_strict_t *obj,
    of_list_instruction_t *instructions);
extern void of_flow_delete_strict_instructions_bind(
    of_flow_delete_strict_t *obj,
    of_list_instruction_t *instructions);
extern of_list_instruction_t *of_flow_delete_strict_instructions_get(
    of_flow_delete_strict_t *obj);

extern int WARN_UNUSED_RESULT of_flow_delete_strict_actions_set(
    of_flow_delete_strict_t *obj,
    of_list_action_t *actions);
extern void of_flow_delete_strict_actions_bind(
    of_flow_delete_strict_t *obj,
    of_list_action_t *actions);
extern of_list_action_t *of_flow_delete_strict_actions_get(
    of_flow_delete_strict_t *obj);

/* Unified accessor functions for of_flow_mod_failed_error_msg */

extern void of_flow_mod_failed_error_msg_xid_set(
    of_flow_mod_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_flow_mod_failed_error_msg_xid_get(
    of_flow_mod_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_flow_mod_failed_error_msg_code_set(
    of_flow_mod_failed_error_msg_t *obj,
    uint16_t code);
extern void of_flow_mod_failed_error_msg_code_get(
    of_flow_mod_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_flow_mod_failed_error_msg_data_set(
    of_flow_mod_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_flow_mod_failed_error_msg_data_get(
    of_flow_mod_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_flow_modify */

extern void of_flow_modify_xid_set(
    of_flow_modify_t *obj,
    uint32_t xid);
extern void of_flow_modify_xid_get(
    of_flow_modify_t *obj,
    uint32_t *xid);

extern void of_flow_modify_cookie_set(
    of_flow_modify_t *obj,
    uint64_t cookie);
extern void of_flow_modify_cookie_get(
    of_flow_modify_t *obj,
    uint64_t *cookie);

extern void of_flow_modify_cookie_mask_set(
    of_flow_modify_t *obj,
    uint64_t cookie_mask);
extern void of_flow_modify_cookie_mask_get(
    of_flow_modify_t *obj,
    uint64_t *cookie_mask);

extern void of_flow_modify_table_id_set(
    of_flow_modify_t *obj,
    uint8_t table_id);
extern void of_flow_modify_table_id_get(
    of_flow_modify_t *obj,
    uint8_t *table_id);

extern void of_flow_modify_idle_timeout_set(
    of_flow_modify_t *obj,
    uint16_t idle_timeout);
extern void of_flow_modify_idle_timeout_get(
    of_flow_modify_t *obj,
    uint16_t *idle_timeout);

extern void of_flow_modify_hard_timeout_set(
    of_flow_modify_t *obj,
    uint16_t hard_timeout);
extern void of_flow_modify_hard_timeout_get(
    of_flow_modify_t *obj,
    uint16_t *hard_timeout);

extern void of_flow_modify_priority_set(
    of_flow_modify_t *obj,
    uint16_t priority);
extern void of_flow_modify_priority_get(
    of_flow_modify_t *obj,
    uint16_t *priority);

extern void of_flow_modify_buffer_id_set(
    of_flow_modify_t *obj,
    uint32_t buffer_id);
extern void of_flow_modify_buffer_id_get(
    of_flow_modify_t *obj,
    uint32_t *buffer_id);

extern void of_flow_modify_out_port_set(
    of_flow_modify_t *obj,
    of_port_no_t out_port);
extern void of_flow_modify_out_port_get(
    of_flow_modify_t *obj,
    of_port_no_t *out_port);

extern void of_flow_modify_out_group_set(
    of_flow_modify_t *obj,
    uint32_t out_group);
extern void of_flow_modify_out_group_get(
    of_flow_modify_t *obj,
    uint32_t *out_group);

extern void of_flow_modify_flags_set(
    of_flow_modify_t *obj,
    uint16_t flags);
extern void of_flow_modify_flags_get(
    of_flow_modify_t *obj,
    uint16_t *flags);

extern void of_flow_modify_importance_set(
    of_flow_modify_t *obj,
    uint16_t importance);
extern void of_flow_modify_importance_get(
    of_flow_modify_t *obj,
    uint16_t *importance);

extern int WARN_UNUSED_RESULT of_flow_modify_match_set(
    of_flow_modify_t *obj,
    of_match_t *match);
extern int WARN_UNUSED_RESULT of_flow_modify_match_get(
    of_flow_modify_t *obj,
    of_match_t *match);

extern int WARN_UNUSED_RESULT of_flow_modify_instructions_set(
    of_flow_modify_t *obj,
    of_list_instruction_t *instructions);
extern void of_flow_modify_instructions_bind(
    of_flow_modify_t *obj,
    of_list_instruction_t *instructions);
extern of_list_instruction_t *of_flow_modify_instructions_get(
    of_flow_modify_t *obj);

extern int WARN_UNUSED_RESULT of_flow_modify_actions_set(
    of_flow_modify_t *obj,
    of_list_action_t *actions);
extern void of_flow_modify_actions_bind(
    of_flow_modify_t *obj,
    of_list_action_t *actions);
extern of_list_action_t *of_flow_modify_actions_get(
    of_flow_modify_t *obj);

/* Unified accessor functions for of_flow_modify_strict */

extern void of_flow_modify_strict_xid_set(
    of_flow_modify_strict_t *obj,
    uint32_t xid);
extern void of_flow_modify_strict_xid_get(
    of_flow_modify_strict_t *obj,
    uint32_t *xid);

extern void of_flow_modify_strict_cookie_set(
    of_flow_modify_strict_t *obj,
    uint64_t cookie);
extern void of_flow_modify_strict_cookie_get(
    of_flow_modify_strict_t *obj,
    uint64_t *cookie);

extern void of_flow_modify_strict_cookie_mask_set(
    of_flow_modify_strict_t *obj,
    uint64_t cookie_mask);
extern void of_flow_modify_strict_cookie_mask_get(
    of_flow_modify_strict_t *obj,
    uint64_t *cookie_mask);

extern void of_flow_modify_strict_table_id_set(
    of_flow_modify_strict_t *obj,
    uint8_t table_id);
extern void of_flow_modify_strict_table_id_get(
    of_flow_modify_strict_t *obj,
    uint8_t *table_id);

extern void of_flow_modify_strict_idle_timeout_set(
    of_flow_modify_strict_t *obj,
    uint16_t idle_timeout);
extern void of_flow_modify_strict_idle_timeout_get(
    of_flow_modify_strict_t *obj,
    uint16_t *idle_timeout);

extern void of_flow_modify_strict_hard_timeout_set(
    of_flow_modify_strict_t *obj,
    uint16_t hard_timeout);
extern void of_flow_modify_strict_hard_timeout_get(
    of_flow_modify_strict_t *obj,
    uint16_t *hard_timeout);

extern void of_flow_modify_strict_priority_set(
    of_flow_modify_strict_t *obj,
    uint16_t priority);
extern void of_flow_modify_strict_priority_get(
    of_flow_modify_strict_t *obj,
    uint16_t *priority);

extern void of_flow_modify_strict_buffer_id_set(
    of_flow_modify_strict_t *obj,
    uint32_t buffer_id);
extern void of_flow_modify_strict_buffer_id_get(
    of_flow_modify_strict_t *obj,
    uint32_t *buffer_id);

extern void of_flow_modify_strict_out_port_set(
    of_flow_modify_strict_t *obj,
    of_port_no_t out_port);
extern void of_flow_modify_strict_out_port_get(
    of_flow_modify_strict_t *obj,
    of_port_no_t *out_port);

extern void of_flow_modify_strict_out_group_set(
    of_flow_modify_strict_t *obj,
    uint32_t out_group);
extern void of_flow_modify_strict_out_group_get(
    of_flow_modify_strict_t *obj,
    uint32_t *out_group);

extern void of_flow_modify_strict_flags_set(
    of_flow_modify_strict_t *obj,
    uint16_t flags);
extern void of_flow_modify_strict_flags_get(
    of_flow_modify_strict_t *obj,
    uint16_t *flags);

extern void of_flow_modify_strict_importance_set(
    of_flow_modify_strict_t *obj,
    uint16_t importance);
extern void of_flow_modify_strict_importance_get(
    of_flow_modify_strict_t *obj,
    uint16_t *importance);

extern int WARN_UNUSED_RESULT of_flow_modify_strict_match_set(
    of_flow_modify_strict_t *obj,
    of_match_t *match);
extern int WARN_UNUSED_RESULT of_flow_modify_strict_match_get(
    of_flow_modify_strict_t *obj,
    of_match_t *match);

extern int WARN_UNUSED_RESULT of_flow_modify_strict_instructions_set(
    of_flow_modify_strict_t *obj,
    of_list_instruction_t *instructions);
extern void of_flow_modify_strict_instructions_bind(
    of_flow_modify_strict_t *obj,
    of_list_instruction_t *instructions);
extern of_list_instruction_t *of_flow_modify_strict_instructions_get(
    of_flow_modify_strict_t *obj);

extern int WARN_UNUSED_RESULT of_flow_modify_strict_actions_set(
    of_flow_modify_strict_t *obj,
    of_list_action_t *actions);
extern void of_flow_modify_strict_actions_bind(
    of_flow_modify_strict_t *obj,
    of_list_action_t *actions);
extern of_list_action_t *of_flow_modify_strict_actions_get(
    of_flow_modify_strict_t *obj);

/* Unified accessor functions for of_flow_monitor_failed_error_msg */

extern void of_flow_monitor_failed_error_msg_xid_set(
    of_flow_monitor_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_flow_monitor_failed_error_msg_xid_get(
    of_flow_monitor_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_flow_monitor_failed_error_msg_code_set(
    of_flow_monitor_failed_error_msg_t *obj,
    uint16_t code);
extern void of_flow_monitor_failed_error_msg_code_get(
    of_flow_monitor_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_flow_monitor_failed_error_msg_data_set(
    of_flow_monitor_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_flow_monitor_failed_error_msg_data_get(
    of_flow_monitor_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_flow_removed */

extern void of_flow_removed_xid_set(
    of_flow_removed_t *obj,
    uint32_t xid);
extern void of_flow_removed_xid_get(
    of_flow_removed_t *obj,
    uint32_t *xid);

extern void of_flow_removed_cookie_set(
    of_flow_removed_t *obj,
    uint64_t cookie);
extern void of_flow_removed_cookie_get(
    of_flow_removed_t *obj,
    uint64_t *cookie);

extern void of_flow_removed_priority_set(
    of_flow_removed_t *obj,
    uint16_t priority);
extern void of_flow_removed_priority_get(
    of_flow_removed_t *obj,
    uint16_t *priority);

extern void of_flow_removed_reason_set(
    of_flow_removed_t *obj,
    uint8_t reason);
extern void of_flow_removed_reason_get(
    of_flow_removed_t *obj,
    uint8_t *reason);

extern void of_flow_removed_table_id_set(
    of_flow_removed_t *obj,
    uint8_t table_id);
extern void of_flow_removed_table_id_get(
    of_flow_removed_t *obj,
    uint8_t *table_id);

extern void of_flow_removed_duration_sec_set(
    of_flow_removed_t *obj,
    uint32_t duration_sec);
extern void of_flow_removed_duration_sec_get(
    of_flow_removed_t *obj,
    uint32_t *duration_sec);

extern void of_flow_removed_duration_nsec_set(
    of_flow_removed_t *obj,
    uint32_t duration_nsec);
extern void of_flow_removed_duration_nsec_get(
    of_flow_removed_t *obj,
    uint32_t *duration_nsec);

extern void of_flow_removed_idle_timeout_set(
    of_flow_removed_t *obj,
    uint16_t idle_timeout);
extern void of_flow_removed_idle_timeout_get(
    of_flow_removed_t *obj,
    uint16_t *idle_timeout);

extern void of_flow_removed_hard_timeout_set(
    of_flow_removed_t *obj,
    uint16_t hard_timeout);
extern void of_flow_removed_hard_timeout_get(
    of_flow_removed_t *obj,
    uint16_t *hard_timeout);

extern void of_flow_removed_packet_count_set(
    of_flow_removed_t *obj,
    uint64_t packet_count);
extern void of_flow_removed_packet_count_get(
    of_flow_removed_t *obj,
    uint64_t *packet_count);

extern void of_flow_removed_byte_count_set(
    of_flow_removed_t *obj,
    uint64_t byte_count);
extern void of_flow_removed_byte_count_get(
    of_flow_removed_t *obj,
    uint64_t *byte_count);

extern int WARN_UNUSED_RESULT of_flow_removed_match_set(
    of_flow_removed_t *obj,
    of_match_t *match);
extern int WARN_UNUSED_RESULT of_flow_removed_match_get(
    of_flow_removed_t *obj,
    of_match_t *match);

/* Unified accessor functions for of_flow_stats_reply */

extern void of_flow_stats_reply_xid_set(
    of_flow_stats_reply_t *obj,
    uint32_t xid);
extern void of_flow_stats_reply_xid_get(
    of_flow_stats_reply_t *obj,
    uint32_t *xid);

extern void of_flow_stats_reply_flags_set(
    of_flow_stats_reply_t *obj,
    uint16_t flags);
extern void of_flow_stats_reply_flags_get(
    of_flow_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_flow_stats_reply_entries_set(
    of_flow_stats_reply_t *obj,
    of_list_flow_stats_entry_t *entries);
extern void of_flow_stats_reply_entries_bind(
    of_flow_stats_reply_t *obj,
    of_list_flow_stats_entry_t *entries);
extern of_list_flow_stats_entry_t *of_flow_stats_reply_entries_get(
    of_flow_stats_reply_t *obj);

/* Unified accessor functions for of_flow_stats_request */

extern void of_flow_stats_request_xid_set(
    of_flow_stats_request_t *obj,
    uint32_t xid);
extern void of_flow_stats_request_xid_get(
    of_flow_stats_request_t *obj,
    uint32_t *xid);

extern void of_flow_stats_request_flags_set(
    of_flow_stats_request_t *obj,
    uint16_t flags);
extern void of_flow_stats_request_flags_get(
    of_flow_stats_request_t *obj,
    uint16_t *flags);

extern void of_flow_stats_request_table_id_set(
    of_flow_stats_request_t *obj,
    uint8_t table_id);
extern void of_flow_stats_request_table_id_get(
    of_flow_stats_request_t *obj,
    uint8_t *table_id);

extern void of_flow_stats_request_out_port_set(
    of_flow_stats_request_t *obj,
    of_port_no_t out_port);
extern void of_flow_stats_request_out_port_get(
    of_flow_stats_request_t *obj,
    of_port_no_t *out_port);

extern void of_flow_stats_request_out_group_set(
    of_flow_stats_request_t *obj,
    uint32_t out_group);
extern void of_flow_stats_request_out_group_get(
    of_flow_stats_request_t *obj,
    uint32_t *out_group);

extern void of_flow_stats_request_cookie_set(
    of_flow_stats_request_t *obj,
    uint64_t cookie);
extern void of_flow_stats_request_cookie_get(
    of_flow_stats_request_t *obj,
    uint64_t *cookie);

extern void of_flow_stats_request_cookie_mask_set(
    of_flow_stats_request_t *obj,
    uint64_t cookie_mask);
extern void of_flow_stats_request_cookie_mask_get(
    of_flow_stats_request_t *obj,
    uint64_t *cookie_mask);

extern int WARN_UNUSED_RESULT of_flow_stats_request_match_set(
    of_flow_stats_request_t *obj,
    of_match_t *match);
extern int WARN_UNUSED_RESULT of_flow_stats_request_match_get(
    of_flow_stats_request_t *obj,
    of_match_t *match);

/* Unified accessor functions for of_get_config_reply */

extern void of_get_config_reply_xid_set(
    of_get_config_reply_t *obj,
    uint32_t xid);
extern void of_get_config_reply_xid_get(
    of_get_config_reply_t *obj,
    uint32_t *xid);

extern void of_get_config_reply_flags_set(
    of_get_config_reply_t *obj,
    uint16_t flags);
extern void of_get_config_reply_flags_get(
    of_get_config_reply_t *obj,
    uint16_t *flags);

extern void of_get_config_reply_miss_send_len_set(
    of_get_config_reply_t *obj,
    uint16_t miss_send_len);
extern void of_get_config_reply_miss_send_len_get(
    of_get_config_reply_t *obj,
    uint16_t *miss_send_len);

/* Unified accessor functions for of_get_config_request */

extern void of_get_config_request_xid_set(
    of_get_config_request_t *obj,
    uint32_t xid);
extern void of_get_config_request_xid_get(
    of_get_config_request_t *obj,
    uint32_t *xid);

/* Unified accessor functions for of_group_add */

extern void of_group_add_xid_set(
    of_group_add_t *obj,
    uint32_t xid);
extern void of_group_add_xid_get(
    of_group_add_t *obj,
    uint32_t *xid);

extern void of_group_add_group_type_set(
    of_group_add_t *obj,
    uint8_t group_type);
extern void of_group_add_group_type_get(
    of_group_add_t *obj,
    uint8_t *group_type);

extern void of_group_add_group_id_set(
    of_group_add_t *obj,
    uint32_t group_id);
extern void of_group_add_group_id_get(
    of_group_add_t *obj,
    uint32_t *group_id);

extern int WARN_UNUSED_RESULT of_group_add_buckets_set(
    of_group_add_t *obj,
    of_list_bucket_t *buckets);
extern void of_group_add_buckets_bind(
    of_group_add_t *obj,
    of_list_bucket_t *buckets);
extern of_list_bucket_t *of_group_add_buckets_get(
    of_group_add_t *obj);

/* Unified accessor functions for of_group_delete */

extern void of_group_delete_xid_set(
    of_group_delete_t *obj,
    uint32_t xid);
extern void of_group_delete_xid_get(
    of_group_delete_t *obj,
    uint32_t *xid);

extern void of_group_delete_group_type_set(
    of_group_delete_t *obj,
    uint8_t group_type);
extern void of_group_delete_group_type_get(
    of_group_delete_t *obj,
    uint8_t *group_type);

extern void of_group_delete_group_id_set(
    of_group_delete_t *obj,
    uint32_t group_id);
extern void of_group_delete_group_id_get(
    of_group_delete_t *obj,
    uint32_t *group_id);

extern int WARN_UNUSED_RESULT of_group_delete_buckets_set(
    of_group_delete_t *obj,
    of_list_bucket_t *buckets);
extern void of_group_delete_buckets_bind(
    of_group_delete_t *obj,
    of_list_bucket_t *buckets);
extern of_list_bucket_t *of_group_delete_buckets_get(
    of_group_delete_t *obj);

/* Unified accessor functions for of_group_desc_stats_reply */

extern void of_group_desc_stats_reply_xid_set(
    of_group_desc_stats_reply_t *obj,
    uint32_t xid);
extern void of_group_desc_stats_reply_xid_get(
    of_group_desc_stats_reply_t *obj,
    uint32_t *xid);

extern void of_group_desc_stats_reply_flags_set(
    of_group_desc_stats_reply_t *obj,
    uint16_t flags);
extern void of_group_desc_stats_reply_flags_get(
    of_group_desc_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_group_desc_stats_reply_entries_set(
    of_group_desc_stats_reply_t *obj,
    of_list_group_desc_stats_entry_t *entries);
extern void of_group_desc_stats_reply_entries_bind(
    of_group_desc_stats_reply_t *obj,
    of_list_group_desc_stats_entry_t *entries);
extern of_list_group_desc_stats_entry_t *of_group_desc_stats_reply_entries_get(
    of_group_desc_stats_reply_t *obj);

/* Unified accessor functions for of_group_desc_stats_request */

extern void of_group_desc_stats_request_xid_set(
    of_group_desc_stats_request_t *obj,
    uint32_t xid);
extern void of_group_desc_stats_request_xid_get(
    of_group_desc_stats_request_t *obj,
    uint32_t *xid);

extern void of_group_desc_stats_request_flags_set(
    of_group_desc_stats_request_t *obj,
    uint16_t flags);
extern void of_group_desc_stats_request_flags_get(
    of_group_desc_stats_request_t *obj,
    uint16_t *flags);

/* Unified accessor functions for of_group_features_stats_reply */

extern void of_group_features_stats_reply_xid_set(
    of_group_features_stats_reply_t *obj,
    uint32_t xid);
extern void of_group_features_stats_reply_xid_get(
    of_group_features_stats_reply_t *obj,
    uint32_t *xid);

extern void of_group_features_stats_reply_flags_set(
    of_group_features_stats_reply_t *obj,
    uint16_t flags);
extern void of_group_features_stats_reply_flags_get(
    of_group_features_stats_reply_t *obj,
    uint16_t *flags);

extern void of_group_features_stats_reply_types_set(
    of_group_features_stats_reply_t *obj,
    uint32_t types);
extern void of_group_features_stats_reply_types_get(
    of_group_features_stats_reply_t *obj,
    uint32_t *types);

extern void of_group_features_stats_reply_capabilities_set(
    of_group_features_stats_reply_t *obj,
    uint32_t capabilities);
extern void of_group_features_stats_reply_capabilities_get(
    of_group_features_stats_reply_t *obj,
    uint32_t *capabilities);

extern void of_group_features_stats_reply_max_groups_all_set(
    of_group_features_stats_reply_t *obj,
    uint32_t max_groups_all);
extern void of_group_features_stats_reply_max_groups_all_get(
    of_group_features_stats_reply_t *obj,
    uint32_t *max_groups_all);

extern void of_group_features_stats_reply_max_groups_select_set(
    of_group_features_stats_reply_t *obj,
    uint32_t max_groups_select);
extern void of_group_features_stats_reply_max_groups_select_get(
    of_group_features_stats_reply_t *obj,
    uint32_t *max_groups_select);

extern void of_group_features_stats_reply_max_groups_indirect_set(
    of_group_features_stats_reply_t *obj,
    uint32_t max_groups_indirect);
extern void of_group_features_stats_reply_max_groups_indirect_get(
    of_group_features_stats_reply_t *obj,
    uint32_t *max_groups_indirect);

extern void of_group_features_stats_reply_max_groups_ff_set(
    of_group_features_stats_reply_t *obj,
    uint32_t max_groups_ff);
extern void of_group_features_stats_reply_max_groups_ff_get(
    of_group_features_stats_reply_t *obj,
    uint32_t *max_groups_ff);

extern void of_group_features_stats_reply_actions_all_set(
    of_group_features_stats_reply_t *obj,
    uint32_t actions_all);
extern void of_group_features_stats_reply_actions_all_get(
    of_group_features_stats_reply_t *obj,
    uint32_t *actions_all);

extern void of_group_features_stats_reply_actions_select_set(
    of_group_features_stats_reply_t *obj,
    uint32_t actions_select);
extern void of_group_features_stats_reply_actions_select_get(
    of_group_features_stats_reply_t *obj,
    uint32_t *actions_select);

extern void of_group_features_stats_reply_actions_indirect_set(
    of_group_features_stats_reply_t *obj,
    uint32_t actions_indirect);
extern void of_group_features_stats_reply_actions_indirect_get(
    of_group_features_stats_reply_t *obj,
    uint32_t *actions_indirect);

extern void of_group_features_stats_reply_actions_ff_set(
    of_group_features_stats_reply_t *obj,
    uint32_t actions_ff);
extern void of_group_features_stats_reply_actions_ff_get(
    of_group_features_stats_reply_t *obj,
    uint32_t *actions_ff);

/* Unified accessor functions for of_group_features_stats_request */

extern void of_group_features_stats_request_xid_set(
    of_group_features_stats_request_t *obj,
    uint32_t xid);
extern void of_group_features_stats_request_xid_get(
    of_group_features_stats_request_t *obj,
    uint32_t *xid);

extern void of_group_features_stats_request_flags_set(
    of_group_features_stats_request_t *obj,
    uint16_t flags);
extern void of_group_features_stats_request_flags_get(
    of_group_features_stats_request_t *obj,
    uint16_t *flags);

/* Unified accessor functions for of_group_mod_failed_error_msg */

extern void of_group_mod_failed_error_msg_xid_set(
    of_group_mod_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_group_mod_failed_error_msg_xid_get(
    of_group_mod_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_group_mod_failed_error_msg_code_set(
    of_group_mod_failed_error_msg_t *obj,
    uint16_t code);
extern void of_group_mod_failed_error_msg_code_get(
    of_group_mod_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_group_mod_failed_error_msg_data_set(
    of_group_mod_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_group_mod_failed_error_msg_data_get(
    of_group_mod_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_group_modify */

extern void of_group_modify_xid_set(
    of_group_modify_t *obj,
    uint32_t xid);
extern void of_group_modify_xid_get(
    of_group_modify_t *obj,
    uint32_t *xid);

extern void of_group_modify_group_type_set(
    of_group_modify_t *obj,
    uint8_t group_type);
extern void of_group_modify_group_type_get(
    of_group_modify_t *obj,
    uint8_t *group_type);

extern void of_group_modify_group_id_set(
    of_group_modify_t *obj,
    uint32_t group_id);
extern void of_group_modify_group_id_get(
    of_group_modify_t *obj,
    uint32_t *group_id);

extern int WARN_UNUSED_RESULT of_group_modify_buckets_set(
    of_group_modify_t *obj,
    of_list_bucket_t *buckets);
extern void of_group_modify_buckets_bind(
    of_group_modify_t *obj,
    of_list_bucket_t *buckets);
extern of_list_bucket_t *of_group_modify_buckets_get(
    of_group_modify_t *obj);

/* Unified accessor functions for of_group_stats_reply */

extern void of_group_stats_reply_xid_set(
    of_group_stats_reply_t *obj,
    uint32_t xid);
extern void of_group_stats_reply_xid_get(
    of_group_stats_reply_t *obj,
    uint32_t *xid);

extern void of_group_stats_reply_flags_set(
    of_group_stats_reply_t *obj,
    uint16_t flags);
extern void of_group_stats_reply_flags_get(
    of_group_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_group_stats_reply_entries_set(
    of_group_stats_reply_t *obj,
    of_list_group_stats_entry_t *entries);
extern void of_group_stats_reply_entries_bind(
    of_group_stats_reply_t *obj,
    of_list_group_stats_entry_t *entries);
extern of_list_group_stats_entry_t *of_group_stats_reply_entries_get(
    of_group_stats_reply_t *obj);

/* Unified accessor functions for of_group_stats_request */

extern void of_group_stats_request_xid_set(
    of_group_stats_request_t *obj,
    uint32_t xid);
extern void of_group_stats_request_xid_get(
    of_group_stats_request_t *obj,
    uint32_t *xid);

extern void of_group_stats_request_flags_set(
    of_group_stats_request_t *obj,
    uint16_t flags);
extern void of_group_stats_request_flags_get(
    of_group_stats_request_t *obj,
    uint16_t *flags);

extern void of_group_stats_request_group_id_set(
    of_group_stats_request_t *obj,
    uint32_t group_id);
extern void of_group_stats_request_group_id_get(
    of_group_stats_request_t *obj,
    uint32_t *group_id);

/* Unified accessor functions for of_hello */

extern void of_hello_xid_set(
    of_hello_t *obj,
    uint32_t xid);
extern void of_hello_xid_get(
    of_hello_t *obj,
    uint32_t *xid);

extern int WARN_UNUSED_RESULT of_hello_elements_set(
    of_hello_t *obj,
    of_list_hello_elem_t *elements);
extern void of_hello_elements_bind(
    of_hello_t *obj,
    of_list_hello_elem_t *elements);
extern of_list_hello_elem_t *of_hello_elements_get(
    of_hello_t *obj);

/* Unified accessor functions for of_hello_failed_error_msg */

extern void of_hello_failed_error_msg_xid_set(
    of_hello_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_hello_failed_error_msg_xid_get(
    of_hello_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_hello_failed_error_msg_code_set(
    of_hello_failed_error_msg_t *obj,
    uint16_t code);
extern void of_hello_failed_error_msg_code_get(
    of_hello_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_hello_failed_error_msg_data_set(
    of_hello_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_hello_failed_error_msg_data_get(
    of_hello_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_meter_config_stats_reply */

extern void of_meter_config_stats_reply_xid_set(
    of_meter_config_stats_reply_t *obj,
    uint32_t xid);
extern void of_meter_config_stats_reply_xid_get(
    of_meter_config_stats_reply_t *obj,
    uint32_t *xid);

extern void of_meter_config_stats_reply_flags_set(
    of_meter_config_stats_reply_t *obj,
    uint16_t flags);
extern void of_meter_config_stats_reply_flags_get(
    of_meter_config_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_meter_config_stats_reply_entries_set(
    of_meter_config_stats_reply_t *obj,
    of_list_meter_band_t *entries);
extern void of_meter_config_stats_reply_entries_bind(
    of_meter_config_stats_reply_t *obj,
    of_list_meter_band_t *entries);
extern of_list_meter_band_t *of_meter_config_stats_reply_entries_get(
    of_meter_config_stats_reply_t *obj);

/* Unified accessor functions for of_meter_config_stats_request */

extern void of_meter_config_stats_request_xid_set(
    of_meter_config_stats_request_t *obj,
    uint32_t xid);
extern void of_meter_config_stats_request_xid_get(
    of_meter_config_stats_request_t *obj,
    uint32_t *xid);

extern void of_meter_config_stats_request_flags_set(
    of_meter_config_stats_request_t *obj,
    uint16_t flags);
extern void of_meter_config_stats_request_flags_get(
    of_meter_config_stats_request_t *obj,
    uint16_t *flags);

extern void of_meter_config_stats_request_meter_id_set(
    of_meter_config_stats_request_t *obj,
    uint32_t meter_id);
extern void of_meter_config_stats_request_meter_id_get(
    of_meter_config_stats_request_t *obj,
    uint32_t *meter_id);

/* Unified accessor functions for of_meter_features_stats_reply */

extern void of_meter_features_stats_reply_xid_set(
    of_meter_features_stats_reply_t *obj,
    uint32_t xid);
extern void of_meter_features_stats_reply_xid_get(
    of_meter_features_stats_reply_t *obj,
    uint32_t *xid);

extern void of_meter_features_stats_reply_flags_set(
    of_meter_features_stats_reply_t *obj,
    uint16_t flags);
extern void of_meter_features_stats_reply_flags_get(
    of_meter_features_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_meter_features_stats_reply_features_set(
    of_meter_features_stats_reply_t *obj,
    of_meter_features_t *features);
extern void of_meter_features_stats_reply_features_bind(
    of_meter_features_stats_reply_t *obj,
    of_meter_features_t *features);
extern of_meter_features_t *of_meter_features_stats_reply_features_get(
    of_meter_features_stats_reply_t *obj);

/* Unified accessor functions for of_meter_features_stats_request */

extern void of_meter_features_stats_request_xid_set(
    of_meter_features_stats_request_t *obj,
    uint32_t xid);
extern void of_meter_features_stats_request_xid_get(
    of_meter_features_stats_request_t *obj,
    uint32_t *xid);

extern void of_meter_features_stats_request_flags_set(
    of_meter_features_stats_request_t *obj,
    uint16_t flags);
extern void of_meter_features_stats_request_flags_get(
    of_meter_features_stats_request_t *obj,
    uint16_t *flags);

/* Unified accessor functions for of_meter_mod */

extern void of_meter_mod_xid_set(
    of_meter_mod_t *obj,
    uint32_t xid);
extern void of_meter_mod_xid_get(
    of_meter_mod_t *obj,
    uint32_t *xid);

extern void of_meter_mod_flags_set(
    of_meter_mod_t *obj,
    uint16_t flags);
extern void of_meter_mod_flags_get(
    of_meter_mod_t *obj,
    uint16_t *flags);

extern void of_meter_mod_meter_id_set(
    of_meter_mod_t *obj,
    uint32_t meter_id);
extern void of_meter_mod_meter_id_get(
    of_meter_mod_t *obj,
    uint32_t *meter_id);

extern int WARN_UNUSED_RESULT of_meter_mod_bands_set(
    of_meter_mod_t *obj,
    of_list_meter_band_t *bands);
extern void of_meter_mod_bands_bind(
    of_meter_mod_t *obj,
    of_list_meter_band_t *bands);
extern of_list_meter_band_t *of_meter_mod_bands_get(
    of_meter_mod_t *obj);

extern int WARN_UNUSED_RESULT of_meter_mod_meters_set(
    of_meter_mod_t *obj,
    of_list_meter_band_t *meters);
extern void of_meter_mod_meters_bind(
    of_meter_mod_t *obj,
    of_list_meter_band_t *meters);
extern of_list_meter_band_t *of_meter_mod_meters_get(
    of_meter_mod_t *obj);

/* Unified accessor functions for of_meter_mod_failed_error_msg */

extern void of_meter_mod_failed_error_msg_xid_set(
    of_meter_mod_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_meter_mod_failed_error_msg_xid_get(
    of_meter_mod_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_meter_mod_failed_error_msg_code_set(
    of_meter_mod_failed_error_msg_t *obj,
    uint16_t code);
extern void of_meter_mod_failed_error_msg_code_get(
    of_meter_mod_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_meter_mod_failed_error_msg_data_set(
    of_meter_mod_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_meter_mod_failed_error_msg_data_get(
    of_meter_mod_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_meter_stats_reply */

extern void of_meter_stats_reply_xid_set(
    of_meter_stats_reply_t *obj,
    uint32_t xid);
extern void of_meter_stats_reply_xid_get(
    of_meter_stats_reply_t *obj,
    uint32_t *xid);

extern void of_meter_stats_reply_flags_set(
    of_meter_stats_reply_t *obj,
    uint16_t flags);
extern void of_meter_stats_reply_flags_get(
    of_meter_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_meter_stats_reply_entries_set(
    of_meter_stats_reply_t *obj,
    of_list_meter_stats_t *entries);
extern void of_meter_stats_reply_entries_bind(
    of_meter_stats_reply_t *obj,
    of_list_meter_stats_t *entries);
extern of_list_meter_stats_t *of_meter_stats_reply_entries_get(
    of_meter_stats_reply_t *obj);

/* Unified accessor functions for of_meter_stats_request */

extern void of_meter_stats_request_xid_set(
    of_meter_stats_request_t *obj,
    uint32_t xid);
extern void of_meter_stats_request_xid_get(
    of_meter_stats_request_t *obj,
    uint32_t *xid);

extern void of_meter_stats_request_flags_set(
    of_meter_stats_request_t *obj,
    uint16_t flags);
extern void of_meter_stats_request_flags_get(
    of_meter_stats_request_t *obj,
    uint16_t *flags);

extern void of_meter_stats_request_meter_id_set(
    of_meter_stats_request_t *obj,
    uint32_t meter_id);
extern void of_meter_stats_request_meter_id_get(
    of_meter_stats_request_t *obj,
    uint32_t *meter_id);

/* Unified accessor functions for of_nicira_controller_role_reply */

extern void of_nicira_controller_role_reply_xid_set(
    of_nicira_controller_role_reply_t *obj,
    uint32_t xid);
extern void of_nicira_controller_role_reply_xid_get(
    of_nicira_controller_role_reply_t *obj,
    uint32_t *xid);

extern void of_nicira_controller_role_reply_experimenter_set(
    of_nicira_controller_role_reply_t *obj,
    uint32_t experimenter);
extern void of_nicira_controller_role_reply_experimenter_get(
    of_nicira_controller_role_reply_t *obj,
    uint32_t *experimenter);

extern void of_nicira_controller_role_reply_subtype_set(
    of_nicira_controller_role_reply_t *obj,
    uint32_t subtype);
extern void of_nicira_controller_role_reply_subtype_get(
    of_nicira_controller_role_reply_t *obj,
    uint32_t *subtype);

extern void of_nicira_controller_role_reply_role_set(
    of_nicira_controller_role_reply_t *obj,
    uint32_t role);
extern void of_nicira_controller_role_reply_role_get(
    of_nicira_controller_role_reply_t *obj,
    uint32_t *role);

/* Unified accessor functions for of_nicira_controller_role_request */

extern void of_nicira_controller_role_request_xid_set(
    of_nicira_controller_role_request_t *obj,
    uint32_t xid);
extern void of_nicira_controller_role_request_xid_get(
    of_nicira_controller_role_request_t *obj,
    uint32_t *xid);

extern void of_nicira_controller_role_request_experimenter_set(
    of_nicira_controller_role_request_t *obj,
    uint32_t experimenter);
extern void of_nicira_controller_role_request_experimenter_get(
    of_nicira_controller_role_request_t *obj,
    uint32_t *experimenter);

extern void of_nicira_controller_role_request_subtype_set(
    of_nicira_controller_role_request_t *obj,
    uint32_t subtype);
extern void of_nicira_controller_role_request_subtype_get(
    of_nicira_controller_role_request_t *obj,
    uint32_t *subtype);

extern void of_nicira_controller_role_request_role_set(
    of_nicira_controller_role_request_t *obj,
    uint32_t role);
extern void of_nicira_controller_role_request_role_get(
    of_nicira_controller_role_request_t *obj,
    uint32_t *role);

/* Unified accessor functions for of_packet_in */

extern void of_packet_in_xid_set(
    of_packet_in_t *obj,
    uint32_t xid);
extern void of_packet_in_xid_get(
    of_packet_in_t *obj,
    uint32_t *xid);

extern void of_packet_in_buffer_id_set(
    of_packet_in_t *obj,
    uint32_t buffer_id);
extern void of_packet_in_buffer_id_get(
    of_packet_in_t *obj,
    uint32_t *buffer_id);

extern void of_packet_in_total_len_set(
    of_packet_in_t *obj,
    uint16_t total_len);
extern void of_packet_in_total_len_get(
    of_packet_in_t *obj,
    uint16_t *total_len);

extern void of_packet_in_reason_set(
    of_packet_in_t *obj,
    uint8_t reason);
extern void of_packet_in_reason_get(
    of_packet_in_t *obj,
    uint8_t *reason);

extern void of_packet_in_table_id_set(
    of_packet_in_t *obj,
    uint8_t table_id);
extern void of_packet_in_table_id_get(
    of_packet_in_t *obj,
    uint8_t *table_id);

extern void of_packet_in_cookie_set(
    of_packet_in_t *obj,
    uint64_t cookie);
extern void of_packet_in_cookie_get(
    of_packet_in_t *obj,
    uint64_t *cookie);

extern int WARN_UNUSED_RESULT of_packet_in_match_set(
    of_packet_in_t *obj,
    of_match_t *match);
extern int WARN_UNUSED_RESULT of_packet_in_match_get(
    of_packet_in_t *obj,
    of_match_t *match);

extern int WARN_UNUSED_RESULT of_packet_in_data_set(
    of_packet_in_t *obj,
    of_octets_t *data);
extern void of_packet_in_data_get(
    of_packet_in_t *obj,
    of_octets_t *data);

extern void of_packet_in_in_port_set(
    of_packet_in_t *obj,
    of_port_no_t in_port);
extern void of_packet_in_in_port_get(
    of_packet_in_t *obj,
    of_port_no_t *in_port);

extern void of_packet_in_in_phy_port_set(
    of_packet_in_t *obj,
    of_port_no_t in_phy_port);
extern void of_packet_in_in_phy_port_get(
    of_packet_in_t *obj,
    of_port_no_t *in_phy_port);

/* Unified accessor functions for of_packet_out */

extern void of_packet_out_xid_set(
    of_packet_out_t *obj,
    uint32_t xid);
extern void of_packet_out_xid_get(
    of_packet_out_t *obj,
    uint32_t *xid);

extern void of_packet_out_buffer_id_set(
    of_packet_out_t *obj,
    uint32_t buffer_id);
extern void of_packet_out_buffer_id_get(
    of_packet_out_t *obj,
    uint32_t *buffer_id);

extern void of_packet_out_in_port_set(
    of_packet_out_t *obj,
    of_port_no_t in_port);
extern void of_packet_out_in_port_get(
    of_packet_out_t *obj,
    of_port_no_t *in_port);

extern int WARN_UNUSED_RESULT of_packet_out_actions_set(
    of_packet_out_t *obj,
    of_list_action_t *actions);
extern void of_packet_out_actions_bind(
    of_packet_out_t *obj,
    of_list_action_t *actions);
extern of_list_action_t *of_packet_out_actions_get(
    of_packet_out_t *obj);

extern int WARN_UNUSED_RESULT of_packet_out_data_set(
    of_packet_out_t *obj,
    of_octets_t *data);
extern void of_packet_out_data_get(
    of_packet_out_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_port_desc_stats_reply */

extern void of_port_desc_stats_reply_xid_set(
    of_port_desc_stats_reply_t *obj,
    uint32_t xid);
extern void of_port_desc_stats_reply_xid_get(
    of_port_desc_stats_reply_t *obj,
    uint32_t *xid);

extern void of_port_desc_stats_reply_flags_set(
    of_port_desc_stats_reply_t *obj,
    uint16_t flags);
extern void of_port_desc_stats_reply_flags_get(
    of_port_desc_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_port_desc_stats_reply_entries_set(
    of_port_desc_stats_reply_t *obj,
    of_list_port_desc_t *entries);
extern void of_port_desc_stats_reply_entries_bind(
    of_port_desc_stats_reply_t *obj,
    of_list_port_desc_t *entries);
extern of_list_port_desc_t *of_port_desc_stats_reply_entries_get(
    of_port_desc_stats_reply_t *obj);

/* Unified accessor functions for of_port_desc_stats_request */

extern void of_port_desc_stats_request_xid_set(
    of_port_desc_stats_request_t *obj,
    uint32_t xid);
extern void of_port_desc_stats_request_xid_get(
    of_port_desc_stats_request_t *obj,
    uint32_t *xid);

extern void of_port_desc_stats_request_flags_set(
    of_port_desc_stats_request_t *obj,
    uint16_t flags);
extern void of_port_desc_stats_request_flags_get(
    of_port_desc_stats_request_t *obj,
    uint16_t *flags);

/* Unified accessor functions for of_port_mod */

extern void of_port_mod_xid_set(
    of_port_mod_t *obj,
    uint32_t xid);
extern void of_port_mod_xid_get(
    of_port_mod_t *obj,
    uint32_t *xid);

extern void of_port_mod_port_no_set(
    of_port_mod_t *obj,
    of_port_no_t port_no);
extern void of_port_mod_port_no_get(
    of_port_mod_t *obj,
    of_port_no_t *port_no);

extern void of_port_mod_hw_addr_set(
    of_port_mod_t *obj,
    of_mac_addr_t hw_addr);
extern void of_port_mod_hw_addr_get(
    of_port_mod_t *obj,
    of_mac_addr_t *hw_addr);

extern void of_port_mod_config_set(
    of_port_mod_t *obj,
    uint32_t config);
extern void of_port_mod_config_get(
    of_port_mod_t *obj,
    uint32_t *config);

extern void of_port_mod_mask_set(
    of_port_mod_t *obj,
    uint32_t mask);
extern void of_port_mod_mask_get(
    of_port_mod_t *obj,
    uint32_t *mask);

extern int WARN_UNUSED_RESULT of_port_mod_properties_set(
    of_port_mod_t *obj,
    of_list_port_mod_prop_t *properties);
extern void of_port_mod_properties_bind(
    of_port_mod_t *obj,
    of_list_port_mod_prop_t *properties);
extern of_list_port_mod_prop_t *of_port_mod_properties_get(
    of_port_mod_t *obj);

extern void of_port_mod_advertise_set(
    of_port_mod_t *obj,
    uint32_t advertise);
extern void of_port_mod_advertise_get(
    of_port_mod_t *obj,
    uint32_t *advertise);

/* Unified accessor functions for of_port_mod_failed_error_msg */

extern void of_port_mod_failed_error_msg_xid_set(
    of_port_mod_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_port_mod_failed_error_msg_xid_get(
    of_port_mod_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_port_mod_failed_error_msg_code_set(
    of_port_mod_failed_error_msg_t *obj,
    uint16_t code);
extern void of_port_mod_failed_error_msg_code_get(
    of_port_mod_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_port_mod_failed_error_msg_data_set(
    of_port_mod_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_port_mod_failed_error_msg_data_get(
    of_port_mod_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_port_stats_reply */

extern void of_port_stats_reply_xid_set(
    of_port_stats_reply_t *obj,
    uint32_t xid);
extern void of_port_stats_reply_xid_get(
    of_port_stats_reply_t *obj,
    uint32_t *xid);

extern void of_port_stats_reply_flags_set(
    of_port_stats_reply_t *obj,
    uint16_t flags);
extern void of_port_stats_reply_flags_get(
    of_port_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_port_stats_reply_entries_set(
    of_port_stats_reply_t *obj,
    of_list_port_stats_entry_t *entries);
extern void of_port_stats_reply_entries_bind(
    of_port_stats_reply_t *obj,
    of_list_port_stats_entry_t *entries);
extern of_list_port_stats_entry_t *of_port_stats_reply_entries_get(
    of_port_stats_reply_t *obj);

/* Unified accessor functions for of_port_stats_request */

extern void of_port_stats_request_xid_set(
    of_port_stats_request_t *obj,
    uint32_t xid);
extern void of_port_stats_request_xid_get(
    of_port_stats_request_t *obj,
    uint32_t *xid);

extern void of_port_stats_request_flags_set(
    of_port_stats_request_t *obj,
    uint16_t flags);
extern void of_port_stats_request_flags_get(
    of_port_stats_request_t *obj,
    uint16_t *flags);

extern void of_port_stats_request_port_no_set(
    of_port_stats_request_t *obj,
    of_port_no_t port_no);
extern void of_port_stats_request_port_no_get(
    of_port_stats_request_t *obj,
    of_port_no_t *port_no);

/* Unified accessor functions for of_port_status */

extern void of_port_status_xid_set(
    of_port_status_t *obj,
    uint32_t xid);
extern void of_port_status_xid_get(
    of_port_status_t *obj,
    uint32_t *xid);

extern void of_port_status_reason_set(
    of_port_status_t *obj,
    uint8_t reason);
extern void of_port_status_reason_get(
    of_port_status_t *obj,
    uint8_t *reason);

extern int WARN_UNUSED_RESULT of_port_status_desc_set(
    of_port_status_t *obj,
    of_port_desc_t *desc);
extern void of_port_status_desc_bind(
    of_port_status_t *obj,
    of_port_desc_t *desc);
extern of_port_desc_t *of_port_status_desc_get(
    of_port_status_t *obj);

/* Unified accessor functions for of_queue_desc_stats_reply */

extern void of_queue_desc_stats_reply_xid_set(
    of_queue_desc_stats_reply_t *obj,
    uint32_t xid);
extern void of_queue_desc_stats_reply_xid_get(
    of_queue_desc_stats_reply_t *obj,
    uint32_t *xid);

extern void of_queue_desc_stats_reply_flags_set(
    of_queue_desc_stats_reply_t *obj,
    uint16_t flags);
extern void of_queue_desc_stats_reply_flags_get(
    of_queue_desc_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_queue_desc_stats_reply_entries_set(
    of_queue_desc_stats_reply_t *obj,
    of_list_queue_desc_t *entries);
extern void of_queue_desc_stats_reply_entries_bind(
    of_queue_desc_stats_reply_t *obj,
    of_list_queue_desc_t *entries);
extern of_list_queue_desc_t *of_queue_desc_stats_reply_entries_get(
    of_queue_desc_stats_reply_t *obj);

/* Unified accessor functions for of_queue_desc_stats_request */

extern void of_queue_desc_stats_request_xid_set(
    of_queue_desc_stats_request_t *obj,
    uint32_t xid);
extern void of_queue_desc_stats_request_xid_get(
    of_queue_desc_stats_request_t *obj,
    uint32_t *xid);

extern void of_queue_desc_stats_request_flags_set(
    of_queue_desc_stats_request_t *obj,
    uint16_t flags);
extern void of_queue_desc_stats_request_flags_get(
    of_queue_desc_stats_request_t *obj,
    uint16_t *flags);

/* Unified accessor functions for of_queue_get_config_reply */

extern void of_queue_get_config_reply_xid_set(
    of_queue_get_config_reply_t *obj,
    uint32_t xid);
extern void of_queue_get_config_reply_xid_get(
    of_queue_get_config_reply_t *obj,
    uint32_t *xid);

extern void of_queue_get_config_reply_port_set(
    of_queue_get_config_reply_t *obj,
    of_port_no_t port);
extern void of_queue_get_config_reply_port_get(
    of_queue_get_config_reply_t *obj,
    of_port_no_t *port);

extern int WARN_UNUSED_RESULT of_queue_get_config_reply_queues_set(
    of_queue_get_config_reply_t *obj,
    of_list_packet_queue_t *queues);
extern void of_queue_get_config_reply_queues_bind(
    of_queue_get_config_reply_t *obj,
    of_list_packet_queue_t *queues);
extern of_list_packet_queue_t *of_queue_get_config_reply_queues_get(
    of_queue_get_config_reply_t *obj);

/* Unified accessor functions for of_queue_get_config_request */

extern void of_queue_get_config_request_xid_set(
    of_queue_get_config_request_t *obj,
    uint32_t xid);
extern void of_queue_get_config_request_xid_get(
    of_queue_get_config_request_t *obj,
    uint32_t *xid);

extern void of_queue_get_config_request_port_set(
    of_queue_get_config_request_t *obj,
    of_port_no_t port);
extern void of_queue_get_config_request_port_get(
    of_queue_get_config_request_t *obj,
    of_port_no_t *port);

/* Unified accessor functions for of_queue_op_failed_error_msg */

extern void of_queue_op_failed_error_msg_xid_set(
    of_queue_op_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_queue_op_failed_error_msg_xid_get(
    of_queue_op_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_queue_op_failed_error_msg_code_set(
    of_queue_op_failed_error_msg_t *obj,
    uint16_t code);
extern void of_queue_op_failed_error_msg_code_get(
    of_queue_op_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_queue_op_failed_error_msg_data_set(
    of_queue_op_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_queue_op_failed_error_msg_data_get(
    of_queue_op_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_queue_stats_reply */

extern void of_queue_stats_reply_xid_set(
    of_queue_stats_reply_t *obj,
    uint32_t xid);
extern void of_queue_stats_reply_xid_get(
    of_queue_stats_reply_t *obj,
    uint32_t *xid);

extern void of_queue_stats_reply_flags_set(
    of_queue_stats_reply_t *obj,
    uint16_t flags);
extern void of_queue_stats_reply_flags_get(
    of_queue_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_queue_stats_reply_entries_set(
    of_queue_stats_reply_t *obj,
    of_list_queue_stats_entry_t *entries);
extern void of_queue_stats_reply_entries_bind(
    of_queue_stats_reply_t *obj,
    of_list_queue_stats_entry_t *entries);
extern of_list_queue_stats_entry_t *of_queue_stats_reply_entries_get(
    of_queue_stats_reply_t *obj);

/* Unified accessor functions for of_queue_stats_request */

extern void of_queue_stats_request_xid_set(
    of_queue_stats_request_t *obj,
    uint32_t xid);
extern void of_queue_stats_request_xid_get(
    of_queue_stats_request_t *obj,
    uint32_t *xid);

extern void of_queue_stats_request_flags_set(
    of_queue_stats_request_t *obj,
    uint16_t flags);
extern void of_queue_stats_request_flags_get(
    of_queue_stats_request_t *obj,
    uint16_t *flags);

extern void of_queue_stats_request_port_no_set(
    of_queue_stats_request_t *obj,
    of_port_no_t port_no);
extern void of_queue_stats_request_port_no_get(
    of_queue_stats_request_t *obj,
    of_port_no_t *port_no);

extern void of_queue_stats_request_queue_id_set(
    of_queue_stats_request_t *obj,
    uint32_t queue_id);
extern void of_queue_stats_request_queue_id_get(
    of_queue_stats_request_t *obj,
    uint32_t *queue_id);

/* Unified accessor functions for of_requestforward */

extern void of_requestforward_xid_set(
    of_requestforward_t *obj,
    uint32_t xid);
extern void of_requestforward_xid_get(
    of_requestforward_t *obj,
    uint32_t *xid);

extern void of_requestforward_role_set(
    of_requestforward_t *obj,
    uint32_t role);
extern void of_requestforward_role_get(
    of_requestforward_t *obj,
    uint32_t *role);

extern int WARN_UNUSED_RESULT of_requestforward_data_set(
    of_requestforward_t *obj,
    of_octets_t *data);
extern void of_requestforward_data_get(
    of_requestforward_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_role_reply */

extern void of_role_reply_xid_set(
    of_role_reply_t *obj,
    uint32_t xid);
extern void of_role_reply_xid_get(
    of_role_reply_t *obj,
    uint32_t *xid);

extern void of_role_reply_role_set(
    of_role_reply_t *obj,
    uint32_t role);
extern void of_role_reply_role_get(
    of_role_reply_t *obj,
    uint32_t *role);

extern void of_role_reply_generation_id_set(
    of_role_reply_t *obj,
    uint64_t generation_id);
extern void of_role_reply_generation_id_get(
    of_role_reply_t *obj,
    uint64_t *generation_id);

/* Unified accessor functions for of_role_request */

extern void of_role_request_xid_set(
    of_role_request_t *obj,
    uint32_t xid);
extern void of_role_request_xid_get(
    of_role_request_t *obj,
    uint32_t *xid);

extern void of_role_request_role_set(
    of_role_request_t *obj,
    uint32_t role);
extern void of_role_request_role_get(
    of_role_request_t *obj,
    uint32_t *role);

extern void of_role_request_generation_id_set(
    of_role_request_t *obj,
    uint64_t generation_id);
extern void of_role_request_generation_id_get(
    of_role_request_t *obj,
    uint64_t *generation_id);

/* Unified accessor functions for of_role_request_failed_error_msg */

extern void of_role_request_failed_error_msg_xid_set(
    of_role_request_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_role_request_failed_error_msg_xid_get(
    of_role_request_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_role_request_failed_error_msg_code_set(
    of_role_request_failed_error_msg_t *obj,
    uint16_t code);
extern void of_role_request_failed_error_msg_code_get(
    of_role_request_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_role_request_failed_error_msg_data_set(
    of_role_request_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_role_request_failed_error_msg_data_get(
    of_role_request_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_role_status */

extern void of_role_status_xid_set(
    of_role_status_t *obj,
    uint32_t xid);
extern void of_role_status_xid_get(
    of_role_status_t *obj,
    uint32_t *xid);

extern void of_role_status_role_set(
    of_role_status_t *obj,
    uint32_t role);
extern void of_role_status_role_get(
    of_role_status_t *obj,
    uint32_t *role);

extern void of_role_status_reason_set(
    of_role_status_t *obj,
    uint8_t reason);
extern void of_role_status_reason_get(
    of_role_status_t *obj,
    uint8_t *reason);

extern void of_role_status_generation_id_set(
    of_role_status_t *obj,
    uint64_t generation_id);
extern void of_role_status_generation_id_get(
    of_role_status_t *obj,
    uint64_t *generation_id);

extern int WARN_UNUSED_RESULT of_role_status_properties_set(
    of_role_status_t *obj,
    of_list_role_prop_t *properties);
extern void of_role_status_properties_bind(
    of_role_status_t *obj,
    of_list_role_prop_t *properties);
extern of_list_role_prop_t *of_role_status_properties_get(
    of_role_status_t *obj);

/* Unified accessor functions for of_set_config */

extern void of_set_config_xid_set(
    of_set_config_t *obj,
    uint32_t xid);
extern void of_set_config_xid_get(
    of_set_config_t *obj,
    uint32_t *xid);

extern void of_set_config_flags_set(
    of_set_config_t *obj,
    uint16_t flags);
extern void of_set_config_flags_get(
    of_set_config_t *obj,
    uint16_t *flags);

extern void of_set_config_miss_send_len_set(
    of_set_config_t *obj,
    uint16_t miss_send_len);
extern void of_set_config_miss_send_len_get(
    of_set_config_t *obj,
    uint16_t *miss_send_len);

/* Unified accessor functions for of_switch_config_failed_error_msg */

extern void of_switch_config_failed_error_msg_xid_set(
    of_switch_config_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_switch_config_failed_error_msg_xid_get(
    of_switch_config_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_switch_config_failed_error_msg_code_set(
    of_switch_config_failed_error_msg_t *obj,
    uint16_t code);
extern void of_switch_config_failed_error_msg_code_get(
    of_switch_config_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_switch_config_failed_error_msg_data_set(
    of_switch_config_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_switch_config_failed_error_msg_data_get(
    of_switch_config_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_table_desc_stats_reply */

extern void of_table_desc_stats_reply_xid_set(
    of_table_desc_stats_reply_t *obj,
    uint32_t xid);
extern void of_table_desc_stats_reply_xid_get(
    of_table_desc_stats_reply_t *obj,
    uint32_t *xid);

extern void of_table_desc_stats_reply_flags_set(
    of_table_desc_stats_reply_t *obj,
    uint16_t flags);
extern void of_table_desc_stats_reply_flags_get(
    of_table_desc_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_table_desc_stats_reply_entries_set(
    of_table_desc_stats_reply_t *obj,
    of_list_table_desc_t *entries);
extern void of_table_desc_stats_reply_entries_bind(
    of_table_desc_stats_reply_t *obj,
    of_list_table_desc_t *entries);
extern of_list_table_desc_t *of_table_desc_stats_reply_entries_get(
    of_table_desc_stats_reply_t *obj);

/* Unified accessor functions for of_table_desc_stats_request */

extern void of_table_desc_stats_request_xid_set(
    of_table_desc_stats_request_t *obj,
    uint32_t xid);
extern void of_table_desc_stats_request_xid_get(
    of_table_desc_stats_request_t *obj,
    uint32_t *xid);

extern void of_table_desc_stats_request_flags_set(
    of_table_desc_stats_request_t *obj,
    uint16_t flags);
extern void of_table_desc_stats_request_flags_get(
    of_table_desc_stats_request_t *obj,
    uint16_t *flags);

/* Unified accessor functions for of_table_features_failed_error_msg */

extern void of_table_features_failed_error_msg_xid_set(
    of_table_features_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_table_features_failed_error_msg_xid_get(
    of_table_features_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_table_features_failed_error_msg_code_set(
    of_table_features_failed_error_msg_t *obj,
    uint16_t code);
extern void of_table_features_failed_error_msg_code_get(
    of_table_features_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_table_features_failed_error_msg_data_set(
    of_table_features_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_table_features_failed_error_msg_data_get(
    of_table_features_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_table_features_stats_reply */

extern void of_table_features_stats_reply_xid_set(
    of_table_features_stats_reply_t *obj,
    uint32_t xid);
extern void of_table_features_stats_reply_xid_get(
    of_table_features_stats_reply_t *obj,
    uint32_t *xid);

extern void of_table_features_stats_reply_flags_set(
    of_table_features_stats_reply_t *obj,
    uint16_t flags);
extern void of_table_features_stats_reply_flags_get(
    of_table_features_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_table_features_stats_reply_entries_set(
    of_table_features_stats_reply_t *obj,
    of_list_table_features_t *entries);
extern void of_table_features_stats_reply_entries_bind(
    of_table_features_stats_reply_t *obj,
    of_list_table_features_t *entries);
extern of_list_table_features_t *of_table_features_stats_reply_entries_get(
    of_table_features_stats_reply_t *obj);

/* Unified accessor functions for of_table_features_stats_request */

extern void of_table_features_stats_request_xid_set(
    of_table_features_stats_request_t *obj,
    uint32_t xid);
extern void of_table_features_stats_request_xid_get(
    of_table_features_stats_request_t *obj,
    uint32_t *xid);

extern void of_table_features_stats_request_flags_set(
    of_table_features_stats_request_t *obj,
    uint16_t flags);
extern void of_table_features_stats_request_flags_get(
    of_table_features_stats_request_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_table_features_stats_request_entries_set(
    of_table_features_stats_request_t *obj,
    of_list_table_features_t *entries);
extern void of_table_features_stats_request_entries_bind(
    of_table_features_stats_request_t *obj,
    of_list_table_features_t *entries);
extern of_list_table_features_t *of_table_features_stats_request_entries_get(
    of_table_features_stats_request_t *obj);

/* Unified accessor functions for of_table_mod */

extern void of_table_mod_xid_set(
    of_table_mod_t *obj,
    uint32_t xid);
extern void of_table_mod_xid_get(
    of_table_mod_t *obj,
    uint32_t *xid);

extern void of_table_mod_table_id_set(
    of_table_mod_t *obj,
    uint8_t table_id);
extern void of_table_mod_table_id_get(
    of_table_mod_t *obj,
    uint8_t *table_id);

extern void of_table_mod_config_set(
    of_table_mod_t *obj,
    uint32_t config);
extern void of_table_mod_config_get(
    of_table_mod_t *obj,
    uint32_t *config);

extern int WARN_UNUSED_RESULT of_table_mod_properties_set(
    of_table_mod_t *obj,
    of_list_table_mod_prop_t *properties);
extern void of_table_mod_properties_bind(
    of_table_mod_t *obj,
    of_list_table_mod_prop_t *properties);
extern of_list_table_mod_prop_t *of_table_mod_properties_get(
    of_table_mod_t *obj);

/* Unified accessor functions for of_table_mod_failed_error_msg */

extern void of_table_mod_failed_error_msg_xid_set(
    of_table_mod_failed_error_msg_t *obj,
    uint32_t xid);
extern void of_table_mod_failed_error_msg_xid_get(
    of_table_mod_failed_error_msg_t *obj,
    uint32_t *xid);

extern void of_table_mod_failed_error_msg_code_set(
    of_table_mod_failed_error_msg_t *obj,
    uint16_t code);
extern void of_table_mod_failed_error_msg_code_get(
    of_table_mod_failed_error_msg_t *obj,
    uint16_t *code);

extern int WARN_UNUSED_RESULT of_table_mod_failed_error_msg_data_set(
    of_table_mod_failed_error_msg_t *obj,
    of_octets_t *data);
extern void of_table_mod_failed_error_msg_data_get(
    of_table_mod_failed_error_msg_t *obj,
    of_octets_t *data);

/* Unified accessor functions for of_table_stats_reply */

extern void of_table_stats_reply_xid_set(
    of_table_stats_reply_t *obj,
    uint32_t xid);
extern void of_table_stats_reply_xid_get(
    of_table_stats_reply_t *obj,
    uint32_t *xid);

extern void of_table_stats_reply_flags_set(
    of_table_stats_reply_t *obj,
    uint16_t flags);
extern void of_table_stats_reply_flags_get(
    of_table_stats_reply_t *obj,
    uint16_t *flags);

extern int WARN_UNUSED_RESULT of_table_stats_reply_entries_set(
    of_table_stats_reply_t *obj,
    of_list_table_stats_entry_t *entries);
extern void of_table_stats_reply_entries_bind(
    of_table_stats_reply_t *obj,
    of_list_table_stats_entry_t *entries);
extern of_list_table_stats_entry_t *of_table_stats_reply_entries_get(
    of_table_stats_reply_t *obj);

/* Unified accessor functions for of_table_stats_request */

extern void of_table_stats_request_xid_set(
    of_table_stats_request_t *obj,
    uint32_t xid);
extern void of_table_stats_request_xid_get(
    of_table_stats_request_t *obj,
    uint32_t *xid);

extern void of_table_stats_request_flags_set(
    of_table_stats_request_t *obj,
    uint16_t flags);
extern void of_table_stats_request_flags_get(
    of_table_stats_request_t *obj,
    uint16_t *flags);

/* Unified accessor functions for of_table_status */

extern void of_table_status_xid_set(
    of_table_status_t *obj,
    uint32_t xid);
extern void of_table_status_xid_get(
    of_table_status_t *obj,
    uint32_t *xid);

extern void of_table_status_role_set(
    of_table_status_t *obj,
    uint32_t role);
extern void of_table_status_role_get(
    of_table_status_t *obj,
    uint32_t *role);

extern void of_table_status_reason_set(
    of_table_status_t *obj,
    uint8_t reason);
extern void of_table_status_reason_get(
    of_table_status_t *obj,
    uint8_t *reason);

extern int WARN_UNUSED_RESULT of_table_status_table_set(
    of_table_status_t *obj,
    of_table_desc_t *table);
extern void of_table_status_table_bind(
    of_table_status_t *obj,
    of_table_desc_t *table);
extern of_table_desc_t *of_table_status_table_get(
    of_table_status_t *obj);

/* Unified accessor functions for of_action_bsn_checksum */

extern void of_action_bsn_checksum_experimenter_set(
    of_action_bsn_checksum_t *obj,
    uint32_t experimenter);
extern void of_action_bsn_checksum_experimenter_get(
    of_action_bsn_checksum_t *obj,
    uint32_t *experimenter);

extern void of_action_bsn_checksum_subtype_set(
    of_action_bsn_checksum_t *obj,
    uint32_t subtype);
extern void of_action_bsn_checksum_subtype_get(
    of_action_bsn_checksum_t *obj,
    uint32_t *subtype);

extern void of_action_bsn_checksum_checksum_set(
    of_action_bsn_checksum_t *obj,
    of_checksum_128_t checksum);
extern void of_action_bsn_checksum_checksum_get(
    of_action_bsn_checksum_t *obj,
    of_checksum_128_t *checksum);

/* Unified accessor functions for of_action_bsn_gentable */

extern void of_action_bsn_gentable_experimenter_set(
    of_action_bsn_gentable_t *obj,
    uint32_t experimenter);
extern void of_action_bsn_gentable_experimenter_get(
    of_action_bsn_gentable_t *obj,
    uint32_t *experimenter);

extern void of_action_bsn_gentable_subtype_set(
    of_action_bsn_gentable_t *obj,
    uint32_t subtype);
extern void of_action_bsn_gentable_subtype_get(
    of_action_bsn_gentable_t *obj,
    uint32_t *subtype);

extern void of_action_bsn_gentable_table_id_set(
    of_action_bsn_gentable_t *obj,
    uint32_t table_id);
extern void of_action_bsn_gentable_table_id_get(
    of_action_bsn_gentable_t *obj,
    uint32_t *table_id);

extern int WARN_UNUSED_RESULT of_action_bsn_gentable_key_set(
    of_action_bsn_gentable_t *obj,
    of_list_bsn_tlv_t *key);
extern void of_action_bsn_gentable_key_bind(
    of_action_bsn_gentable_t *obj,
    of_list_bsn_tlv_t *key);
extern of_list_bsn_tlv_t *of_action_bsn_gentable_key_get(
    of_action_bsn_gentable_t *obj);

/* Unified accessor functions for of_action_bsn_mirror */

extern void of_action_bsn_mirror_experimenter_set(
    of_action_bsn_mirror_t *obj,
    uint32_t experimenter);
extern void of_action_bsn_mirror_experimenter_get(
    of_action_bsn_mirror_t *obj,
    uint32_t *experimenter);

extern void of_action_bsn_mirror_subtype_set(
    of_action_bsn_mirror_t *obj,
    uint32_t subtype);
extern void of_action_bsn_mirror_subtype_get(
    of_action_bsn_mirror_t *obj,
    uint32_t *subtype);

extern void of_action_bsn_mirror_dest_port_set(
    of_action_bsn_mirror_t *obj,
    uint32_t dest_port);
extern void of_action_bsn_mirror_dest_port_get(
    of_action_bsn_mirror_t *obj,
    uint32_t *dest_port);

extern void of_action_bsn_mirror_vlan_tag_set(
    of_action_bsn_mirror_t *obj,
    uint32_t vlan_tag);
extern void of_action_bsn_mirror_vlan_tag_get(
    of_action_bsn_mirror_t *obj,
    uint32_t *vlan_tag);

extern void of_action_bsn_mirror_copy_stage_set(
    of_action_bsn_mirror_t *obj,
    uint8_t copy_stage);
extern void of_action_bsn_mirror_copy_stage_get(
    of_action_bsn_mirror_t *obj,
    uint8_t *copy_stage);

/* Unified accessor functions for of_action_bsn_set_tunnel_dst */

extern void of_action_bsn_set_tunnel_dst_experimenter_set(
    of_action_bsn_set_tunnel_dst_t *obj,
    uint32_t experimenter);
extern void of_action_bsn_set_tunnel_dst_experimenter_get(
    of_action_bsn_set_tunnel_dst_t *obj,
    uint32_t *experimenter);

extern void of_action_bsn_set_tunnel_dst_subtype_set(
    of_action_bsn_set_tunnel_dst_t *obj,
    uint32_t subtype);
extern void of_action_bsn_set_tunnel_dst_subtype_get(
    of_action_bsn_set_tunnel_dst_t *obj,
    uint32_t *subtype);

extern void of_action_bsn_set_tunnel_dst_dst_set(
    of_action_bsn_set_tunnel_dst_t *obj,
    uint32_t dst);
extern void of_action_bsn_set_tunnel_dst_dst_get(
    of_action_bsn_set_tunnel_dst_t *obj,
    uint32_t *dst);

/* Unified accessor functions for of_action_copy_ttl_in */

/* Unified accessor functions for of_action_copy_ttl_out */

/* Unified accessor functions for of_action_dec_mpls_ttl */

/* Unified accessor functions for of_action_dec_nw_ttl */

/* Unified accessor functions for of_action_enqueue */

extern void of_action_enqueue_port_set(
    of_action_enqueue_t *obj,
    of_port_no_t port);
extern void of_action_enqueue_port_get(
    of_action_enqueue_t *obj,
    of_port_no_t *port);

extern void of_action_enqueue_queue_id_set(
    of_action_enqueue_t *obj,
    uint32_t queue_id);
extern void of_action_enqueue_queue_id_get(
    of_action_enqueue_t *obj,
    uint32_t *queue_id);

/* Unified accessor functions for of_action_group */

extern void of_action_group_group_id_set(
    of_action_group_t *obj,
    uint32_t group_id);
extern void of_action_group_group_id_get(
    of_action_group_t *obj,
    uint32_t *group_id);

/* Unified accessor functions for of_action_id_bsn_checksum */

extern void of_action_id_bsn_checksum_experimenter_set(
    of_action_id_bsn_checksum_t *obj,
    uint32_t experimenter);
extern void of_action_id_bsn_checksum_experimenter_get(
    of_action_id_bsn_checksum_t *obj,
    uint32_t *experimenter);

extern void of_action_id_bsn_checksum_subtype_set(
    of_action_id_bsn_checksum_t *obj,
    uint32_t subtype);
extern void of_action_id_bsn_checksum_subtype_get(
    of_action_id_bsn_checksum_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_action_id_bsn_gentable */

extern void of_action_id_bsn_gentable_experimenter_set(
    of_action_id_bsn_gentable_t *obj,
    uint32_t experimenter);
extern void of_action_id_bsn_gentable_experimenter_get(
    of_action_id_bsn_gentable_t *obj,
    uint32_t *experimenter);

extern void of_action_id_bsn_gentable_subtype_set(
    of_action_id_bsn_gentable_t *obj,
    uint32_t subtype);
extern void of_action_id_bsn_gentable_subtype_get(
    of_action_id_bsn_gentable_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_action_id_bsn_mirror */

extern void of_action_id_bsn_mirror_experimenter_set(
    of_action_id_bsn_mirror_t *obj,
    uint32_t experimenter);
extern void of_action_id_bsn_mirror_experimenter_get(
    of_action_id_bsn_mirror_t *obj,
    uint32_t *experimenter);

extern void of_action_id_bsn_mirror_subtype_set(
    of_action_id_bsn_mirror_t *obj,
    uint32_t subtype);
extern void of_action_id_bsn_mirror_subtype_get(
    of_action_id_bsn_mirror_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_action_id_bsn_set_tunnel_dst */

extern void of_action_id_bsn_set_tunnel_dst_experimenter_set(
    of_action_id_bsn_set_tunnel_dst_t *obj,
    uint32_t experimenter);
extern void of_action_id_bsn_set_tunnel_dst_experimenter_get(
    of_action_id_bsn_set_tunnel_dst_t *obj,
    uint32_t *experimenter);

extern void of_action_id_bsn_set_tunnel_dst_subtype_set(
    of_action_id_bsn_set_tunnel_dst_t *obj,
    uint32_t subtype);
extern void of_action_id_bsn_set_tunnel_dst_subtype_get(
    of_action_id_bsn_set_tunnel_dst_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_action_id_copy_ttl_in */

/* Unified accessor functions for of_action_id_copy_ttl_out */

/* Unified accessor functions for of_action_id_dec_mpls_ttl */

/* Unified accessor functions for of_action_id_dec_nw_ttl */

/* Unified accessor functions for of_action_id_group */

/* Unified accessor functions for of_action_id_nicira_dec_ttl */

extern void of_action_id_nicira_dec_ttl_experimenter_set(
    of_action_id_nicira_dec_ttl_t *obj,
    uint32_t experimenter);
extern void of_action_id_nicira_dec_ttl_experimenter_get(
    of_action_id_nicira_dec_ttl_t *obj,
    uint32_t *experimenter);

extern void of_action_id_nicira_dec_ttl_subtype_set(
    of_action_id_nicira_dec_ttl_t *obj,
    uint16_t subtype);
extern void of_action_id_nicira_dec_ttl_subtype_get(
    of_action_id_nicira_dec_ttl_t *obj,
    uint16_t *subtype);

/* Unified accessor functions for of_action_id_output */

/* Unified accessor functions for of_action_id_pop_mpls */

/* Unified accessor functions for of_action_id_pop_pbb */

/* Unified accessor functions for of_action_id_pop_vlan */

/* Unified accessor functions for of_action_id_push_mpls */

/* Unified accessor functions for of_action_id_push_pbb */

/* Unified accessor functions for of_action_id_push_vlan */

/* Unified accessor functions for of_action_id_set_field */

/* Unified accessor functions for of_action_id_set_mpls_ttl */

/* Unified accessor functions for of_action_id_set_nw_ttl */

/* Unified accessor functions for of_action_id_set_queue */

/* Unified accessor functions for of_action_nicira_dec_ttl */

extern void of_action_nicira_dec_ttl_experimenter_set(
    of_action_nicira_dec_ttl_t *obj,
    uint32_t experimenter);
extern void of_action_nicira_dec_ttl_experimenter_get(
    of_action_nicira_dec_ttl_t *obj,
    uint32_t *experimenter);

extern void of_action_nicira_dec_ttl_subtype_set(
    of_action_nicira_dec_ttl_t *obj,
    uint16_t subtype);
extern void of_action_nicira_dec_ttl_subtype_get(
    of_action_nicira_dec_ttl_t *obj,
    uint16_t *subtype);

/* Unified accessor functions for of_action_output */

extern void of_action_output_port_set(
    of_action_output_t *obj,
    of_port_no_t port);
extern void of_action_output_port_get(
    of_action_output_t *obj,
    of_port_no_t *port);

extern void of_action_output_max_len_set(
    of_action_output_t *obj,
    uint16_t max_len);
extern void of_action_output_max_len_get(
    of_action_output_t *obj,
    uint16_t *max_len);

/* Unified accessor functions for of_action_pop_mpls */

extern void of_action_pop_mpls_ethertype_set(
    of_action_pop_mpls_t *obj,
    uint16_t ethertype);
extern void of_action_pop_mpls_ethertype_get(
    of_action_pop_mpls_t *obj,
    uint16_t *ethertype);

/* Unified accessor functions for of_action_pop_pbb */

/* Unified accessor functions for of_action_pop_vlan */

/* Unified accessor functions for of_action_push_mpls */

extern void of_action_push_mpls_ethertype_set(
    of_action_push_mpls_t *obj,
    uint16_t ethertype);
extern void of_action_push_mpls_ethertype_get(
    of_action_push_mpls_t *obj,
    uint16_t *ethertype);

/* Unified accessor functions for of_action_push_pbb */

extern void of_action_push_pbb_ethertype_set(
    of_action_push_pbb_t *obj,
    uint16_t ethertype);
extern void of_action_push_pbb_ethertype_get(
    of_action_push_pbb_t *obj,
    uint16_t *ethertype);

/* Unified accessor functions for of_action_push_vlan */

extern void of_action_push_vlan_ethertype_set(
    of_action_push_vlan_t *obj,
    uint16_t ethertype);
extern void of_action_push_vlan_ethertype_get(
    of_action_push_vlan_t *obj,
    uint16_t *ethertype);

/* Unified accessor functions for of_action_set_dl_dst */

extern void of_action_set_dl_dst_dl_addr_set(
    of_action_set_dl_dst_t *obj,
    of_mac_addr_t dl_addr);
extern void of_action_set_dl_dst_dl_addr_get(
    of_action_set_dl_dst_t *obj,
    of_mac_addr_t *dl_addr);

/* Unified accessor functions for of_action_set_dl_src */

extern void of_action_set_dl_src_dl_addr_set(
    of_action_set_dl_src_t *obj,
    of_mac_addr_t dl_addr);
extern void of_action_set_dl_src_dl_addr_get(
    of_action_set_dl_src_t *obj,
    of_mac_addr_t *dl_addr);

/* Unified accessor functions for of_action_set_field */

extern int WARN_UNUSED_RESULT of_action_set_field_field_set(
    of_action_set_field_t *obj,
    of_oxm_t *field);
extern void of_action_set_field_field_bind(
    of_action_set_field_t *obj,
    of_oxm_t *field);
extern of_oxm_t *of_action_set_field_field_get(
    of_action_set_field_t *obj);

/* Unified accessor functions for of_action_set_mpls_label */

extern void of_action_set_mpls_label_mpls_label_set(
    of_action_set_mpls_label_t *obj,
    uint32_t mpls_label);
extern void of_action_set_mpls_label_mpls_label_get(
    of_action_set_mpls_label_t *obj,
    uint32_t *mpls_label);

/* Unified accessor functions for of_action_set_mpls_tc */

extern void of_action_set_mpls_tc_mpls_tc_set(
    of_action_set_mpls_tc_t *obj,
    uint8_t mpls_tc);
extern void of_action_set_mpls_tc_mpls_tc_get(
    of_action_set_mpls_tc_t *obj,
    uint8_t *mpls_tc);

/* Unified accessor functions for of_action_set_mpls_ttl */

extern void of_action_set_mpls_ttl_mpls_ttl_set(
    of_action_set_mpls_ttl_t *obj,
    uint8_t mpls_ttl);
extern void of_action_set_mpls_ttl_mpls_ttl_get(
    of_action_set_mpls_ttl_t *obj,
    uint8_t *mpls_ttl);

/* Unified accessor functions for of_action_set_nw_dst */

extern void of_action_set_nw_dst_nw_addr_set(
    of_action_set_nw_dst_t *obj,
    uint32_t nw_addr);
extern void of_action_set_nw_dst_nw_addr_get(
    of_action_set_nw_dst_t *obj,
    uint32_t *nw_addr);

/* Unified accessor functions for of_action_set_nw_ecn */

extern void of_action_set_nw_ecn_nw_ecn_set(
    of_action_set_nw_ecn_t *obj,
    uint8_t nw_ecn);
extern void of_action_set_nw_ecn_nw_ecn_get(
    of_action_set_nw_ecn_t *obj,
    uint8_t *nw_ecn);

/* Unified accessor functions for of_action_set_nw_src */

extern void of_action_set_nw_src_nw_addr_set(
    of_action_set_nw_src_t *obj,
    uint32_t nw_addr);
extern void of_action_set_nw_src_nw_addr_get(
    of_action_set_nw_src_t *obj,
    uint32_t *nw_addr);

/* Unified accessor functions for of_action_set_nw_tos */

extern void of_action_set_nw_tos_nw_tos_set(
    of_action_set_nw_tos_t *obj,
    uint8_t nw_tos);
extern void of_action_set_nw_tos_nw_tos_get(
    of_action_set_nw_tos_t *obj,
    uint8_t *nw_tos);

/* Unified accessor functions for of_action_set_nw_ttl */

extern void of_action_set_nw_ttl_nw_ttl_set(
    of_action_set_nw_ttl_t *obj,
    uint8_t nw_ttl);
extern void of_action_set_nw_ttl_nw_ttl_get(
    of_action_set_nw_ttl_t *obj,
    uint8_t *nw_ttl);

/* Unified accessor functions for of_action_set_queue */

extern void of_action_set_queue_queue_id_set(
    of_action_set_queue_t *obj,
    uint32_t queue_id);
extern void of_action_set_queue_queue_id_get(
    of_action_set_queue_t *obj,
    uint32_t *queue_id);

/* Unified accessor functions for of_action_set_tp_dst */

extern void of_action_set_tp_dst_tp_port_set(
    of_action_set_tp_dst_t *obj,
    uint16_t tp_port);
extern void of_action_set_tp_dst_tp_port_get(
    of_action_set_tp_dst_t *obj,
    uint16_t *tp_port);

/* Unified accessor functions for of_action_set_tp_src */

extern void of_action_set_tp_src_tp_port_set(
    of_action_set_tp_src_t *obj,
    uint16_t tp_port);
extern void of_action_set_tp_src_tp_port_get(
    of_action_set_tp_src_t *obj,
    uint16_t *tp_port);

/* Unified accessor functions for of_action_set_vlan_pcp */

extern void of_action_set_vlan_pcp_vlan_pcp_set(
    of_action_set_vlan_pcp_t *obj,
    uint8_t vlan_pcp);
extern void of_action_set_vlan_pcp_vlan_pcp_get(
    of_action_set_vlan_pcp_t *obj,
    uint8_t *vlan_pcp);

/* Unified accessor functions for of_action_set_vlan_vid */

extern void of_action_set_vlan_vid_vlan_vid_set(
    of_action_set_vlan_vid_t *obj,
    uint16_t vlan_vid);
extern void of_action_set_vlan_vid_vlan_vid_get(
    of_action_set_vlan_vid_t *obj,
    uint16_t *vlan_vid);

/* Unified accessor functions for of_action_strip_vlan */

/* Unified accessor functions for of_async_config_prop_experimenter_master */

/* Unified accessor functions for of_async_config_prop_experimenter_slave */

/* Unified accessor functions for of_async_config_prop_flow_removed_master */

extern void of_async_config_prop_flow_removed_master_mask_set(
    of_async_config_prop_flow_removed_master_t *obj,
    uint32_t mask);
extern void of_async_config_prop_flow_removed_master_mask_get(
    of_async_config_prop_flow_removed_master_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_async_config_prop_flow_removed_slave */

extern void of_async_config_prop_flow_removed_slave_mask_set(
    of_async_config_prop_flow_removed_slave_t *obj,
    uint32_t mask);
extern void of_async_config_prop_flow_removed_slave_mask_get(
    of_async_config_prop_flow_removed_slave_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_async_config_prop_packet_in_master */

extern void of_async_config_prop_packet_in_master_mask_set(
    of_async_config_prop_packet_in_master_t *obj,
    uint32_t mask);
extern void of_async_config_prop_packet_in_master_mask_get(
    of_async_config_prop_packet_in_master_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_async_config_prop_packet_in_slave */

extern void of_async_config_prop_packet_in_slave_mask_set(
    of_async_config_prop_packet_in_slave_t *obj,
    uint32_t mask);
extern void of_async_config_prop_packet_in_slave_mask_get(
    of_async_config_prop_packet_in_slave_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_async_config_prop_port_status_master */

extern void of_async_config_prop_port_status_master_mask_set(
    of_async_config_prop_port_status_master_t *obj,
    uint32_t mask);
extern void of_async_config_prop_port_status_master_mask_get(
    of_async_config_prop_port_status_master_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_async_config_prop_port_status_slave */

extern void of_async_config_prop_port_status_slave_mask_set(
    of_async_config_prop_port_status_slave_t *obj,
    uint32_t mask);
extern void of_async_config_prop_port_status_slave_mask_get(
    of_async_config_prop_port_status_slave_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_async_config_prop_requestforward_master */

extern void of_async_config_prop_requestforward_master_mask_set(
    of_async_config_prop_requestforward_master_t *obj,
    uint32_t mask);
extern void of_async_config_prop_requestforward_master_mask_get(
    of_async_config_prop_requestforward_master_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_async_config_prop_requestforward_slave */

extern void of_async_config_prop_requestforward_slave_mask_set(
    of_async_config_prop_requestforward_slave_t *obj,
    uint32_t mask);
extern void of_async_config_prop_requestforward_slave_mask_get(
    of_async_config_prop_requestforward_slave_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_async_config_prop_role_status_master */

extern void of_async_config_prop_role_status_master_mask_set(
    of_async_config_prop_role_status_master_t *obj,
    uint32_t mask);
extern void of_async_config_prop_role_status_master_mask_get(
    of_async_config_prop_role_status_master_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_async_config_prop_role_status_slave */

extern void of_async_config_prop_role_status_slave_mask_set(
    of_async_config_prop_role_status_slave_t *obj,
    uint32_t mask);
extern void of_async_config_prop_role_status_slave_mask_get(
    of_async_config_prop_role_status_slave_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_async_config_prop_table_status_master */

extern void of_async_config_prop_table_status_master_mask_set(
    of_async_config_prop_table_status_master_t *obj,
    uint32_t mask);
extern void of_async_config_prop_table_status_master_mask_get(
    of_async_config_prop_table_status_master_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_async_config_prop_table_status_slave */

extern void of_async_config_prop_table_status_slave_mask_set(
    of_async_config_prop_table_status_slave_t *obj,
    uint32_t mask);
extern void of_async_config_prop_table_status_slave_mask_get(
    of_async_config_prop_table_status_slave_t *obj,
    uint32_t *mask);

/* Unified accessor functions for of_bsn_controller_connection */

extern void of_bsn_controller_connection_state_set(
    of_bsn_controller_connection_t *obj,
    uint8_t state);
extern void of_bsn_controller_connection_state_get(
    of_bsn_controller_connection_t *obj,
    uint8_t *state);

extern void of_bsn_controller_connection_auxiliary_id_set(
    of_bsn_controller_connection_t *obj,
    uint8_t auxiliary_id);
extern void of_bsn_controller_connection_auxiliary_id_get(
    of_bsn_controller_connection_t *obj,
    uint8_t *auxiliary_id);

extern void of_bsn_controller_connection_role_set(
    of_bsn_controller_connection_t *obj,
    uint32_t role);
extern void of_bsn_controller_connection_role_get(
    of_bsn_controller_connection_t *obj,
    uint32_t *role);

extern void of_bsn_controller_connection_uri_set(
    of_bsn_controller_connection_t *obj,
    of_desc_str_t uri);
extern void of_bsn_controller_connection_uri_get(
    of_bsn_controller_connection_t *obj,
    of_desc_str_t *uri);

/* Unified accessor functions for of_bsn_debug_counter_desc_stats_entry */

extern void of_bsn_debug_counter_desc_stats_entry_counter_id_set(
    of_bsn_debug_counter_desc_stats_entry_t *obj,
    uint64_t counter_id);
extern void of_bsn_debug_counter_desc_stats_entry_counter_id_get(
    of_bsn_debug_counter_desc_stats_entry_t *obj,
    uint64_t *counter_id);

extern void of_bsn_debug_counter_desc_stats_entry_name_set(
    of_bsn_debug_counter_desc_stats_entry_t *obj,
    of_str64_t name);
extern void of_bsn_debug_counter_desc_stats_entry_name_get(
    of_bsn_debug_counter_desc_stats_entry_t *obj,
    of_str64_t *name);

extern void of_bsn_debug_counter_desc_stats_entry_description_set(
    of_bsn_debug_counter_desc_stats_entry_t *obj,
    of_desc_str_t description);
extern void of_bsn_debug_counter_desc_stats_entry_description_get(
    of_bsn_debug_counter_desc_stats_entry_t *obj,
    of_desc_str_t *description);

/* Unified accessor functions for of_bsn_debug_counter_stats_entry */

extern void of_bsn_debug_counter_stats_entry_counter_id_set(
    of_bsn_debug_counter_stats_entry_t *obj,
    uint64_t counter_id);
extern void of_bsn_debug_counter_stats_entry_counter_id_get(
    of_bsn_debug_counter_stats_entry_t *obj,
    uint64_t *counter_id);

extern void of_bsn_debug_counter_stats_entry_value_set(
    of_bsn_debug_counter_stats_entry_t *obj,
    uint64_t value);
extern void of_bsn_debug_counter_stats_entry_value_get(
    of_bsn_debug_counter_stats_entry_t *obj,
    uint64_t *value);

/* Unified accessor functions for of_bsn_flow_checksum_bucket_stats_entry */

extern void of_bsn_flow_checksum_bucket_stats_entry_checksum_set(
    of_bsn_flow_checksum_bucket_stats_entry_t *obj,
    uint64_t checksum);
extern void of_bsn_flow_checksum_bucket_stats_entry_checksum_get(
    of_bsn_flow_checksum_bucket_stats_entry_t *obj,
    uint64_t *checksum);

/* Unified accessor functions for of_bsn_generic_stats_entry */

extern int WARN_UNUSED_RESULT of_bsn_generic_stats_entry_tlvs_set(
    of_bsn_generic_stats_entry_t *obj,
    of_list_bsn_tlv_t *tlvs);
extern void of_bsn_generic_stats_entry_tlvs_bind(
    of_bsn_generic_stats_entry_t *obj,
    of_list_bsn_tlv_t *tlvs);
extern of_list_bsn_tlv_t *of_bsn_generic_stats_entry_tlvs_get(
    of_bsn_generic_stats_entry_t *obj);

/* Unified accessor functions for of_bsn_gentable_bucket_stats_entry */

extern void of_bsn_gentable_bucket_stats_entry_checksum_set(
    of_bsn_gentable_bucket_stats_entry_t *obj,
    of_checksum_128_t checksum);
extern void of_bsn_gentable_bucket_stats_entry_checksum_get(
    of_bsn_gentable_bucket_stats_entry_t *obj,
    of_checksum_128_t *checksum);

/* Unified accessor functions for of_bsn_gentable_desc_stats_entry */

extern void of_bsn_gentable_desc_stats_entry_table_id_set(
    of_bsn_gentable_desc_stats_entry_t *obj,
    uint16_t table_id);
extern void of_bsn_gentable_desc_stats_entry_table_id_get(
    of_bsn_gentable_desc_stats_entry_t *obj,
    uint16_t *table_id);

extern void of_bsn_gentable_desc_stats_entry_name_set(
    of_bsn_gentable_desc_stats_entry_t *obj,
    of_table_name_t name);
extern void of_bsn_gentable_desc_stats_entry_name_get(
    of_bsn_gentable_desc_stats_entry_t *obj,
    of_table_name_t *name);

extern void of_bsn_gentable_desc_stats_entry_buckets_size_set(
    of_bsn_gentable_desc_stats_entry_t *obj,
    uint32_t buckets_size);
extern void of_bsn_gentable_desc_stats_entry_buckets_size_get(
    of_bsn_gentable_desc_stats_entry_t *obj,
    uint32_t *buckets_size);

extern void of_bsn_gentable_desc_stats_entry_max_entries_set(
    of_bsn_gentable_desc_stats_entry_t *obj,
    uint32_t max_entries);
extern void of_bsn_gentable_desc_stats_entry_max_entries_get(
    of_bsn_gentable_desc_stats_entry_t *obj,
    uint32_t *max_entries);

/* Unified accessor functions for of_bsn_gentable_entry_desc_stats_entry */

extern void of_bsn_gentable_entry_desc_stats_entry_checksum_set(
    of_bsn_gentable_entry_desc_stats_entry_t *obj,
    of_checksum_128_t checksum);
extern void of_bsn_gentable_entry_desc_stats_entry_checksum_get(
    of_bsn_gentable_entry_desc_stats_entry_t *obj,
    of_checksum_128_t *checksum);

extern int WARN_UNUSED_RESULT of_bsn_gentable_entry_desc_stats_entry_key_set(
    of_bsn_gentable_entry_desc_stats_entry_t *obj,
    of_list_bsn_tlv_t *key);
extern void of_bsn_gentable_entry_desc_stats_entry_key_bind(
    of_bsn_gentable_entry_desc_stats_entry_t *obj,
    of_list_bsn_tlv_t *key);
extern of_list_bsn_tlv_t *of_bsn_gentable_entry_desc_stats_entry_key_get(
    of_bsn_gentable_entry_desc_stats_entry_t *obj);

extern int WARN_UNUSED_RESULT of_bsn_gentable_entry_desc_stats_entry_value_set(
    of_bsn_gentable_entry_desc_stats_entry_t *obj,
    of_list_bsn_tlv_t *value);
extern void of_bsn_gentable_entry_desc_stats_entry_value_bind(
    of_bsn_gentable_entry_desc_stats_entry_t *obj,
    of_list_bsn_tlv_t *value);
extern of_list_bsn_tlv_t *of_bsn_gentable_entry_desc_stats_entry_value_get(
    of_bsn_gentable_entry_desc_stats_entry_t *obj);

/* Unified accessor functions for of_bsn_gentable_entry_stats_entry */

extern int WARN_UNUSED_RESULT of_bsn_gentable_entry_stats_entry_key_set(
    of_bsn_gentable_entry_stats_entry_t *obj,
    of_list_bsn_tlv_t *key);
extern void of_bsn_gentable_entry_stats_entry_key_bind(
    of_bsn_gentable_entry_stats_entry_t *obj,
    of_list_bsn_tlv_t *key);
extern of_list_bsn_tlv_t *of_bsn_gentable_entry_stats_entry_key_get(
    of_bsn_gentable_entry_stats_entry_t *obj);

extern int WARN_UNUSED_RESULT of_bsn_gentable_entry_stats_entry_stats_set(
    of_bsn_gentable_entry_stats_entry_t *obj,
    of_list_bsn_tlv_t *stats);
extern void of_bsn_gentable_entry_stats_entry_stats_bind(
    of_bsn_gentable_entry_stats_entry_t *obj,
    of_list_bsn_tlv_t *stats);
extern of_list_bsn_tlv_t *of_bsn_gentable_entry_stats_entry_stats_get(
    of_bsn_gentable_entry_stats_entry_t *obj);

/* Unified accessor functions for of_bsn_gentable_stats_entry */

extern void of_bsn_gentable_stats_entry_table_id_set(
    of_bsn_gentable_stats_entry_t *obj,
    uint16_t table_id);
extern void of_bsn_gentable_stats_entry_table_id_get(
    of_bsn_gentable_stats_entry_t *obj,
    uint16_t *table_id);

extern void of_bsn_gentable_stats_entry_entry_count_set(
    of_bsn_gentable_stats_entry_t *obj,
    uint32_t entry_count);
extern void of_bsn_gentable_stats_entry_entry_count_get(
    of_bsn_gentable_stats_entry_t *obj,
    uint32_t *entry_count);

extern void of_bsn_gentable_stats_entry_checksum_set(
    of_bsn_gentable_stats_entry_t *obj,
    of_checksum_128_t checksum);
extern void of_bsn_gentable_stats_entry_checksum_get(
    of_bsn_gentable_stats_entry_t *obj,
    of_checksum_128_t *checksum);

/* Unified accessor functions for of_bsn_interface */

extern void of_bsn_interface_hw_addr_set(
    of_bsn_interface_t *obj,
    of_mac_addr_t hw_addr);
extern void of_bsn_interface_hw_addr_get(
    of_bsn_interface_t *obj,
    of_mac_addr_t *hw_addr);

extern void of_bsn_interface_name_set(
    of_bsn_interface_t *obj,
    of_port_name_t name);
extern void of_bsn_interface_name_get(
    of_bsn_interface_t *obj,
    of_port_name_t *name);

extern void of_bsn_interface_ipv4_addr_set(
    of_bsn_interface_t *obj,
    of_ipv4_t ipv4_addr);
extern void of_bsn_interface_ipv4_addr_get(
    of_bsn_interface_t *obj,
    of_ipv4_t *ipv4_addr);

extern void of_bsn_interface_ipv4_netmask_set(
    of_bsn_interface_t *obj,
    of_ipv4_t ipv4_netmask);
extern void of_bsn_interface_ipv4_netmask_get(
    of_bsn_interface_t *obj,
    of_ipv4_t *ipv4_netmask);

/* Unified accessor functions for of_bsn_lacp_stats_entry */

extern void of_bsn_lacp_stats_entry_port_no_set(
    of_bsn_lacp_stats_entry_t *obj,
    of_port_no_t port_no);
extern void of_bsn_lacp_stats_entry_port_no_get(
    of_bsn_lacp_stats_entry_t *obj,
    of_port_no_t *port_no);

extern void of_bsn_lacp_stats_entry_actor_sys_priority_set(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t actor_sys_priority);
extern void of_bsn_lacp_stats_entry_actor_sys_priority_get(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t *actor_sys_priority);

extern void of_bsn_lacp_stats_entry_actor_sys_mac_set(
    of_bsn_lacp_stats_entry_t *obj,
    of_mac_addr_t actor_sys_mac);
extern void of_bsn_lacp_stats_entry_actor_sys_mac_get(
    of_bsn_lacp_stats_entry_t *obj,
    of_mac_addr_t *actor_sys_mac);

extern void of_bsn_lacp_stats_entry_actor_port_priority_set(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t actor_port_priority);
extern void of_bsn_lacp_stats_entry_actor_port_priority_get(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t *actor_port_priority);

extern void of_bsn_lacp_stats_entry_actor_port_num_set(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t actor_port_num);
extern void of_bsn_lacp_stats_entry_actor_port_num_get(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t *actor_port_num);

extern void of_bsn_lacp_stats_entry_actor_key_set(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t actor_key);
extern void of_bsn_lacp_stats_entry_actor_key_get(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t *actor_key);

extern void of_bsn_lacp_stats_entry_convergence_status_set(
    of_bsn_lacp_stats_entry_t *obj,
    uint8_t convergence_status);
extern void of_bsn_lacp_stats_entry_convergence_status_get(
    of_bsn_lacp_stats_entry_t *obj,
    uint8_t *convergence_status);

extern void of_bsn_lacp_stats_entry_partner_sys_priority_set(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t partner_sys_priority);
extern void of_bsn_lacp_stats_entry_partner_sys_priority_get(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t *partner_sys_priority);

extern void of_bsn_lacp_stats_entry_partner_sys_mac_set(
    of_bsn_lacp_stats_entry_t *obj,
    of_mac_addr_t partner_sys_mac);
extern void of_bsn_lacp_stats_entry_partner_sys_mac_get(
    of_bsn_lacp_stats_entry_t *obj,
    of_mac_addr_t *partner_sys_mac);

extern void of_bsn_lacp_stats_entry_partner_port_priority_set(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t partner_port_priority);
extern void of_bsn_lacp_stats_entry_partner_port_priority_get(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t *partner_port_priority);

extern void of_bsn_lacp_stats_entry_partner_port_num_set(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t partner_port_num);
extern void of_bsn_lacp_stats_entry_partner_port_num_get(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t *partner_port_num);

extern void of_bsn_lacp_stats_entry_partner_key_set(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t partner_key);
extern void of_bsn_lacp_stats_entry_partner_key_get(
    of_bsn_lacp_stats_entry_t *obj,
    uint16_t *partner_key);

/* Unified accessor functions for of_bsn_port_counter_stats_entry */

extern void of_bsn_port_counter_stats_entry_port_no_set(
    of_bsn_port_counter_stats_entry_t *obj,
    of_port_no_t port_no);
extern void of_bsn_port_counter_stats_entry_port_no_get(
    of_bsn_port_counter_stats_entry_t *obj,
    of_port_no_t *port_no);

extern int WARN_UNUSED_RESULT of_bsn_port_counter_stats_entry_values_set(
    of_bsn_port_counter_stats_entry_t *obj,
    of_list_uint64_t *values);
extern void of_bsn_port_counter_stats_entry_values_bind(
    of_bsn_port_counter_stats_entry_t *obj,
    of_list_uint64_t *values);
extern of_list_uint64_t *of_bsn_port_counter_stats_entry_values_get(
    of_bsn_port_counter_stats_entry_t *obj);

/* Unified accessor functions for of_bsn_switch_pipeline_stats_entry */

extern void of_bsn_switch_pipeline_stats_entry_pipeline_set(
    of_bsn_switch_pipeline_stats_entry_t *obj,
    of_desc_str_t pipeline);
extern void of_bsn_switch_pipeline_stats_entry_pipeline_get(
    of_bsn_switch_pipeline_stats_entry_t *obj,
    of_desc_str_t *pipeline);

/* Unified accessor functions for of_bsn_table_checksum_stats_entry */

extern void of_bsn_table_checksum_stats_entry_table_id_set(
    of_bsn_table_checksum_stats_entry_t *obj,
    uint8_t table_id);
extern void of_bsn_table_checksum_stats_entry_table_id_get(
    of_bsn_table_checksum_stats_entry_t *obj,
    uint8_t *table_id);

extern void of_bsn_table_checksum_stats_entry_checksum_set(
    of_bsn_table_checksum_stats_entry_t *obj,
    uint64_t checksum);
extern void of_bsn_table_checksum_stats_entry_checksum_get(
    of_bsn_table_checksum_stats_entry_t *obj,
    uint64_t *checksum);

/* Unified accessor functions for of_bsn_tlv_actor_key */

extern void of_bsn_tlv_actor_key_value_set(
    of_bsn_tlv_actor_key_t *obj,
    uint16_t value);
extern void of_bsn_tlv_actor_key_value_get(
    of_bsn_tlv_actor_key_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_actor_port_num */

extern void of_bsn_tlv_actor_port_num_value_set(
    of_bsn_tlv_actor_port_num_t *obj,
    uint16_t value);
extern void of_bsn_tlv_actor_port_num_value_get(
    of_bsn_tlv_actor_port_num_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_actor_port_priority */

extern void of_bsn_tlv_actor_port_priority_value_set(
    of_bsn_tlv_actor_port_priority_t *obj,
    uint16_t value);
extern void of_bsn_tlv_actor_port_priority_value_get(
    of_bsn_tlv_actor_port_priority_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_actor_state */

extern void of_bsn_tlv_actor_state_value_set(
    of_bsn_tlv_actor_state_t *obj,
    uint8_t value);
extern void of_bsn_tlv_actor_state_value_get(
    of_bsn_tlv_actor_state_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_bsn_tlv_actor_system_mac */

extern void of_bsn_tlv_actor_system_mac_value_set(
    of_bsn_tlv_actor_system_mac_t *obj,
    of_mac_addr_t value);
extern void of_bsn_tlv_actor_system_mac_value_get(
    of_bsn_tlv_actor_system_mac_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_bsn_tlv_actor_system_priority */

extern void of_bsn_tlv_actor_system_priority_value_set(
    of_bsn_tlv_actor_system_priority_t *obj,
    uint16_t value);
extern void of_bsn_tlv_actor_system_priority_value_get(
    of_bsn_tlv_actor_system_priority_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_broadcast_query_timeout */

extern void of_bsn_tlv_broadcast_query_timeout_value_set(
    of_bsn_tlv_broadcast_query_timeout_t *obj,
    uint32_t value);
extern void of_bsn_tlv_broadcast_query_timeout_value_get(
    of_bsn_tlv_broadcast_query_timeout_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_bsn_tlv_bucket */

extern int WARN_UNUSED_RESULT of_bsn_tlv_bucket_value_set(
    of_bsn_tlv_bucket_t *obj,
    of_list_bsn_tlv_t *value);
extern void of_bsn_tlv_bucket_value_bind(
    of_bsn_tlv_bucket_t *obj,
    of_list_bsn_tlv_t *value);
extern of_list_bsn_tlv_t *of_bsn_tlv_bucket_value_get(
    of_bsn_tlv_bucket_t *obj);

/* Unified accessor functions for of_bsn_tlv_circuit_id */

extern int WARN_UNUSED_RESULT of_bsn_tlv_circuit_id_value_set(
    of_bsn_tlv_circuit_id_t *obj,
    of_octets_t *value);
extern void of_bsn_tlv_circuit_id_value_get(
    of_bsn_tlv_circuit_id_t *obj,
    of_octets_t *value);

/* Unified accessor functions for of_bsn_tlv_convergence_status */

extern void of_bsn_tlv_convergence_status_value_set(
    of_bsn_tlv_convergence_status_t *obj,
    uint8_t value);
extern void of_bsn_tlv_convergence_status_value_get(
    of_bsn_tlv_convergence_status_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_bsn_tlv_crc_enabled */

extern void of_bsn_tlv_crc_enabled_value_set(
    of_bsn_tlv_crc_enabled_t *obj,
    uint8_t value);
extern void of_bsn_tlv_crc_enabled_value_get(
    of_bsn_tlv_crc_enabled_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_bsn_tlv_data */

extern int WARN_UNUSED_RESULT of_bsn_tlv_data_value_set(
    of_bsn_tlv_data_t *obj,
    of_octets_t *value);
extern void of_bsn_tlv_data_value_get(
    of_bsn_tlv_data_t *obj,
    of_octets_t *value);

/* Unified accessor functions for of_bsn_tlv_eth_dst */

extern void of_bsn_tlv_eth_dst_value_set(
    of_bsn_tlv_eth_dst_t *obj,
    of_mac_addr_t value);
extern void of_bsn_tlv_eth_dst_value_get(
    of_bsn_tlv_eth_dst_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_bsn_tlv_eth_src */

extern void of_bsn_tlv_eth_src_value_set(
    of_bsn_tlv_eth_src_t *obj,
    of_mac_addr_t value);
extern void of_bsn_tlv_eth_src_value_get(
    of_bsn_tlv_eth_src_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_bsn_tlv_external_gateway_ip */

extern void of_bsn_tlv_external_gateway_ip_value_set(
    of_bsn_tlv_external_gateway_ip_t *obj,
    of_ipv4_t value);
extern void of_bsn_tlv_external_gateway_ip_value_get(
    of_bsn_tlv_external_gateway_ip_t *obj,
    of_ipv4_t *value);

/* Unified accessor functions for of_bsn_tlv_external_gateway_mac */

extern void of_bsn_tlv_external_gateway_mac_value_set(
    of_bsn_tlv_external_gateway_mac_t *obj,
    of_mac_addr_t value);
extern void of_bsn_tlv_external_gateway_mac_value_get(
    of_bsn_tlv_external_gateway_mac_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_bsn_tlv_external_ip */

extern void of_bsn_tlv_external_ip_value_set(
    of_bsn_tlv_external_ip_t *obj,
    of_ipv4_t value);
extern void of_bsn_tlv_external_ip_value_get(
    of_bsn_tlv_external_ip_t *obj,
    of_ipv4_t *value);

/* Unified accessor functions for of_bsn_tlv_external_mac */

extern void of_bsn_tlv_external_mac_value_set(
    of_bsn_tlv_external_mac_t *obj,
    of_mac_addr_t value);
extern void of_bsn_tlv_external_mac_value_get(
    of_bsn_tlv_external_mac_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_bsn_tlv_external_netmask */

extern void of_bsn_tlv_external_netmask_value_set(
    of_bsn_tlv_external_netmask_t *obj,
    of_ipv4_t value);
extern void of_bsn_tlv_external_netmask_value_get(
    of_bsn_tlv_external_netmask_t *obj,
    of_ipv4_t *value);

/* Unified accessor functions for of_bsn_tlv_header_size */

extern void of_bsn_tlv_header_size_value_set(
    of_bsn_tlv_header_size_t *obj,
    uint32_t value);
extern void of_bsn_tlv_header_size_value_get(
    of_bsn_tlv_header_size_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_bsn_tlv_icmp_code */

extern void of_bsn_tlv_icmp_code_value_set(
    of_bsn_tlv_icmp_code_t *obj,
    uint8_t value);
extern void of_bsn_tlv_icmp_code_value_get(
    of_bsn_tlv_icmp_code_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_bsn_tlv_icmp_id */

extern void of_bsn_tlv_icmp_id_value_set(
    of_bsn_tlv_icmp_id_t *obj,
    uint16_t value);
extern void of_bsn_tlv_icmp_id_value_get(
    of_bsn_tlv_icmp_id_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_icmp_type */

extern void of_bsn_tlv_icmp_type_value_set(
    of_bsn_tlv_icmp_type_t *obj,
    uint8_t value);
extern void of_bsn_tlv_icmp_type_value_get(
    of_bsn_tlv_icmp_type_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_bsn_tlv_idle_notification */

/* Unified accessor functions for of_bsn_tlv_idle_time */

extern void of_bsn_tlv_idle_time_value_set(
    of_bsn_tlv_idle_time_t *obj,
    uint64_t value);
extern void of_bsn_tlv_idle_time_value_get(
    of_bsn_tlv_idle_time_t *obj,
    uint64_t *value);

/* Unified accessor functions for of_bsn_tlv_idle_timeout */

extern void of_bsn_tlv_idle_timeout_value_set(
    of_bsn_tlv_idle_timeout_t *obj,
    uint32_t value);
extern void of_bsn_tlv_idle_timeout_value_get(
    of_bsn_tlv_idle_timeout_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_bsn_tlv_internal_gateway_mac */

extern void of_bsn_tlv_internal_gateway_mac_value_set(
    of_bsn_tlv_internal_gateway_mac_t *obj,
    of_mac_addr_t value);
extern void of_bsn_tlv_internal_gateway_mac_value_get(
    of_bsn_tlv_internal_gateway_mac_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_bsn_tlv_internal_mac */

extern void of_bsn_tlv_internal_mac_value_set(
    of_bsn_tlv_internal_mac_t *obj,
    of_mac_addr_t value);
extern void of_bsn_tlv_internal_mac_value_get(
    of_bsn_tlv_internal_mac_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_bsn_tlv_interval */

extern void of_bsn_tlv_interval_value_set(
    of_bsn_tlv_interval_t *obj,
    uint32_t value);
extern void of_bsn_tlv_interval_value_get(
    of_bsn_tlv_interval_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_bsn_tlv_ip_proto */

extern void of_bsn_tlv_ip_proto_value_set(
    of_bsn_tlv_ip_proto_t *obj,
    uint8_t value);
extern void of_bsn_tlv_ip_proto_value_get(
    of_bsn_tlv_ip_proto_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_bsn_tlv_ipv4 */

extern void of_bsn_tlv_ipv4_value_set(
    of_bsn_tlv_ipv4_t *obj,
    of_ipv4_t value);
extern void of_bsn_tlv_ipv4_value_get(
    of_bsn_tlv_ipv4_t *obj,
    of_ipv4_t *value);

/* Unified accessor functions for of_bsn_tlv_ipv4_dst */

extern void of_bsn_tlv_ipv4_dst_value_set(
    of_bsn_tlv_ipv4_dst_t *obj,
    of_ipv4_t value);
extern void of_bsn_tlv_ipv4_dst_value_get(
    of_bsn_tlv_ipv4_dst_t *obj,
    of_ipv4_t *value);

/* Unified accessor functions for of_bsn_tlv_ipv4_netmask */

extern void of_bsn_tlv_ipv4_netmask_value_set(
    of_bsn_tlv_ipv4_netmask_t *obj,
    of_ipv4_t value);
extern void of_bsn_tlv_ipv4_netmask_value_get(
    of_bsn_tlv_ipv4_netmask_t *obj,
    of_ipv4_t *value);

/* Unified accessor functions for of_bsn_tlv_ipv4_src */

extern void of_bsn_tlv_ipv4_src_value_set(
    of_bsn_tlv_ipv4_src_t *obj,
    of_ipv4_t value);
extern void of_bsn_tlv_ipv4_src_value_get(
    of_bsn_tlv_ipv4_src_t *obj,
    of_ipv4_t *value);

/* Unified accessor functions for of_bsn_tlv_mac */

extern void of_bsn_tlv_mac_value_set(
    of_bsn_tlv_mac_t *obj,
    of_mac_addr_t value);
extern void of_bsn_tlv_mac_value_get(
    of_bsn_tlv_mac_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_bsn_tlv_mac_mask */

extern void of_bsn_tlv_mac_mask_value_set(
    of_bsn_tlv_mac_mask_t *obj,
    of_mac_addr_t value);
extern void of_bsn_tlv_mac_mask_value_get(
    of_bsn_tlv_mac_mask_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_bsn_tlv_miss_packets */

extern void of_bsn_tlv_miss_packets_value_set(
    of_bsn_tlv_miss_packets_t *obj,
    uint64_t value);
extern void of_bsn_tlv_miss_packets_value_get(
    of_bsn_tlv_miss_packets_t *obj,
    uint64_t *value);

/* Unified accessor functions for of_bsn_tlv_mpls_control_word */

extern void of_bsn_tlv_mpls_control_word_value_set(
    of_bsn_tlv_mpls_control_word_t *obj,
    uint8_t value);
extern void of_bsn_tlv_mpls_control_word_value_get(
    of_bsn_tlv_mpls_control_word_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_bsn_tlv_mpls_label */

extern void of_bsn_tlv_mpls_label_value_set(
    of_bsn_tlv_mpls_label_t *obj,
    uint32_t value);
extern void of_bsn_tlv_mpls_label_value_get(
    of_bsn_tlv_mpls_label_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_bsn_tlv_mpls_sequenced */

extern void of_bsn_tlv_mpls_sequenced_value_set(
    of_bsn_tlv_mpls_sequenced_t *obj,
    uint8_t value);
extern void of_bsn_tlv_mpls_sequenced_value_get(
    of_bsn_tlv_mpls_sequenced_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_bsn_tlv_name */

extern int WARN_UNUSED_RESULT of_bsn_tlv_name_value_set(
    of_bsn_tlv_name_t *obj,
    of_octets_t *value);
extern void of_bsn_tlv_name_value_get(
    of_bsn_tlv_name_t *obj,
    of_octets_t *value);

/* Unified accessor functions for of_bsn_tlv_partner_key */

extern void of_bsn_tlv_partner_key_value_set(
    of_bsn_tlv_partner_key_t *obj,
    uint16_t value);
extern void of_bsn_tlv_partner_key_value_get(
    of_bsn_tlv_partner_key_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_partner_port_num */

extern void of_bsn_tlv_partner_port_num_value_set(
    of_bsn_tlv_partner_port_num_t *obj,
    uint16_t value);
extern void of_bsn_tlv_partner_port_num_value_get(
    of_bsn_tlv_partner_port_num_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_partner_port_priority */

extern void of_bsn_tlv_partner_port_priority_value_set(
    of_bsn_tlv_partner_port_priority_t *obj,
    uint16_t value);
extern void of_bsn_tlv_partner_port_priority_value_get(
    of_bsn_tlv_partner_port_priority_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_partner_state */

extern void of_bsn_tlv_partner_state_value_set(
    of_bsn_tlv_partner_state_t *obj,
    uint8_t value);
extern void of_bsn_tlv_partner_state_value_get(
    of_bsn_tlv_partner_state_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_bsn_tlv_partner_system_mac */

extern void of_bsn_tlv_partner_system_mac_value_set(
    of_bsn_tlv_partner_system_mac_t *obj,
    of_mac_addr_t value);
extern void of_bsn_tlv_partner_system_mac_value_get(
    of_bsn_tlv_partner_system_mac_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_bsn_tlv_partner_system_priority */

extern void of_bsn_tlv_partner_system_priority_value_set(
    of_bsn_tlv_partner_system_priority_t *obj,
    uint16_t value);
extern void of_bsn_tlv_partner_system_priority_value_get(
    of_bsn_tlv_partner_system_priority_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_port */

extern void of_bsn_tlv_port_value_set(
    of_bsn_tlv_port_t *obj,
    of_port_no_t value);
extern void of_bsn_tlv_port_value_get(
    of_bsn_tlv_port_t *obj,
    of_port_no_t *value);

/* Unified accessor functions for of_bsn_tlv_priority */

extern void of_bsn_tlv_priority_value_set(
    of_bsn_tlv_priority_t *obj,
    uint32_t value);
extern void of_bsn_tlv_priority_value_get(
    of_bsn_tlv_priority_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_bsn_tlv_queue_id */

extern void of_bsn_tlv_queue_id_value_set(
    of_bsn_tlv_queue_id_t *obj,
    uint32_t value);
extern void of_bsn_tlv_queue_id_value_get(
    of_bsn_tlv_queue_id_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_bsn_tlv_queue_weight */

extern void of_bsn_tlv_queue_weight_value_set(
    of_bsn_tlv_queue_weight_t *obj,
    uint32_t value);
extern void of_bsn_tlv_queue_weight_value_get(
    of_bsn_tlv_queue_weight_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_bsn_tlv_reference */

extern void of_bsn_tlv_reference_table_id_set(
    of_bsn_tlv_reference_t *obj,
    uint16_t table_id);
extern void of_bsn_tlv_reference_table_id_get(
    of_bsn_tlv_reference_t *obj,
    uint16_t *table_id);

extern int WARN_UNUSED_RESULT of_bsn_tlv_reference_key_set(
    of_bsn_tlv_reference_t *obj,
    of_list_bsn_tlv_t *key);
extern void of_bsn_tlv_reference_key_bind(
    of_bsn_tlv_reference_t *obj,
    of_list_bsn_tlv_t *key);
extern of_list_bsn_tlv_t *of_bsn_tlv_reference_key_get(
    of_bsn_tlv_reference_t *obj);

/* Unified accessor functions for of_bsn_tlv_reply_packets */

extern void of_bsn_tlv_reply_packets_value_set(
    of_bsn_tlv_reply_packets_t *obj,
    uint64_t value);
extern void of_bsn_tlv_reply_packets_value_get(
    of_bsn_tlv_reply_packets_t *obj,
    uint64_t *value);

/* Unified accessor functions for of_bsn_tlv_request_packets */

extern void of_bsn_tlv_request_packets_value_set(
    of_bsn_tlv_request_packets_t *obj,
    uint64_t value);
extern void of_bsn_tlv_request_packets_value_get(
    of_bsn_tlv_request_packets_t *obj,
    uint64_t *value);

/* Unified accessor functions for of_bsn_tlv_rx_bytes */

extern void of_bsn_tlv_rx_bytes_value_set(
    of_bsn_tlv_rx_bytes_t *obj,
    uint64_t value);
extern void of_bsn_tlv_rx_bytes_value_get(
    of_bsn_tlv_rx_bytes_t *obj,
    uint64_t *value);

/* Unified accessor functions for of_bsn_tlv_rx_packets */

extern void of_bsn_tlv_rx_packets_value_set(
    of_bsn_tlv_rx_packets_t *obj,
    uint64_t value);
extern void of_bsn_tlv_rx_packets_value_get(
    of_bsn_tlv_rx_packets_t *obj,
    uint64_t *value);

/* Unified accessor functions for of_bsn_tlv_sampling_rate */

extern void of_bsn_tlv_sampling_rate_value_set(
    of_bsn_tlv_sampling_rate_t *obj,
    uint32_t value);
extern void of_bsn_tlv_sampling_rate_value_get(
    of_bsn_tlv_sampling_rate_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_bsn_tlv_sub_agent_id */

extern void of_bsn_tlv_sub_agent_id_value_set(
    of_bsn_tlv_sub_agent_id_t *obj,
    uint32_t value);
extern void of_bsn_tlv_sub_agent_id_value_get(
    of_bsn_tlv_sub_agent_id_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_bsn_tlv_tcp_dst */

extern void of_bsn_tlv_tcp_dst_value_set(
    of_bsn_tlv_tcp_dst_t *obj,
    uint16_t value);
extern void of_bsn_tlv_tcp_dst_value_get(
    of_bsn_tlv_tcp_dst_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_tcp_src */

extern void of_bsn_tlv_tcp_src_value_set(
    of_bsn_tlv_tcp_src_t *obj,
    uint16_t value);
extern void of_bsn_tlv_tcp_src_value_get(
    of_bsn_tlv_tcp_src_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_tx_bytes */

extern void of_bsn_tlv_tx_bytes_value_set(
    of_bsn_tlv_tx_bytes_t *obj,
    uint64_t value);
extern void of_bsn_tlv_tx_bytes_value_get(
    of_bsn_tlv_tx_bytes_t *obj,
    uint64_t *value);

/* Unified accessor functions for of_bsn_tlv_tx_packets */

extern void of_bsn_tlv_tx_packets_value_set(
    of_bsn_tlv_tx_packets_t *obj,
    uint64_t value);
extern void of_bsn_tlv_tx_packets_value_get(
    of_bsn_tlv_tx_packets_t *obj,
    uint64_t *value);

/* Unified accessor functions for of_bsn_tlv_udf_anchor */

extern void of_bsn_tlv_udf_anchor_value_set(
    of_bsn_tlv_udf_anchor_t *obj,
    uint16_t value);
extern void of_bsn_tlv_udf_anchor_value_get(
    of_bsn_tlv_udf_anchor_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_udf_id */

extern void of_bsn_tlv_udf_id_value_set(
    of_bsn_tlv_udf_id_t *obj,
    uint16_t value);
extern void of_bsn_tlv_udf_id_value_get(
    of_bsn_tlv_udf_id_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_udf_length */

extern void of_bsn_tlv_udf_length_value_set(
    of_bsn_tlv_udf_length_t *obj,
    uint16_t value);
extern void of_bsn_tlv_udf_length_value_get(
    of_bsn_tlv_udf_length_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_udf_offset */

extern void of_bsn_tlv_udf_offset_value_set(
    of_bsn_tlv_udf_offset_t *obj,
    uint16_t value);
extern void of_bsn_tlv_udf_offset_value_get(
    of_bsn_tlv_udf_offset_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_udp_dst */

extern void of_bsn_tlv_udp_dst_value_set(
    of_bsn_tlv_udp_dst_t *obj,
    uint16_t value);
extern void of_bsn_tlv_udp_dst_value_get(
    of_bsn_tlv_udp_dst_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_udp_src */

extern void of_bsn_tlv_udp_src_value_set(
    of_bsn_tlv_udp_src_t *obj,
    uint16_t value);
extern void of_bsn_tlv_udp_src_value_get(
    of_bsn_tlv_udp_src_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_unicast_query_timeout */

extern void of_bsn_tlv_unicast_query_timeout_value_set(
    of_bsn_tlv_unicast_query_timeout_t *obj,
    uint32_t value);
extern void of_bsn_tlv_unicast_query_timeout_value_get(
    of_bsn_tlv_unicast_query_timeout_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_bsn_tlv_vlan_vid */

extern void of_bsn_tlv_vlan_vid_value_set(
    of_bsn_tlv_vlan_vid_t *obj,
    uint16_t value);
extern void of_bsn_tlv_vlan_vid_value_get(
    of_bsn_tlv_vlan_vid_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_bsn_tlv_vrf */

extern void of_bsn_tlv_vrf_value_set(
    of_bsn_tlv_vrf_t *obj,
    uint32_t value);
extern void of_bsn_tlv_vrf_value_get(
    of_bsn_tlv_vrf_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_bsn_vlan_counter_stats_entry */

extern void of_bsn_vlan_counter_stats_entry_vlan_vid_set(
    of_bsn_vlan_counter_stats_entry_t *obj,
    uint16_t vlan_vid);
extern void of_bsn_vlan_counter_stats_entry_vlan_vid_get(
    of_bsn_vlan_counter_stats_entry_t *obj,
    uint16_t *vlan_vid);

extern int WARN_UNUSED_RESULT of_bsn_vlan_counter_stats_entry_values_set(
    of_bsn_vlan_counter_stats_entry_t *obj,
    of_list_uint64_t *values);
extern void of_bsn_vlan_counter_stats_entry_values_bind(
    of_bsn_vlan_counter_stats_entry_t *obj,
    of_list_uint64_t *values);
extern of_list_uint64_t *of_bsn_vlan_counter_stats_entry_values_get(
    of_bsn_vlan_counter_stats_entry_t *obj);

/* Unified accessor functions for of_bsn_vport_l2gre */

extern void of_bsn_vport_l2gre_flags_set(
    of_bsn_vport_l2gre_t *obj,
    uint32_t flags);
extern void of_bsn_vport_l2gre_flags_get(
    of_bsn_vport_l2gre_t *obj,
    uint32_t *flags);

extern void of_bsn_vport_l2gre_port_no_set(
    of_bsn_vport_l2gre_t *obj,
    of_port_no_t port_no);
extern void of_bsn_vport_l2gre_port_no_get(
    of_bsn_vport_l2gre_t *obj,
    of_port_no_t *port_no);

extern void of_bsn_vport_l2gre_loopback_port_no_set(
    of_bsn_vport_l2gre_t *obj,
    of_port_no_t loopback_port_no);
extern void of_bsn_vport_l2gre_loopback_port_no_get(
    of_bsn_vport_l2gre_t *obj,
    of_port_no_t *loopback_port_no);

extern void of_bsn_vport_l2gre_local_mac_set(
    of_bsn_vport_l2gre_t *obj,
    of_mac_addr_t local_mac);
extern void of_bsn_vport_l2gre_local_mac_get(
    of_bsn_vport_l2gre_t *obj,
    of_mac_addr_t *local_mac);

extern void of_bsn_vport_l2gre_nh_mac_set(
    of_bsn_vport_l2gre_t *obj,
    of_mac_addr_t nh_mac);
extern void of_bsn_vport_l2gre_nh_mac_get(
    of_bsn_vport_l2gre_t *obj,
    of_mac_addr_t *nh_mac);

extern void of_bsn_vport_l2gre_src_ip_set(
    of_bsn_vport_l2gre_t *obj,
    of_ipv4_t src_ip);
extern void of_bsn_vport_l2gre_src_ip_get(
    of_bsn_vport_l2gre_t *obj,
    of_ipv4_t *src_ip);

extern void of_bsn_vport_l2gre_dst_ip_set(
    of_bsn_vport_l2gre_t *obj,
    of_ipv4_t dst_ip);
extern void of_bsn_vport_l2gre_dst_ip_get(
    of_bsn_vport_l2gre_t *obj,
    of_ipv4_t *dst_ip);

extern void of_bsn_vport_l2gre_dscp_set(
    of_bsn_vport_l2gre_t *obj,
    uint8_t dscp);
extern void of_bsn_vport_l2gre_dscp_get(
    of_bsn_vport_l2gre_t *obj,
    uint8_t *dscp);

extern void of_bsn_vport_l2gre_ttl_set(
    of_bsn_vport_l2gre_t *obj,
    uint8_t ttl);
extern void of_bsn_vport_l2gre_ttl_get(
    of_bsn_vport_l2gre_t *obj,
    uint8_t *ttl);

extern void of_bsn_vport_l2gre_vpn_set(
    of_bsn_vport_l2gre_t *obj,
    uint32_t vpn);
extern void of_bsn_vport_l2gre_vpn_get(
    of_bsn_vport_l2gre_t *obj,
    uint32_t *vpn);

extern void of_bsn_vport_l2gre_rate_limit_set(
    of_bsn_vport_l2gre_t *obj,
    uint32_t rate_limit);
extern void of_bsn_vport_l2gre_rate_limit_get(
    of_bsn_vport_l2gre_t *obj,
    uint32_t *rate_limit);

extern void of_bsn_vport_l2gre_if_name_set(
    of_bsn_vport_l2gre_t *obj,
    of_port_name_t if_name);
extern void of_bsn_vport_l2gre_if_name_get(
    of_bsn_vport_l2gre_t *obj,
    of_port_name_t *if_name);

/* Unified accessor functions for of_bsn_vport_q_in_q */

extern void of_bsn_vport_q_in_q_port_no_set(
    of_bsn_vport_q_in_q_t *obj,
    uint32_t port_no);
extern void of_bsn_vport_q_in_q_port_no_get(
    of_bsn_vport_q_in_q_t *obj,
    uint32_t *port_no);

extern void of_bsn_vport_q_in_q_ingress_tpid_set(
    of_bsn_vport_q_in_q_t *obj,
    uint16_t ingress_tpid);
extern void of_bsn_vport_q_in_q_ingress_tpid_get(
    of_bsn_vport_q_in_q_t *obj,
    uint16_t *ingress_tpid);

extern void of_bsn_vport_q_in_q_ingress_vlan_id_set(
    of_bsn_vport_q_in_q_t *obj,
    uint16_t ingress_vlan_id);
extern void of_bsn_vport_q_in_q_ingress_vlan_id_get(
    of_bsn_vport_q_in_q_t *obj,
    uint16_t *ingress_vlan_id);

extern void of_bsn_vport_q_in_q_egress_tpid_set(
    of_bsn_vport_q_in_q_t *obj,
    uint16_t egress_tpid);
extern void of_bsn_vport_q_in_q_egress_tpid_get(
    of_bsn_vport_q_in_q_t *obj,
    uint16_t *egress_tpid);

extern void of_bsn_vport_q_in_q_egress_vlan_id_set(
    of_bsn_vport_q_in_q_t *obj,
    uint16_t egress_vlan_id);
extern void of_bsn_vport_q_in_q_egress_vlan_id_get(
    of_bsn_vport_q_in_q_t *obj,
    uint16_t *egress_vlan_id);

extern void of_bsn_vport_q_in_q_if_name_set(
    of_bsn_vport_q_in_q_t *obj,
    of_port_name_t if_name);
extern void of_bsn_vport_q_in_q_if_name_get(
    of_bsn_vport_q_in_q_t *obj,
    of_port_name_t *if_name);

/* Unified accessor functions for of_bsn_vrf_counter_stats_entry */

extern void of_bsn_vrf_counter_stats_entry_vrf_set(
    of_bsn_vrf_counter_stats_entry_t *obj,
    uint32_t vrf);
extern void of_bsn_vrf_counter_stats_entry_vrf_get(
    of_bsn_vrf_counter_stats_entry_t *obj,
    uint32_t *vrf);

extern int WARN_UNUSED_RESULT of_bsn_vrf_counter_stats_entry_values_set(
    of_bsn_vrf_counter_stats_entry_t *obj,
    of_list_uint64_t *values);
extern void of_bsn_vrf_counter_stats_entry_values_bind(
    of_bsn_vrf_counter_stats_entry_t *obj,
    of_list_uint64_t *values);
extern of_list_uint64_t *of_bsn_vrf_counter_stats_entry_values_get(
    of_bsn_vrf_counter_stats_entry_t *obj);

/* Unified accessor functions for of_bucket */

extern void of_bucket_weight_set(
    of_bucket_t *obj,
    uint16_t weight);
extern void of_bucket_weight_get(
    of_bucket_t *obj,
    uint16_t *weight);

extern void of_bucket_watch_port_set(
    of_bucket_t *obj,
    of_port_no_t watch_port);
extern void of_bucket_watch_port_get(
    of_bucket_t *obj,
    of_port_no_t *watch_port);

extern void of_bucket_watch_group_set(
    of_bucket_t *obj,
    uint32_t watch_group);
extern void of_bucket_watch_group_get(
    of_bucket_t *obj,
    uint32_t *watch_group);

extern int WARN_UNUSED_RESULT of_bucket_actions_set(
    of_bucket_t *obj,
    of_list_action_t *actions);
extern void of_bucket_actions_bind(
    of_bucket_t *obj,
    of_list_action_t *actions);
extern of_list_action_t *of_bucket_actions_get(
    of_bucket_t *obj);

/* Unified accessor functions for of_bucket_counter */

extern void of_bucket_counter_packet_count_set(
    of_bucket_counter_t *obj,
    uint64_t packet_count);
extern void of_bucket_counter_packet_count_get(
    of_bucket_counter_t *obj,
    uint64_t *packet_count);

extern void of_bucket_counter_byte_count_set(
    of_bucket_counter_t *obj,
    uint64_t byte_count);
extern void of_bucket_counter_byte_count_get(
    of_bucket_counter_t *obj,
    uint64_t *byte_count);

/* Unified accessor functions for of_flow_stats_entry */

extern void of_flow_stats_entry_table_id_set(
    of_flow_stats_entry_t *obj,
    uint8_t table_id);
extern void of_flow_stats_entry_table_id_get(
    of_flow_stats_entry_t *obj,
    uint8_t *table_id);

extern void of_flow_stats_entry_duration_sec_set(
    of_flow_stats_entry_t *obj,
    uint32_t duration_sec);
extern void of_flow_stats_entry_duration_sec_get(
    of_flow_stats_entry_t *obj,
    uint32_t *duration_sec);

extern void of_flow_stats_entry_duration_nsec_set(
    of_flow_stats_entry_t *obj,
    uint32_t duration_nsec);
extern void of_flow_stats_entry_duration_nsec_get(
    of_flow_stats_entry_t *obj,
    uint32_t *duration_nsec);

extern void of_flow_stats_entry_priority_set(
    of_flow_stats_entry_t *obj,
    uint16_t priority);
extern void of_flow_stats_entry_priority_get(
    of_flow_stats_entry_t *obj,
    uint16_t *priority);

extern void of_flow_stats_entry_idle_timeout_set(
    of_flow_stats_entry_t *obj,
    uint16_t idle_timeout);
extern void of_flow_stats_entry_idle_timeout_get(
    of_flow_stats_entry_t *obj,
    uint16_t *idle_timeout);

extern void of_flow_stats_entry_hard_timeout_set(
    of_flow_stats_entry_t *obj,
    uint16_t hard_timeout);
extern void of_flow_stats_entry_hard_timeout_get(
    of_flow_stats_entry_t *obj,
    uint16_t *hard_timeout);

extern void of_flow_stats_entry_flags_set(
    of_flow_stats_entry_t *obj,
    uint16_t flags);
extern void of_flow_stats_entry_flags_get(
    of_flow_stats_entry_t *obj,
    uint16_t *flags);

extern void of_flow_stats_entry_importance_set(
    of_flow_stats_entry_t *obj,
    uint16_t importance);
extern void of_flow_stats_entry_importance_get(
    of_flow_stats_entry_t *obj,
    uint16_t *importance);

extern void of_flow_stats_entry_cookie_set(
    of_flow_stats_entry_t *obj,
    uint64_t cookie);
extern void of_flow_stats_entry_cookie_get(
    of_flow_stats_entry_t *obj,
    uint64_t *cookie);

extern void of_flow_stats_entry_packet_count_set(
    of_flow_stats_entry_t *obj,
    uint64_t packet_count);
extern void of_flow_stats_entry_packet_count_get(
    of_flow_stats_entry_t *obj,
    uint64_t *packet_count);

extern void of_flow_stats_entry_byte_count_set(
    of_flow_stats_entry_t *obj,
    uint64_t byte_count);
extern void of_flow_stats_entry_byte_count_get(
    of_flow_stats_entry_t *obj,
    uint64_t *byte_count);

extern int WARN_UNUSED_RESULT of_flow_stats_entry_match_set(
    of_flow_stats_entry_t *obj,
    of_match_t *match);
extern int WARN_UNUSED_RESULT of_flow_stats_entry_match_get(
    of_flow_stats_entry_t *obj,
    of_match_t *match);

extern int WARN_UNUSED_RESULT of_flow_stats_entry_instructions_set(
    of_flow_stats_entry_t *obj,
    of_list_instruction_t *instructions);
extern void of_flow_stats_entry_instructions_bind(
    of_flow_stats_entry_t *obj,
    of_list_instruction_t *instructions);
extern of_list_instruction_t *of_flow_stats_entry_instructions_get(
    of_flow_stats_entry_t *obj);

extern int WARN_UNUSED_RESULT of_flow_stats_entry_actions_set(
    of_flow_stats_entry_t *obj,
    of_list_action_t *actions);
extern void of_flow_stats_entry_actions_bind(
    of_flow_stats_entry_t *obj,
    of_list_action_t *actions);
extern of_list_action_t *of_flow_stats_entry_actions_get(
    of_flow_stats_entry_t *obj);

/* Unified accessor functions for of_group_desc_stats_entry */

extern void of_group_desc_stats_entry_group_type_set(
    of_group_desc_stats_entry_t *obj,
    uint8_t group_type);
extern void of_group_desc_stats_entry_group_type_get(
    of_group_desc_stats_entry_t *obj,
    uint8_t *group_type);

extern void of_group_desc_stats_entry_group_id_set(
    of_group_desc_stats_entry_t *obj,
    uint32_t group_id);
extern void of_group_desc_stats_entry_group_id_get(
    of_group_desc_stats_entry_t *obj,
    uint32_t *group_id);

extern int WARN_UNUSED_RESULT of_group_desc_stats_entry_buckets_set(
    of_group_desc_stats_entry_t *obj,
    of_list_bucket_t *buckets);
extern void of_group_desc_stats_entry_buckets_bind(
    of_group_desc_stats_entry_t *obj,
    of_list_bucket_t *buckets);
extern of_list_bucket_t *of_group_desc_stats_entry_buckets_get(
    of_group_desc_stats_entry_t *obj);

/* Unified accessor functions for of_group_stats_entry */

extern void of_group_stats_entry_group_id_set(
    of_group_stats_entry_t *obj,
    uint32_t group_id);
extern void of_group_stats_entry_group_id_get(
    of_group_stats_entry_t *obj,
    uint32_t *group_id);

extern void of_group_stats_entry_ref_count_set(
    of_group_stats_entry_t *obj,
    uint32_t ref_count);
extern void of_group_stats_entry_ref_count_get(
    of_group_stats_entry_t *obj,
    uint32_t *ref_count);

extern void of_group_stats_entry_packet_count_set(
    of_group_stats_entry_t *obj,
    uint64_t packet_count);
extern void of_group_stats_entry_packet_count_get(
    of_group_stats_entry_t *obj,
    uint64_t *packet_count);

extern void of_group_stats_entry_byte_count_set(
    of_group_stats_entry_t *obj,
    uint64_t byte_count);
extern void of_group_stats_entry_byte_count_get(
    of_group_stats_entry_t *obj,
    uint64_t *byte_count);

extern void of_group_stats_entry_duration_sec_set(
    of_group_stats_entry_t *obj,
    uint32_t duration_sec);
extern void of_group_stats_entry_duration_sec_get(
    of_group_stats_entry_t *obj,
    uint32_t *duration_sec);

extern void of_group_stats_entry_duration_nsec_set(
    of_group_stats_entry_t *obj,
    uint32_t duration_nsec);
extern void of_group_stats_entry_duration_nsec_get(
    of_group_stats_entry_t *obj,
    uint32_t *duration_nsec);

extern int WARN_UNUSED_RESULT of_group_stats_entry_bucket_stats_set(
    of_group_stats_entry_t *obj,
    of_list_bucket_counter_t *bucket_stats);
extern void of_group_stats_entry_bucket_stats_bind(
    of_group_stats_entry_t *obj,
    of_list_bucket_counter_t *bucket_stats);
extern of_list_bucket_counter_t *of_group_stats_entry_bucket_stats_get(
    of_group_stats_entry_t *obj);

/* Unified accessor functions for of_hello_elem_versionbitmap */

extern int WARN_UNUSED_RESULT of_hello_elem_versionbitmap_bitmaps_set(
    of_hello_elem_versionbitmap_t *obj,
    of_list_uint32_t *bitmaps);
extern void of_hello_elem_versionbitmap_bitmaps_bind(
    of_hello_elem_versionbitmap_t *obj,
    of_list_uint32_t *bitmaps);
extern of_list_uint32_t *of_hello_elem_versionbitmap_bitmaps_get(
    of_hello_elem_versionbitmap_t *obj);

/* Unified accessor functions for of_instruction_apply_actions */

extern int WARN_UNUSED_RESULT of_instruction_apply_actions_actions_set(
    of_instruction_apply_actions_t *obj,
    of_list_action_t *actions);
extern void of_instruction_apply_actions_actions_bind(
    of_instruction_apply_actions_t *obj,
    of_list_action_t *actions);
extern of_list_action_t *of_instruction_apply_actions_actions_get(
    of_instruction_apply_actions_t *obj);

/* Unified accessor functions for of_instruction_bsn_arp_offload */

extern void of_instruction_bsn_arp_offload_experimenter_set(
    of_instruction_bsn_arp_offload_t *obj,
    uint32_t experimenter);
extern void of_instruction_bsn_arp_offload_experimenter_get(
    of_instruction_bsn_arp_offload_t *obj,
    uint32_t *experimenter);

extern void of_instruction_bsn_arp_offload_subtype_set(
    of_instruction_bsn_arp_offload_t *obj,
    uint32_t subtype);
extern void of_instruction_bsn_arp_offload_subtype_get(
    of_instruction_bsn_arp_offload_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_bsn_auto_negotiation */

extern void of_instruction_bsn_auto_negotiation_experimenter_set(
    of_instruction_bsn_auto_negotiation_t *obj,
    uint32_t experimenter);
extern void of_instruction_bsn_auto_negotiation_experimenter_get(
    of_instruction_bsn_auto_negotiation_t *obj,
    uint32_t *experimenter);

extern void of_instruction_bsn_auto_negotiation_subtype_set(
    of_instruction_bsn_auto_negotiation_t *obj,
    uint32_t subtype);
extern void of_instruction_bsn_auto_negotiation_subtype_get(
    of_instruction_bsn_auto_negotiation_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_bsn_deny */

extern void of_instruction_bsn_deny_experimenter_set(
    of_instruction_bsn_deny_t *obj,
    uint32_t experimenter);
extern void of_instruction_bsn_deny_experimenter_get(
    of_instruction_bsn_deny_t *obj,
    uint32_t *experimenter);

extern void of_instruction_bsn_deny_subtype_set(
    of_instruction_bsn_deny_t *obj,
    uint32_t subtype);
extern void of_instruction_bsn_deny_subtype_get(
    of_instruction_bsn_deny_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_bsn_dhcp_offload */

extern void of_instruction_bsn_dhcp_offload_experimenter_set(
    of_instruction_bsn_dhcp_offload_t *obj,
    uint32_t experimenter);
extern void of_instruction_bsn_dhcp_offload_experimenter_get(
    of_instruction_bsn_dhcp_offload_t *obj,
    uint32_t *experimenter);

extern void of_instruction_bsn_dhcp_offload_subtype_set(
    of_instruction_bsn_dhcp_offload_t *obj,
    uint32_t subtype);
extern void of_instruction_bsn_dhcp_offload_subtype_get(
    of_instruction_bsn_dhcp_offload_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_bsn_disable_split_horizon_check */

extern void of_instruction_bsn_disable_split_horizon_check_experimenter_set(
    of_instruction_bsn_disable_split_horizon_check_t *obj,
    uint32_t experimenter);
extern void of_instruction_bsn_disable_split_horizon_check_experimenter_get(
    of_instruction_bsn_disable_split_horizon_check_t *obj,
    uint32_t *experimenter);

extern void of_instruction_bsn_disable_split_horizon_check_subtype_set(
    of_instruction_bsn_disable_split_horizon_check_t *obj,
    uint32_t subtype);
extern void of_instruction_bsn_disable_split_horizon_check_subtype_get(
    of_instruction_bsn_disable_split_horizon_check_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_bsn_disable_src_mac_check */

extern void of_instruction_bsn_disable_src_mac_check_experimenter_set(
    of_instruction_bsn_disable_src_mac_check_t *obj,
    uint32_t experimenter);
extern void of_instruction_bsn_disable_src_mac_check_experimenter_get(
    of_instruction_bsn_disable_src_mac_check_t *obj,
    uint32_t *experimenter);

extern void of_instruction_bsn_disable_src_mac_check_subtype_set(
    of_instruction_bsn_disable_src_mac_check_t *obj,
    uint32_t subtype);
extern void of_instruction_bsn_disable_src_mac_check_subtype_get(
    of_instruction_bsn_disable_src_mac_check_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_bsn_disable_vlan_counters */

extern void of_instruction_bsn_disable_vlan_counters_experimenter_set(
    of_instruction_bsn_disable_vlan_counters_t *obj,
    uint32_t experimenter);
extern void of_instruction_bsn_disable_vlan_counters_experimenter_get(
    of_instruction_bsn_disable_vlan_counters_t *obj,
    uint32_t *experimenter);

extern void of_instruction_bsn_disable_vlan_counters_subtype_set(
    of_instruction_bsn_disable_vlan_counters_t *obj,
    uint32_t subtype);
extern void of_instruction_bsn_disable_vlan_counters_subtype_get(
    of_instruction_bsn_disable_vlan_counters_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_bsn_packet_of_death */

extern void of_instruction_bsn_packet_of_death_experimenter_set(
    of_instruction_bsn_packet_of_death_t *obj,
    uint32_t experimenter);
extern void of_instruction_bsn_packet_of_death_experimenter_get(
    of_instruction_bsn_packet_of_death_t *obj,
    uint32_t *experimenter);

extern void of_instruction_bsn_packet_of_death_subtype_set(
    of_instruction_bsn_packet_of_death_t *obj,
    uint32_t subtype);
extern void of_instruction_bsn_packet_of_death_subtype_get(
    of_instruction_bsn_packet_of_death_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_bsn_permit */

extern void of_instruction_bsn_permit_experimenter_set(
    of_instruction_bsn_permit_t *obj,
    uint32_t experimenter);
extern void of_instruction_bsn_permit_experimenter_get(
    of_instruction_bsn_permit_t *obj,
    uint32_t *experimenter);

extern void of_instruction_bsn_permit_subtype_set(
    of_instruction_bsn_permit_t *obj,
    uint32_t subtype);
extern void of_instruction_bsn_permit_subtype_get(
    of_instruction_bsn_permit_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_bsn_prioritize_pdus */

extern void of_instruction_bsn_prioritize_pdus_experimenter_set(
    of_instruction_bsn_prioritize_pdus_t *obj,
    uint32_t experimenter);
extern void of_instruction_bsn_prioritize_pdus_experimenter_get(
    of_instruction_bsn_prioritize_pdus_t *obj,
    uint32_t *experimenter);

extern void of_instruction_bsn_prioritize_pdus_subtype_set(
    of_instruction_bsn_prioritize_pdus_t *obj,
    uint32_t subtype);
extern void of_instruction_bsn_prioritize_pdus_subtype_get(
    of_instruction_bsn_prioritize_pdus_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_bsn_require_vlan_xlate */

extern void of_instruction_bsn_require_vlan_xlate_experimenter_set(
    of_instruction_bsn_require_vlan_xlate_t *obj,
    uint32_t experimenter);
extern void of_instruction_bsn_require_vlan_xlate_experimenter_get(
    of_instruction_bsn_require_vlan_xlate_t *obj,
    uint32_t *experimenter);

extern void of_instruction_bsn_require_vlan_xlate_subtype_set(
    of_instruction_bsn_require_vlan_xlate_t *obj,
    uint32_t subtype);
extern void of_instruction_bsn_require_vlan_xlate_subtype_get(
    of_instruction_bsn_require_vlan_xlate_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_bsn_span_destination */

extern void of_instruction_bsn_span_destination_experimenter_set(
    of_instruction_bsn_span_destination_t *obj,
    uint32_t experimenter);
extern void of_instruction_bsn_span_destination_experimenter_get(
    of_instruction_bsn_span_destination_t *obj,
    uint32_t *experimenter);

extern void of_instruction_bsn_span_destination_subtype_set(
    of_instruction_bsn_span_destination_t *obj,
    uint32_t subtype);
extern void of_instruction_bsn_span_destination_subtype_get(
    of_instruction_bsn_span_destination_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_clear_actions */

/* Unified accessor functions for of_instruction_goto_table */

extern void of_instruction_goto_table_table_id_set(
    of_instruction_goto_table_t *obj,
    uint8_t table_id);
extern void of_instruction_goto_table_table_id_get(
    of_instruction_goto_table_t *obj,
    uint8_t *table_id);

/* Unified accessor functions for of_instruction_id_apply_actions */

/* Unified accessor functions for of_instruction_id_bsn_arp_offload */

extern void of_instruction_id_bsn_arp_offload_experimenter_set(
    of_instruction_id_bsn_arp_offload_t *obj,
    uint32_t experimenter);
extern void of_instruction_id_bsn_arp_offload_experimenter_get(
    of_instruction_id_bsn_arp_offload_t *obj,
    uint32_t *experimenter);

extern void of_instruction_id_bsn_arp_offload_subtype_set(
    of_instruction_id_bsn_arp_offload_t *obj,
    uint32_t subtype);
extern void of_instruction_id_bsn_arp_offload_subtype_get(
    of_instruction_id_bsn_arp_offload_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_id_bsn_auto_negotiation */

extern void of_instruction_id_bsn_auto_negotiation_experimenter_set(
    of_instruction_id_bsn_auto_negotiation_t *obj,
    uint32_t experimenter);
extern void of_instruction_id_bsn_auto_negotiation_experimenter_get(
    of_instruction_id_bsn_auto_negotiation_t *obj,
    uint32_t *experimenter);

extern void of_instruction_id_bsn_auto_negotiation_subtype_set(
    of_instruction_id_bsn_auto_negotiation_t *obj,
    uint32_t subtype);
extern void of_instruction_id_bsn_auto_negotiation_subtype_get(
    of_instruction_id_bsn_auto_negotiation_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_id_bsn_deny */

extern void of_instruction_id_bsn_deny_experimenter_set(
    of_instruction_id_bsn_deny_t *obj,
    uint32_t experimenter);
extern void of_instruction_id_bsn_deny_experimenter_get(
    of_instruction_id_bsn_deny_t *obj,
    uint32_t *experimenter);

extern void of_instruction_id_bsn_deny_subtype_set(
    of_instruction_id_bsn_deny_t *obj,
    uint32_t subtype);
extern void of_instruction_id_bsn_deny_subtype_get(
    of_instruction_id_bsn_deny_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_id_bsn_dhcp_offload */

extern void of_instruction_id_bsn_dhcp_offload_experimenter_set(
    of_instruction_id_bsn_dhcp_offload_t *obj,
    uint32_t experimenter);
extern void of_instruction_id_bsn_dhcp_offload_experimenter_get(
    of_instruction_id_bsn_dhcp_offload_t *obj,
    uint32_t *experimenter);

extern void of_instruction_id_bsn_dhcp_offload_subtype_set(
    of_instruction_id_bsn_dhcp_offload_t *obj,
    uint32_t subtype);
extern void of_instruction_id_bsn_dhcp_offload_subtype_get(
    of_instruction_id_bsn_dhcp_offload_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_id_bsn_disable_split_horizon_check */

extern void of_instruction_id_bsn_disable_split_horizon_check_experimenter_set(
    of_instruction_id_bsn_disable_split_horizon_check_t *obj,
    uint32_t experimenter);
extern void of_instruction_id_bsn_disable_split_horizon_check_experimenter_get(
    of_instruction_id_bsn_disable_split_horizon_check_t *obj,
    uint32_t *experimenter);

extern void of_instruction_id_bsn_disable_split_horizon_check_subtype_set(
    of_instruction_id_bsn_disable_split_horizon_check_t *obj,
    uint32_t subtype);
extern void of_instruction_id_bsn_disable_split_horizon_check_subtype_get(
    of_instruction_id_bsn_disable_split_horizon_check_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_id_bsn_disable_src_mac_check */

extern void of_instruction_id_bsn_disable_src_mac_check_experimenter_set(
    of_instruction_id_bsn_disable_src_mac_check_t *obj,
    uint32_t experimenter);
extern void of_instruction_id_bsn_disable_src_mac_check_experimenter_get(
    of_instruction_id_bsn_disable_src_mac_check_t *obj,
    uint32_t *experimenter);

extern void of_instruction_id_bsn_disable_src_mac_check_subtype_set(
    of_instruction_id_bsn_disable_src_mac_check_t *obj,
    uint32_t subtype);
extern void of_instruction_id_bsn_disable_src_mac_check_subtype_get(
    of_instruction_id_bsn_disable_src_mac_check_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_id_bsn_disable_vlan_counters */

extern void of_instruction_id_bsn_disable_vlan_counters_experimenter_set(
    of_instruction_id_bsn_disable_vlan_counters_t *obj,
    uint32_t experimenter);
extern void of_instruction_id_bsn_disable_vlan_counters_experimenter_get(
    of_instruction_id_bsn_disable_vlan_counters_t *obj,
    uint32_t *experimenter);

extern void of_instruction_id_bsn_disable_vlan_counters_subtype_set(
    of_instruction_id_bsn_disable_vlan_counters_t *obj,
    uint32_t subtype);
extern void of_instruction_id_bsn_disable_vlan_counters_subtype_get(
    of_instruction_id_bsn_disable_vlan_counters_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_id_bsn_packet_of_death */

extern void of_instruction_id_bsn_packet_of_death_experimenter_set(
    of_instruction_id_bsn_packet_of_death_t *obj,
    uint32_t experimenter);
extern void of_instruction_id_bsn_packet_of_death_experimenter_get(
    of_instruction_id_bsn_packet_of_death_t *obj,
    uint32_t *experimenter);

extern void of_instruction_id_bsn_packet_of_death_subtype_set(
    of_instruction_id_bsn_packet_of_death_t *obj,
    uint32_t subtype);
extern void of_instruction_id_bsn_packet_of_death_subtype_get(
    of_instruction_id_bsn_packet_of_death_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_id_bsn_permit */

extern void of_instruction_id_bsn_permit_experimenter_set(
    of_instruction_id_bsn_permit_t *obj,
    uint32_t experimenter);
extern void of_instruction_id_bsn_permit_experimenter_get(
    of_instruction_id_bsn_permit_t *obj,
    uint32_t *experimenter);

extern void of_instruction_id_bsn_permit_subtype_set(
    of_instruction_id_bsn_permit_t *obj,
    uint32_t subtype);
extern void of_instruction_id_bsn_permit_subtype_get(
    of_instruction_id_bsn_permit_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_id_bsn_prioritize_pdus */

extern void of_instruction_id_bsn_prioritize_pdus_experimenter_set(
    of_instruction_id_bsn_prioritize_pdus_t *obj,
    uint32_t experimenter);
extern void of_instruction_id_bsn_prioritize_pdus_experimenter_get(
    of_instruction_id_bsn_prioritize_pdus_t *obj,
    uint32_t *experimenter);

extern void of_instruction_id_bsn_prioritize_pdus_subtype_set(
    of_instruction_id_bsn_prioritize_pdus_t *obj,
    uint32_t subtype);
extern void of_instruction_id_bsn_prioritize_pdus_subtype_get(
    of_instruction_id_bsn_prioritize_pdus_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_id_bsn_require_vlan_xlate */

extern void of_instruction_id_bsn_require_vlan_xlate_experimenter_set(
    of_instruction_id_bsn_require_vlan_xlate_t *obj,
    uint32_t experimenter);
extern void of_instruction_id_bsn_require_vlan_xlate_experimenter_get(
    of_instruction_id_bsn_require_vlan_xlate_t *obj,
    uint32_t *experimenter);

extern void of_instruction_id_bsn_require_vlan_xlate_subtype_set(
    of_instruction_id_bsn_require_vlan_xlate_t *obj,
    uint32_t subtype);
extern void of_instruction_id_bsn_require_vlan_xlate_subtype_get(
    of_instruction_id_bsn_require_vlan_xlate_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_id_bsn_span_destination */

extern void of_instruction_id_bsn_span_destination_experimenter_set(
    of_instruction_id_bsn_span_destination_t *obj,
    uint32_t experimenter);
extern void of_instruction_id_bsn_span_destination_experimenter_get(
    of_instruction_id_bsn_span_destination_t *obj,
    uint32_t *experimenter);

extern void of_instruction_id_bsn_span_destination_subtype_set(
    of_instruction_id_bsn_span_destination_t *obj,
    uint32_t subtype);
extern void of_instruction_id_bsn_span_destination_subtype_get(
    of_instruction_id_bsn_span_destination_t *obj,
    uint32_t *subtype);

/* Unified accessor functions for of_instruction_id_clear_actions */

/* Unified accessor functions for of_instruction_id_goto_table */

/* Unified accessor functions for of_instruction_id_meter */

/* Unified accessor functions for of_instruction_id_write_actions */

/* Unified accessor functions for of_instruction_id_write_metadata */

/* Unified accessor functions for of_instruction_meter */

extern void of_instruction_meter_meter_id_set(
    of_instruction_meter_t *obj,
    uint32_t meter_id);
extern void of_instruction_meter_meter_id_get(
    of_instruction_meter_t *obj,
    uint32_t *meter_id);

/* Unified accessor functions for of_instruction_write_actions */

extern int WARN_UNUSED_RESULT of_instruction_write_actions_actions_set(
    of_instruction_write_actions_t *obj,
    of_list_action_t *actions);
extern void of_instruction_write_actions_actions_bind(
    of_instruction_write_actions_t *obj,
    of_list_action_t *actions);
extern of_list_action_t *of_instruction_write_actions_actions_get(
    of_instruction_write_actions_t *obj);

/* Unified accessor functions for of_instruction_write_metadata */

extern void of_instruction_write_metadata_metadata_set(
    of_instruction_write_metadata_t *obj,
    uint64_t metadata);
extern void of_instruction_write_metadata_metadata_get(
    of_instruction_write_metadata_t *obj,
    uint64_t *metadata);

extern void of_instruction_write_metadata_metadata_mask_set(
    of_instruction_write_metadata_t *obj,
    uint64_t metadata_mask);
extern void of_instruction_write_metadata_metadata_mask_get(
    of_instruction_write_metadata_t *obj,
    uint64_t *metadata_mask);

/* Unified accessor functions for of_match_v1 */

extern void of_match_v1_wildcards_set(
    of_match_v1_t *obj,
    of_wc_bmap_t wildcards);
extern void of_match_v1_wildcards_get(
    of_match_v1_t *obj,
    of_wc_bmap_t *wildcards);

extern void of_match_v1_in_port_set(
    of_match_v1_t *obj,
    of_port_no_t in_port);
extern void of_match_v1_in_port_get(
    of_match_v1_t *obj,
    of_port_no_t *in_port);

extern void of_match_v1_eth_src_set(
    of_match_v1_t *obj,
    of_mac_addr_t eth_src);
extern void of_match_v1_eth_src_get(
    of_match_v1_t *obj,
    of_mac_addr_t *eth_src);

extern void of_match_v1_eth_dst_set(
    of_match_v1_t *obj,
    of_mac_addr_t eth_dst);
extern void of_match_v1_eth_dst_get(
    of_match_v1_t *obj,
    of_mac_addr_t *eth_dst);

extern void of_match_v1_vlan_vid_set(
    of_match_v1_t *obj,
    uint16_t vlan_vid);
extern void of_match_v1_vlan_vid_get(
    of_match_v1_t *obj,
    uint16_t *vlan_vid);

extern void of_match_v1_vlan_pcp_set(
    of_match_v1_t *obj,
    uint8_t vlan_pcp);
extern void of_match_v1_vlan_pcp_get(
    of_match_v1_t *obj,
    uint8_t *vlan_pcp);

extern void of_match_v1_eth_type_set(
    of_match_v1_t *obj,
    uint16_t eth_type);
extern void of_match_v1_eth_type_get(
    of_match_v1_t *obj,
    uint16_t *eth_type);

extern void of_match_v1_ip_dscp_set(
    of_match_v1_t *obj,
    uint8_t ip_dscp);
extern void of_match_v1_ip_dscp_get(
    of_match_v1_t *obj,
    uint8_t *ip_dscp);

extern void of_match_v1_ip_proto_set(
    of_match_v1_t *obj,
    uint8_t ip_proto);
extern void of_match_v1_ip_proto_get(
    of_match_v1_t *obj,
    uint8_t *ip_proto);

extern void of_match_v1_ipv4_src_set(
    of_match_v1_t *obj,
    of_ipv4_t ipv4_src);
extern void of_match_v1_ipv4_src_get(
    of_match_v1_t *obj,
    of_ipv4_t *ipv4_src);

extern void of_match_v1_ipv4_dst_set(
    of_match_v1_t *obj,
    of_ipv4_t ipv4_dst);
extern void of_match_v1_ipv4_dst_get(
    of_match_v1_t *obj,
    of_ipv4_t *ipv4_dst);

extern void of_match_v1_tcp_src_set(
    of_match_v1_t *obj,
    uint16_t tcp_src);
extern void of_match_v1_tcp_src_get(
    of_match_v1_t *obj,
    uint16_t *tcp_src);

extern void of_match_v1_tcp_dst_set(
    of_match_v1_t *obj,
    uint16_t tcp_dst);
extern void of_match_v1_tcp_dst_get(
    of_match_v1_t *obj,
    uint16_t *tcp_dst);

/* Unified accessor functions for of_match_v2 */

extern void of_match_v2_in_port_set(
    of_match_v2_t *obj,
    of_port_no_t in_port);
extern void of_match_v2_in_port_get(
    of_match_v2_t *obj,
    of_port_no_t *in_port);

extern void of_match_v2_wildcards_set(
    of_match_v2_t *obj,
    of_wc_bmap_t wildcards);
extern void of_match_v2_wildcards_get(
    of_match_v2_t *obj,
    of_wc_bmap_t *wildcards);

extern void of_match_v2_eth_src_set(
    of_match_v2_t *obj,
    of_mac_addr_t eth_src);
extern void of_match_v2_eth_src_get(
    of_match_v2_t *obj,
    of_mac_addr_t *eth_src);

extern void of_match_v2_eth_src_mask_set(
    of_match_v2_t *obj,
    of_mac_addr_t eth_src_mask);
extern void of_match_v2_eth_src_mask_get(
    of_match_v2_t *obj,
    of_mac_addr_t *eth_src_mask);

extern void of_match_v2_eth_dst_set(
    of_match_v2_t *obj,
    of_mac_addr_t eth_dst);
extern void of_match_v2_eth_dst_get(
    of_match_v2_t *obj,
    of_mac_addr_t *eth_dst);

extern void of_match_v2_eth_dst_mask_set(
    of_match_v2_t *obj,
    of_mac_addr_t eth_dst_mask);
extern void of_match_v2_eth_dst_mask_get(
    of_match_v2_t *obj,
    of_mac_addr_t *eth_dst_mask);

extern void of_match_v2_vlan_vid_set(
    of_match_v2_t *obj,
    uint16_t vlan_vid);
extern void of_match_v2_vlan_vid_get(
    of_match_v2_t *obj,
    uint16_t *vlan_vid);

extern void of_match_v2_vlan_pcp_set(
    of_match_v2_t *obj,
    uint8_t vlan_pcp);
extern void of_match_v2_vlan_pcp_get(
    of_match_v2_t *obj,
    uint8_t *vlan_pcp);

extern void of_match_v2_eth_type_set(
    of_match_v2_t *obj,
    uint16_t eth_type);
extern void of_match_v2_eth_type_get(
    of_match_v2_t *obj,
    uint16_t *eth_type);

extern void of_match_v2_ip_dscp_set(
    of_match_v2_t *obj,
    uint8_t ip_dscp);
extern void of_match_v2_ip_dscp_get(
    of_match_v2_t *obj,
    uint8_t *ip_dscp);

extern void of_match_v2_ip_proto_set(
    of_match_v2_t *obj,
    uint8_t ip_proto);
extern void of_match_v2_ip_proto_get(
    of_match_v2_t *obj,
    uint8_t *ip_proto);

extern void of_match_v2_ipv4_src_set(
    of_match_v2_t *obj,
    of_ipv4_t ipv4_src);
extern void of_match_v2_ipv4_src_get(
    of_match_v2_t *obj,
    of_ipv4_t *ipv4_src);

extern void of_match_v2_ipv4_src_mask_set(
    of_match_v2_t *obj,
    of_ipv4_t ipv4_src_mask);
extern void of_match_v2_ipv4_src_mask_get(
    of_match_v2_t *obj,
    of_ipv4_t *ipv4_src_mask);

extern void of_match_v2_ipv4_dst_set(
    of_match_v2_t *obj,
    of_ipv4_t ipv4_dst);
extern void of_match_v2_ipv4_dst_get(
    of_match_v2_t *obj,
    of_ipv4_t *ipv4_dst);

extern void of_match_v2_ipv4_dst_mask_set(
    of_match_v2_t *obj,
    of_ipv4_t ipv4_dst_mask);
extern void of_match_v2_ipv4_dst_mask_get(
    of_match_v2_t *obj,
    of_ipv4_t *ipv4_dst_mask);

extern void of_match_v2_tcp_src_set(
    of_match_v2_t *obj,
    uint16_t tcp_src);
extern void of_match_v2_tcp_src_get(
    of_match_v2_t *obj,
    uint16_t *tcp_src);

extern void of_match_v2_tcp_dst_set(
    of_match_v2_t *obj,
    uint16_t tcp_dst);
extern void of_match_v2_tcp_dst_get(
    of_match_v2_t *obj,
    uint16_t *tcp_dst);

extern void of_match_v2_mpls_label_set(
    of_match_v2_t *obj,
    uint32_t mpls_label);
extern void of_match_v2_mpls_label_get(
    of_match_v2_t *obj,
    uint32_t *mpls_label);

extern void of_match_v2_mpls_tc_set(
    of_match_v2_t *obj,
    uint8_t mpls_tc);
extern void of_match_v2_mpls_tc_get(
    of_match_v2_t *obj,
    uint8_t *mpls_tc);

extern void of_match_v2_metadata_set(
    of_match_v2_t *obj,
    uint64_t metadata);
extern void of_match_v2_metadata_get(
    of_match_v2_t *obj,
    uint64_t *metadata);

extern void of_match_v2_metadata_mask_set(
    of_match_v2_t *obj,
    uint64_t metadata_mask);
extern void of_match_v2_metadata_mask_get(
    of_match_v2_t *obj,
    uint64_t *metadata_mask);

/* Unified accessor functions for of_match_v3 */

extern int WARN_UNUSED_RESULT of_match_v3_oxm_list_set(
    of_match_v3_t *obj,
    of_list_oxm_t *oxm_list);
extern void of_match_v3_oxm_list_bind(
    of_match_v3_t *obj,
    of_list_oxm_t *oxm_list);
extern of_list_oxm_t *of_match_v3_oxm_list_get(
    of_match_v3_t *obj);

/* Unified accessor functions for of_meter_band_drop */

extern void of_meter_band_drop_rate_set(
    of_meter_band_drop_t *obj,
    uint32_t rate);
extern void of_meter_band_drop_rate_get(
    of_meter_band_drop_t *obj,
    uint32_t *rate);

extern void of_meter_band_drop_burst_size_set(
    of_meter_band_drop_t *obj,
    uint32_t burst_size);
extern void of_meter_band_drop_burst_size_get(
    of_meter_band_drop_t *obj,
    uint32_t *burst_size);

/* Unified accessor functions for of_meter_band_dscp_remark */

extern void of_meter_band_dscp_remark_rate_set(
    of_meter_band_dscp_remark_t *obj,
    uint32_t rate);
extern void of_meter_band_dscp_remark_rate_get(
    of_meter_band_dscp_remark_t *obj,
    uint32_t *rate);

extern void of_meter_band_dscp_remark_burst_size_set(
    of_meter_band_dscp_remark_t *obj,
    uint32_t burst_size);
extern void of_meter_band_dscp_remark_burst_size_get(
    of_meter_band_dscp_remark_t *obj,
    uint32_t *burst_size);

extern void of_meter_band_dscp_remark_prec_level_set(
    of_meter_band_dscp_remark_t *obj,
    uint8_t prec_level);
extern void of_meter_band_dscp_remark_prec_level_get(
    of_meter_band_dscp_remark_t *obj,
    uint8_t *prec_level);

/* Unified accessor functions for of_meter_band_experimenter */

extern void of_meter_band_experimenter_rate_set(
    of_meter_band_experimenter_t *obj,
    uint32_t rate);
extern void of_meter_band_experimenter_rate_get(
    of_meter_band_experimenter_t *obj,
    uint32_t *rate);

extern void of_meter_band_experimenter_burst_size_set(
    of_meter_band_experimenter_t *obj,
    uint32_t burst_size);
extern void of_meter_band_experimenter_burst_size_get(
    of_meter_band_experimenter_t *obj,
    uint32_t *burst_size);

extern void of_meter_band_experimenter_experimenter_set(
    of_meter_band_experimenter_t *obj,
    uint32_t experimenter);
extern void of_meter_band_experimenter_experimenter_get(
    of_meter_band_experimenter_t *obj,
    uint32_t *experimenter);

/* Unified accessor functions for of_meter_band_stats */

extern void of_meter_band_stats_packet_band_count_set(
    of_meter_band_stats_t *obj,
    uint64_t packet_band_count);
extern void of_meter_band_stats_packet_band_count_get(
    of_meter_band_stats_t *obj,
    uint64_t *packet_band_count);

extern void of_meter_band_stats_byte_band_count_set(
    of_meter_band_stats_t *obj,
    uint64_t byte_band_count);
extern void of_meter_band_stats_byte_band_count_get(
    of_meter_band_stats_t *obj,
    uint64_t *byte_band_count);

/* Unified accessor functions for of_meter_config */

extern void of_meter_config_flags_set(
    of_meter_config_t *obj,
    uint16_t flags);
extern void of_meter_config_flags_get(
    of_meter_config_t *obj,
    uint16_t *flags);

extern void of_meter_config_meter_id_set(
    of_meter_config_t *obj,
    uint32_t meter_id);
extern void of_meter_config_meter_id_get(
    of_meter_config_t *obj,
    uint32_t *meter_id);

extern int WARN_UNUSED_RESULT of_meter_config_entries_set(
    of_meter_config_t *obj,
    of_list_meter_band_t *entries);
extern void of_meter_config_entries_bind(
    of_meter_config_t *obj,
    of_list_meter_band_t *entries);
extern of_list_meter_band_t *of_meter_config_entries_get(
    of_meter_config_t *obj);

/* Unified accessor functions for of_meter_features */

extern void of_meter_features_max_meter_set(
    of_meter_features_t *obj,
    uint32_t max_meter);
extern void of_meter_features_max_meter_get(
    of_meter_features_t *obj,
    uint32_t *max_meter);

extern void of_meter_features_band_types_set(
    of_meter_features_t *obj,
    uint32_t band_types);
extern void of_meter_features_band_types_get(
    of_meter_features_t *obj,
    uint32_t *band_types);

extern void of_meter_features_capabilities_set(
    of_meter_features_t *obj,
    uint32_t capabilities);
extern void of_meter_features_capabilities_get(
    of_meter_features_t *obj,
    uint32_t *capabilities);

extern void of_meter_features_max_bands_set(
    of_meter_features_t *obj,
    uint8_t max_bands);
extern void of_meter_features_max_bands_get(
    of_meter_features_t *obj,
    uint8_t *max_bands);

extern void of_meter_features_max_color_set(
    of_meter_features_t *obj,
    uint8_t max_color);
extern void of_meter_features_max_color_get(
    of_meter_features_t *obj,
    uint8_t *max_color);

/* Unified accessor functions for of_meter_stats */

extern void of_meter_stats_meter_id_set(
    of_meter_stats_t *obj,
    uint32_t meter_id);
extern void of_meter_stats_meter_id_get(
    of_meter_stats_t *obj,
    uint32_t *meter_id);

extern void of_meter_stats_flow_count_set(
    of_meter_stats_t *obj,
    uint32_t flow_count);
extern void of_meter_stats_flow_count_get(
    of_meter_stats_t *obj,
    uint32_t *flow_count);

extern void of_meter_stats_packet_in_count_set(
    of_meter_stats_t *obj,
    uint64_t packet_in_count);
extern void of_meter_stats_packet_in_count_get(
    of_meter_stats_t *obj,
    uint64_t *packet_in_count);

extern void of_meter_stats_byte_in_count_set(
    of_meter_stats_t *obj,
    uint64_t byte_in_count);
extern void of_meter_stats_byte_in_count_get(
    of_meter_stats_t *obj,
    uint64_t *byte_in_count);

extern void of_meter_stats_duration_sec_set(
    of_meter_stats_t *obj,
    uint32_t duration_sec);
extern void of_meter_stats_duration_sec_get(
    of_meter_stats_t *obj,
    uint32_t *duration_sec);

extern void of_meter_stats_duration_nsec_set(
    of_meter_stats_t *obj,
    uint32_t duration_nsec);
extern void of_meter_stats_duration_nsec_get(
    of_meter_stats_t *obj,
    uint32_t *duration_nsec);

extern int WARN_UNUSED_RESULT of_meter_stats_band_stats_set(
    of_meter_stats_t *obj,
    of_list_meter_band_stats_t *band_stats);
extern void of_meter_stats_band_stats_bind(
    of_meter_stats_t *obj,
    of_list_meter_band_stats_t *band_stats);
extern of_list_meter_band_stats_t *of_meter_stats_band_stats_get(
    of_meter_stats_t *obj);

/* Unified accessor functions for of_oxm_arp_op */

extern void of_oxm_arp_op_value_set(
    of_oxm_arp_op_t *obj,
    uint16_t value);
extern void of_oxm_arp_op_value_get(
    of_oxm_arp_op_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_oxm_arp_op_masked */

extern void of_oxm_arp_op_masked_value_set(
    of_oxm_arp_op_masked_t *obj,
    uint16_t value);
extern void of_oxm_arp_op_masked_value_get(
    of_oxm_arp_op_masked_t *obj,
    uint16_t *value);

extern void of_oxm_arp_op_masked_value_mask_set(
    of_oxm_arp_op_masked_t *obj,
    uint16_t value_mask);
extern void of_oxm_arp_op_masked_value_mask_get(
    of_oxm_arp_op_masked_t *obj,
    uint16_t *value_mask);

/* Unified accessor functions for of_oxm_arp_sha */

extern void of_oxm_arp_sha_value_set(
    of_oxm_arp_sha_t *obj,
    of_mac_addr_t value);
extern void of_oxm_arp_sha_value_get(
    of_oxm_arp_sha_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_oxm_arp_sha_masked */

extern void of_oxm_arp_sha_masked_value_set(
    of_oxm_arp_sha_masked_t *obj,
    of_mac_addr_t value);
extern void of_oxm_arp_sha_masked_value_get(
    of_oxm_arp_sha_masked_t *obj,
    of_mac_addr_t *value);

extern void of_oxm_arp_sha_masked_value_mask_set(
    of_oxm_arp_sha_masked_t *obj,
    of_mac_addr_t value_mask);
extern void of_oxm_arp_sha_masked_value_mask_get(
    of_oxm_arp_sha_masked_t *obj,
    of_mac_addr_t *value_mask);

/* Unified accessor functions for of_oxm_arp_spa */

extern void of_oxm_arp_spa_value_set(
    of_oxm_arp_spa_t *obj,
    uint32_t value);
extern void of_oxm_arp_spa_value_get(
    of_oxm_arp_spa_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_arp_spa_masked */

extern void of_oxm_arp_spa_masked_value_set(
    of_oxm_arp_spa_masked_t *obj,
    uint32_t value);
extern void of_oxm_arp_spa_masked_value_get(
    of_oxm_arp_spa_masked_t *obj,
    uint32_t *value);

extern void of_oxm_arp_spa_masked_value_mask_set(
    of_oxm_arp_spa_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_arp_spa_masked_value_mask_get(
    of_oxm_arp_spa_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_arp_tha */

extern void of_oxm_arp_tha_value_set(
    of_oxm_arp_tha_t *obj,
    of_mac_addr_t value);
extern void of_oxm_arp_tha_value_get(
    of_oxm_arp_tha_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_oxm_arp_tha_masked */

extern void of_oxm_arp_tha_masked_value_set(
    of_oxm_arp_tha_masked_t *obj,
    of_mac_addr_t value);
extern void of_oxm_arp_tha_masked_value_get(
    of_oxm_arp_tha_masked_t *obj,
    of_mac_addr_t *value);

extern void of_oxm_arp_tha_masked_value_mask_set(
    of_oxm_arp_tha_masked_t *obj,
    of_mac_addr_t value_mask);
extern void of_oxm_arp_tha_masked_value_mask_get(
    of_oxm_arp_tha_masked_t *obj,
    of_mac_addr_t *value_mask);

/* Unified accessor functions for of_oxm_arp_tpa */

extern void of_oxm_arp_tpa_value_set(
    of_oxm_arp_tpa_t *obj,
    uint32_t value);
extern void of_oxm_arp_tpa_value_get(
    of_oxm_arp_tpa_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_arp_tpa_masked */

extern void of_oxm_arp_tpa_masked_value_set(
    of_oxm_arp_tpa_masked_t *obj,
    uint32_t value);
extern void of_oxm_arp_tpa_masked_value_get(
    of_oxm_arp_tpa_masked_t *obj,
    uint32_t *value);

extern void of_oxm_arp_tpa_masked_value_mask_set(
    of_oxm_arp_tpa_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_arp_tpa_masked_value_mask_get(
    of_oxm_arp_tpa_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_egr_port_group_id */

extern void of_oxm_bsn_egr_port_group_id_value_set(
    of_oxm_bsn_egr_port_group_id_t *obj,
    uint32_t value);
extern void of_oxm_bsn_egr_port_group_id_value_get(
    of_oxm_bsn_egr_port_group_id_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_egr_port_group_id_masked */

extern void of_oxm_bsn_egr_port_group_id_masked_value_set(
    of_oxm_bsn_egr_port_group_id_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_egr_port_group_id_masked_value_get(
    of_oxm_bsn_egr_port_group_id_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_egr_port_group_id_masked_value_mask_set(
    of_oxm_bsn_egr_port_group_id_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_egr_port_group_id_masked_value_mask_get(
    of_oxm_bsn_egr_port_group_id_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_global_vrf_allowed */

extern void of_oxm_bsn_global_vrf_allowed_value_set(
    of_oxm_bsn_global_vrf_allowed_t *obj,
    uint8_t value);
extern void of_oxm_bsn_global_vrf_allowed_value_get(
    of_oxm_bsn_global_vrf_allowed_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_bsn_global_vrf_allowed_masked */

extern void of_oxm_bsn_global_vrf_allowed_masked_value_set(
    of_oxm_bsn_global_vrf_allowed_masked_t *obj,
    uint8_t value);
extern void of_oxm_bsn_global_vrf_allowed_masked_value_get(
    of_oxm_bsn_global_vrf_allowed_masked_t *obj,
    uint8_t *value);

extern void of_oxm_bsn_global_vrf_allowed_masked_value_mask_set(
    of_oxm_bsn_global_vrf_allowed_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_bsn_global_vrf_allowed_masked_value_mask_get(
    of_oxm_bsn_global_vrf_allowed_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_in_ports_128 */

extern void of_oxm_bsn_in_ports_128_value_set(
    of_oxm_bsn_in_ports_128_t *obj,
    of_bitmap_128_t value);
extern void of_oxm_bsn_in_ports_128_value_get(
    of_oxm_bsn_in_ports_128_t *obj,
    of_bitmap_128_t *value);

/* Unified accessor functions for of_oxm_bsn_in_ports_128_masked */

extern void of_oxm_bsn_in_ports_128_masked_value_set(
    of_oxm_bsn_in_ports_128_masked_t *obj,
    of_bitmap_128_t value);
extern void of_oxm_bsn_in_ports_128_masked_value_get(
    of_oxm_bsn_in_ports_128_masked_t *obj,
    of_bitmap_128_t *value);

extern void of_oxm_bsn_in_ports_128_masked_value_mask_set(
    of_oxm_bsn_in_ports_128_masked_t *obj,
    of_bitmap_128_t value_mask);
extern void of_oxm_bsn_in_ports_128_masked_value_mask_get(
    of_oxm_bsn_in_ports_128_masked_t *obj,
    of_bitmap_128_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_in_ports_512 */

extern void of_oxm_bsn_in_ports_512_value_set(
    of_oxm_bsn_in_ports_512_t *obj,
    of_bitmap_512_t value);
extern void of_oxm_bsn_in_ports_512_value_get(
    of_oxm_bsn_in_ports_512_t *obj,
    of_bitmap_512_t *value);

/* Unified accessor functions for of_oxm_bsn_in_ports_512_masked */

extern void of_oxm_bsn_in_ports_512_masked_value_set(
    of_oxm_bsn_in_ports_512_masked_t *obj,
    of_bitmap_512_t value);
extern void of_oxm_bsn_in_ports_512_masked_value_get(
    of_oxm_bsn_in_ports_512_masked_t *obj,
    of_bitmap_512_t *value);

extern void of_oxm_bsn_in_ports_512_masked_value_mask_set(
    of_oxm_bsn_in_ports_512_masked_t *obj,
    of_bitmap_512_t value_mask);
extern void of_oxm_bsn_in_ports_512_masked_value_mask_get(
    of_oxm_bsn_in_ports_512_masked_t *obj,
    of_bitmap_512_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_ingress_port_group_id */

extern void of_oxm_bsn_ingress_port_group_id_value_set(
    of_oxm_bsn_ingress_port_group_id_t *obj,
    uint32_t value);
extern void of_oxm_bsn_ingress_port_group_id_value_get(
    of_oxm_bsn_ingress_port_group_id_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_ingress_port_group_id_masked */

extern void of_oxm_bsn_ingress_port_group_id_masked_value_set(
    of_oxm_bsn_ingress_port_group_id_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_ingress_port_group_id_masked_value_get(
    of_oxm_bsn_ingress_port_group_id_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_ingress_port_group_id_masked_value_mask_set(
    of_oxm_bsn_ingress_port_group_id_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_ingress_port_group_id_masked_value_mask_get(
    of_oxm_bsn_ingress_port_group_id_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_l2_cache_hit */

extern void of_oxm_bsn_l2_cache_hit_value_set(
    of_oxm_bsn_l2_cache_hit_t *obj,
    uint8_t value);
extern void of_oxm_bsn_l2_cache_hit_value_get(
    of_oxm_bsn_l2_cache_hit_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_bsn_l2_cache_hit_masked */

extern void of_oxm_bsn_l2_cache_hit_masked_value_set(
    of_oxm_bsn_l2_cache_hit_masked_t *obj,
    uint8_t value);
extern void of_oxm_bsn_l2_cache_hit_masked_value_get(
    of_oxm_bsn_l2_cache_hit_masked_t *obj,
    uint8_t *value);

extern void of_oxm_bsn_l2_cache_hit_masked_value_mask_set(
    of_oxm_bsn_l2_cache_hit_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_bsn_l2_cache_hit_masked_value_mask_get(
    of_oxm_bsn_l2_cache_hit_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_l3_dst_class_id */

extern void of_oxm_bsn_l3_dst_class_id_value_set(
    of_oxm_bsn_l3_dst_class_id_t *obj,
    uint32_t value);
extern void of_oxm_bsn_l3_dst_class_id_value_get(
    of_oxm_bsn_l3_dst_class_id_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_l3_dst_class_id_masked */

extern void of_oxm_bsn_l3_dst_class_id_masked_value_set(
    of_oxm_bsn_l3_dst_class_id_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_l3_dst_class_id_masked_value_get(
    of_oxm_bsn_l3_dst_class_id_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_l3_dst_class_id_masked_value_mask_set(
    of_oxm_bsn_l3_dst_class_id_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_l3_dst_class_id_masked_value_mask_get(
    of_oxm_bsn_l3_dst_class_id_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_l3_interface_class_id */

extern void of_oxm_bsn_l3_interface_class_id_value_set(
    of_oxm_bsn_l3_interface_class_id_t *obj,
    uint32_t value);
extern void of_oxm_bsn_l3_interface_class_id_value_get(
    of_oxm_bsn_l3_interface_class_id_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_l3_interface_class_id_masked */

extern void of_oxm_bsn_l3_interface_class_id_masked_value_set(
    of_oxm_bsn_l3_interface_class_id_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_l3_interface_class_id_masked_value_get(
    of_oxm_bsn_l3_interface_class_id_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_l3_interface_class_id_masked_value_mask_set(
    of_oxm_bsn_l3_interface_class_id_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_l3_interface_class_id_masked_value_mask_get(
    of_oxm_bsn_l3_interface_class_id_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_l3_src_class_id */

extern void of_oxm_bsn_l3_src_class_id_value_set(
    of_oxm_bsn_l3_src_class_id_t *obj,
    uint32_t value);
extern void of_oxm_bsn_l3_src_class_id_value_get(
    of_oxm_bsn_l3_src_class_id_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_l3_src_class_id_masked */

extern void of_oxm_bsn_l3_src_class_id_masked_value_set(
    of_oxm_bsn_l3_src_class_id_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_l3_src_class_id_masked_value_get(
    of_oxm_bsn_l3_src_class_id_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_l3_src_class_id_masked_value_mask_set(
    of_oxm_bsn_l3_src_class_id_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_l3_src_class_id_masked_value_mask_get(
    of_oxm_bsn_l3_src_class_id_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_lag_id */

extern void of_oxm_bsn_lag_id_value_set(
    of_oxm_bsn_lag_id_t *obj,
    uint32_t value);
extern void of_oxm_bsn_lag_id_value_get(
    of_oxm_bsn_lag_id_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_lag_id_masked */

extern void of_oxm_bsn_lag_id_masked_value_set(
    of_oxm_bsn_lag_id_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_lag_id_masked_value_get(
    of_oxm_bsn_lag_id_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_lag_id_masked_value_mask_set(
    of_oxm_bsn_lag_id_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_lag_id_masked_value_mask_get(
    of_oxm_bsn_lag_id_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_tcp_flags */

extern void of_oxm_bsn_tcp_flags_value_set(
    of_oxm_bsn_tcp_flags_t *obj,
    uint16_t value);
extern void of_oxm_bsn_tcp_flags_value_get(
    of_oxm_bsn_tcp_flags_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_oxm_bsn_tcp_flags_masked */

extern void of_oxm_bsn_tcp_flags_masked_value_set(
    of_oxm_bsn_tcp_flags_masked_t *obj,
    uint16_t value);
extern void of_oxm_bsn_tcp_flags_masked_value_get(
    of_oxm_bsn_tcp_flags_masked_t *obj,
    uint16_t *value);

extern void of_oxm_bsn_tcp_flags_masked_value_mask_set(
    of_oxm_bsn_tcp_flags_masked_t *obj,
    uint16_t value_mask);
extern void of_oxm_bsn_tcp_flags_masked_value_mask_get(
    of_oxm_bsn_tcp_flags_masked_t *obj,
    uint16_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_udf0 */

extern void of_oxm_bsn_udf0_value_set(
    of_oxm_bsn_udf0_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf0_value_get(
    of_oxm_bsn_udf0_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_udf0_masked */

extern void of_oxm_bsn_udf0_masked_value_set(
    of_oxm_bsn_udf0_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf0_masked_value_get(
    of_oxm_bsn_udf0_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_udf0_masked_value_mask_set(
    of_oxm_bsn_udf0_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_udf0_masked_value_mask_get(
    of_oxm_bsn_udf0_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_udf1 */

extern void of_oxm_bsn_udf1_value_set(
    of_oxm_bsn_udf1_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf1_value_get(
    of_oxm_bsn_udf1_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_udf1_masked */

extern void of_oxm_bsn_udf1_masked_value_set(
    of_oxm_bsn_udf1_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf1_masked_value_get(
    of_oxm_bsn_udf1_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_udf1_masked_value_mask_set(
    of_oxm_bsn_udf1_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_udf1_masked_value_mask_get(
    of_oxm_bsn_udf1_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_udf2 */

extern void of_oxm_bsn_udf2_value_set(
    of_oxm_bsn_udf2_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf2_value_get(
    of_oxm_bsn_udf2_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_udf2_masked */

extern void of_oxm_bsn_udf2_masked_value_set(
    of_oxm_bsn_udf2_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf2_masked_value_get(
    of_oxm_bsn_udf2_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_udf2_masked_value_mask_set(
    of_oxm_bsn_udf2_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_udf2_masked_value_mask_get(
    of_oxm_bsn_udf2_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_udf3 */

extern void of_oxm_bsn_udf3_value_set(
    of_oxm_bsn_udf3_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf3_value_get(
    of_oxm_bsn_udf3_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_udf3_masked */

extern void of_oxm_bsn_udf3_masked_value_set(
    of_oxm_bsn_udf3_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf3_masked_value_get(
    of_oxm_bsn_udf3_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_udf3_masked_value_mask_set(
    of_oxm_bsn_udf3_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_udf3_masked_value_mask_get(
    of_oxm_bsn_udf3_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_udf4 */

extern void of_oxm_bsn_udf4_value_set(
    of_oxm_bsn_udf4_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf4_value_get(
    of_oxm_bsn_udf4_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_udf4_masked */

extern void of_oxm_bsn_udf4_masked_value_set(
    of_oxm_bsn_udf4_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf4_masked_value_get(
    of_oxm_bsn_udf4_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_udf4_masked_value_mask_set(
    of_oxm_bsn_udf4_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_udf4_masked_value_mask_get(
    of_oxm_bsn_udf4_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_udf5 */

extern void of_oxm_bsn_udf5_value_set(
    of_oxm_bsn_udf5_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf5_value_get(
    of_oxm_bsn_udf5_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_udf5_masked */

extern void of_oxm_bsn_udf5_masked_value_set(
    of_oxm_bsn_udf5_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf5_masked_value_get(
    of_oxm_bsn_udf5_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_udf5_masked_value_mask_set(
    of_oxm_bsn_udf5_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_udf5_masked_value_mask_get(
    of_oxm_bsn_udf5_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_udf6 */

extern void of_oxm_bsn_udf6_value_set(
    of_oxm_bsn_udf6_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf6_value_get(
    of_oxm_bsn_udf6_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_udf6_masked */

extern void of_oxm_bsn_udf6_masked_value_set(
    of_oxm_bsn_udf6_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf6_masked_value_get(
    of_oxm_bsn_udf6_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_udf6_masked_value_mask_set(
    of_oxm_bsn_udf6_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_udf6_masked_value_mask_get(
    of_oxm_bsn_udf6_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_udf7 */

extern void of_oxm_bsn_udf7_value_set(
    of_oxm_bsn_udf7_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf7_value_get(
    of_oxm_bsn_udf7_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_udf7_masked */

extern void of_oxm_bsn_udf7_masked_value_set(
    of_oxm_bsn_udf7_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_udf7_masked_value_get(
    of_oxm_bsn_udf7_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_udf7_masked_value_mask_set(
    of_oxm_bsn_udf7_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_udf7_masked_value_mask_get(
    of_oxm_bsn_udf7_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_vlan_xlate_port_group_id */

extern void of_oxm_bsn_vlan_xlate_port_group_id_value_set(
    of_oxm_bsn_vlan_xlate_port_group_id_t *obj,
    uint32_t value);
extern void of_oxm_bsn_vlan_xlate_port_group_id_value_get(
    of_oxm_bsn_vlan_xlate_port_group_id_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_vlan_xlate_port_group_id_masked */

extern void of_oxm_bsn_vlan_xlate_port_group_id_masked_value_set(
    of_oxm_bsn_vlan_xlate_port_group_id_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_vlan_xlate_port_group_id_masked_value_get(
    of_oxm_bsn_vlan_xlate_port_group_id_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_vlan_xlate_port_group_id_masked_value_mask_set(
    of_oxm_bsn_vlan_xlate_port_group_id_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_vlan_xlate_port_group_id_masked_value_mask_get(
    of_oxm_bsn_vlan_xlate_port_group_id_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_bsn_vrf */

extern void of_oxm_bsn_vrf_value_set(
    of_oxm_bsn_vrf_t *obj,
    uint32_t value);
extern void of_oxm_bsn_vrf_value_get(
    of_oxm_bsn_vrf_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_bsn_vrf_masked */

extern void of_oxm_bsn_vrf_masked_value_set(
    of_oxm_bsn_vrf_masked_t *obj,
    uint32_t value);
extern void of_oxm_bsn_vrf_masked_value_get(
    of_oxm_bsn_vrf_masked_t *obj,
    uint32_t *value);

extern void of_oxm_bsn_vrf_masked_value_mask_set(
    of_oxm_bsn_vrf_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_bsn_vrf_masked_value_mask_get(
    of_oxm_bsn_vrf_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_eth_dst */

extern void of_oxm_eth_dst_value_set(
    of_oxm_eth_dst_t *obj,
    of_mac_addr_t value);
extern void of_oxm_eth_dst_value_get(
    of_oxm_eth_dst_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_oxm_eth_dst_masked */

extern void of_oxm_eth_dst_masked_value_set(
    of_oxm_eth_dst_masked_t *obj,
    of_mac_addr_t value);
extern void of_oxm_eth_dst_masked_value_get(
    of_oxm_eth_dst_masked_t *obj,
    of_mac_addr_t *value);

extern void of_oxm_eth_dst_masked_value_mask_set(
    of_oxm_eth_dst_masked_t *obj,
    of_mac_addr_t value_mask);
extern void of_oxm_eth_dst_masked_value_mask_get(
    of_oxm_eth_dst_masked_t *obj,
    of_mac_addr_t *value_mask);

/* Unified accessor functions for of_oxm_eth_src */

extern void of_oxm_eth_src_value_set(
    of_oxm_eth_src_t *obj,
    of_mac_addr_t value);
extern void of_oxm_eth_src_value_get(
    of_oxm_eth_src_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_oxm_eth_src_masked */

extern void of_oxm_eth_src_masked_value_set(
    of_oxm_eth_src_masked_t *obj,
    of_mac_addr_t value);
extern void of_oxm_eth_src_masked_value_get(
    of_oxm_eth_src_masked_t *obj,
    of_mac_addr_t *value);

extern void of_oxm_eth_src_masked_value_mask_set(
    of_oxm_eth_src_masked_t *obj,
    of_mac_addr_t value_mask);
extern void of_oxm_eth_src_masked_value_mask_get(
    of_oxm_eth_src_masked_t *obj,
    of_mac_addr_t *value_mask);

/* Unified accessor functions for of_oxm_eth_type */

extern void of_oxm_eth_type_value_set(
    of_oxm_eth_type_t *obj,
    uint16_t value);
extern void of_oxm_eth_type_value_get(
    of_oxm_eth_type_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_oxm_eth_type_masked */

extern void of_oxm_eth_type_masked_value_set(
    of_oxm_eth_type_masked_t *obj,
    uint16_t value);
extern void of_oxm_eth_type_masked_value_get(
    of_oxm_eth_type_masked_t *obj,
    uint16_t *value);

extern void of_oxm_eth_type_masked_value_mask_set(
    of_oxm_eth_type_masked_t *obj,
    uint16_t value_mask);
extern void of_oxm_eth_type_masked_value_mask_get(
    of_oxm_eth_type_masked_t *obj,
    uint16_t *value_mask);

/* Unified accessor functions for of_oxm_icmpv4_code */

extern void of_oxm_icmpv4_code_value_set(
    of_oxm_icmpv4_code_t *obj,
    uint8_t value);
extern void of_oxm_icmpv4_code_value_get(
    of_oxm_icmpv4_code_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_icmpv4_code_masked */

extern void of_oxm_icmpv4_code_masked_value_set(
    of_oxm_icmpv4_code_masked_t *obj,
    uint8_t value);
extern void of_oxm_icmpv4_code_masked_value_get(
    of_oxm_icmpv4_code_masked_t *obj,
    uint8_t *value);

extern void of_oxm_icmpv4_code_masked_value_mask_set(
    of_oxm_icmpv4_code_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_icmpv4_code_masked_value_mask_get(
    of_oxm_icmpv4_code_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_icmpv4_type */

extern void of_oxm_icmpv4_type_value_set(
    of_oxm_icmpv4_type_t *obj,
    uint8_t value);
extern void of_oxm_icmpv4_type_value_get(
    of_oxm_icmpv4_type_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_icmpv4_type_masked */

extern void of_oxm_icmpv4_type_masked_value_set(
    of_oxm_icmpv4_type_masked_t *obj,
    uint8_t value);
extern void of_oxm_icmpv4_type_masked_value_get(
    of_oxm_icmpv4_type_masked_t *obj,
    uint8_t *value);

extern void of_oxm_icmpv4_type_masked_value_mask_set(
    of_oxm_icmpv4_type_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_icmpv4_type_masked_value_mask_get(
    of_oxm_icmpv4_type_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_icmpv6_code */

extern void of_oxm_icmpv6_code_value_set(
    of_oxm_icmpv6_code_t *obj,
    uint8_t value);
extern void of_oxm_icmpv6_code_value_get(
    of_oxm_icmpv6_code_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_icmpv6_code_masked */

extern void of_oxm_icmpv6_code_masked_value_set(
    of_oxm_icmpv6_code_masked_t *obj,
    uint8_t value);
extern void of_oxm_icmpv6_code_masked_value_get(
    of_oxm_icmpv6_code_masked_t *obj,
    uint8_t *value);

extern void of_oxm_icmpv6_code_masked_value_mask_set(
    of_oxm_icmpv6_code_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_icmpv6_code_masked_value_mask_get(
    of_oxm_icmpv6_code_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_icmpv6_type */

extern void of_oxm_icmpv6_type_value_set(
    of_oxm_icmpv6_type_t *obj,
    uint8_t value);
extern void of_oxm_icmpv6_type_value_get(
    of_oxm_icmpv6_type_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_icmpv6_type_masked */

extern void of_oxm_icmpv6_type_masked_value_set(
    of_oxm_icmpv6_type_masked_t *obj,
    uint8_t value);
extern void of_oxm_icmpv6_type_masked_value_get(
    of_oxm_icmpv6_type_masked_t *obj,
    uint8_t *value);

extern void of_oxm_icmpv6_type_masked_value_mask_set(
    of_oxm_icmpv6_type_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_icmpv6_type_masked_value_mask_get(
    of_oxm_icmpv6_type_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_in_phy_port */

extern void of_oxm_in_phy_port_value_set(
    of_oxm_in_phy_port_t *obj,
    of_port_no_t value);
extern void of_oxm_in_phy_port_value_get(
    of_oxm_in_phy_port_t *obj,
    of_port_no_t *value);

/* Unified accessor functions for of_oxm_in_phy_port_masked */

extern void of_oxm_in_phy_port_masked_value_set(
    of_oxm_in_phy_port_masked_t *obj,
    of_port_no_t value);
extern void of_oxm_in_phy_port_masked_value_get(
    of_oxm_in_phy_port_masked_t *obj,
    of_port_no_t *value);

extern void of_oxm_in_phy_port_masked_value_mask_set(
    of_oxm_in_phy_port_masked_t *obj,
    of_port_no_t value_mask);
extern void of_oxm_in_phy_port_masked_value_mask_get(
    of_oxm_in_phy_port_masked_t *obj,
    of_port_no_t *value_mask);

/* Unified accessor functions for of_oxm_in_port */

extern void of_oxm_in_port_value_set(
    of_oxm_in_port_t *obj,
    of_port_no_t value);
extern void of_oxm_in_port_value_get(
    of_oxm_in_port_t *obj,
    of_port_no_t *value);

/* Unified accessor functions for of_oxm_in_port_masked */

extern void of_oxm_in_port_masked_value_set(
    of_oxm_in_port_masked_t *obj,
    of_port_no_t value);
extern void of_oxm_in_port_masked_value_get(
    of_oxm_in_port_masked_t *obj,
    of_port_no_t *value);

extern void of_oxm_in_port_masked_value_mask_set(
    of_oxm_in_port_masked_t *obj,
    of_port_no_t value_mask);
extern void of_oxm_in_port_masked_value_mask_get(
    of_oxm_in_port_masked_t *obj,
    of_port_no_t *value_mask);

/* Unified accessor functions for of_oxm_ip_dscp */

extern void of_oxm_ip_dscp_value_set(
    of_oxm_ip_dscp_t *obj,
    uint8_t value);
extern void of_oxm_ip_dscp_value_get(
    of_oxm_ip_dscp_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_ip_dscp_masked */

extern void of_oxm_ip_dscp_masked_value_set(
    of_oxm_ip_dscp_masked_t *obj,
    uint8_t value);
extern void of_oxm_ip_dscp_masked_value_get(
    of_oxm_ip_dscp_masked_t *obj,
    uint8_t *value);

extern void of_oxm_ip_dscp_masked_value_mask_set(
    of_oxm_ip_dscp_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_ip_dscp_masked_value_mask_get(
    of_oxm_ip_dscp_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_ip_ecn */

extern void of_oxm_ip_ecn_value_set(
    of_oxm_ip_ecn_t *obj,
    uint8_t value);
extern void of_oxm_ip_ecn_value_get(
    of_oxm_ip_ecn_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_ip_ecn_masked */

extern void of_oxm_ip_ecn_masked_value_set(
    of_oxm_ip_ecn_masked_t *obj,
    uint8_t value);
extern void of_oxm_ip_ecn_masked_value_get(
    of_oxm_ip_ecn_masked_t *obj,
    uint8_t *value);

extern void of_oxm_ip_ecn_masked_value_mask_set(
    of_oxm_ip_ecn_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_ip_ecn_masked_value_mask_get(
    of_oxm_ip_ecn_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_ip_proto */

extern void of_oxm_ip_proto_value_set(
    of_oxm_ip_proto_t *obj,
    uint8_t value);
extern void of_oxm_ip_proto_value_get(
    of_oxm_ip_proto_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_ip_proto_masked */

extern void of_oxm_ip_proto_masked_value_set(
    of_oxm_ip_proto_masked_t *obj,
    uint8_t value);
extern void of_oxm_ip_proto_masked_value_get(
    of_oxm_ip_proto_masked_t *obj,
    uint8_t *value);

extern void of_oxm_ip_proto_masked_value_mask_set(
    of_oxm_ip_proto_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_ip_proto_masked_value_mask_get(
    of_oxm_ip_proto_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_ipv4_dst */

extern void of_oxm_ipv4_dst_value_set(
    of_oxm_ipv4_dst_t *obj,
    of_ipv4_t value);
extern void of_oxm_ipv4_dst_value_get(
    of_oxm_ipv4_dst_t *obj,
    of_ipv4_t *value);

/* Unified accessor functions for of_oxm_ipv4_dst_masked */

extern void of_oxm_ipv4_dst_masked_value_set(
    of_oxm_ipv4_dst_masked_t *obj,
    of_ipv4_t value);
extern void of_oxm_ipv4_dst_masked_value_get(
    of_oxm_ipv4_dst_masked_t *obj,
    of_ipv4_t *value);

extern void of_oxm_ipv4_dst_masked_value_mask_set(
    of_oxm_ipv4_dst_masked_t *obj,
    of_ipv4_t value_mask);
extern void of_oxm_ipv4_dst_masked_value_mask_get(
    of_oxm_ipv4_dst_masked_t *obj,
    of_ipv4_t *value_mask);

/* Unified accessor functions for of_oxm_ipv4_src */

extern void of_oxm_ipv4_src_value_set(
    of_oxm_ipv4_src_t *obj,
    of_ipv4_t value);
extern void of_oxm_ipv4_src_value_get(
    of_oxm_ipv4_src_t *obj,
    of_ipv4_t *value);

/* Unified accessor functions for of_oxm_ipv4_src_masked */

extern void of_oxm_ipv4_src_masked_value_set(
    of_oxm_ipv4_src_masked_t *obj,
    of_ipv4_t value);
extern void of_oxm_ipv4_src_masked_value_get(
    of_oxm_ipv4_src_masked_t *obj,
    of_ipv4_t *value);

extern void of_oxm_ipv4_src_masked_value_mask_set(
    of_oxm_ipv4_src_masked_t *obj,
    of_ipv4_t value_mask);
extern void of_oxm_ipv4_src_masked_value_mask_get(
    of_oxm_ipv4_src_masked_t *obj,
    of_ipv4_t *value_mask);

/* Unified accessor functions for of_oxm_ipv6_dst */

extern void of_oxm_ipv6_dst_value_set(
    of_oxm_ipv6_dst_t *obj,
    of_ipv6_t value);
extern void of_oxm_ipv6_dst_value_get(
    of_oxm_ipv6_dst_t *obj,
    of_ipv6_t *value);

/* Unified accessor functions for of_oxm_ipv6_dst_masked */

extern void of_oxm_ipv6_dst_masked_value_set(
    of_oxm_ipv6_dst_masked_t *obj,
    of_ipv6_t value);
extern void of_oxm_ipv6_dst_masked_value_get(
    of_oxm_ipv6_dst_masked_t *obj,
    of_ipv6_t *value);

extern void of_oxm_ipv6_dst_masked_value_mask_set(
    of_oxm_ipv6_dst_masked_t *obj,
    of_ipv6_t value_mask);
extern void of_oxm_ipv6_dst_masked_value_mask_get(
    of_oxm_ipv6_dst_masked_t *obj,
    of_ipv6_t *value_mask);

/* Unified accessor functions for of_oxm_ipv6_exthdr */

extern void of_oxm_ipv6_exthdr_value_set(
    of_oxm_ipv6_exthdr_t *obj,
    uint16_t value);
extern void of_oxm_ipv6_exthdr_value_get(
    of_oxm_ipv6_exthdr_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_oxm_ipv6_exthdr_masked */

extern void of_oxm_ipv6_exthdr_masked_value_set(
    of_oxm_ipv6_exthdr_masked_t *obj,
    uint16_t value);
extern void of_oxm_ipv6_exthdr_masked_value_get(
    of_oxm_ipv6_exthdr_masked_t *obj,
    uint16_t *value);

extern void of_oxm_ipv6_exthdr_masked_value_mask_set(
    of_oxm_ipv6_exthdr_masked_t *obj,
    uint16_t value_mask);
extern void of_oxm_ipv6_exthdr_masked_value_mask_get(
    of_oxm_ipv6_exthdr_masked_t *obj,
    uint16_t *value_mask);

/* Unified accessor functions for of_oxm_ipv6_flabel */

extern void of_oxm_ipv6_flabel_value_set(
    of_oxm_ipv6_flabel_t *obj,
    uint32_t value);
extern void of_oxm_ipv6_flabel_value_get(
    of_oxm_ipv6_flabel_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_ipv6_flabel_masked */

extern void of_oxm_ipv6_flabel_masked_value_set(
    of_oxm_ipv6_flabel_masked_t *obj,
    uint32_t value);
extern void of_oxm_ipv6_flabel_masked_value_get(
    of_oxm_ipv6_flabel_masked_t *obj,
    uint32_t *value);

extern void of_oxm_ipv6_flabel_masked_value_mask_set(
    of_oxm_ipv6_flabel_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_ipv6_flabel_masked_value_mask_get(
    of_oxm_ipv6_flabel_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_ipv6_nd_sll */

extern void of_oxm_ipv6_nd_sll_value_set(
    of_oxm_ipv6_nd_sll_t *obj,
    of_mac_addr_t value);
extern void of_oxm_ipv6_nd_sll_value_get(
    of_oxm_ipv6_nd_sll_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_oxm_ipv6_nd_sll_masked */

extern void of_oxm_ipv6_nd_sll_masked_value_set(
    of_oxm_ipv6_nd_sll_masked_t *obj,
    of_mac_addr_t value);
extern void of_oxm_ipv6_nd_sll_masked_value_get(
    of_oxm_ipv6_nd_sll_masked_t *obj,
    of_mac_addr_t *value);

extern void of_oxm_ipv6_nd_sll_masked_value_mask_set(
    of_oxm_ipv6_nd_sll_masked_t *obj,
    of_mac_addr_t value_mask);
extern void of_oxm_ipv6_nd_sll_masked_value_mask_get(
    of_oxm_ipv6_nd_sll_masked_t *obj,
    of_mac_addr_t *value_mask);

/* Unified accessor functions for of_oxm_ipv6_nd_target */

extern void of_oxm_ipv6_nd_target_value_set(
    of_oxm_ipv6_nd_target_t *obj,
    of_ipv6_t value);
extern void of_oxm_ipv6_nd_target_value_get(
    of_oxm_ipv6_nd_target_t *obj,
    of_ipv6_t *value);

/* Unified accessor functions for of_oxm_ipv6_nd_target_masked */

extern void of_oxm_ipv6_nd_target_masked_value_set(
    of_oxm_ipv6_nd_target_masked_t *obj,
    of_ipv6_t value);
extern void of_oxm_ipv6_nd_target_masked_value_get(
    of_oxm_ipv6_nd_target_masked_t *obj,
    of_ipv6_t *value);

extern void of_oxm_ipv6_nd_target_masked_value_mask_set(
    of_oxm_ipv6_nd_target_masked_t *obj,
    of_ipv6_t value_mask);
extern void of_oxm_ipv6_nd_target_masked_value_mask_get(
    of_oxm_ipv6_nd_target_masked_t *obj,
    of_ipv6_t *value_mask);

/* Unified accessor functions for of_oxm_ipv6_nd_tll */

extern void of_oxm_ipv6_nd_tll_value_set(
    of_oxm_ipv6_nd_tll_t *obj,
    of_mac_addr_t value);
extern void of_oxm_ipv6_nd_tll_value_get(
    of_oxm_ipv6_nd_tll_t *obj,
    of_mac_addr_t *value);

/* Unified accessor functions for of_oxm_ipv6_nd_tll_masked */

extern void of_oxm_ipv6_nd_tll_masked_value_set(
    of_oxm_ipv6_nd_tll_masked_t *obj,
    of_mac_addr_t value);
extern void of_oxm_ipv6_nd_tll_masked_value_get(
    of_oxm_ipv6_nd_tll_masked_t *obj,
    of_mac_addr_t *value);

extern void of_oxm_ipv6_nd_tll_masked_value_mask_set(
    of_oxm_ipv6_nd_tll_masked_t *obj,
    of_mac_addr_t value_mask);
extern void of_oxm_ipv6_nd_tll_masked_value_mask_get(
    of_oxm_ipv6_nd_tll_masked_t *obj,
    of_mac_addr_t *value_mask);

/* Unified accessor functions for of_oxm_ipv6_src */

extern void of_oxm_ipv6_src_value_set(
    of_oxm_ipv6_src_t *obj,
    of_ipv6_t value);
extern void of_oxm_ipv6_src_value_get(
    of_oxm_ipv6_src_t *obj,
    of_ipv6_t *value);

/* Unified accessor functions for of_oxm_ipv6_src_masked */

extern void of_oxm_ipv6_src_masked_value_set(
    of_oxm_ipv6_src_masked_t *obj,
    of_ipv6_t value);
extern void of_oxm_ipv6_src_masked_value_get(
    of_oxm_ipv6_src_masked_t *obj,
    of_ipv6_t *value);

extern void of_oxm_ipv6_src_masked_value_mask_set(
    of_oxm_ipv6_src_masked_t *obj,
    of_ipv6_t value_mask);
extern void of_oxm_ipv6_src_masked_value_mask_get(
    of_oxm_ipv6_src_masked_t *obj,
    of_ipv6_t *value_mask);

/* Unified accessor functions for of_oxm_metadata */

extern void of_oxm_metadata_value_set(
    of_oxm_metadata_t *obj,
    uint64_t value);
extern void of_oxm_metadata_value_get(
    of_oxm_metadata_t *obj,
    uint64_t *value);

/* Unified accessor functions for of_oxm_metadata_masked */

extern void of_oxm_metadata_masked_value_set(
    of_oxm_metadata_masked_t *obj,
    uint64_t value);
extern void of_oxm_metadata_masked_value_get(
    of_oxm_metadata_masked_t *obj,
    uint64_t *value);

extern void of_oxm_metadata_masked_value_mask_set(
    of_oxm_metadata_masked_t *obj,
    uint64_t value_mask);
extern void of_oxm_metadata_masked_value_mask_get(
    of_oxm_metadata_masked_t *obj,
    uint64_t *value_mask);

/* Unified accessor functions for of_oxm_mpls_bos */

extern void of_oxm_mpls_bos_value_set(
    of_oxm_mpls_bos_t *obj,
    uint8_t value);
extern void of_oxm_mpls_bos_value_get(
    of_oxm_mpls_bos_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_mpls_bos_masked */

extern void of_oxm_mpls_bos_masked_value_set(
    of_oxm_mpls_bos_masked_t *obj,
    uint8_t value);
extern void of_oxm_mpls_bos_masked_value_get(
    of_oxm_mpls_bos_masked_t *obj,
    uint8_t *value);

extern void of_oxm_mpls_bos_masked_value_mask_set(
    of_oxm_mpls_bos_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_mpls_bos_masked_value_mask_get(
    of_oxm_mpls_bos_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_mpls_label */

extern void of_oxm_mpls_label_value_set(
    of_oxm_mpls_label_t *obj,
    uint32_t value);
extern void of_oxm_mpls_label_value_get(
    of_oxm_mpls_label_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_oxm_mpls_label_masked */

extern void of_oxm_mpls_label_masked_value_set(
    of_oxm_mpls_label_masked_t *obj,
    uint32_t value);
extern void of_oxm_mpls_label_masked_value_get(
    of_oxm_mpls_label_masked_t *obj,
    uint32_t *value);

extern void of_oxm_mpls_label_masked_value_mask_set(
    of_oxm_mpls_label_masked_t *obj,
    uint32_t value_mask);
extern void of_oxm_mpls_label_masked_value_mask_get(
    of_oxm_mpls_label_masked_t *obj,
    uint32_t *value_mask);

/* Unified accessor functions for of_oxm_mpls_tc */

extern void of_oxm_mpls_tc_value_set(
    of_oxm_mpls_tc_t *obj,
    uint8_t value);
extern void of_oxm_mpls_tc_value_get(
    of_oxm_mpls_tc_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_mpls_tc_masked */

extern void of_oxm_mpls_tc_masked_value_set(
    of_oxm_mpls_tc_masked_t *obj,
    uint8_t value);
extern void of_oxm_mpls_tc_masked_value_get(
    of_oxm_mpls_tc_masked_t *obj,
    uint8_t *value);

extern void of_oxm_mpls_tc_masked_value_mask_set(
    of_oxm_mpls_tc_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_mpls_tc_masked_value_mask_get(
    of_oxm_mpls_tc_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_pbb_uca */

extern void of_oxm_pbb_uca_value_set(
    of_oxm_pbb_uca_t *obj,
    uint8_t value);
extern void of_oxm_pbb_uca_value_get(
    of_oxm_pbb_uca_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_pbb_uca_masked */

extern void of_oxm_pbb_uca_masked_value_set(
    of_oxm_pbb_uca_masked_t *obj,
    uint8_t value);
extern void of_oxm_pbb_uca_masked_value_get(
    of_oxm_pbb_uca_masked_t *obj,
    uint8_t *value);

extern void of_oxm_pbb_uca_masked_value_mask_set(
    of_oxm_pbb_uca_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_pbb_uca_masked_value_mask_get(
    of_oxm_pbb_uca_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_sctp_dst */

extern void of_oxm_sctp_dst_value_set(
    of_oxm_sctp_dst_t *obj,
    uint16_t value);
extern void of_oxm_sctp_dst_value_get(
    of_oxm_sctp_dst_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_oxm_sctp_dst_masked */

extern void of_oxm_sctp_dst_masked_value_set(
    of_oxm_sctp_dst_masked_t *obj,
    uint16_t value);
extern void of_oxm_sctp_dst_masked_value_get(
    of_oxm_sctp_dst_masked_t *obj,
    uint16_t *value);

extern void of_oxm_sctp_dst_masked_value_mask_set(
    of_oxm_sctp_dst_masked_t *obj,
    uint16_t value_mask);
extern void of_oxm_sctp_dst_masked_value_mask_get(
    of_oxm_sctp_dst_masked_t *obj,
    uint16_t *value_mask);

/* Unified accessor functions for of_oxm_sctp_src */

extern void of_oxm_sctp_src_value_set(
    of_oxm_sctp_src_t *obj,
    uint16_t value);
extern void of_oxm_sctp_src_value_get(
    of_oxm_sctp_src_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_oxm_sctp_src_masked */

extern void of_oxm_sctp_src_masked_value_set(
    of_oxm_sctp_src_masked_t *obj,
    uint16_t value);
extern void of_oxm_sctp_src_masked_value_get(
    of_oxm_sctp_src_masked_t *obj,
    uint16_t *value);

extern void of_oxm_sctp_src_masked_value_mask_set(
    of_oxm_sctp_src_masked_t *obj,
    uint16_t value_mask);
extern void of_oxm_sctp_src_masked_value_mask_get(
    of_oxm_sctp_src_masked_t *obj,
    uint16_t *value_mask);

/* Unified accessor functions for of_oxm_tcp_dst */

extern void of_oxm_tcp_dst_value_set(
    of_oxm_tcp_dst_t *obj,
    uint16_t value);
extern void of_oxm_tcp_dst_value_get(
    of_oxm_tcp_dst_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_oxm_tcp_dst_masked */

extern void of_oxm_tcp_dst_masked_value_set(
    of_oxm_tcp_dst_masked_t *obj,
    uint16_t value);
extern void of_oxm_tcp_dst_masked_value_get(
    of_oxm_tcp_dst_masked_t *obj,
    uint16_t *value);

extern void of_oxm_tcp_dst_masked_value_mask_set(
    of_oxm_tcp_dst_masked_t *obj,
    uint16_t value_mask);
extern void of_oxm_tcp_dst_masked_value_mask_get(
    of_oxm_tcp_dst_masked_t *obj,
    uint16_t *value_mask);

/* Unified accessor functions for of_oxm_tcp_src */

extern void of_oxm_tcp_src_value_set(
    of_oxm_tcp_src_t *obj,
    uint16_t value);
extern void of_oxm_tcp_src_value_get(
    of_oxm_tcp_src_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_oxm_tcp_src_masked */

extern void of_oxm_tcp_src_masked_value_set(
    of_oxm_tcp_src_masked_t *obj,
    uint16_t value);
extern void of_oxm_tcp_src_masked_value_get(
    of_oxm_tcp_src_masked_t *obj,
    uint16_t *value);

extern void of_oxm_tcp_src_masked_value_mask_set(
    of_oxm_tcp_src_masked_t *obj,
    uint16_t value_mask);
extern void of_oxm_tcp_src_masked_value_mask_get(
    of_oxm_tcp_src_masked_t *obj,
    uint16_t *value_mask);

/* Unified accessor functions for of_oxm_tunnel_id */

extern void of_oxm_tunnel_id_value_set(
    of_oxm_tunnel_id_t *obj,
    uint64_t value);
extern void of_oxm_tunnel_id_value_get(
    of_oxm_tunnel_id_t *obj,
    uint64_t *value);

/* Unified accessor functions for of_oxm_tunnel_id_masked */

extern void of_oxm_tunnel_id_masked_value_set(
    of_oxm_tunnel_id_masked_t *obj,
    uint64_t value);
extern void of_oxm_tunnel_id_masked_value_get(
    of_oxm_tunnel_id_masked_t *obj,
    uint64_t *value);

extern void of_oxm_tunnel_id_masked_value_mask_set(
    of_oxm_tunnel_id_masked_t *obj,
    uint64_t value_mask);
extern void of_oxm_tunnel_id_masked_value_mask_get(
    of_oxm_tunnel_id_masked_t *obj,
    uint64_t *value_mask);

/* Unified accessor functions for of_oxm_tunnel_ipv4_dst */

extern void of_oxm_tunnel_ipv4_dst_value_set(
    of_oxm_tunnel_ipv4_dst_t *obj,
    of_ipv4_t value);
extern void of_oxm_tunnel_ipv4_dst_value_get(
    of_oxm_tunnel_ipv4_dst_t *obj,
    of_ipv4_t *value);

/* Unified accessor functions for of_oxm_tunnel_ipv4_dst_masked */

extern void of_oxm_tunnel_ipv4_dst_masked_value_set(
    of_oxm_tunnel_ipv4_dst_masked_t *obj,
    of_ipv4_t value);
extern void of_oxm_tunnel_ipv4_dst_masked_value_get(
    of_oxm_tunnel_ipv4_dst_masked_t *obj,
    of_ipv4_t *value);

extern void of_oxm_tunnel_ipv4_dst_masked_value_mask_set(
    of_oxm_tunnel_ipv4_dst_masked_t *obj,
    of_ipv4_t value_mask);
extern void of_oxm_tunnel_ipv4_dst_masked_value_mask_get(
    of_oxm_tunnel_ipv4_dst_masked_t *obj,
    of_ipv4_t *value_mask);

/* Unified accessor functions for of_oxm_tunnel_ipv4_src */

extern void of_oxm_tunnel_ipv4_src_value_set(
    of_oxm_tunnel_ipv4_src_t *obj,
    of_ipv4_t value);
extern void of_oxm_tunnel_ipv4_src_value_get(
    of_oxm_tunnel_ipv4_src_t *obj,
    of_ipv4_t *value);

/* Unified accessor functions for of_oxm_tunnel_ipv4_src_masked */

extern void of_oxm_tunnel_ipv4_src_masked_value_set(
    of_oxm_tunnel_ipv4_src_masked_t *obj,
    of_ipv4_t value);
extern void of_oxm_tunnel_ipv4_src_masked_value_get(
    of_oxm_tunnel_ipv4_src_masked_t *obj,
    of_ipv4_t *value);

extern void of_oxm_tunnel_ipv4_src_masked_value_mask_set(
    of_oxm_tunnel_ipv4_src_masked_t *obj,
    of_ipv4_t value_mask);
extern void of_oxm_tunnel_ipv4_src_masked_value_mask_get(
    of_oxm_tunnel_ipv4_src_masked_t *obj,
    of_ipv4_t *value_mask);

/* Unified accessor functions for of_oxm_udp_dst */

extern void of_oxm_udp_dst_value_set(
    of_oxm_udp_dst_t *obj,
    uint16_t value);
extern void of_oxm_udp_dst_value_get(
    of_oxm_udp_dst_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_oxm_udp_dst_masked */

extern void of_oxm_udp_dst_masked_value_set(
    of_oxm_udp_dst_masked_t *obj,
    uint16_t value);
extern void of_oxm_udp_dst_masked_value_get(
    of_oxm_udp_dst_masked_t *obj,
    uint16_t *value);

extern void of_oxm_udp_dst_masked_value_mask_set(
    of_oxm_udp_dst_masked_t *obj,
    uint16_t value_mask);
extern void of_oxm_udp_dst_masked_value_mask_get(
    of_oxm_udp_dst_masked_t *obj,
    uint16_t *value_mask);

/* Unified accessor functions for of_oxm_udp_src */

extern void of_oxm_udp_src_value_set(
    of_oxm_udp_src_t *obj,
    uint16_t value);
extern void of_oxm_udp_src_value_get(
    of_oxm_udp_src_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_oxm_udp_src_masked */

extern void of_oxm_udp_src_masked_value_set(
    of_oxm_udp_src_masked_t *obj,
    uint16_t value);
extern void of_oxm_udp_src_masked_value_get(
    of_oxm_udp_src_masked_t *obj,
    uint16_t *value);

extern void of_oxm_udp_src_masked_value_mask_set(
    of_oxm_udp_src_masked_t *obj,
    uint16_t value_mask);
extern void of_oxm_udp_src_masked_value_mask_get(
    of_oxm_udp_src_masked_t *obj,
    uint16_t *value_mask);

/* Unified accessor functions for of_oxm_vlan_pcp */

extern void of_oxm_vlan_pcp_value_set(
    of_oxm_vlan_pcp_t *obj,
    uint8_t value);
extern void of_oxm_vlan_pcp_value_get(
    of_oxm_vlan_pcp_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_oxm_vlan_pcp_masked */

extern void of_oxm_vlan_pcp_masked_value_set(
    of_oxm_vlan_pcp_masked_t *obj,
    uint8_t value);
extern void of_oxm_vlan_pcp_masked_value_get(
    of_oxm_vlan_pcp_masked_t *obj,
    uint8_t *value);

extern void of_oxm_vlan_pcp_masked_value_mask_set(
    of_oxm_vlan_pcp_masked_t *obj,
    uint8_t value_mask);
extern void of_oxm_vlan_pcp_masked_value_mask_get(
    of_oxm_vlan_pcp_masked_t *obj,
    uint8_t *value_mask);

/* Unified accessor functions for of_oxm_vlan_vid */

extern void of_oxm_vlan_vid_value_set(
    of_oxm_vlan_vid_t *obj,
    uint16_t value);
extern void of_oxm_vlan_vid_value_get(
    of_oxm_vlan_vid_t *obj,
    uint16_t *value);

/* Unified accessor functions for of_oxm_vlan_vid_masked */

extern void of_oxm_vlan_vid_masked_value_set(
    of_oxm_vlan_vid_masked_t *obj,
    uint16_t value);
extern void of_oxm_vlan_vid_masked_value_get(
    of_oxm_vlan_vid_masked_t *obj,
    uint16_t *value);

extern void of_oxm_vlan_vid_masked_value_mask_set(
    of_oxm_vlan_vid_masked_t *obj,
    uint16_t value_mask);
extern void of_oxm_vlan_vid_masked_value_mask_get(
    of_oxm_vlan_vid_masked_t *obj,
    uint16_t *value_mask);

/* Unified accessor functions for of_packet_queue */

extern void of_packet_queue_queue_id_set(
    of_packet_queue_t *obj,
    uint32_t queue_id);
extern void of_packet_queue_queue_id_get(
    of_packet_queue_t *obj,
    uint32_t *queue_id);

extern void of_packet_queue_port_set(
    of_packet_queue_t *obj,
    of_port_no_t port);
extern void of_packet_queue_port_get(
    of_packet_queue_t *obj,
    of_port_no_t *port);

extern int WARN_UNUSED_RESULT of_packet_queue_properties_set(
    of_packet_queue_t *obj,
    of_list_queue_prop_t *properties);
extern void of_packet_queue_properties_bind(
    of_packet_queue_t *obj,
    of_list_queue_prop_t *properties);
extern of_list_queue_prop_t *of_packet_queue_properties_get(
    of_packet_queue_t *obj);

/* Unified accessor functions for of_port_desc */

extern void of_port_desc_port_no_set(
    of_port_desc_t *obj,
    of_port_no_t port_no);
extern void of_port_desc_port_no_get(
    of_port_desc_t *obj,
    of_port_no_t *port_no);

extern void of_port_desc_hw_addr_set(
    of_port_desc_t *obj,
    of_mac_addr_t hw_addr);
extern void of_port_desc_hw_addr_get(
    of_port_desc_t *obj,
    of_mac_addr_t *hw_addr);

extern void of_port_desc_name_set(
    of_port_desc_t *obj,
    of_port_name_t name);
extern void of_port_desc_name_get(
    of_port_desc_t *obj,
    of_port_name_t *name);

extern void of_port_desc_config_set(
    of_port_desc_t *obj,
    uint32_t config);
extern void of_port_desc_config_get(
    of_port_desc_t *obj,
    uint32_t *config);

extern void of_port_desc_state_set(
    of_port_desc_t *obj,
    uint32_t state);
extern void of_port_desc_state_get(
    of_port_desc_t *obj,
    uint32_t *state);

extern int WARN_UNUSED_RESULT of_port_desc_properties_set(
    of_port_desc_t *obj,
    of_list_port_desc_prop_t *properties);
extern void of_port_desc_properties_bind(
    of_port_desc_t *obj,
    of_list_port_desc_prop_t *properties);
extern of_list_port_desc_prop_t *of_port_desc_properties_get(
    of_port_desc_t *obj);

extern void of_port_desc_curr_set(
    of_port_desc_t *obj,
    uint32_t curr);
extern void of_port_desc_curr_get(
    of_port_desc_t *obj,
    uint32_t *curr);

extern void of_port_desc_advertised_set(
    of_port_desc_t *obj,
    uint32_t advertised);
extern void of_port_desc_advertised_get(
    of_port_desc_t *obj,
    uint32_t *advertised);

extern void of_port_desc_supported_set(
    of_port_desc_t *obj,
    uint32_t supported);
extern void of_port_desc_supported_get(
    of_port_desc_t *obj,
    uint32_t *supported);

extern void of_port_desc_peer_set(
    of_port_desc_t *obj,
    uint32_t peer);
extern void of_port_desc_peer_get(
    of_port_desc_t *obj,
    uint32_t *peer);

extern void of_port_desc_curr_speed_set(
    of_port_desc_t *obj,
    uint32_t curr_speed);
extern void of_port_desc_curr_speed_get(
    of_port_desc_t *obj,
    uint32_t *curr_speed);

extern void of_port_desc_max_speed_set(
    of_port_desc_t *obj,
    uint32_t max_speed);
extern void of_port_desc_max_speed_get(
    of_port_desc_t *obj,
    uint32_t *max_speed);

/* Unified accessor functions for of_port_desc_prop_bsn_uplink */

extern void of_port_desc_prop_bsn_uplink_experimenter_set(
    of_port_desc_prop_bsn_uplink_t *obj,
    uint32_t experimenter);
extern void of_port_desc_prop_bsn_uplink_experimenter_get(
    of_port_desc_prop_bsn_uplink_t *obj,
    uint32_t *experimenter);

extern void of_port_desc_prop_bsn_uplink_exp_type_set(
    of_port_desc_prop_bsn_uplink_t *obj,
    uint32_t exp_type);
extern void of_port_desc_prop_bsn_uplink_exp_type_get(
    of_port_desc_prop_bsn_uplink_t *obj,
    uint32_t *exp_type);

/* Unified accessor functions for of_port_desc_prop_ethernet */

extern void of_port_desc_prop_ethernet_curr_set(
    of_port_desc_prop_ethernet_t *obj,
    uint32_t curr);
extern void of_port_desc_prop_ethernet_curr_get(
    of_port_desc_prop_ethernet_t *obj,
    uint32_t *curr);

extern void of_port_desc_prop_ethernet_advertised_set(
    of_port_desc_prop_ethernet_t *obj,
    uint32_t advertised);
extern void of_port_desc_prop_ethernet_advertised_get(
    of_port_desc_prop_ethernet_t *obj,
    uint32_t *advertised);

extern void of_port_desc_prop_ethernet_supported_set(
    of_port_desc_prop_ethernet_t *obj,
    uint32_t supported);
extern void of_port_desc_prop_ethernet_supported_get(
    of_port_desc_prop_ethernet_t *obj,
    uint32_t *supported);

extern void of_port_desc_prop_ethernet_peer_set(
    of_port_desc_prop_ethernet_t *obj,
    uint32_t peer);
extern void of_port_desc_prop_ethernet_peer_get(
    of_port_desc_prop_ethernet_t *obj,
    uint32_t *peer);

extern void of_port_desc_prop_ethernet_curr_speed_set(
    of_port_desc_prop_ethernet_t *obj,
    uint32_t curr_speed);
extern void of_port_desc_prop_ethernet_curr_speed_get(
    of_port_desc_prop_ethernet_t *obj,
    uint32_t *curr_speed);

extern void of_port_desc_prop_ethernet_max_speed_set(
    of_port_desc_prop_ethernet_t *obj,
    uint32_t max_speed);
extern void of_port_desc_prop_ethernet_max_speed_get(
    of_port_desc_prop_ethernet_t *obj,
    uint32_t *max_speed);

/* Unified accessor functions for of_port_desc_prop_optical */

extern void of_port_desc_prop_optical_supported_set(
    of_port_desc_prop_optical_t *obj,
    uint32_t supported);
extern void of_port_desc_prop_optical_supported_get(
    of_port_desc_prop_optical_t *obj,
    uint32_t *supported);

extern void of_port_desc_prop_optical_tx_min_freq_lmda_set(
    of_port_desc_prop_optical_t *obj,
    uint32_t tx_min_freq_lmda);
extern void of_port_desc_prop_optical_tx_min_freq_lmda_get(
    of_port_desc_prop_optical_t *obj,
    uint32_t *tx_min_freq_lmda);

extern void of_port_desc_prop_optical_tx_max_freq_lmda_set(
    of_port_desc_prop_optical_t *obj,
    uint32_t tx_max_freq_lmda);
extern void of_port_desc_prop_optical_tx_max_freq_lmda_get(
    of_port_desc_prop_optical_t *obj,
    uint32_t *tx_max_freq_lmda);

extern void of_port_desc_prop_optical_tx_grid_freq_lmda_set(
    of_port_desc_prop_optical_t *obj,
    uint32_t tx_grid_freq_lmda);
extern void of_port_desc_prop_optical_tx_grid_freq_lmda_get(
    of_port_desc_prop_optical_t *obj,
    uint32_t *tx_grid_freq_lmda);

extern void of_port_desc_prop_optical_rx_min_freq_lmda_set(
    of_port_desc_prop_optical_t *obj,
    uint32_t rx_min_freq_lmda);
extern void of_port_desc_prop_optical_rx_min_freq_lmda_get(
    of_port_desc_prop_optical_t *obj,
    uint32_t *rx_min_freq_lmda);

extern void of_port_desc_prop_optical_rx_max_freq_lmda_set(
    of_port_desc_prop_optical_t *obj,
    uint32_t rx_max_freq_lmda);
extern void of_port_desc_prop_optical_rx_max_freq_lmda_get(
    of_port_desc_prop_optical_t *obj,
    uint32_t *rx_max_freq_lmda);

extern void of_port_desc_prop_optical_rx_grid_freq_lmda_set(
    of_port_desc_prop_optical_t *obj,
    uint32_t rx_grid_freq_lmda);
extern void of_port_desc_prop_optical_rx_grid_freq_lmda_get(
    of_port_desc_prop_optical_t *obj,
    uint32_t *rx_grid_freq_lmda);

extern void of_port_desc_prop_optical_tx_pwr_min_set(
    of_port_desc_prop_optical_t *obj,
    uint32_t tx_pwr_min);
extern void of_port_desc_prop_optical_tx_pwr_min_get(
    of_port_desc_prop_optical_t *obj,
    uint32_t *tx_pwr_min);

extern void of_port_desc_prop_optical_tx_pwr_max_set(
    of_port_desc_prop_optical_t *obj,
    uint32_t tx_pwr_max);
extern void of_port_desc_prop_optical_tx_pwr_max_get(
    of_port_desc_prop_optical_t *obj,
    uint32_t *tx_pwr_max);

/* Unified accessor functions for of_port_mod_prop_ethernet */

extern void of_port_mod_prop_ethernet_advertise_set(
    of_port_mod_prop_ethernet_t *obj,
    uint32_t advertise);
extern void of_port_mod_prop_ethernet_advertise_get(
    of_port_mod_prop_ethernet_t *obj,
    uint32_t *advertise);

/* Unified accessor functions for of_port_mod_prop_optical */

extern void of_port_mod_prop_optical_configure_set(
    of_port_mod_prop_optical_t *obj,
    uint32_t configure);
extern void of_port_mod_prop_optical_configure_get(
    of_port_mod_prop_optical_t *obj,
    uint32_t *configure);

extern void of_port_mod_prop_optical_freq_ldma_set(
    of_port_mod_prop_optical_t *obj,
    uint32_t freq_ldma);
extern void of_port_mod_prop_optical_freq_ldma_get(
    of_port_mod_prop_optical_t *obj,
    uint32_t *freq_ldma);

extern void of_port_mod_prop_optical_fl_offset_set(
    of_port_mod_prop_optical_t *obj,
    uint32_t fl_offset);
extern void of_port_mod_prop_optical_fl_offset_get(
    of_port_mod_prop_optical_t *obj,
    uint32_t *fl_offset);

extern void of_port_mod_prop_optical_grid_span_set(
    of_port_mod_prop_optical_t *obj,
    uint32_t grid_span);
extern void of_port_mod_prop_optical_grid_span_get(
    of_port_mod_prop_optical_t *obj,
    uint32_t *grid_span);

extern void of_port_mod_prop_optical_tx_pwr_set(
    of_port_mod_prop_optical_t *obj,
    uint32_t tx_pwr);
extern void of_port_mod_prop_optical_tx_pwr_get(
    of_port_mod_prop_optical_t *obj,
    uint32_t *tx_pwr);

/* Unified accessor functions for of_port_stats_entry */

extern void of_port_stats_entry_port_no_set(
    of_port_stats_entry_t *obj,
    of_port_no_t port_no);
extern void of_port_stats_entry_port_no_get(
    of_port_stats_entry_t *obj,
    of_port_no_t *port_no);

extern void of_port_stats_entry_duration_sec_set(
    of_port_stats_entry_t *obj,
    uint32_t duration_sec);
extern void of_port_stats_entry_duration_sec_get(
    of_port_stats_entry_t *obj,
    uint32_t *duration_sec);

extern void of_port_stats_entry_duration_nsec_set(
    of_port_stats_entry_t *obj,
    uint32_t duration_nsec);
extern void of_port_stats_entry_duration_nsec_get(
    of_port_stats_entry_t *obj,
    uint32_t *duration_nsec);

extern void of_port_stats_entry_rx_packets_set(
    of_port_stats_entry_t *obj,
    uint64_t rx_packets);
extern void of_port_stats_entry_rx_packets_get(
    of_port_stats_entry_t *obj,
    uint64_t *rx_packets);

extern void of_port_stats_entry_tx_packets_set(
    of_port_stats_entry_t *obj,
    uint64_t tx_packets);
extern void of_port_stats_entry_tx_packets_get(
    of_port_stats_entry_t *obj,
    uint64_t *tx_packets);

extern void of_port_stats_entry_rx_bytes_set(
    of_port_stats_entry_t *obj,
    uint64_t rx_bytes);
extern void of_port_stats_entry_rx_bytes_get(
    of_port_stats_entry_t *obj,
    uint64_t *rx_bytes);

extern void of_port_stats_entry_tx_bytes_set(
    of_port_stats_entry_t *obj,
    uint64_t tx_bytes);
extern void of_port_stats_entry_tx_bytes_get(
    of_port_stats_entry_t *obj,
    uint64_t *tx_bytes);

extern void of_port_stats_entry_rx_dropped_set(
    of_port_stats_entry_t *obj,
    uint64_t rx_dropped);
extern void of_port_stats_entry_rx_dropped_get(
    of_port_stats_entry_t *obj,
    uint64_t *rx_dropped);

extern void of_port_stats_entry_tx_dropped_set(
    of_port_stats_entry_t *obj,
    uint64_t tx_dropped);
extern void of_port_stats_entry_tx_dropped_get(
    of_port_stats_entry_t *obj,
    uint64_t *tx_dropped);

extern void of_port_stats_entry_rx_errors_set(
    of_port_stats_entry_t *obj,
    uint64_t rx_errors);
extern void of_port_stats_entry_rx_errors_get(
    of_port_stats_entry_t *obj,
    uint64_t *rx_errors);

extern void of_port_stats_entry_tx_errors_set(
    of_port_stats_entry_t *obj,
    uint64_t tx_errors);
extern void of_port_stats_entry_tx_errors_get(
    of_port_stats_entry_t *obj,
    uint64_t *tx_errors);

extern int WARN_UNUSED_RESULT of_port_stats_entry_properties_set(
    of_port_stats_entry_t *obj,
    of_list_port_stats_prop_t *properties);
extern void of_port_stats_entry_properties_bind(
    of_port_stats_entry_t *obj,
    of_list_port_stats_prop_t *properties);
extern of_list_port_stats_prop_t *of_port_stats_entry_properties_get(
    of_port_stats_entry_t *obj);

extern void of_port_stats_entry_rx_frame_err_set(
    of_port_stats_entry_t *obj,
    uint64_t rx_frame_err);
extern void of_port_stats_entry_rx_frame_err_get(
    of_port_stats_entry_t *obj,
    uint64_t *rx_frame_err);

extern void of_port_stats_entry_rx_over_err_set(
    of_port_stats_entry_t *obj,
    uint64_t rx_over_err);
extern void of_port_stats_entry_rx_over_err_get(
    of_port_stats_entry_t *obj,
    uint64_t *rx_over_err);

extern void of_port_stats_entry_rx_crc_err_set(
    of_port_stats_entry_t *obj,
    uint64_t rx_crc_err);
extern void of_port_stats_entry_rx_crc_err_get(
    of_port_stats_entry_t *obj,
    uint64_t *rx_crc_err);

extern void of_port_stats_entry_collisions_set(
    of_port_stats_entry_t *obj,
    uint64_t collisions);
extern void of_port_stats_entry_collisions_get(
    of_port_stats_entry_t *obj,
    uint64_t *collisions);

/* Unified accessor functions for of_port_stats_prop_ethernet */

extern void of_port_stats_prop_ethernet_rx_frame_err_set(
    of_port_stats_prop_ethernet_t *obj,
    uint64_t rx_frame_err);
extern void of_port_stats_prop_ethernet_rx_frame_err_get(
    of_port_stats_prop_ethernet_t *obj,
    uint64_t *rx_frame_err);

extern void of_port_stats_prop_ethernet_rx_over_err_set(
    of_port_stats_prop_ethernet_t *obj,
    uint64_t rx_over_err);
extern void of_port_stats_prop_ethernet_rx_over_err_get(
    of_port_stats_prop_ethernet_t *obj,
    uint64_t *rx_over_err);

extern void of_port_stats_prop_ethernet_rx_crc_err_set(
    of_port_stats_prop_ethernet_t *obj,
    uint64_t rx_crc_err);
extern void of_port_stats_prop_ethernet_rx_crc_err_get(
    of_port_stats_prop_ethernet_t *obj,
    uint64_t *rx_crc_err);

extern void of_port_stats_prop_ethernet_collisions_set(
    of_port_stats_prop_ethernet_t *obj,
    uint64_t collisions);
extern void of_port_stats_prop_ethernet_collisions_get(
    of_port_stats_prop_ethernet_t *obj,
    uint64_t *collisions);

/* Unified accessor functions for of_port_stats_prop_optical */

extern void of_port_stats_prop_optical_flags_set(
    of_port_stats_prop_optical_t *obj,
    uint32_t flags);
extern void of_port_stats_prop_optical_flags_get(
    of_port_stats_prop_optical_t *obj,
    uint32_t *flags);

extern void of_port_stats_prop_optical_tx_freq_lmda_set(
    of_port_stats_prop_optical_t *obj,
    uint32_t tx_freq_lmda);
extern void of_port_stats_prop_optical_tx_freq_lmda_get(
    of_port_stats_prop_optical_t *obj,
    uint32_t *tx_freq_lmda);

extern void of_port_stats_prop_optical_tx_offset_set(
    of_port_stats_prop_optical_t *obj,
    uint32_t tx_offset);
extern void of_port_stats_prop_optical_tx_offset_get(
    of_port_stats_prop_optical_t *obj,
    uint32_t *tx_offset);

extern void of_port_stats_prop_optical_tx_grid_span_set(
    of_port_stats_prop_optical_t *obj,
    uint32_t tx_grid_span);
extern void of_port_stats_prop_optical_tx_grid_span_get(
    of_port_stats_prop_optical_t *obj,
    uint32_t *tx_grid_span);

extern void of_port_stats_prop_optical_rx_freq_lmda_set(
    of_port_stats_prop_optical_t *obj,
    uint32_t rx_freq_lmda);
extern void of_port_stats_prop_optical_rx_freq_lmda_get(
    of_port_stats_prop_optical_t *obj,
    uint32_t *rx_freq_lmda);

extern void of_port_stats_prop_optical_rx_offset_set(
    of_port_stats_prop_optical_t *obj,
    uint32_t rx_offset);
extern void of_port_stats_prop_optical_rx_offset_get(
    of_port_stats_prop_optical_t *obj,
    uint32_t *rx_offset);

extern void of_port_stats_prop_optical_rx_grid_span_set(
    of_port_stats_prop_optical_t *obj,
    uint32_t rx_grid_span);
extern void of_port_stats_prop_optical_rx_grid_span_get(
    of_port_stats_prop_optical_t *obj,
    uint32_t *rx_grid_span);

extern void of_port_stats_prop_optical_tx_pwr_set(
    of_port_stats_prop_optical_t *obj,
    uint16_t tx_pwr);
extern void of_port_stats_prop_optical_tx_pwr_get(
    of_port_stats_prop_optical_t *obj,
    uint16_t *tx_pwr);

extern void of_port_stats_prop_optical_rx_pwr_set(
    of_port_stats_prop_optical_t *obj,
    uint16_t rx_pwr);
extern void of_port_stats_prop_optical_rx_pwr_get(
    of_port_stats_prop_optical_t *obj,
    uint16_t *rx_pwr);

extern void of_port_stats_prop_optical_bias_current_set(
    of_port_stats_prop_optical_t *obj,
    uint16_t bias_current);
extern void of_port_stats_prop_optical_bias_current_get(
    of_port_stats_prop_optical_t *obj,
    uint16_t *bias_current);

extern void of_port_stats_prop_optical_temperature_set(
    of_port_stats_prop_optical_t *obj,
    uint16_t temperature);
extern void of_port_stats_prop_optical_temperature_get(
    of_port_stats_prop_optical_t *obj,
    uint16_t *temperature);

/* Unified accessor functions for of_queue_desc */

extern void of_queue_desc_port_no_set(
    of_queue_desc_t *obj,
    uint32_t port_no);
extern void of_queue_desc_port_no_get(
    of_queue_desc_t *obj,
    uint32_t *port_no);

extern void of_queue_desc_queue_id_set(
    of_queue_desc_t *obj,
    uint32_t queue_id);
extern void of_queue_desc_queue_id_get(
    of_queue_desc_t *obj,
    uint32_t *queue_id);

extern int WARN_UNUSED_RESULT of_queue_desc_properties_set(
    of_queue_desc_t *obj,
    of_list_queue_desc_prop_t *properties);
extern void of_queue_desc_properties_bind(
    of_queue_desc_t *obj,
    of_list_queue_desc_prop_t *properties);
extern of_list_queue_desc_prop_t *of_queue_desc_properties_get(
    of_queue_desc_t *obj);

/* Unified accessor functions for of_queue_desc_prop_max_rate */

extern void of_queue_desc_prop_max_rate_rate_set(
    of_queue_desc_prop_max_rate_t *obj,
    uint16_t rate);
extern void of_queue_desc_prop_max_rate_rate_get(
    of_queue_desc_prop_max_rate_t *obj,
    uint16_t *rate);

/* Unified accessor functions for of_queue_desc_prop_min_rate */

extern void of_queue_desc_prop_min_rate_rate_set(
    of_queue_desc_prop_min_rate_t *obj,
    uint16_t rate);
extern void of_queue_desc_prop_min_rate_rate_get(
    of_queue_desc_prop_min_rate_t *obj,
    uint16_t *rate);

/* Unified accessor functions for of_queue_prop_max_rate */

extern void of_queue_prop_max_rate_rate_set(
    of_queue_prop_max_rate_t *obj,
    uint16_t rate);
extern void of_queue_prop_max_rate_rate_get(
    of_queue_prop_max_rate_t *obj,
    uint16_t *rate);

/* Unified accessor functions for of_queue_prop_min_rate */

extern void of_queue_prop_min_rate_rate_set(
    of_queue_prop_min_rate_t *obj,
    uint16_t rate);
extern void of_queue_prop_min_rate_rate_get(
    of_queue_prop_min_rate_t *obj,
    uint16_t *rate);

/* Unified accessor functions for of_queue_stats_entry */

extern void of_queue_stats_entry_port_no_set(
    of_queue_stats_entry_t *obj,
    of_port_no_t port_no);
extern void of_queue_stats_entry_port_no_get(
    of_queue_stats_entry_t *obj,
    of_port_no_t *port_no);

extern void of_queue_stats_entry_queue_id_set(
    of_queue_stats_entry_t *obj,
    uint32_t queue_id);
extern void of_queue_stats_entry_queue_id_get(
    of_queue_stats_entry_t *obj,
    uint32_t *queue_id);

extern void of_queue_stats_entry_tx_bytes_set(
    of_queue_stats_entry_t *obj,
    uint64_t tx_bytes);
extern void of_queue_stats_entry_tx_bytes_get(
    of_queue_stats_entry_t *obj,
    uint64_t *tx_bytes);

extern void of_queue_stats_entry_tx_packets_set(
    of_queue_stats_entry_t *obj,
    uint64_t tx_packets);
extern void of_queue_stats_entry_tx_packets_get(
    of_queue_stats_entry_t *obj,
    uint64_t *tx_packets);

extern void of_queue_stats_entry_tx_errors_set(
    of_queue_stats_entry_t *obj,
    uint64_t tx_errors);
extern void of_queue_stats_entry_tx_errors_get(
    of_queue_stats_entry_t *obj,
    uint64_t *tx_errors);

extern void of_queue_stats_entry_duration_sec_set(
    of_queue_stats_entry_t *obj,
    uint32_t duration_sec);
extern void of_queue_stats_entry_duration_sec_get(
    of_queue_stats_entry_t *obj,
    uint32_t *duration_sec);

extern void of_queue_stats_entry_duration_nsec_set(
    of_queue_stats_entry_t *obj,
    uint32_t duration_nsec);
extern void of_queue_stats_entry_duration_nsec_get(
    of_queue_stats_entry_t *obj,
    uint32_t *duration_nsec);

extern int WARN_UNUSED_RESULT of_queue_stats_entry_properties_set(
    of_queue_stats_entry_t *obj,
    of_list_queue_stats_prop_t *properties);
extern void of_queue_stats_entry_properties_bind(
    of_queue_stats_entry_t *obj,
    of_list_queue_stats_prop_t *properties);
extern of_list_queue_stats_prop_t *of_queue_stats_entry_properties_get(
    of_queue_stats_entry_t *obj);

/* Unified accessor functions for of_table_desc */

extern void of_table_desc_table_id_set(
    of_table_desc_t *obj,
    uint8_t table_id);
extern void of_table_desc_table_id_get(
    of_table_desc_t *obj,
    uint8_t *table_id);

extern void of_table_desc_config_set(
    of_table_desc_t *obj,
    uint32_t config);
extern void of_table_desc_config_get(
    of_table_desc_t *obj,
    uint32_t *config);

/* Unified accessor functions for of_table_feature_prop_apply_actions */

extern int WARN_UNUSED_RESULT of_table_feature_prop_apply_actions_action_ids_set(
    of_table_feature_prop_apply_actions_t *obj,
    of_list_action_id_t *action_ids);
extern void of_table_feature_prop_apply_actions_action_ids_bind(
    of_table_feature_prop_apply_actions_t *obj,
    of_list_action_id_t *action_ids);
extern of_list_action_id_t *of_table_feature_prop_apply_actions_action_ids_get(
    of_table_feature_prop_apply_actions_t *obj);

/* Unified accessor functions for of_table_feature_prop_apply_actions_miss */

extern int WARN_UNUSED_RESULT of_table_feature_prop_apply_actions_miss_action_ids_set(
    of_table_feature_prop_apply_actions_miss_t *obj,
    of_list_action_id_t *action_ids);
extern void of_table_feature_prop_apply_actions_miss_action_ids_bind(
    of_table_feature_prop_apply_actions_miss_t *obj,
    of_list_action_id_t *action_ids);
extern of_list_action_id_t *of_table_feature_prop_apply_actions_miss_action_ids_get(
    of_table_feature_prop_apply_actions_miss_t *obj);

/* Unified accessor functions for of_table_feature_prop_apply_setfield */

extern int WARN_UNUSED_RESULT of_table_feature_prop_apply_setfield_oxm_ids_set(
    of_table_feature_prop_apply_setfield_t *obj,
    of_list_uint32_t *oxm_ids);
extern void of_table_feature_prop_apply_setfield_oxm_ids_bind(
    of_table_feature_prop_apply_setfield_t *obj,
    of_list_uint32_t *oxm_ids);
extern of_list_uint32_t *of_table_feature_prop_apply_setfield_oxm_ids_get(
    of_table_feature_prop_apply_setfield_t *obj);

/* Unified accessor functions for of_table_feature_prop_apply_setfield_miss */

extern int WARN_UNUSED_RESULT of_table_feature_prop_apply_setfield_miss_oxm_ids_set(
    of_table_feature_prop_apply_setfield_miss_t *obj,
    of_list_uint32_t *oxm_ids);
extern void of_table_feature_prop_apply_setfield_miss_oxm_ids_bind(
    of_table_feature_prop_apply_setfield_miss_t *obj,
    of_list_uint32_t *oxm_ids);
extern of_list_uint32_t *of_table_feature_prop_apply_setfield_miss_oxm_ids_get(
    of_table_feature_prop_apply_setfield_miss_t *obj);

/* Unified accessor functions for of_table_feature_prop_instructions */

extern int WARN_UNUSED_RESULT of_table_feature_prop_instructions_instruction_ids_set(
    of_table_feature_prop_instructions_t *obj,
    of_list_instruction_id_t *instruction_ids);
extern void of_table_feature_prop_instructions_instruction_ids_bind(
    of_table_feature_prop_instructions_t *obj,
    of_list_instruction_id_t *instruction_ids);
extern of_list_instruction_id_t *of_table_feature_prop_instructions_instruction_ids_get(
    of_table_feature_prop_instructions_t *obj);

/* Unified accessor functions for of_table_feature_prop_instructions_miss */

extern int WARN_UNUSED_RESULT of_table_feature_prop_instructions_miss_instruction_ids_set(
    of_table_feature_prop_instructions_miss_t *obj,
    of_list_instruction_id_t *instruction_ids);
extern void of_table_feature_prop_instructions_miss_instruction_ids_bind(
    of_table_feature_prop_instructions_miss_t *obj,
    of_list_instruction_id_t *instruction_ids);
extern of_list_instruction_id_t *of_table_feature_prop_instructions_miss_instruction_ids_get(
    of_table_feature_prop_instructions_miss_t *obj);

/* Unified accessor functions for of_table_feature_prop_match */

extern int WARN_UNUSED_RESULT of_table_feature_prop_match_oxm_ids_set(
    of_table_feature_prop_match_t *obj,
    of_list_uint32_t *oxm_ids);
extern void of_table_feature_prop_match_oxm_ids_bind(
    of_table_feature_prop_match_t *obj,
    of_list_uint32_t *oxm_ids);
extern of_list_uint32_t *of_table_feature_prop_match_oxm_ids_get(
    of_table_feature_prop_match_t *obj);

/* Unified accessor functions for of_table_feature_prop_next_tables */

extern int WARN_UNUSED_RESULT of_table_feature_prop_next_tables_next_table_ids_set(
    of_table_feature_prop_next_tables_t *obj,
    of_list_uint8_t *next_table_ids);
extern void of_table_feature_prop_next_tables_next_table_ids_bind(
    of_table_feature_prop_next_tables_t *obj,
    of_list_uint8_t *next_table_ids);
extern of_list_uint8_t *of_table_feature_prop_next_tables_next_table_ids_get(
    of_table_feature_prop_next_tables_t *obj);

/* Unified accessor functions for of_table_feature_prop_next_tables_miss */

extern int WARN_UNUSED_RESULT of_table_feature_prop_next_tables_miss_next_table_ids_set(
    of_table_feature_prop_next_tables_miss_t *obj,
    of_list_uint8_t *next_table_ids);
extern void of_table_feature_prop_next_tables_miss_next_table_ids_bind(
    of_table_feature_prop_next_tables_miss_t *obj,
    of_list_uint8_t *next_table_ids);
extern of_list_uint8_t *of_table_feature_prop_next_tables_miss_next_table_ids_get(
    of_table_feature_prop_next_tables_miss_t *obj);

/* Unified accessor functions for of_table_feature_prop_table_sync_from */

extern int WARN_UNUSED_RESULT of_table_feature_prop_table_sync_from_table_ids_set(
    of_table_feature_prop_table_sync_from_t *obj,
    of_list_uint8_t *table_ids);
extern void of_table_feature_prop_table_sync_from_table_ids_bind(
    of_table_feature_prop_table_sync_from_t *obj,
    of_list_uint8_t *table_ids);
extern of_list_uint8_t *of_table_feature_prop_table_sync_from_table_ids_get(
    of_table_feature_prop_table_sync_from_t *obj);

/* Unified accessor functions for of_table_feature_prop_wildcards */

extern int WARN_UNUSED_RESULT of_table_feature_prop_wildcards_oxm_ids_set(
    of_table_feature_prop_wildcards_t *obj,
    of_list_uint32_t *oxm_ids);
extern void of_table_feature_prop_wildcards_oxm_ids_bind(
    of_table_feature_prop_wildcards_t *obj,
    of_list_uint32_t *oxm_ids);
extern of_list_uint32_t *of_table_feature_prop_wildcards_oxm_ids_get(
    of_table_feature_prop_wildcards_t *obj);

/* Unified accessor functions for of_table_feature_prop_write_actions */

extern int WARN_UNUSED_RESULT of_table_feature_prop_write_actions_action_ids_set(
    of_table_feature_prop_write_actions_t *obj,
    of_list_action_id_t *action_ids);
extern void of_table_feature_prop_write_actions_action_ids_bind(
    of_table_feature_prop_write_actions_t *obj,
    of_list_action_id_t *action_ids);
extern of_list_action_id_t *of_table_feature_prop_write_actions_action_ids_get(
    of_table_feature_prop_write_actions_t *obj);

/* Unified accessor functions for of_table_feature_prop_write_actions_miss */

extern int WARN_UNUSED_RESULT of_table_feature_prop_write_actions_miss_action_ids_set(
    of_table_feature_prop_write_actions_miss_t *obj,
    of_list_action_id_t *action_ids);
extern void of_table_feature_prop_write_actions_miss_action_ids_bind(
    of_table_feature_prop_write_actions_miss_t *obj,
    of_list_action_id_t *action_ids);
extern of_list_action_id_t *of_table_feature_prop_write_actions_miss_action_ids_get(
    of_table_feature_prop_write_actions_miss_t *obj);

/* Unified accessor functions for of_table_feature_prop_write_setfield */

extern int WARN_UNUSED_RESULT of_table_feature_prop_write_setfield_oxm_ids_set(
    of_table_feature_prop_write_setfield_t *obj,
    of_list_uint32_t *oxm_ids);
extern void of_table_feature_prop_write_setfield_oxm_ids_bind(
    of_table_feature_prop_write_setfield_t *obj,
    of_list_uint32_t *oxm_ids);
extern of_list_uint32_t *of_table_feature_prop_write_setfield_oxm_ids_get(
    of_table_feature_prop_write_setfield_t *obj);

/* Unified accessor functions for of_table_feature_prop_write_setfield_miss */

extern int WARN_UNUSED_RESULT of_table_feature_prop_write_setfield_miss_oxm_ids_set(
    of_table_feature_prop_write_setfield_miss_t *obj,
    of_list_uint32_t *oxm_ids);
extern void of_table_feature_prop_write_setfield_miss_oxm_ids_bind(
    of_table_feature_prop_write_setfield_miss_t *obj,
    of_list_uint32_t *oxm_ids);
extern of_list_uint32_t *of_table_feature_prop_write_setfield_miss_oxm_ids_get(
    of_table_feature_prop_write_setfield_miss_t *obj);

/* Unified accessor functions for of_table_features */

extern void of_table_features_table_id_set(
    of_table_features_t *obj,
    uint8_t table_id);
extern void of_table_features_table_id_get(
    of_table_features_t *obj,
    uint8_t *table_id);

extern void of_table_features_name_set(
    of_table_features_t *obj,
    of_table_name_t name);
extern void of_table_features_name_get(
    of_table_features_t *obj,
    of_table_name_t *name);

extern void of_table_features_metadata_match_set(
    of_table_features_t *obj,
    uint64_t metadata_match);
extern void of_table_features_metadata_match_get(
    of_table_features_t *obj,
    uint64_t *metadata_match);

extern void of_table_features_metadata_write_set(
    of_table_features_t *obj,
    uint64_t metadata_write);
extern void of_table_features_metadata_write_get(
    of_table_features_t *obj,
    uint64_t *metadata_write);

extern void of_table_features_config_set(
    of_table_features_t *obj,
    uint32_t config);
extern void of_table_features_config_get(
    of_table_features_t *obj,
    uint32_t *config);

extern void of_table_features_max_entries_set(
    of_table_features_t *obj,
    uint32_t max_entries);
extern void of_table_features_max_entries_get(
    of_table_features_t *obj,
    uint32_t *max_entries);

extern int WARN_UNUSED_RESULT of_table_features_properties_set(
    of_table_features_t *obj,
    of_list_table_feature_prop_t *properties);
extern void of_table_features_properties_bind(
    of_table_features_t *obj,
    of_list_table_feature_prop_t *properties);
extern of_list_table_feature_prop_t *of_table_features_properties_get(
    of_table_features_t *obj);

/* Unified accessor functions for of_table_mod_prop_eviction */

extern void of_table_mod_prop_eviction_flags_set(
    of_table_mod_prop_eviction_t *obj,
    uint32_t flags);
extern void of_table_mod_prop_eviction_flags_get(
    of_table_mod_prop_eviction_t *obj,
    uint32_t *flags);

/* Unified accessor functions for of_table_mod_prop_vacancy */

extern void of_table_mod_prop_vacancy_vacancy_down_set(
    of_table_mod_prop_vacancy_t *obj,
    uint8_t vacancy_down);
extern void of_table_mod_prop_vacancy_vacancy_down_get(
    of_table_mod_prop_vacancy_t *obj,
    uint8_t *vacancy_down);

extern void of_table_mod_prop_vacancy_vacancy_up_set(
    of_table_mod_prop_vacancy_t *obj,
    uint8_t vacancy_up);
extern void of_table_mod_prop_vacancy_vacancy_up_get(
    of_table_mod_prop_vacancy_t *obj,
    uint8_t *vacancy_up);

extern void of_table_mod_prop_vacancy_vacancy_set(
    of_table_mod_prop_vacancy_t *obj,
    uint8_t vacancy);
extern void of_table_mod_prop_vacancy_vacancy_get(
    of_table_mod_prop_vacancy_t *obj,
    uint8_t *vacancy);

/* Unified accessor functions for of_table_stats_entry */

extern void of_table_stats_entry_table_id_set(
    of_table_stats_entry_t *obj,
    uint8_t table_id);
extern void of_table_stats_entry_table_id_get(
    of_table_stats_entry_t *obj,
    uint8_t *table_id);

extern void of_table_stats_entry_active_count_set(
    of_table_stats_entry_t *obj,
    uint32_t active_count);
extern void of_table_stats_entry_active_count_get(
    of_table_stats_entry_t *obj,
    uint32_t *active_count);

extern void of_table_stats_entry_lookup_count_set(
    of_table_stats_entry_t *obj,
    uint64_t lookup_count);
extern void of_table_stats_entry_lookup_count_get(
    of_table_stats_entry_t *obj,
    uint64_t *lookup_count);

extern void of_table_stats_entry_matched_count_set(
    of_table_stats_entry_t *obj,
    uint64_t matched_count);
extern void of_table_stats_entry_matched_count_get(
    of_table_stats_entry_t *obj,
    uint64_t *matched_count);

extern void of_table_stats_entry_name_set(
    of_table_stats_entry_t *obj,
    of_table_name_t name);
extern void of_table_stats_entry_name_get(
    of_table_stats_entry_t *obj,
    of_table_name_t *name);

extern void of_table_stats_entry_match_set(
    of_table_stats_entry_t *obj,
    of_match_bmap_t match);
extern void of_table_stats_entry_match_get(
    of_table_stats_entry_t *obj,
    of_match_bmap_t *match);

extern void of_table_stats_entry_wildcards_set(
    of_table_stats_entry_t *obj,
    of_wc_bmap_t wildcards);
extern void of_table_stats_entry_wildcards_get(
    of_table_stats_entry_t *obj,
    of_wc_bmap_t *wildcards);

extern void of_table_stats_entry_write_actions_set(
    of_table_stats_entry_t *obj,
    uint32_t write_actions);
extern void of_table_stats_entry_write_actions_get(
    of_table_stats_entry_t *obj,
    uint32_t *write_actions);

extern void of_table_stats_entry_apply_actions_set(
    of_table_stats_entry_t *obj,
    uint32_t apply_actions);
extern void of_table_stats_entry_apply_actions_get(
    of_table_stats_entry_t *obj,
    uint32_t *apply_actions);

extern void of_table_stats_entry_write_setfields_set(
    of_table_stats_entry_t *obj,
    uint64_t write_setfields);
extern void of_table_stats_entry_write_setfields_get(
    of_table_stats_entry_t *obj,
    uint64_t *write_setfields);

extern void of_table_stats_entry_apply_setfields_set(
    of_table_stats_entry_t *obj,
    uint64_t apply_setfields);
extern void of_table_stats_entry_apply_setfields_get(
    of_table_stats_entry_t *obj,
    uint64_t *apply_setfields);

extern void of_table_stats_entry_metadata_match_set(
    of_table_stats_entry_t *obj,
    uint64_t metadata_match);
extern void of_table_stats_entry_metadata_match_get(
    of_table_stats_entry_t *obj,
    uint64_t *metadata_match);

extern void of_table_stats_entry_metadata_write_set(
    of_table_stats_entry_t *obj,
    uint64_t metadata_write);
extern void of_table_stats_entry_metadata_write_get(
    of_table_stats_entry_t *obj,
    uint64_t *metadata_write);

extern void of_table_stats_entry_instructions_set(
    of_table_stats_entry_t *obj,
    uint32_t instructions);
extern void of_table_stats_entry_instructions_get(
    of_table_stats_entry_t *obj,
    uint32_t *instructions);

extern void of_table_stats_entry_config_set(
    of_table_stats_entry_t *obj,
    uint32_t config);
extern void of_table_stats_entry_config_get(
    of_table_stats_entry_t *obj,
    uint32_t *config);

extern void of_table_stats_entry_max_entries_set(
    of_table_stats_entry_t *obj,
    uint32_t max_entries);
extern void of_table_stats_entry_max_entries_get(
    of_table_stats_entry_t *obj,
    uint32_t *max_entries);

/* Unified accessor functions for of_uint32 */

extern void of_uint32_value_set(
    of_uint32_t *obj,
    uint32_t value);
extern void of_uint32_value_get(
    of_uint32_t *obj,
    uint32_t *value);

/* Unified accessor functions for of_uint64 */

extern void of_uint64_value_set(
    of_uint64_t *obj,
    uint64_t value);
extern void of_uint64_value_get(
    of_uint64_t *obj,
    uint64_t *value);

/* Unified accessor functions for of_uint8 */

extern void of_uint8_value_set(
    of_uint8_t *obj,
    uint8_t value);
extern void of_uint8_value_get(
    of_uint8_t *obj,
    uint8_t *value);

/* Unified accessor functions for of_list_action */

extern int of_list_action_first(
    of_list_action_t *list, of_object_t *iter);
extern int of_list_action_next(
    of_list_action_t *list, of_object_t *iter);
extern int of_list_action_append_bind(
    of_list_action_t *list, of_object_t *iter);
extern int of_list_action_append(
    of_list_action_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_action
 * @param list Pointer to the list being iterated over of
 * type of_list_action
 * @param elt Pointer to an element of type of_action
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_ACTION_ITER(list, elt, rv)  \
    for ((rv) = of_list_action_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_action_next((list), (elt)))

/* Unified accessor functions for of_list_action_id */

extern int of_list_action_id_first(
    of_list_action_id_t *list, of_object_t *iter);
extern int of_list_action_id_next(
    of_list_action_id_t *list, of_object_t *iter);
extern int of_list_action_id_append_bind(
    of_list_action_id_t *list, of_object_t *iter);
extern int of_list_action_id_append(
    of_list_action_id_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_action_id
 * @param list Pointer to the list being iterated over of
 * type of_list_action_id
 * @param elt Pointer to an element of type of_action_id
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_ACTION_ID_ITER(list, elt, rv)  \
    for ((rv) = of_list_action_id_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_action_id_next((list), (elt)))

/* Unified accessor functions for of_list_async_config_prop */

extern int of_list_async_config_prop_first(
    of_list_async_config_prop_t *list, of_object_t *iter);
extern int of_list_async_config_prop_next(
    of_list_async_config_prop_t *list, of_object_t *iter);
extern int of_list_async_config_prop_append_bind(
    of_list_async_config_prop_t *list, of_object_t *iter);
extern int of_list_async_config_prop_append(
    of_list_async_config_prop_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_async_config_prop
 * @param list Pointer to the list being iterated over of
 * type of_list_async_config_prop
 * @param elt Pointer to an element of type of_async_config_prop
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_ASYNC_CONFIG_PROP_ITER(list, elt, rv)  \
    for ((rv) = of_list_async_config_prop_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_async_config_prop_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_controller_connection */

extern int of_list_bsn_controller_connection_first(
    of_list_bsn_controller_connection_t *list, of_object_t *iter);
extern int of_list_bsn_controller_connection_next(
    of_list_bsn_controller_connection_t *list, of_object_t *iter);
extern int of_list_bsn_controller_connection_append_bind(
    of_list_bsn_controller_connection_t *list, of_object_t *iter);
extern int of_list_bsn_controller_connection_append(
    of_list_bsn_controller_connection_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_controller_connection
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_controller_connection
 * @param elt Pointer to an element of type of_bsn_controller_connection
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_CONTROLLER_CONNECTION_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_controller_connection_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_controller_connection_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_debug_counter_desc_stats_entry */

extern int of_list_bsn_debug_counter_desc_stats_entry_first(
    of_list_bsn_debug_counter_desc_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_debug_counter_desc_stats_entry_next(
    of_list_bsn_debug_counter_desc_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_debug_counter_desc_stats_entry_append_bind(
    of_list_bsn_debug_counter_desc_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_debug_counter_desc_stats_entry_append(
    of_list_bsn_debug_counter_desc_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_debug_counter_desc_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_debug_counter_desc_stats_entry
 * @param elt Pointer to an element of type of_bsn_debug_counter_desc_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_DEBUG_COUNTER_DESC_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_debug_counter_desc_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_debug_counter_desc_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_debug_counter_stats_entry */

extern int of_list_bsn_debug_counter_stats_entry_first(
    of_list_bsn_debug_counter_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_debug_counter_stats_entry_next(
    of_list_bsn_debug_counter_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_debug_counter_stats_entry_append_bind(
    of_list_bsn_debug_counter_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_debug_counter_stats_entry_append(
    of_list_bsn_debug_counter_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_debug_counter_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_debug_counter_stats_entry
 * @param elt Pointer to an element of type of_bsn_debug_counter_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_DEBUG_COUNTER_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_debug_counter_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_debug_counter_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_flow_checksum_bucket_stats_entry */

extern int of_list_bsn_flow_checksum_bucket_stats_entry_first(
    of_list_bsn_flow_checksum_bucket_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_flow_checksum_bucket_stats_entry_next(
    of_list_bsn_flow_checksum_bucket_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_flow_checksum_bucket_stats_entry_append_bind(
    of_list_bsn_flow_checksum_bucket_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_flow_checksum_bucket_stats_entry_append(
    of_list_bsn_flow_checksum_bucket_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_flow_checksum_bucket_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_flow_checksum_bucket_stats_entry
 * @param elt Pointer to an element of type of_bsn_flow_checksum_bucket_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_FLOW_CHECKSUM_BUCKET_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_flow_checksum_bucket_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_flow_checksum_bucket_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_generic_stats_entry */

extern int of_list_bsn_generic_stats_entry_first(
    of_list_bsn_generic_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_generic_stats_entry_next(
    of_list_bsn_generic_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_generic_stats_entry_append_bind(
    of_list_bsn_generic_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_generic_stats_entry_append(
    of_list_bsn_generic_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_generic_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_generic_stats_entry
 * @param elt Pointer to an element of type of_bsn_generic_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_GENERIC_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_generic_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_generic_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_gentable_bucket_stats_entry */

extern int of_list_bsn_gentable_bucket_stats_entry_first(
    of_list_bsn_gentable_bucket_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_bucket_stats_entry_next(
    of_list_bsn_gentable_bucket_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_bucket_stats_entry_append_bind(
    of_list_bsn_gentable_bucket_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_bucket_stats_entry_append(
    of_list_bsn_gentable_bucket_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_gentable_bucket_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_gentable_bucket_stats_entry
 * @param elt Pointer to an element of type of_bsn_gentable_bucket_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_GENTABLE_BUCKET_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_gentable_bucket_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_gentable_bucket_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_gentable_desc_stats_entry */

extern int of_list_bsn_gentable_desc_stats_entry_first(
    of_list_bsn_gentable_desc_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_desc_stats_entry_next(
    of_list_bsn_gentable_desc_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_desc_stats_entry_append_bind(
    of_list_bsn_gentable_desc_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_desc_stats_entry_append(
    of_list_bsn_gentable_desc_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_gentable_desc_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_gentable_desc_stats_entry
 * @param elt Pointer to an element of type of_bsn_gentable_desc_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_GENTABLE_DESC_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_gentable_desc_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_gentable_desc_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_gentable_entry_desc_stats_entry */

extern int of_list_bsn_gentable_entry_desc_stats_entry_first(
    of_list_bsn_gentable_entry_desc_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_entry_desc_stats_entry_next(
    of_list_bsn_gentable_entry_desc_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_entry_desc_stats_entry_append_bind(
    of_list_bsn_gentable_entry_desc_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_entry_desc_stats_entry_append(
    of_list_bsn_gentable_entry_desc_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_gentable_entry_desc_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_gentable_entry_desc_stats_entry
 * @param elt Pointer to an element of type of_bsn_gentable_entry_desc_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_GENTABLE_ENTRY_DESC_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_gentable_entry_desc_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_gentable_entry_desc_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_gentable_entry_stats_entry */

extern int of_list_bsn_gentable_entry_stats_entry_first(
    of_list_bsn_gentable_entry_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_entry_stats_entry_next(
    of_list_bsn_gentable_entry_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_entry_stats_entry_append_bind(
    of_list_bsn_gentable_entry_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_entry_stats_entry_append(
    of_list_bsn_gentable_entry_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_gentable_entry_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_gentable_entry_stats_entry
 * @param elt Pointer to an element of type of_bsn_gentable_entry_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_GENTABLE_ENTRY_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_gentable_entry_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_gentable_entry_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_gentable_stats_entry */

extern int of_list_bsn_gentable_stats_entry_first(
    of_list_bsn_gentable_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_stats_entry_next(
    of_list_bsn_gentable_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_stats_entry_append_bind(
    of_list_bsn_gentable_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_gentable_stats_entry_append(
    of_list_bsn_gentable_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_gentable_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_gentable_stats_entry
 * @param elt Pointer to an element of type of_bsn_gentable_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_GENTABLE_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_gentable_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_gentable_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_interface */

extern int of_list_bsn_interface_first(
    of_list_bsn_interface_t *list, of_object_t *iter);
extern int of_list_bsn_interface_next(
    of_list_bsn_interface_t *list, of_object_t *iter);
extern int of_list_bsn_interface_append_bind(
    of_list_bsn_interface_t *list, of_object_t *iter);
extern int of_list_bsn_interface_append(
    of_list_bsn_interface_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_interface
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_interface
 * @param elt Pointer to an element of type of_bsn_interface
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_INTERFACE_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_interface_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_interface_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_lacp_stats_entry */

extern int of_list_bsn_lacp_stats_entry_first(
    of_list_bsn_lacp_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_lacp_stats_entry_next(
    of_list_bsn_lacp_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_lacp_stats_entry_append_bind(
    of_list_bsn_lacp_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_lacp_stats_entry_append(
    of_list_bsn_lacp_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_lacp_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_lacp_stats_entry
 * @param elt Pointer to an element of type of_bsn_lacp_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_LACP_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_lacp_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_lacp_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_port_counter_stats_entry */

extern int of_list_bsn_port_counter_stats_entry_first(
    of_list_bsn_port_counter_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_port_counter_stats_entry_next(
    of_list_bsn_port_counter_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_port_counter_stats_entry_append_bind(
    of_list_bsn_port_counter_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_port_counter_stats_entry_append(
    of_list_bsn_port_counter_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_port_counter_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_port_counter_stats_entry
 * @param elt Pointer to an element of type of_bsn_port_counter_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_PORT_COUNTER_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_port_counter_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_port_counter_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_switch_pipeline_stats_entry */

extern int of_list_bsn_switch_pipeline_stats_entry_first(
    of_list_bsn_switch_pipeline_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_switch_pipeline_stats_entry_next(
    of_list_bsn_switch_pipeline_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_switch_pipeline_stats_entry_append_bind(
    of_list_bsn_switch_pipeline_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_switch_pipeline_stats_entry_append(
    of_list_bsn_switch_pipeline_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_switch_pipeline_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_switch_pipeline_stats_entry
 * @param elt Pointer to an element of type of_bsn_switch_pipeline_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_SWITCH_PIPELINE_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_switch_pipeline_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_switch_pipeline_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_table_checksum_stats_entry */

extern int of_list_bsn_table_checksum_stats_entry_first(
    of_list_bsn_table_checksum_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_table_checksum_stats_entry_next(
    of_list_bsn_table_checksum_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_table_checksum_stats_entry_append_bind(
    of_list_bsn_table_checksum_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_table_checksum_stats_entry_append(
    of_list_bsn_table_checksum_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_table_checksum_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_table_checksum_stats_entry
 * @param elt Pointer to an element of type of_bsn_table_checksum_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_TABLE_CHECKSUM_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_table_checksum_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_table_checksum_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_tlv */

extern int of_list_bsn_tlv_first(
    of_list_bsn_tlv_t *list, of_object_t *iter);
extern int of_list_bsn_tlv_next(
    of_list_bsn_tlv_t *list, of_object_t *iter);
extern int of_list_bsn_tlv_append_bind(
    of_list_bsn_tlv_t *list, of_object_t *iter);
extern int of_list_bsn_tlv_append(
    of_list_bsn_tlv_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_tlv
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_tlv
 * @param elt Pointer to an element of type of_bsn_tlv
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_TLV_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_tlv_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_tlv_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_vlan_counter_stats_entry */

extern int of_list_bsn_vlan_counter_stats_entry_first(
    of_list_bsn_vlan_counter_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_vlan_counter_stats_entry_next(
    of_list_bsn_vlan_counter_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_vlan_counter_stats_entry_append_bind(
    of_list_bsn_vlan_counter_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_vlan_counter_stats_entry_append(
    of_list_bsn_vlan_counter_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_vlan_counter_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_vlan_counter_stats_entry
 * @param elt Pointer to an element of type of_bsn_vlan_counter_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_VLAN_COUNTER_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_vlan_counter_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_vlan_counter_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bsn_vrf_counter_stats_entry */

extern int of_list_bsn_vrf_counter_stats_entry_first(
    of_list_bsn_vrf_counter_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_vrf_counter_stats_entry_next(
    of_list_bsn_vrf_counter_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_vrf_counter_stats_entry_append_bind(
    of_list_bsn_vrf_counter_stats_entry_t *list, of_object_t *iter);
extern int of_list_bsn_vrf_counter_stats_entry_append(
    of_list_bsn_vrf_counter_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bsn_vrf_counter_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_bsn_vrf_counter_stats_entry
 * @param elt Pointer to an element of type of_bsn_vrf_counter_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BSN_VRF_COUNTER_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_bsn_vrf_counter_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bsn_vrf_counter_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_bucket */

extern int of_list_bucket_first(
    of_list_bucket_t *list, of_object_t *iter);
extern int of_list_bucket_next(
    of_list_bucket_t *list, of_object_t *iter);
extern int of_list_bucket_append_bind(
    of_list_bucket_t *list, of_object_t *iter);
extern int of_list_bucket_append(
    of_list_bucket_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bucket
 * @param list Pointer to the list being iterated over of
 * type of_list_bucket
 * @param elt Pointer to an element of type of_bucket
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BUCKET_ITER(list, elt, rv)  \
    for ((rv) = of_list_bucket_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bucket_next((list), (elt)))

/* Unified accessor functions for of_list_bucket_counter */

extern int of_list_bucket_counter_first(
    of_list_bucket_counter_t *list, of_object_t *iter);
extern int of_list_bucket_counter_next(
    of_list_bucket_counter_t *list, of_object_t *iter);
extern int of_list_bucket_counter_append_bind(
    of_list_bucket_counter_t *list, of_object_t *iter);
extern int of_list_bucket_counter_append(
    of_list_bucket_counter_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bucket_counter
 * @param list Pointer to the list being iterated over of
 * type of_list_bucket_counter
 * @param elt Pointer to an element of type of_bucket_counter
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BUCKET_COUNTER_ITER(list, elt, rv)  \
    for ((rv) = of_list_bucket_counter_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bucket_counter_next((list), (elt)))

/* Unified accessor functions for of_list_bundle_prop */

extern int of_list_bundle_prop_first(
    of_list_bundle_prop_t *list, of_object_t *iter);
extern int of_list_bundle_prop_next(
    of_list_bundle_prop_t *list, of_object_t *iter);
extern int of_list_bundle_prop_append_bind(
    of_list_bundle_prop_t *list, of_object_t *iter);
extern int of_list_bundle_prop_append(
    of_list_bundle_prop_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_bundle_prop
 * @param list Pointer to the list being iterated over of
 * type of_list_bundle_prop
 * @param elt Pointer to an element of type of_bundle_prop
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_BUNDLE_PROP_ITER(list, elt, rv)  \
    for ((rv) = of_list_bundle_prop_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_bundle_prop_next((list), (elt)))

/* Unified accessor functions for of_list_flow_stats_entry */

extern int of_list_flow_stats_entry_first(
    of_list_flow_stats_entry_t *list, of_object_t *iter);
extern int of_list_flow_stats_entry_next(
    of_list_flow_stats_entry_t *list, of_object_t *iter);
extern int of_list_flow_stats_entry_append_bind(
    of_list_flow_stats_entry_t *list, of_object_t *iter);
extern int of_list_flow_stats_entry_append(
    of_list_flow_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_flow_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_flow_stats_entry
 * @param elt Pointer to an element of type of_flow_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_FLOW_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_flow_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_flow_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_group_desc_stats_entry */

extern int of_list_group_desc_stats_entry_first(
    of_list_group_desc_stats_entry_t *list, of_object_t *iter);
extern int of_list_group_desc_stats_entry_next(
    of_list_group_desc_stats_entry_t *list, of_object_t *iter);
extern int of_list_group_desc_stats_entry_append_bind(
    of_list_group_desc_stats_entry_t *list, of_object_t *iter);
extern int of_list_group_desc_stats_entry_append(
    of_list_group_desc_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_group_desc_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_group_desc_stats_entry
 * @param elt Pointer to an element of type of_group_desc_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_GROUP_DESC_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_group_desc_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_group_desc_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_group_stats_entry */

extern int of_list_group_stats_entry_first(
    of_list_group_stats_entry_t *list, of_object_t *iter);
extern int of_list_group_stats_entry_next(
    of_list_group_stats_entry_t *list, of_object_t *iter);
extern int of_list_group_stats_entry_append_bind(
    of_list_group_stats_entry_t *list, of_object_t *iter);
extern int of_list_group_stats_entry_append(
    of_list_group_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_group_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_group_stats_entry
 * @param elt Pointer to an element of type of_group_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_GROUP_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_group_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_group_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_hello_elem */

extern int of_list_hello_elem_first(
    of_list_hello_elem_t *list, of_object_t *iter);
extern int of_list_hello_elem_next(
    of_list_hello_elem_t *list, of_object_t *iter);
extern int of_list_hello_elem_append_bind(
    of_list_hello_elem_t *list, of_object_t *iter);
extern int of_list_hello_elem_append(
    of_list_hello_elem_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_hello_elem
 * @param list Pointer to the list being iterated over of
 * type of_list_hello_elem
 * @param elt Pointer to an element of type of_hello_elem
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_HELLO_ELEM_ITER(list, elt, rv)  \
    for ((rv) = of_list_hello_elem_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_hello_elem_next((list), (elt)))

/* Unified accessor functions for of_list_instruction */

extern int of_list_instruction_first(
    of_list_instruction_t *list, of_object_t *iter);
extern int of_list_instruction_next(
    of_list_instruction_t *list, of_object_t *iter);
extern int of_list_instruction_append_bind(
    of_list_instruction_t *list, of_object_t *iter);
extern int of_list_instruction_append(
    of_list_instruction_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_instruction
 * @param list Pointer to the list being iterated over of
 * type of_list_instruction
 * @param elt Pointer to an element of type of_instruction
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_INSTRUCTION_ITER(list, elt, rv)  \
    for ((rv) = of_list_instruction_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_instruction_next((list), (elt)))

/* Unified accessor functions for of_list_instruction_id */

extern int of_list_instruction_id_first(
    of_list_instruction_id_t *list, of_object_t *iter);
extern int of_list_instruction_id_next(
    of_list_instruction_id_t *list, of_object_t *iter);
extern int of_list_instruction_id_append_bind(
    of_list_instruction_id_t *list, of_object_t *iter);
extern int of_list_instruction_id_append(
    of_list_instruction_id_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_instruction_id
 * @param list Pointer to the list being iterated over of
 * type of_list_instruction_id
 * @param elt Pointer to an element of type of_instruction_id
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_INSTRUCTION_ID_ITER(list, elt, rv)  \
    for ((rv) = of_list_instruction_id_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_instruction_id_next((list), (elt)))

/* Unified accessor functions for of_list_meter_band */

extern int of_list_meter_band_first(
    of_list_meter_band_t *list, of_object_t *iter);
extern int of_list_meter_band_next(
    of_list_meter_band_t *list, of_object_t *iter);
extern int of_list_meter_band_append_bind(
    of_list_meter_band_t *list, of_object_t *iter);
extern int of_list_meter_band_append(
    of_list_meter_band_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_meter_band
 * @param list Pointer to the list being iterated over of
 * type of_list_meter_band
 * @param elt Pointer to an element of type of_meter_band
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_METER_BAND_ITER(list, elt, rv)  \
    for ((rv) = of_list_meter_band_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_meter_band_next((list), (elt)))

/* Unified accessor functions for of_list_meter_band_stats */

extern int of_list_meter_band_stats_first(
    of_list_meter_band_stats_t *list, of_object_t *iter);
extern int of_list_meter_band_stats_next(
    of_list_meter_band_stats_t *list, of_object_t *iter);
extern int of_list_meter_band_stats_append_bind(
    of_list_meter_band_stats_t *list, of_object_t *iter);
extern int of_list_meter_band_stats_append(
    of_list_meter_band_stats_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_meter_band_stats
 * @param list Pointer to the list being iterated over of
 * type of_list_meter_band_stats
 * @param elt Pointer to an element of type of_meter_band_stats
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_METER_BAND_STATS_ITER(list, elt, rv)  \
    for ((rv) = of_list_meter_band_stats_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_meter_band_stats_next((list), (elt)))

/* Unified accessor functions for of_list_meter_stats */

extern int of_list_meter_stats_first(
    of_list_meter_stats_t *list, of_object_t *iter);
extern int of_list_meter_stats_next(
    of_list_meter_stats_t *list, of_object_t *iter);
extern int of_list_meter_stats_append_bind(
    of_list_meter_stats_t *list, of_object_t *iter);
extern int of_list_meter_stats_append(
    of_list_meter_stats_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_meter_stats
 * @param list Pointer to the list being iterated over of
 * type of_list_meter_stats
 * @param elt Pointer to an element of type of_meter_stats
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_METER_STATS_ITER(list, elt, rv)  \
    for ((rv) = of_list_meter_stats_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_meter_stats_next((list), (elt)))

/* Unified accessor functions for of_list_oxm */

extern int of_list_oxm_first(
    of_list_oxm_t *list, of_object_t *iter);
extern int of_list_oxm_next(
    of_list_oxm_t *list, of_object_t *iter);
extern int of_list_oxm_append_bind(
    of_list_oxm_t *list, of_object_t *iter);
extern int of_list_oxm_append(
    of_list_oxm_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_oxm
 * @param list Pointer to the list being iterated over of
 * type of_list_oxm
 * @param elt Pointer to an element of type of_oxm
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_OXM_ITER(list, elt, rv)  \
    for ((rv) = of_list_oxm_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_oxm_next((list), (elt)))

/* Unified accessor functions for of_list_packet_queue */

extern int of_list_packet_queue_first(
    of_list_packet_queue_t *list, of_object_t *iter);
extern int of_list_packet_queue_next(
    of_list_packet_queue_t *list, of_object_t *iter);
extern int of_list_packet_queue_append_bind(
    of_list_packet_queue_t *list, of_object_t *iter);
extern int of_list_packet_queue_append(
    of_list_packet_queue_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_packet_queue
 * @param list Pointer to the list being iterated over of
 * type of_list_packet_queue
 * @param elt Pointer to an element of type of_packet_queue
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_PACKET_QUEUE_ITER(list, elt, rv)  \
    for ((rv) = of_list_packet_queue_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_packet_queue_next((list), (elt)))

/* Unified accessor functions for of_list_port_desc */

extern int of_list_port_desc_first(
    of_list_port_desc_t *list, of_object_t *iter);
extern int of_list_port_desc_next(
    of_list_port_desc_t *list, of_object_t *iter);
extern int of_list_port_desc_append_bind(
    of_list_port_desc_t *list, of_object_t *iter);
extern int of_list_port_desc_append(
    of_list_port_desc_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_port_desc
 * @param list Pointer to the list being iterated over of
 * type of_list_port_desc
 * @param elt Pointer to an element of type of_port_desc
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_PORT_DESC_ITER(list, elt, rv)  \
    for ((rv) = of_list_port_desc_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_port_desc_next((list), (elt)))

/* Unified accessor functions for of_list_port_desc_prop */

extern int of_list_port_desc_prop_first(
    of_list_port_desc_prop_t *list, of_object_t *iter);
extern int of_list_port_desc_prop_next(
    of_list_port_desc_prop_t *list, of_object_t *iter);
extern int of_list_port_desc_prop_append_bind(
    of_list_port_desc_prop_t *list, of_object_t *iter);
extern int of_list_port_desc_prop_append(
    of_list_port_desc_prop_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_port_desc_prop
 * @param list Pointer to the list being iterated over of
 * type of_list_port_desc_prop
 * @param elt Pointer to an element of type of_port_desc_prop
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_PORT_DESC_PROP_ITER(list, elt, rv)  \
    for ((rv) = of_list_port_desc_prop_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_port_desc_prop_next((list), (elt)))

/* Unified accessor functions for of_list_port_mod_prop */

extern int of_list_port_mod_prop_first(
    of_list_port_mod_prop_t *list, of_object_t *iter);
extern int of_list_port_mod_prop_next(
    of_list_port_mod_prop_t *list, of_object_t *iter);
extern int of_list_port_mod_prop_append_bind(
    of_list_port_mod_prop_t *list, of_object_t *iter);
extern int of_list_port_mod_prop_append(
    of_list_port_mod_prop_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_port_mod_prop
 * @param list Pointer to the list being iterated over of
 * type of_list_port_mod_prop
 * @param elt Pointer to an element of type of_port_mod_prop
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_PORT_MOD_PROP_ITER(list, elt, rv)  \
    for ((rv) = of_list_port_mod_prop_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_port_mod_prop_next((list), (elt)))

/* Unified accessor functions for of_list_port_stats_entry */

extern int of_list_port_stats_entry_first(
    of_list_port_stats_entry_t *list, of_object_t *iter);
extern int of_list_port_stats_entry_next(
    of_list_port_stats_entry_t *list, of_object_t *iter);
extern int of_list_port_stats_entry_append_bind(
    of_list_port_stats_entry_t *list, of_object_t *iter);
extern int of_list_port_stats_entry_append(
    of_list_port_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_port_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_port_stats_entry
 * @param elt Pointer to an element of type of_port_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_PORT_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_port_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_port_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_port_stats_prop */

extern int of_list_port_stats_prop_first(
    of_list_port_stats_prop_t *list, of_object_t *iter);
extern int of_list_port_stats_prop_next(
    of_list_port_stats_prop_t *list, of_object_t *iter);
extern int of_list_port_stats_prop_append_bind(
    of_list_port_stats_prop_t *list, of_object_t *iter);
extern int of_list_port_stats_prop_append(
    of_list_port_stats_prop_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_port_stats_prop
 * @param list Pointer to the list being iterated over of
 * type of_list_port_stats_prop
 * @param elt Pointer to an element of type of_port_stats_prop
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_PORT_STATS_PROP_ITER(list, elt, rv)  \
    for ((rv) = of_list_port_stats_prop_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_port_stats_prop_next((list), (elt)))

/* Unified accessor functions for of_list_queue_desc */

extern int of_list_queue_desc_first(
    of_list_queue_desc_t *list, of_object_t *iter);
extern int of_list_queue_desc_next(
    of_list_queue_desc_t *list, of_object_t *iter);
extern int of_list_queue_desc_append_bind(
    of_list_queue_desc_t *list, of_object_t *iter);
extern int of_list_queue_desc_append(
    of_list_queue_desc_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_queue_desc
 * @param list Pointer to the list being iterated over of
 * type of_list_queue_desc
 * @param elt Pointer to an element of type of_queue_desc
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_QUEUE_DESC_ITER(list, elt, rv)  \
    for ((rv) = of_list_queue_desc_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_queue_desc_next((list), (elt)))

/* Unified accessor functions for of_list_queue_desc_prop */

extern int of_list_queue_desc_prop_first(
    of_list_queue_desc_prop_t *list, of_object_t *iter);
extern int of_list_queue_desc_prop_next(
    of_list_queue_desc_prop_t *list, of_object_t *iter);
extern int of_list_queue_desc_prop_append_bind(
    of_list_queue_desc_prop_t *list, of_object_t *iter);
extern int of_list_queue_desc_prop_append(
    of_list_queue_desc_prop_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_queue_desc_prop
 * @param list Pointer to the list being iterated over of
 * type of_list_queue_desc_prop
 * @param elt Pointer to an element of type of_queue_desc_prop
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_QUEUE_DESC_PROP_ITER(list, elt, rv)  \
    for ((rv) = of_list_queue_desc_prop_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_queue_desc_prop_next((list), (elt)))

/* Unified accessor functions for of_list_queue_prop */

extern int of_list_queue_prop_first(
    of_list_queue_prop_t *list, of_object_t *iter);
extern int of_list_queue_prop_next(
    of_list_queue_prop_t *list, of_object_t *iter);
extern int of_list_queue_prop_append_bind(
    of_list_queue_prop_t *list, of_object_t *iter);
extern int of_list_queue_prop_append(
    of_list_queue_prop_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_queue_prop
 * @param list Pointer to the list being iterated over of
 * type of_list_queue_prop
 * @param elt Pointer to an element of type of_queue_prop
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_QUEUE_PROP_ITER(list, elt, rv)  \
    for ((rv) = of_list_queue_prop_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_queue_prop_next((list), (elt)))

/* Unified accessor functions for of_list_queue_stats_entry */

extern int of_list_queue_stats_entry_first(
    of_list_queue_stats_entry_t *list, of_object_t *iter);
extern int of_list_queue_stats_entry_next(
    of_list_queue_stats_entry_t *list, of_object_t *iter);
extern int of_list_queue_stats_entry_append_bind(
    of_list_queue_stats_entry_t *list, of_object_t *iter);
extern int of_list_queue_stats_entry_append(
    of_list_queue_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_queue_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_queue_stats_entry
 * @param elt Pointer to an element of type of_queue_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_QUEUE_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_queue_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_queue_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_queue_stats_prop */

extern int of_list_queue_stats_prop_first(
    of_list_queue_stats_prop_t *list, of_object_t *iter);
extern int of_list_queue_stats_prop_next(
    of_list_queue_stats_prop_t *list, of_object_t *iter);
extern int of_list_queue_stats_prop_append_bind(
    of_list_queue_stats_prop_t *list, of_object_t *iter);
extern int of_list_queue_stats_prop_append(
    of_list_queue_stats_prop_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_queue_stats_prop
 * @param list Pointer to the list being iterated over of
 * type of_list_queue_stats_prop
 * @param elt Pointer to an element of type of_queue_stats_prop
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_QUEUE_STATS_PROP_ITER(list, elt, rv)  \
    for ((rv) = of_list_queue_stats_prop_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_queue_stats_prop_next((list), (elt)))

/* Unified accessor functions for of_list_role_prop */

extern int of_list_role_prop_first(
    of_list_role_prop_t *list, of_object_t *iter);
extern int of_list_role_prop_next(
    of_list_role_prop_t *list, of_object_t *iter);
extern int of_list_role_prop_append_bind(
    of_list_role_prop_t *list, of_object_t *iter);
extern int of_list_role_prop_append(
    of_list_role_prop_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_role_prop
 * @param list Pointer to the list being iterated over of
 * type of_list_role_prop
 * @param elt Pointer to an element of type of_role_prop
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_ROLE_PROP_ITER(list, elt, rv)  \
    for ((rv) = of_list_role_prop_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_role_prop_next((list), (elt)))

/* Unified accessor functions for of_list_table_desc */

extern int of_list_table_desc_first(
    of_list_table_desc_t *list, of_object_t *iter);
extern int of_list_table_desc_next(
    of_list_table_desc_t *list, of_object_t *iter);
extern int of_list_table_desc_append_bind(
    of_list_table_desc_t *list, of_object_t *iter);
extern int of_list_table_desc_append(
    of_list_table_desc_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_table_desc
 * @param list Pointer to the list being iterated over of
 * type of_list_table_desc
 * @param elt Pointer to an element of type of_table_desc
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_TABLE_DESC_ITER(list, elt, rv)  \
    for ((rv) = of_list_table_desc_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_table_desc_next((list), (elt)))

/* Unified accessor functions for of_list_table_feature_prop */

extern int of_list_table_feature_prop_first(
    of_list_table_feature_prop_t *list, of_object_t *iter);
extern int of_list_table_feature_prop_next(
    of_list_table_feature_prop_t *list, of_object_t *iter);
extern int of_list_table_feature_prop_append_bind(
    of_list_table_feature_prop_t *list, of_object_t *iter);
extern int of_list_table_feature_prop_append(
    of_list_table_feature_prop_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_table_feature_prop
 * @param list Pointer to the list being iterated over of
 * type of_list_table_feature_prop
 * @param elt Pointer to an element of type of_table_feature_prop
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_TABLE_FEATURE_PROP_ITER(list, elt, rv)  \
    for ((rv) = of_list_table_feature_prop_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_table_feature_prop_next((list), (elt)))

/* Unified accessor functions for of_list_table_features */

extern int of_list_table_features_first(
    of_list_table_features_t *list, of_object_t *iter);
extern int of_list_table_features_next(
    of_list_table_features_t *list, of_object_t *iter);
extern int of_list_table_features_append_bind(
    of_list_table_features_t *list, of_object_t *iter);
extern int of_list_table_features_append(
    of_list_table_features_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_table_features
 * @param list Pointer to the list being iterated over of
 * type of_list_table_features
 * @param elt Pointer to an element of type of_table_features
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_TABLE_FEATURES_ITER(list, elt, rv)  \
    for ((rv) = of_list_table_features_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_table_features_next((list), (elt)))

/* Unified accessor functions for of_list_table_mod_prop */

extern int of_list_table_mod_prop_first(
    of_list_table_mod_prop_t *list, of_object_t *iter);
extern int of_list_table_mod_prop_next(
    of_list_table_mod_prop_t *list, of_object_t *iter);
extern int of_list_table_mod_prop_append_bind(
    of_list_table_mod_prop_t *list, of_object_t *iter);
extern int of_list_table_mod_prop_append(
    of_list_table_mod_prop_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_table_mod_prop
 * @param list Pointer to the list being iterated over of
 * type of_list_table_mod_prop
 * @param elt Pointer to an element of type of_table_mod_prop
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_TABLE_MOD_PROP_ITER(list, elt, rv)  \
    for ((rv) = of_list_table_mod_prop_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_table_mod_prop_next((list), (elt)))

/* Unified accessor functions for of_list_table_stats_entry */

extern int of_list_table_stats_entry_first(
    of_list_table_stats_entry_t *list, of_object_t *iter);
extern int of_list_table_stats_entry_next(
    of_list_table_stats_entry_t *list, of_object_t *iter);
extern int of_list_table_stats_entry_append_bind(
    of_list_table_stats_entry_t *list, of_object_t *iter);
extern int of_list_table_stats_entry_append(
    of_list_table_stats_entry_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_table_stats_entry
 * @param list Pointer to the list being iterated over of
 * type of_list_table_stats_entry
 * @param elt Pointer to an element of type of_table_stats_entry
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_TABLE_STATS_ENTRY_ITER(list, elt, rv)  \
    for ((rv) = of_list_table_stats_entry_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_table_stats_entry_next((list), (elt)))

/* Unified accessor functions for of_list_uint32 */

extern int of_list_uint32_first(
    of_list_uint32_t *list, of_object_t *iter);
extern int of_list_uint32_next(
    of_list_uint32_t *list, of_object_t *iter);
extern int of_list_uint32_append_bind(
    of_list_uint32_t *list, of_object_t *iter);
extern int of_list_uint32_append(
    of_list_uint32_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_uint32
 * @param list Pointer to the list being iterated over of
 * type of_list_uint32
 * @param elt Pointer to an element of type of_uint32
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_UINT32_ITER(list, elt, rv)  \
    for ((rv) = of_list_uint32_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_uint32_next((list), (elt)))

/* Unified accessor functions for of_list_uint64 */

extern int of_list_uint64_first(
    of_list_uint64_t *list, of_object_t *iter);
extern int of_list_uint64_next(
    of_list_uint64_t *list, of_object_t *iter);
extern int of_list_uint64_append_bind(
    of_list_uint64_t *list, of_object_t *iter);
extern int of_list_uint64_append(
    of_list_uint64_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_uint64
 * @param list Pointer to the list being iterated over of
 * type of_list_uint64
 * @param elt Pointer to an element of type of_uint64
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_UINT64_ITER(list, elt, rv)  \
    for ((rv) = of_list_uint64_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_uint64_next((list), (elt)))

/* Unified accessor functions for of_list_uint8 */

extern int of_list_uint8_first(
    of_list_uint8_t *list, of_object_t *iter);
extern int of_list_uint8_next(
    of_list_uint8_t *list, of_object_t *iter);
extern int of_list_uint8_append_bind(
    of_list_uint8_t *list, of_object_t *iter);
extern int of_list_uint8_append(
    of_list_uint8_t *list, of_object_t *iter);

/**
 * Iteration macro for list of type of_list_uint8
 * @param list Pointer to the list being iterated over of
 * type of_list_uint8
 * @param elt Pointer to an element of type of_uint8
 * @param rv On exiting the loop will have the value OF_ERROR_RANGE.
 */
#define OF_LIST_UINT8_ITER(list, elt, rv)  \
    for ((rv) = of_list_uint8_first((list), (elt));   \
         (rv) == OF_ERROR_NONE;   \
         (rv) = of_list_uint8_next((list), (elt)))


#endif
