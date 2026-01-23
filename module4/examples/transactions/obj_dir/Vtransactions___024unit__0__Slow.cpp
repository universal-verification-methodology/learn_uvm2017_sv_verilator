// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

VL_ATTR_COLD void Vtransactions___024unit___ctor_var_reset(Vtransactions___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtransactions___024unit___ctor_var_reset\n"); );
    Vtransactions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi = 0; __Vi < 4; ++__Vi) {
        vlSelf->__Venumtab_enum_next9[__Vi] = 0U;
    }
    vlSelf->__Venumtab_enum_next9[0] = 1U;
    vlSelf->__Venumtab_enum_next9[1] = 2U;
    vlSelf->__Venumtab_enum_next9[2] = 3U;
    vlSelf->__Venumtab_enum_next9[3] = 0U;
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_name23[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name23[0] = "UVM_PHASE_IMP"s;
    vlSelf->__Venumtab_enum_name23[1] = "UVM_PHASE_NODE"s;
    vlSelf->__Venumtab_enum_name23[2] = "UVM_PHASE_TERMINAL"s;
    vlSelf->__Venumtab_enum_name23[3] = "UVM_PHASE_SCHEDULE"s;
    vlSelf->__Venumtab_enum_name23[4] = "UVM_PHASE_DOMAIN"s;
    vlSelf->__Venumtab_enum_name23[5] = "UVM_PHASE_GLOBAL"s;
    vlSelf->__Venumtab_enum_name25.atDefault() = ""s;
    vlSelf->__Venumtab_enum_name25.at(0) = "UVM_PHASE_UNINITIALIZED"s;
    vlSelf->__Venumtab_enum_name25.at(1) = "UVM_PHASE_DORMANT"s;
    vlSelf->__Venumtab_enum_name25.at(2) = "UVM_PHASE_SCHEDULED"s;
    vlSelf->__Venumtab_enum_name25.at(4) = "UVM_PHASE_SYNCING"s;
    vlSelf->__Venumtab_enum_name25.at(8) = "UVM_PHASE_STARTED"s;
    vlSelf->__Venumtab_enum_name25.at(16) = "UVM_PHASE_EXECUTING"s;
    vlSelf->__Venumtab_enum_name25.at(32) = "UVM_PHASE_READY_TO_END"s;
    vlSelf->__Venumtab_enum_name25.at(64) = "UVM_PHASE_ENDED"s;
    vlSelf->__Venumtab_enum_name25.at(128) = "UVM_PHASE_CLEANUP"s;
    vlSelf->__Venumtab_enum_name25.at(256) = "UVM_PHASE_DONE"s;
    vlSelf->__Venumtab_enum_name25.at(512) = "UVM_PHASE_JUMPING"s;
    vlSelf->__Venumtab_enum_name3.atDefault() = ""s;
    vlSelf->__Venumtab_enum_name3.at(0) = "UVM_NORADIX"s;
    vlSelf->__Venumtab_enum_name3.at(16777216) = "UVM_BIN"s;
    vlSelf->__Venumtab_enum_name3.at(33554432) = "UVM_DEC"s;
    vlSelf->__Venumtab_enum_name3.at(50331648) = "UVM_UNSIGNED"s;
    vlSelf->__Venumtab_enum_name3.at(67108864) = "UVM_UNFORMAT2"s;
    vlSelf->__Venumtab_enum_name3.at(83886080) = "UVM_UNFORMAT4"s;
    vlSelf->__Venumtab_enum_name3.at(100663296) = "UVM_OCT"s;
    vlSelf->__Venumtab_enum_name3.at(117440512) = "UVM_HEX"s;
    vlSelf->__Venumtab_enum_name3.at(134217728) = "UVM_STRING"s;
    vlSelf->__Venumtab_enum_name3.at(150994944) = "UVM_TIME"s;
    vlSelf->__Venumtab_enum_name3.at(167772160) = "UVM_ENUM"s;
    vlSelf->__Venumtab_enum_name3.at(184549376) = "UVM_REAL"s;
    vlSelf->__Venumtab_enum_name3.at(201326592) = "UVM_REAL_DEC"s;
    vlSelf->__Venumtab_enum_name3.at(218103808) = "UVM_REAL_EXP"s;
    for (int __Vi = 0; __Vi < 4; ++__Vi) {
        vlSelf->__Venumtab_enum_name9[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name9[0] = "UVM_INFO"s;
    vlSelf->__Venumtab_enum_name9[1] = "UVM_WARNING"s;
    vlSelf->__Venumtab_enum_name9[2] = "UVM_ERROR"s;
    vlSelf->__Venumtab_enum_name9[3] = "UVM_FATAL"s;
    vlSelf->__Venumtab_enum_name13.atDefault() = ""s;
    vlSelf->__Venumtab_enum_name13.at(0) = "UVM_NONE"s;
    vlSelf->__Venumtab_enum_name13.at(100) = "UVM_LOW"s;
    vlSelf->__Venumtab_enum_name13.at(200) = "UVM_MEDIUM"s;
    vlSelf->__Venumtab_enum_name13.at(300) = "UVM_HIGH"s;
    vlSelf->__Venumtab_enum_name13.at(400) = "UVM_FULL"s;
    vlSelf->__Venumtab_enum_name13.at(500) = "UVM_DEBUG"s;
    vlSelf->__Venumtab_enum_valid13.atDefault() = 0U;
    vlSelf->__Venumtab_enum_valid13.at(0) = 1U;
    vlSelf->__Venumtab_enum_valid13.at(100) = 1U;
    vlSelf->__Venumtab_enum_valid13.at(200) = 1U;
    vlSelf->__Venumtab_enum_valid13.at(300) = 1U;
    vlSelf->__Venumtab_enum_valid13.at(400) = 1U;
    vlSelf->__Venumtab_enum_valid13.at(500) = 1U;
    for (int __Vi = 0; __Vi < 2; ++__Vi) {
        vlSelf->__Venumtab_enum_name59[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name59[0] = "SEQ_TYPE_REQ"s;
    vlSelf->__Venumtab_enum_name59[1] = "SEQ_TYPE_LOCK"s;
    for (int __Vi = 0; __Vi < 4; ++__Vi) {
        vlSelf->__Venumtab_enum_name61[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name61[0] = "UVM_TLM_READ_COMMAND"s;
    vlSelf->__Venumtab_enum_name61[1] = "UVM_TLM_WRITE_COMMAND"s;
    vlSelf->__Venumtab_enum_name61[2] = "UVM_TLM_IGNORE_COMMAND"s;
    vlSelf->__Venumtab_enum_name63.atDefault() = ""s;
    vlSelf->__Venumtab_enum_name63.at(0) = "UVM_TLM_INCOMPLETE_RESPONSE"s;
    vlSelf->__Venumtab_enum_name63.at(1) = "UVM_TLM_OK_RESPONSE"s;
    vlSelf->__Venumtab_enum_name63.at(4294967291) = "UVM_TLM_BYTE_ENABLE_ERROR_RESPONSE"s;
    vlSelf->__Venumtab_enum_name63.at(4294967292) = "UVM_TLM_BURST_ERROR_RESPONSE"s;
    vlSelf->__Venumtab_enum_name63.at(4294967293) = "UVM_TLM_COMMAND_ERROR_RESPONSE"s;
    vlSelf->__Venumtab_enum_name63.at(4294967294) = "UVM_TLM_ADDRESS_ERROR_RESPONSE"s;
    vlSelf->__Venumtab_enum_name63.at(4294967295) = "UVM_TLM_GENERIC_ERROR_RESPONSE"s;
    for (int __Vi = 0; __Vi < 4; ++__Vi) {
        vlSelf->__Venumtab_enum_name81[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name81[0] = "UVM_READ"s;
    vlSelf->__Venumtab_enum_name81[1] = "UVM_WRITE"s;
    vlSelf->__Venumtab_enum_name81[2] = "UVM_BURST_READ"s;
    vlSelf->__Venumtab_enum_name81[3] = "UVM_BURST_WRITE"s;
    for (int __Vi = 0; __Vi < 4; ++__Vi) {
        vlSelf->__Venumtab_enum_name79[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name79[0] = "UVM_REG"s;
    vlSelf->__Venumtab_enum_name79[1] = "UVM_FIELD"s;
    vlSelf->__Venumtab_enum_name79[2] = "UVM_MEM"s;
    for (int __Vi = 0; __Vi < 4; ++__Vi) {
        vlSelf->__Venumtab_enum_name73[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name73[0] = "UVM_FRONTDOOR"s;
    vlSelf->__Venumtab_enum_name73[1] = "UVM_BACKDOOR"s;
    vlSelf->__Venumtab_enum_name73[2] = "UVM_PREDICT"s;
    vlSelf->__Venumtab_enum_name73[3] = "UVM_DEFAULT_DOOR"s;
    for (int __Vi = 0; __Vi < 4; ++__Vi) {
        vlSelf->__Venumtab_enum_name71[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name71[0] = "UVM_IS_OK"s;
    vlSelf->__Venumtab_enum_name71[1] = "UVM_NOT_OK"s;
    vlSelf->__Venumtab_enum_name71[2] = "UVM_HAS_X"s;
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_name77[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name77[0] = "UVM_NO_ENDIAN"s;
    vlSelf->__Venumtab_enum_name77[1] = "UVM_LITTLE_ENDIAN"s;
    vlSelf->__Venumtab_enum_name77[2] = "UVM_BIG_ENDIAN"s;
    vlSelf->__Venumtab_enum_name77[3] = "UVM_LITTLE_FIFO"s;
    vlSelf->__Venumtab_enum_name77[4] = "UVM_BIG_FIFO"s;
    vlSelf->__Venumvaltab_0[0] = 0U;
    vlSelf->__Venumvaltab_0[1] = 1U;
    vlSelf->__Venumvaltab_0[2] = 2U;
    vlSelf->__Venumvaltab_1[0] = 1U;
    vlSelf->__Venumvaltab_1[1] = 0U;
    vlSelf->__Venumvaltab_1[2] = 0xffffffffU;
    vlSelf->__Venumvaltab_1[3] = 0xfffffffeU;
    vlSelf->__Venumvaltab_1[4] = 0xfffffffdU;
    vlSelf->__Venumvaltab_1[5] = 0xfffffffcU;
    vlSelf->__Venumvaltab_1[6] = 0xfffffffbU;
    vlSelf->__Venumvaltab_2[0] = 0U;
    vlSelf->__Venumvaltab_2[1] = 1U;
    vlSelf->__Venumvaltab_2[2] = 2U;
    vlSelf->__Venumvaltab_2[3] = 3U;
}
