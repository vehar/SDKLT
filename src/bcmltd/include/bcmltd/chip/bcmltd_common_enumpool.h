/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table definition files.
 * Edits to this file will be lost when it is regenerated.
 *
 * Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
 * Broadcom Limited and/or its subsidiaries.
 * 
 * Broadcom Switch Software License
 * 
 * This license governs the use of the accompanying Broadcom software. Your 
 * use of the software indicates your acceptance of the terms and conditions 
 * of this license. If you do not agree to the terms and conditions of this 
 * license, do not use the software.
 * 1. Definitions
 *    "Licensor" means any person or entity that distributes its Work.
 *    "Software" means the original work of authorship made available under 
 *    this license.
 *    "Work" means the Software and any additions to or derivative works of 
 *    the Software that are made available under this license.
 *    The terms "reproduce," "reproduction," "derivative works," and 
 *    "distribution" have the meaning as provided under U.S. copyright law.
 *    Works, including the Software, are "made available" under this license 
 *    by including in or with the Work either (a) a copyright notice 
 *    referencing the applicability of this license to the Work, or (b) a copy 
 *    of this license.
 * 2. Grant of Copyright License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    copyright license to reproduce, prepare derivative works of, publicly 
 *    display, publicly perform, sublicense and distribute its Work and any 
 *    resulting derivative works in any form.
 * 3. Grant of Patent License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    patent license to make, have made, use, offer to sell, sell, import, and 
 *    otherwise transfer its Work, in whole or in part. This patent license 
 *    applies only to the patent claims licensable by Licensor that would be 
 *    infringed by Licensor's Work (or portion thereof) individually and 
 *    excluding any combinations with any other materials or technology.
 *    If you institute patent litigation against any Licensor (including a 
 *    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
 *    you allege are infringed by any Work, then your patent license from such 
 *    Licensor to the Work shall terminate as of the date such litigation is 
 *    filed.
 * 4. Redistribution
 *    You may reproduce or distribute the Work only if (a) you do so under 
 *    this License, (b) you include a complete copy of this License with your 
 *    distribution, and (c) you retain without modification any copyright, 
 *    patent, trademark, or attribution notices that are present in the Work.
 * 5. Derivative Works
 *    You may specify that additional or different terms apply to the use, 
 *    reproduction, and distribution of your derivative works of the Work 
 *    ("Your Terms") only if (a) Your Terms provide that the limitations of 
 *    Section 7 apply to your derivative works, and (b) you identify the 
 *    specific derivative works that are subject to Your Terms. 
 *    Notwithstanding Your Terms, this license (including the redistribution 
 *    requirements in Section 4) will continue to apply to the Work itself.
 * 6. Trademarks
 *    This license does not grant any rights to use any Licensor's or its 
 *    affiliates' names, logos, or trademarks, except as necessary to 
 *    reproduce the notices described in this license.
 * 7. Limitations
 *    Platform. The Work and any derivative works thereof may only be used, or 
 *    intended for use, with a Broadcom switch integrated circuit.
 *    No Reverse Engineering. You will not use the Work to disassemble, 
 *    reverse engineer, decompile, or attempt to ascertain the underlying 
 *    technology of a Broadcom switch integrated circuit.
 * 8. Termination
 *    If you violate any term of this license, then your rights under this 
 *    license (including the license grants of Sections 2 and 3) will 
 *    terminate immediately.
 * 9. Disclaimer of Warranty
 *    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
 *    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
 *    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
 *    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
 *    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
 *    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
 * 10. Limitation of Liability
 *    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
 *    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
 *    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
 *    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
 *    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
 *    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
 *    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
 *    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
 *    THE POSSIBILITY OF SUCH DAMAGES.
 */
#ifndef BCMLTD_COMMON_ENUMPOOL_H
#define BCMLTD_COMMON_ENUMPOOL_H
#ifndef DOXYGEN_IGNORE_AUTOGEN
#include <shr/shr_types.h>
#include <bcmltd/chip/bcmltd_common_enum_limits.h>
extern const shr_enum_map_t bcmltd_common_bst_event_class_t_enum[BCMLTD_COMMON_BST_EVENT_CLASS_T_ENUM_COUNT]; /* enum BST_EVENT_CLASS_T */
extern const shr_enum_map_t bcmltd_common_bst_track_mode_type_t_enum[BCMLTD_COMMON_BST_TRACK_MODE_TYPE_T_ENUM_COUNT]; /* enum BST_TRACK_MODE_TYPE_T */
extern const shr_enum_map_t bcmltd_common_device_clk_freq_t_enum[BCMLTD_COMMON_DEVICE_CLK_FREQ_T_ENUM_COUNT]; /* enum DEVICE_CLK_FREQ_T */
extern const shr_enum_map_t bcmltd_common_ecmp_mode_t_enum[BCMLTD_COMMON_ECMP_MODE_T_ENUM_COUNT]; /* enum ECMP_MODE_T */
extern const shr_enum_map_t bcmltd_common_fp_ing_opermode_t_enum[BCMLTD_COMMON_FP_ING_OPERMODE_T_ENUM_COUNT]; /* enum FP_ING_OPERMODE_T */
extern const shr_enum_map_t bcmltd_common_lm_linkscan_mode_t_enum[BCMLTD_COMMON_LM_LINKSCAN_MODE_T_ENUM_COUNT]; /* enum LM_LINKSCAN_MODE_T */
extern const shr_enum_map_t bcmltd_common_meter_fp_mode_t_enum[BCMLTD_COMMON_METER_FP_MODE_T_ENUM_COUNT]; /* enum METER_FP_MODE_T */
extern const shr_enum_map_t bcmltd_common_oobfc_egress_size_t_enum[BCMLTD_COMMON_OOBFC_EGRESS_SIZE_T_ENUM_COUNT]; /* enum OOBFC_EGRESS_SIZE_T */
extern const shr_enum_map_t bcmltd_common_pc_encap_t_enum[BCMLTD_COMMON_PC_ENCAP_T_ENUM_COUNT]; /* enum PC_ENCAP_T */
extern const shr_enum_map_t bcmltd_common_pc_loopback_t_enum[BCMLTD_COMMON_PC_LOOPBACK_T_ENUM_COUNT]; /* enum PC_LOOPBACK_T */
extern const shr_enum_map_t bcmltd_common_pc_pm_opmode_t_enum[BCMLTD_COMMON_PC_PM_OPMODE_T_ENUM_COUNT]; /* enum PC_PM_OPMODE_T */
extern const shr_enum_map_t bcmltd_common_pc_pm_type_t_enum[BCMLTD_COMMON_PC_PM_TYPE_T_ENUM_COUNT]; /* enum PC_PM_TYPE_T */
extern const shr_enum_map_t bcmltd_common_pc_port_opmode_t_enum[BCMLTD_COMMON_PC_PORT_OPMODE_T_ENUM_COUNT]; /* enum PC_PORT_OPMODE_T */
extern const shr_enum_map_t bcmltd_common_tm_entry_state_t_enum[BCMLTD_COMMON_TM_ENTRY_STATE_T_ENUM_COUNT]; /* enum TM_ENTRY_STATE_T */
extern const shr_enum_map_t bcmltd_common_tm_node_type_t_enum[BCMLTD_COMMON_TM_NODE_TYPE_T_ENUM_COUNT]; /* enum TM_NODE_TYPE_T */
extern const shr_enum_map_t bcmltd_common_tm_sched_cpu_credit_wdrr_t_enum[BCMLTD_COMMON_TM_SCHED_CPU_CREDIT_WDRR_T_ENUM_COUNT]; /* enum TM_SCHED_CPU_CREDIT_WDRR_T */
extern const shr_enum_map_t bcmltd_common_tm_sched_cpu_credit_wrr_t_enum[BCMLTD_COMMON_TM_SCHED_CPU_CREDIT_WRR_T_ENUM_COUNT]; /* enum TM_SCHED_CPU_CREDIT_WRR_T */
extern const shr_enum_map_t bcmltd_common_tm_sched_node_t_enum[BCMLTD_COMMON_TM_SCHED_NODE_T_ENUM_COUNT]; /* enum TM_SCHED_NODE_T */
extern const shr_enum_map_t bcmltd_common_tm_sched_port_num_mc_q_t_enum[BCMLTD_COMMON_TM_SCHED_PORT_NUM_MC_Q_T_ENUM_COUNT]; /* enum TM_SCHED_PORT_NUM_MC_Q_T */
extern const shr_enum_map_t bcmltd_common_tm_shaper_refresh_time_t_enum[BCMLTD_COMMON_TM_SHAPER_REFRESH_TIME_T_ENUM_COUNT]; /* enum TM_SHAPER_REFRESH_TIME_T */
extern const shr_enum_map_t bcmltd_common_tm_shaping_mode_t_enum[BCMLTD_COMMON_TM_SHAPING_MODE_T_ENUM_COUNT]; /* enum TM_SHAPING_MODE_T */
#endif /* DOXYGEN_IGNORE_AUTOGEN */
#endif /* BCMLTD_COMMON_ENUMPOOL_H */