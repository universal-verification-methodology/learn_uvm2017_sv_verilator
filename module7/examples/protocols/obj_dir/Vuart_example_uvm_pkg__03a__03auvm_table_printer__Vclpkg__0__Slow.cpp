// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

VL_ATTR_COLD void Vuart_example_uvm_pkg__03a__03auvm_table_printer__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg(Vuart_example_uvm_pkg__03a__03auvm_table_printer__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_table_printer__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_emit_element__Vstatic__proxy 
        = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_printer_element_proxy, vlProcess, vlSymsp, "proxy"s);
}

VL_ATTR_COLD void Vuart_example_uvm_pkg__03a__03auvm_table_printer__Vclpkg___ctor_var_reset(Vuart_example_uvm_pkg__03a__03auvm_table_printer__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_table_printer__Vclpkg___ctor_var_reset\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
