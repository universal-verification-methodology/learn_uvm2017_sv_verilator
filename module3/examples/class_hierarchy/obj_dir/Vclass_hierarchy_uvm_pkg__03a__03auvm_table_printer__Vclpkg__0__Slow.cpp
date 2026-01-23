// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

VL_ATTR_COLD void Vclass_hierarchy_uvm_pkg__03a__03auvm_table_printer__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg(Vclass_hierarchy_uvm_pkg__03a__03auvm_table_printer__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_table_printer__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg\n"); );
    Vclass_hierarchy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_emit_element__Vstatic__proxy 
        = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_printer_element_proxy, vlProcess, vlSymsp, "proxy"s);
}

VL_ATTR_COLD void Vclass_hierarchy_uvm_pkg__03a__03auvm_table_printer__Vclpkg___ctor_var_reset(Vclass_hierarchy_uvm_pkg__03a__03auvm_table_printer__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_table_printer__Vclpkg___ctor_var_reset\n"); );
    Vclass_hierarchy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
