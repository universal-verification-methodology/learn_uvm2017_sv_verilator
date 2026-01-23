// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

VL_ATTR_COLD void Vtransactions_uvm_pkg___eval_static__TOP__uvm_pkg(Vtransactions_uvm_pkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions_uvm_pkg___eval_static__TOP__uvm_pkg\n"); );
    Vtransactions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_uvm_core_state = 0U;
    vlSelfRef.__PVT__uvm_global_random_seed = VL_RANDOM_I();
}

VL_ATTR_COLD void Vtransactions_uvm_pkg___ctor_var_reset(Vtransactions_uvm_pkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions_uvm_pkg___ctor_var_reset\n"); );
    Vtransactions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__uvm_re_match__Vstatic__e = 0;
    vlSelf->__PVT__uvm_re_match__Vstatic__es = 0;
    vlSelf->__PVT__uvm_re_match__Vstatic__s = 0;
    vlSelf->__PVT__uvm_re_match__Vstatic__ss = 0;
    vlSelf->__PVT__m_uvm_core_state = 0;
    vlSelf->__PVT__uvm_global_random_seed = 0;
    vlSelf->__PVT__uvm_instance_scope__Vstatic__c = 0;
    vlSelf->__PVT__uvm_instance_scope__Vstatic__pos = 0;
    vlSelf->__PVT__uvm_oneway_hash__Vstatic__msb = 0;
    vlSelf->__PVT__uvm_oneway_hash__Vstatic__current_byte = 0;
    vlSelf->__PVT__uvm_oneway_hash__Vstatic__crc1 = 0;
    vlSelf->__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0;
    vlSelf->__PVT__uvm_leaf_scope__Vstatic__pos = 0;
    vlSelf->__PVT__uvm_leaf_scope__Vstatic__bmatches = 0;
    vlSelf->__PVT__uvm_get_array_index_int__Vstatic__i = 0;
    vlSelf->__PVT__uvm_get_array_index_string__Vstatic__i = 0;
    vlSelf->__PVT__uvm_wait_for_nba_region__Vstatic__next_nba = 0;
}
