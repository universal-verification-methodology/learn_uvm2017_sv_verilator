// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

Vclass_hierarchy_std__03a__03amailbox__Tz1::Vclass_hierarchy_std__03a__03amailbox__Tz1(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_std__03a__03amailbox__Tz1::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_bound = bound;
}

void Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_num(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
}

VlCoroutine Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_put(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_put\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hfb958409__0;
    __Vtrigprevexpr_hfb958409__0 = 0;
    // Body
    VL_KEEP_THIS;
    while (((0U != this->__PVT__m_bound) & VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound))) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_h09da2904__0;
            __VdynTrigger_h09da2904__0 = 0;
            __VdynTrigger_h09da2904__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h09da2904__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             50);
                __Vtrigprevexpr_hfb958409__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_h09da2904__0 = __Vtrigprevexpr_hfb958409__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h09da2904__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         50);
        }
    }
    this->__PVT__m_queue.push_back(message);
    co_return;}

void Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_try_put(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> message, IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_try_put\n"); );
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

VlCoroutine Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_get\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h4a700614__0;
    __Vtrigprevexpr_h4a700614__0 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_h3c8fb2db__0;
            __VdynTrigger_h3c8fb2db__0 = 0;
            __VdynTrigger_h3c8fb2db__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h3c8fb2db__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             66);
                __Vtrigprevexpr_h4a700614__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_h3c8fb2db__0 = __Vtrigprevexpr_h4a700614__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3c8fb2db__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         66);
        }
    }
    message = this->__PVT__m_queue.pop_front();
    co_return;}

void Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_try_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &message, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_try_get\n"); );
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

VlCoroutine Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h4a700614__1;
    __Vtrigprevexpr_h4a700614__1 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_h3c8fb2db__1;
            __VdynTrigger_h3c8fb2db__1 = 0;
            __VdynTrigger_h3c8fb2db__1 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h3c8fb2db__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             83);
                __Vtrigprevexpr_h4a700614__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_h3c8fb2db__1 = __Vtrigprevexpr_h4a700614__1;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3c8fb2db__1);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         83);
        }
    }
    message = this->__PVT__m_queue.at(0U);
    co_return;}

void Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_try_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_std__03a__03amailbox__Tz1::__VnoInFunc_try_peek\n"); );
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

void Vclass_hierarchy_std__03a__03amailbox__Tz1::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_std__03a__03amailbox__Tz1::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_bound = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_std__03a__03amailbox__Tz1>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_std__03a__03amailbox__Tz1::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_std__03a__03amailbox__Tz1::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_std__03a__03amailbox__Tz1::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_std__03a__03amailbox__Tz1::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_std__03a__03amailbox__Tz1::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_bound:" + VL_TO_STRING(__PVT__m_bound);
    out += ", m_queue:" + VL_TO_STRING(__PVT__m_queue);
    return (out);
}
