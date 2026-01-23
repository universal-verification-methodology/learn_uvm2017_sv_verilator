// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

VL_ATTR_COLD void Vclass_hierarchy_uvm_pkg__03a__03auvm_event__Tz38__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_event__Tz38__Vclpkg(Vclass_hierarchy_uvm_pkg__03a__03auvm_event__Tz38__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_event__Tz38__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_event__Tz38__Vclpkg\n"); );
    Vclass_hierarchy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_cb__1__Vfuncout;
    __Vfunc_m_register_cb__1__Vfuncout = 0;
    // Body
    vlSelfRef.__VnoInFunc_m_register_cb(vlProcess, vlSymsp, __Vfunc_m_register_cb__1__Vfuncout);
    vlSelfRef.__PVT__m_cb_registered = __Vfunc_m_register_cb__1__Vfuncout;
}

VL_ATTR_COLD void Vclass_hierarchy_uvm_pkg__03a__03auvm_event__Tz38__Vclpkg___ctor_var_reset(Vclass_hierarchy_uvm_pkg__03a__03auvm_event__Tz38__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_event__Tz38__Vclpkg___ctor_var_reset\n"); );
    Vclass_hierarchy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_cb_registered = 0;
}
