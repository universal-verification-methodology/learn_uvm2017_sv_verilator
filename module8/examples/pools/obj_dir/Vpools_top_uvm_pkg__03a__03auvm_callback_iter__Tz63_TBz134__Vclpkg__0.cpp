// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_obj = obj;
}

void Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::__VnoInFunc_first(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> &first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::__VnoInFunc_first\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_first__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz63_TBz134__Vclpkg.__VnoInFunc_get_first(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_first__0__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_first__0__Vfuncout;
    first__Vfuncrtn = this->__PVT__m_cb;
}

void Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::__VnoInFunc_last(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> &last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::__VnoInFunc_last\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_last__1__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz63_TBz134__Vclpkg.__VnoInFunc_get_last(vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_last__1__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_last__1__Vfuncout;
    last__Vfuncrtn = this->__PVT__m_cb;
}

void Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::__VnoInFunc_next(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> &next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::__VnoInFunc_next\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_next__2__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz63_TBz134__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_next__2__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_next__2__Vfuncout;
    next__Vfuncrtn = this->__PVT__m_cb;
}

void Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::__VnoInFunc_prev(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> &prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::__VnoInFunc_prev\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_prev__3__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz63_TBz134__Vclpkg.__VnoInFunc_get_prev(vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_prev__3__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_prev__3__Vfuncout;
    prev__Vfuncrtn = this->__PVT__m_cb;
}

void Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::__VnoInFunc_get_cb(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> &get_cb__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::__VnoInFunc_get_cb\n"); );
    // Body
    get_cb__Vfuncrtn = this->__PVT__m_cb;
}

void Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_i = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_i:" + VL_TO_STRING(__PVT__m_i);
    out += ", m_obj:" + VL_TO_STRING(__PVT__m_obj);
    out += ", m_cb:" + VL_TO_STRING(__PVT__m_cb);
    return (out);
}
