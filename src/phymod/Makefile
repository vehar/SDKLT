#
# $Id$
# Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
# Broadcom Limited and/or its subsidiaries.
# 
# Broadcom Switch Software License
# 
# This license governs the use of the accompanying Broadcom software. Your 
# use of the software indicates your acceptance of the terms and conditions 
# of this license. If you do not agree to the terms and conditions of this 
# license, do not use the software.
# 1. Definitions
#    "Licensor" means any person or entity that distributes its Work.
#    "Software" means the original work of authorship made available under 
#    this license.
#    "Work" means the Software and any additions to or derivative works of 
#    the Software that are made available under this license.
#    The terms "reproduce," "reproduction," "derivative works," and 
#    "distribution" have the meaning as provided under U.S. copyright law.
#    Works, including the Software, are "made available" under this license 
#    by including in or with the Work either (a) a copyright notice 
#    referencing the applicability of this license to the Work, or (b) a copy 
#    of this license.
# 2. Grant of Copyright License
#    Subject to the terms and conditions of this license, each Licensor 
#    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
#    copyright license to reproduce, prepare derivative works of, publicly 
#    display, publicly perform, sublicense and distribute its Work and any 
#    resulting derivative works in any form.
# 3. Grant of Patent License
#    Subject to the terms and conditions of this license, each Licensor 
#    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
#    patent license to make, have made, use, offer to sell, sell, import, and 
#    otherwise transfer its Work, in whole or in part. This patent license 
#    applies only to the patent claims licensable by Licensor that would be 
#    infringed by Licensor's Work (or portion thereof) individually and 
#    excluding any combinations with any other materials or technology.
#    If you institute patent litigation against any Licensor (including a 
#    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
#    you allege are infringed by any Work, then your patent license from such 
#    Licensor to the Work shall terminate as of the date such litigation is 
#    filed.
# 4. Redistribution
#    You may reproduce or distribute the Work only if (a) you do so under 
#    this License, (b) you include a complete copy of this License with your 
#    distribution, and (c) you retain without modification any copyright, 
#    patent, trademark, or attribution notices that are present in the Work.
# 5. Derivative Works
#    You may specify that additional or different terms apply to the use, 
#    reproduction, and distribution of your derivative works of the Work 
#    ("Your Terms") only if (a) Your Terms provide that the limitations of 
#    Section 7 apply to your derivative works, and (b) you identify the 
#    specific derivative works that are subject to Your Terms. 
#    Notwithstanding Your Terms, this license (including the redistribution 
#    requirements in Section 4) will continue to apply to the Work itself.
# 6. Trademarks
#    This license does not grant any rights to use any Licensor's or its 
#    affiliates' names, logos, or trademarks, except as necessary to 
#    reproduce the notices described in this license.
# 7. Limitations
#    Platform. The Work and any derivative works thereof may only be used, or 
#    intended for use, with a Broadcom switch integrated circuit.
#    No Reverse Engineering. You will not use the Work to disassemble, 
#    reverse engineer, decompile, or attempt to ascertain the underlying 
#    technology of a Broadcom switch integrated circuit.
# 8. Termination
#    If you violate any term of this license, then your rights under this 
#    license (including the license grants of Sections 2 and 3) will 
#    terminate immediately.
# 9. Disclaimer of Warranty
#    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
#    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
#    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
#    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
#    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
#    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
# 10. Limitation of Liability
#    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
#    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
#    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
#    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
#    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
#    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
#    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
#    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
#    THE POSSIBILITY OF SUCH DAMAGES.
# 
# 
#
LOCALDIR = phymod

ifndef PHYMOD
PHYMOD = $(CURDIR)
endif

include ${PHYMOD}/make/config.mk

