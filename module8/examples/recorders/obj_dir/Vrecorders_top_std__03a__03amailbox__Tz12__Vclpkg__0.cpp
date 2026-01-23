// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

Vrecorders_top_std__03a__03amailbox__Tz12::Vrecorders_top_std__03a__03amailbox__Tz12(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_std__03a__03amailbox__Tz12::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_bound = bound;
}

void Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_num(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
}

VlCoroutine Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_put(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_put\n"); );
    // Body
    VL_KEEP_THIS;
    while (((0U != this->__PVT__m_bound) & VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound))) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_h01cd14f6__0;
            __VdynTrigger_h01cd14f6__0 = 0;
            __VdynTrigger_h01cd14f6__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h01cd14f6__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz12.m_queue.size() < std::mailbox__Tz12.m_bound))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             49);
                this->__Vtrigprevexpr_h03a28113__0 
                    = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_h01cd14f6__0 = this->__Vtrigprevexpr_h03a28113__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h01cd14f6__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz12.m_queue.size() < std::mailbox__Tz12.m_bound))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         49);
        }
    }
    this->__PVT__m_queue.push_back(message);
}

void Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_try_put(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> message, IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_try_put\n"); );
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

VlCoroutine Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_get\n"); );
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_he3648f52__0;
            __VdynTrigger_he3648f52__0 = 0;
            __VdynTrigger_he3648f52__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_he3648f52__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz12.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             65);
                this->__Vtrigprevexpr_he11afc67__0 
                    = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_he3648f52__0 = this->__Vtrigprevexpr_he11afc67__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he3648f52__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz12.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         65);
        }
    }
    message = this->__PVT__m_queue.pop_front();
}

void Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_try_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> &message, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_try_get\n"); );
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

VlCoroutine Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_peek(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_peek\n"); );
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_he3648f52__1;
            __VdynTrigger_he3648f52__1 = 0;
            __VdynTrigger_he3648f52__1 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_he3648f52__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz12.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             82);
                this->__Vtrigprevexpr_he11afc67__1 
                    = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_he3648f52__1 = this->__Vtrigprevexpr_he11afc67__1;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he3648f52__1);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz12.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         82);
        }
    }
    message = this->__PVT__m_queue.at(0U);
}

void Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_try_peek(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> &message, IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_std__03a__03amailbox__Tz12::__VnoInFunc_try_peek\n"); );
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

void Vrecorders_top_std__03a__03amailbox__Tz12::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_std__03a__03amailbox__Tz12::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_bound = 0;
    __Vtrigprevexpr_h03a28113__0 = VL_SCOPED_RAND_RESET_I(1, 5661445310476019802ULL, 2868760809763601558ull);
    __Vtrigprevexpr_he11afc67__0 = VL_SCOPED_RAND_RESET_I(1, 5661445310476019802ULL, 16331073724504973500ull);
    __Vtrigprevexpr_he11afc67__1 = VL_SCOPED_RAND_RESET_I(1, 5661445310476019802ULL, 12958887153110910125ull);
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_std__03a__03amailbox__Tz12>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_std__03a__03amailbox__Tz12::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_std__03a__03amailbox__Tz12::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_std__03a__03amailbox__Tz12::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_std__03a__03amailbox__Tz12::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_std__03a__03amailbox__Tz12::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_bound:" + VL_TO_STRING(__PVT__m_bound);
    out += ", m_queue:" + VL_TO_STRING(__PVT__m_queue);
    return (out);
}
