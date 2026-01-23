// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

VL_ATTR_COLD void Vrecorders_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg(Vrecorders_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg\n"); );
    Vrecorders_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz78_TBz136__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_report_object"s, "uvm_report_catcher"s, __Vfunc_m_register_pair__0__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_report_catcher 
        = __Vfunc_m_register_pair__0__Vfuncout;
    vlSelfRef.__PVT__print_catcher__Vstatic__iter = VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_callback_iter__Tz78_TBz136, vlSymsp, VlNull{});
}

VL_ATTR_COLD void Vrecorders_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___ctor_var_reset(Vrecorders_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___ctor_var_reset\n"); );
    Vrecorders_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_register_cb_uvm_report_catcher = 0;
    vlSelf->__PVT__m_set_action_called = 0;
    vlSelf->__PVT__m_demoted_fatal = 0;
    vlSelf->__PVT__m_demoted_error = 0;
    vlSelf->__PVT__m_demoted_warning = 0;
    vlSelf->__PVT__m_caught_fatal = 0;
    vlSelf->__PVT__m_caught_error = 0;
    vlSelf->__PVT__m_caught_warning = 0;
    vlSelf->__PVT__DO_NOT_CATCH = 0;
    vlSelf->__PVT__DO_NOT_MODIFY = 0;
    vlSelf->__PVT__m_debug_flags = 0;
    vlSelf->__PVT__do_report = 0;
    vlSelf->__PVT__process_all_report_catchers__Vstatic__in_catcher = 0;
}