# Core library
VPATH = acc core diag
VSRCS = $(wildcard acc/*.c) $(wildcard core/*.c) $(wildcard diag/*.c)

# Symbolic debug
VPATH += sym sym/chip
VSRCS += $(wildcard sym/*.c) $(wildcard sym/chip/*.c)

# PHY simulators
VPATH += sim sim/chip
VSRCS += $(wildcard sim/*.c) $(wildcard sim/chip/*.c)

# PHY util
VPATH += util 
VSRCS += $(wildcard util/*.c) 

#
# The PHYMOD_CHIPS make variable can be used to compile the sources
# for only one chip (or a subset of chips).
#
# Please see $PHYMOD/examples/libonly/Makefile for examples
#
ifneq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS := $(PHYMOD_CHIPS)
endif

# Eagle chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += EAGLE
endif
ifneq ($(filter EAGLE,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/eagle chip/eagle/tier2 chip/eagle/tier1
VSRCS += $(wildcard chip/eagle/*.c)
VSRCS += $(wildcard chip/eagle/tier2/*.c)
VSRCS += $(wildcard chip/eagle/tier1/*.c)
endif

# Eagle dpll chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += EAGLE_DPLL
endif
ifneq ($(filter EAGLE_DPLL,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/eagle_dpll chip/eagle_dpll/tier2 chip/eagle_dpll/tier1
VSRCS += $(wildcard chip/eagle_dpll/*.c)
VSRCS += $(wildcard chip/eagle_dpll/tier2/*.c)
VSRCS += $(wildcard chip/eagle_dpll/tier1/*.c)
endif

# Falcon chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += FALCON
endif
ifneq ($(filter FALCON,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/falcon chip/falcon/tier2 chip/falcon/tier1
VSRCS += $(wildcard chip/falcon/*.c)
VSRCS += $(wildcard chip/falcon/tier2/*.c)
VSRCS += $(wildcard chip/falcon/tier1/*.c)
endif

# QSGMII/Eagle chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += QSGMIIE
endif
ifneq ($(filter QSGMIIE,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/qsgmiie chip/qsgmiie/tier2 chip/qsgmiie/tier1
VSRCS += $(wildcard chip/qsgmiie/*.c)
VSRCS += $(wildcard chip/qsgmiie/tier2/*.c)
VSRCS += $(wildcard chip/qsgmiie/tier1/*.c)
endif

# TSC/Eagle chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += TSCE
endif
ifneq ($(filter TSCE,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/tsce chip/tsce/tier2 chip/tsce/tier1
VSRCS += $(wildcard chip/tsce/*.c)
VSRCS += $(wildcard chip/tsce/tier2/*.c)
VSRCS += $(wildcard chip/tsce/tier1/*.c)
endif

# TSC/Eagle DPLL chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += TSCE_DPLL
endif
ifneq ($(filter TSCE_DPLL,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/tsce_dpll chip/tsce_dpll/tier2 chip/tsce_dpll/tier1
VSRCS += $(wildcard chip/tsce_dpll/*.c)
VSRCS += $(wildcard chip/tsce_dpll/tier2/*.c)
VSRCS += $(wildcard chip/tsce_dpll/tier1/*.c)
endif

# TSC/Falcon chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += TSCF
endif
ifneq ($(filter TSCF,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/tscf chip/tscf/tier2 chip/tscf/tier1
VSRCS += $(wildcard chip/tscf/*.c)
VSRCS += $(wildcard chip/tscf/tier2/*.c)
VSRCS += $(wildcard chip/tscf/tier1/*.c)
endif

# Viper chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += VIPER
endif
ifneq ($(filter VIPER,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/viper chip/viper/tier2 chip/viper/tier1
VSRCS += $(wildcard chip/viper/*.c)
VSRCS += $(wildcard chip/viper/tier2/*.c)
VSRCS += $(wildcard chip/viper/tier1/*.c)
endif

# Furia chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += FURIA
endif
ifneq ($(filter FURIA,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/furia chip/furia/tier2 chip/furia/tier1 chip/furia/tier1/falcon_furia_src chip/furia_82212 chip/furia_82212/tier2
VSRCS += $(wildcard chip/furia/*.c)
VSRCS += $(wildcard chip/furia/tier2/*.c)
VSRCS += $(wildcard chip/furia/tier1/*.c)
VSRCS += $(wildcard chip/furia/tier1/falcon_furia_src/falcon_furia_functions.c)
VSRCS += $(wildcard chip/furia/tier1/falcon_furia_src/falcon_furia_dependencies.c)

VSRCS += $(wildcard chip/furia_82212/*.c)
VSRCS += $(wildcard chip/furia_82212/tier2/*.c)
endif

# QTC chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += QTC
endif
ifneq ($(filter QTC,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/qtce chip/qtce/tier2 chip/qtce/tier1
VSRCS += $(wildcard chip/qtce/*.c)
VSRCS += $(wildcard chip/qtce/tier2/*.c)
VSRCS += $(wildcard chip/qtce/tier1/*.c)
endif

# Sesto chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += SESTO
endif
ifneq ($(filter SESTO,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/sesto chip/sesto/tier2 chip/sesto/tier1 chip/sesto/tier1/sesto_serdes/falcon_furia_sesto_src chip/sesto/tier1/sesto_serdes/merlin_sesto_src
VSRCS += $(wildcard chip/sesto/*.c)
VSRCS += $(wildcard chip/sesto/tier2/*.c)
VSRCS += $(wildcard chip/sesto/tier1/*.c)
VSRCS += $(wildcard chip/sesto/tier1/sesto_serdes/falcon_furia_sesto_src/falcon_furia_sesto_functions.c)
VSRCS += $(wildcard chip/sesto/tier1/sesto_serdes/falcon_furia_sesto_src/falcon_furia_sesto_dependencies.c)
VSRCS += $(wildcard chip/sesto/tier1/sesto_serdes/merlin_sesto_src/merlin_sesto_functions.c)
VSRCS += $(wildcard chip/sesto/tier1/sesto_serdes/merlin_sesto_src/merlin_sesto_dependencies.c)
endif


# Madura chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += MADURA
endif
ifneq ($(filter MADURA,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/madura chip/madura/tier2 chip/madura/tier1 chip/madura/tier1/madura_serdes/falcon_madura_src  chip/madura/tier1/madura_serdes/falcon2_madura_src
VSRCS += $(wildcard chip/madura/*.c)
VSRCS += $(wildcard chip/madura/tier2/*.c)
VSRCS += $(wildcard chip/madura/tier1/*.c)
VSRCS += $(wildcard chip/madura/tier1/madura_serdes/falcon_madura_src/falcon_madura_functions.c)
VSRCS += $(wildcard chip/madura/tier1/madura_serdes/falcon_madura_src/falcon_madura_dependencies.c)
VSRCS += $(wildcard chip/madura/tier1/madura_serdes/falcon2_madura_src/falcon2_madura_functions.c)
VSRCS += $(wildcard chip/madura/tier1/madura_serdes/falcon2_madura_src/falcon2_madura_dependencies.c)
endif


# quadra28 chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += QUADRA28
endif
ifneq ($(filter QUADRA28,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/quadra28 chip/quadra28/tier2 chip/quadra28/tier1 chip/quadra28/tier1/quadra28_serdes
VSRCS += $(wildcard chip/quadra28/*.c)
VSRCS += $(wildcard chip/quadra28/tier2/*.c)
VSRCS += $(wildcard chip/quadra28/tier1/*.c)
VSRCS += $(wildcard chip/quadra28/tier1/quadra28_serdes/merlin_quadra28_functions.c)
VSRCS += $(wildcard chip/quadra28/tier1/quadra28_serdes/merlin_quadra28_dependencies.c)
endif


# huracan  chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += HURACAN
endif
ifneq ($(filter HURACAN,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/huracan chip/huracan/tier2 chip/huracan/tier1 
VSRCS += $(wildcard chip/huracan/*.c)
VSRCS += $(wildcard chip/huracan/tier2/*.c)
VSRCS += $(wildcard chip/huracan/tier1/*.c)
endif

# Dino chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += DINO 
endif
ifneq ($(filter DINO,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/dino chip/dino/tier2 chip/dino/tier1 chip/dino/tier1/dino_serdes/falcon2_dino_src chip/dino/tier1/dino_serdes/merlin_dino_src
VSRCS += $(wildcard chip/dino/*.c)
VSRCS += $(wildcard chip/dino/tier2/*.c)
VSRCS += $(wildcard chip/dino/tier1/*.c)
VSRCS += $(wildcard chip/dino/tier1/dino_serdes/falcon2_dino_src/falcon2_dino_functions.c)
VSRCS += $(wildcard chip/dino/tier1/dino_serdes/falcon2_dino_src/falcon2_dino_dependencies.c)
VSRCS += $(wildcard chip/dino/tier1/dino_serdes/merlin_dino_src/merlin_dino_functions.c)
VSRCS += $(wildcard chip/dino/tier1/dino_serdes/merlin_dino_src/merlin_dino_dependencies.c)
endif
# phy8806x support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += PHY8806X
endif
ifneq ($(filter PHY8806X,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/phy8806x chip/phy8806x/tier2 chip/phy8806x/tier1
VSRCS += $(filter-out chip/phy8806x/phy8806x_pe_api.c,  $(wildcard chip/phy8806x/*.c))
VSRCS += $(wildcard chip/phy8806x/tier2/*.c)
VSRCS += $(wildcard chip/phy8806x/tier1/*.c)
endif

# Falcon16 chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += FALCON16
endif
ifneq ($(filter FALCON16,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/falcon16 chip/falcon16/tier2 chip/falcon16/tier1 chip/falcon16/tier1/src
VSRCS += $(wildcard chip/falcon16/*.c)
VSRCS += $(wildcard chip/falcon16/tier2/*.c)
VSRCS += $(wildcard chip/falcon16/tier1/*.c)
VSRCS += $(wildcard chip/falcon16/tier1/src/*.c)
endif

# BLACKHAWK chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += BLACKHAWK
endif
ifneq ($(filter BLACKHAWK,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/blackhawk chip/blackhawk/tier2 chip/blackhawk/tier1
VSRCS += $(wildcard chip/blackhawk/*.c)
VSRCS += $(wildcard chip/blackhawk/tier2/*.c)
VSRCS += $(wildcard chip/blackhawk/tier1/*.c)
VSRCS += $(wildcard chip/blackhawk/tier1/src/*.c)
endif

# TSCBH chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += TSCBH
endif
ifneq ($(filter TSCBH,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/tscbh chip/tscbh/tier2 chip/tscbh/tier1
VSRCS += $(wildcard chip/tscbh/*.c)
VSRCS += $(wildcard chip/tscbh/tier2/*.c)
VSRCS += $(wildcard chip/tscbh/tier1/*.c)
endif


# TSCF16 chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += TSCF16
endif
ifneq ($(filter TSCF16,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/tscf16 chip/tscf16/tier2 chip/tscf16/tier1
VSRCS += $(wildcard chip/tscf16/*.c)
VSRCS += $(wildcard chip/tscf16/tier2/*.c)
VSRCS += $(wildcard chip/tscf16/tier1/*.c)
endif

# MERLIN16 chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += MERLIN16 
endif
ifneq ($(filter MERLIN16,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/merlin16 chip/merlin16/tier2 chip/merlin16/tier1
VSRCS += $(wildcard chip/merlin16/*.c)
VSRCS += $(wildcard chip/merlin16/tier2/*.c)
VSRCS += $(wildcard chip/merlin16/tier1/*.c)
endif

ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += TSCE16 
endif
ifneq ($(filter TSCE16,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/tsce16 chip/tsce16/tier2 chip/tsce16/tier1
VSRCS += $(wildcard chip/tsce16/*.c)
VSRCS += $(wildcard chip/tsce16/tier2/*.c)
VSRCS += $(wildcard chip/tsce16/tier1/*.c)
endif

# TSCF GEN3 chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += TSCF_GEN3
endif
ifneq ($(filter TSCF_GEN3,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/tscf_gen3 chip/tscf_gen3/tier2 chip/tscf_gen3/tier1
VSRCS += $(wildcard chip/tscf_gen3/*.c)
VSRCS += $(wildcard chip/tscf_gen3/tier2/*.c)
VSRCS += $(wildcard chip/tscf_gen3/tier1/*.c)
endif

# FALCON MONTEREY chip support
ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += FALCON_DPLL 
endif
ifneq ($(filter FALCON_DPLL,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/falcon_dpll chip/falcon_dpll/tier2 chip/falcon_dpll/tier1
VSRCS += $(wildcard chip/falcon_dpll/*.c)
VSRCS += $(wildcard chip/falcon_dpll/tier2/*.c)
VSRCS += $(wildcard chip/falcon_dpll/tier1/*.c)
endif

ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += NULL
endif
ifneq ($(filter NULL,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/phymodNull
VSRCS += $(wildcard chip/phymodNull/*.c)
endif

ifeq ($(PHYMOD_CHIPS),)
MAKE_PHYMOD_CHIPS += NULL
endif
ifneq ($(filter NULL,$(MAKE_PHYMOD_CHIPS)),)
VPATH += chip/null
VSRCS += $(wildcard chip/null/*.c)
endif

LSRCS = $(notdir $(VSRCS))
LOBJS = $(addsuffix .o, $(basename $(LSRCS)))
BOBJS = $(addprefix $(BLDDIR)/,$(LOBJS))

LIBNAME = libphymod
include ${PHYMOD}/make/lib.mk

include ${PHYMOD}/make/depend.mk
