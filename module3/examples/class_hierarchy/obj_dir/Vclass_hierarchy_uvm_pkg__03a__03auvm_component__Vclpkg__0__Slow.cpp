// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

VL_ATTR_COLD void Vclass_hierarchy_uvm_pkg__03a__03auvm_component__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_component__Vclpkg(Vclass_hierarchy_uvm_pkg__03a__03auvm_component__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_component__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_component__Vclpkg\n"); );
    Vclass_hierarchy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_set_cl_verb__Vstatic__first = 1U;
    vlSelfRef.__PVT__m_set_cl_action__Vstatic__initialized = 0U;
}

VL_ATTR_COLD void Vclass_hierarchy_uvm_pkg__03a__03auvm_component__Vclpkg___ctor_var_reset(Vclass_hierarchy_uvm_pkg__03a__03auvm_component__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_component__Vclpkg___ctor_var_reset\n"); );
    Vclass_hierarchy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__print_config_matches = 0;
    vlSelf->__PVT__m_time_settings.atDefault().__PVT__offset = VL_SCOPED_RAND_RESET_Q(64, 11392884900788368740ULL, 17276060201503852868ull);
    vlSelf->__PVT__m_time_settings.atDefault().__PVT__verbosity = 0;
    vlSelf->__PVT__m_uvm_applied_cl_action.atDefault().__PVT__used = 0;
    vlSelf->__PVT__m_uvm_applied_cl_sev.atDefault().__PVT__used = 0;
    vlSelf->__PVT__m_set_cl_verb__Vstatic__first = 0;
    vlSelf->__PVT__m_set_cl_action__Vstatic__initialized = 0;
    vlSelf->__PVT__m_set_cl_sev__Vstatic__initialized = 0;
}
