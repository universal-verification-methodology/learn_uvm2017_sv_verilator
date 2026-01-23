// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

Vvirtual_sequences_std__03a__03amailbox__Tz15::Vvirtual_sequences_std__03a__03amailbox__Tz15(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_std__03a__03amailbox__Tz15::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_bound = bound;
}

void Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_num(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
}

VlCoroutine Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_put(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_put\n"); );
    // Body
    VL_KEEP_THIS;
    while (((0U != this->__PVT__m_bound) & VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound))) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_h865195b3__0;
            __VdynTrigger_h865195b3__0 = 0;
            __VdynTrigger_h865195b3__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h865195b3__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz15.m_queue.size() < std::mailbox__Tz15.m_bound))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             49);
                this->__Vtrigprevexpr_h802e0156__0 
                    = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_h865195b3__0 = this->__Vtrigprevexpr_h802e0156__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h865195b3__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz15.m_queue.size() < std::mailbox__Tz15.m_bound))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         49);
        }
    }
    this->__PVT__m_queue.push_back(message);
}

void Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_try_put(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> message, IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_try_put\n"); );
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

VlCoroutine Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_get(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_get\n"); );
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_h128f65b4__0;
            __VdynTrigger_h128f65b4__0 = 0;
            __VdynTrigger_h128f65b4__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h128f65b4__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz15.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             65);
                this->__Vtrigprevexpr_hf46fd155__0 
                    = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_h128f65b4__0 = this->__Vtrigprevexpr_hf46fd155__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h128f65b4__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz15.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         65);
        }
    }
    message = this->__PVT__m_queue.pop_front();
}

void Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_try_get(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> &message, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_try_get\n"); );
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

VlCoroutine Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_peek(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_peek\n"); );
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_h128f65b4__1;
            __VdynTrigger_h128f65b4__1 = 0;
            __VdynTrigger_h128f65b4__1 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h128f65b4__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz15.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             82);
                this->__Vtrigprevexpr_hf46fd155__1 
                    = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_h128f65b4__1 = this->__Vtrigprevexpr_hf46fd155__1;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h128f65b4__1);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz15.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         82);
        }
    }
    message = this->__PVT__m_queue.at(0U);
}

void Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_try_peek(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> &message, IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_std__03a__03amailbox__Tz15::__VnoInFunc_try_peek\n"); );
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

void Vvirtual_sequences_std__03a__03amailbox__Tz15::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_std__03a__03amailbox__Tz15::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_bound = 0;
    __Vtrigprevexpr_h802e0156__0 = VL_SCOPED_RAND_RESET_I(1, 5466665465873844568ULL, 2412446467111212536ull);
    __Vtrigprevexpr_hf46fd155__0 = VL_SCOPED_RAND_RESET_I(1, 5466665465873844568ULL, 111434214058074504ull);
    __Vtrigprevexpr_hf46fd155__1 = VL_SCOPED_RAND_RESET_I(1, 5466665465873844568ULL, 12050348997209737025ull);
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_std__03a__03amailbox__Tz15>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_std__03a__03amailbox__Tz15::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_std__03a__03amailbox__Tz15::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_std__03a__03amailbox__Tz15::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_std__03a__03amailbox__Tz15::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_std__03a__03amailbox__Tz15::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_bound:" + VL_TO_STRING(__PVT__m_bound);
    out += ", m_queue:" + VL_TO_STRING(__PVT__m_queue);
    return (out);
}
