// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

VL_ATTR_COLD void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tree_printer__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_tree_printer__Vclpkg(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tree_printer__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tree_printer__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_tree_printer__Vclpkg\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_emit_element__Vstatic__proxy 
        = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer_element_proxy, vlProcess, vlSymsp, "proxy"s);
}

VL_ATTR_COLD void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tree_printer__Vclpkg___ctor_var_reset(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tree_printer__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tree_printer__Vclpkg___ctor_var_reset\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
