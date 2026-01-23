// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

Vtransactions_std__03a__03amailbox__Tz13::Vtransactions_std__03a__03amailbox__Tz13(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_std__03a__03amailbox__Tz13::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_bound = bound;
}

void Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_num(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
}

VlCoroutine Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_put(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_put\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_he7475e9d__0;
    __Vtrigprevexpr_he7475e9d__0 = 0;
    // Body
    VL_KEEP_THIS;
    while (((0U != this->__PVT__m_bound) & VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound))) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_hdd2808b8__0;
            __VdynTrigger_hdd2808b8__0 = 0;
            __VdynTrigger_hdd2808b8__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hdd2808b8__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz13.m_queue.size() < std::mailbox__Tz13.m_bound))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             50);
                __Vtrigprevexpr_he7475e9d__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_hdd2808b8__0 = __Vtrigprevexpr_he7475e9d__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hdd2808b8__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz13.m_queue.size() < std::mailbox__Tz13.m_bound))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         50);
        }
    }
    this->__PVT__m_queue.push_back(message);
    co_return;}

void Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_try_put(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item> message, IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_try_put\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_num__0__Vfuncout;
    __Vfunc_num__0__Vfuncout = 0;
    // Body
    {
        if (((0U == this->__PVT__m_bound) | VL_LTS_III(32, 
                                                       ([&]() {
                            this->__VnoInFunc_num(vlSymsp, __Vfunc_num__0__Vfuncout);
                        }(), __Vfunc_num__0__Vfuncout), this->__PVT__m_bound))) {
            this->__PVT__m_queue.push_back(message);
            try_put__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_put__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_get(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_get\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_he4653329__0;
    __Vtrigprevexpr_he4653329__0 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_he28ad924__0;
            __VdynTrigger_he28ad924__0 = 0;
            __VdynTrigger_he28ad924__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_he28ad924__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz13.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             66);
                __Vtrigprevexpr_he4653329__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_he28ad924__0 = __Vtrigprevexpr_he4653329__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he28ad924__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz13.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         66);
        }
    }
    message = this->__PVT__m_queue.pop_front();
    co_return;}

void Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_try_get(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item> &message, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_try_get\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_num__1__Vfuncout;
    __Vfunc_num__1__Vfuncout = 0;
    // Body
    {
        if (VL_LTS_III(32, 0U, ([&]() {
                        this->__VnoInFunc_num(vlSymsp, __Vfunc_num__1__Vfuncout);
                    }(), __Vfunc_num__1__Vfuncout))) {
            message = this->__PVT__m_queue.pop_front();
            try_get__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_get__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_peek(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_he4653329__1;
    __Vtrigprevexpr_he4653329__1 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_he28ad924__1;
            __VdynTrigger_he28ad924__1 = 0;
            __VdynTrigger_he28ad924__1 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_he28ad924__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz13.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             83);
                __Vtrigprevexpr_he4653329__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_he28ad924__1 = __Vtrigprevexpr_he4653329__1;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he28ad924__1);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz13.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         83);
        }
    }
    message = this->__PVT__m_queue.at(0U);
    co_return;}

void Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_try_peek(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item> &message, IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_std__03a__03amailbox__Tz13::__VnoInFunc_try_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_num__2__Vfuncout;
    __Vfunc_num__2__Vfuncout = 0;
    // Body
    {
        if (VL_LTS_III(32, 0U, ([&]() {
                        this->__VnoInFunc_num(vlSymsp, __Vfunc_num__2__Vfuncout);
                    }(), __Vfunc_num__2__Vfuncout))) {
            message = this->__PVT__m_queue.at(0U);
            try_peek__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_peek__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtransactions_std__03a__03amailbox__Tz13::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_std__03a__03amailbox__Tz13::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_bound = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_std__03a__03amailbox__Tz13>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_std__03a__03amailbox__Tz13::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_std__03a__03amailbox__Tz13::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_std__03a__03amailbox__Tz13::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_std__03a__03amailbox__Tz13::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_std__03a__03amailbox__Tz13::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_bound:" + VL_TO_STRING(__PVT__m_bound);
    out += ", m_queue:" + VL_TO_STRING(__PVT__m_queue);
    return (out);
}
