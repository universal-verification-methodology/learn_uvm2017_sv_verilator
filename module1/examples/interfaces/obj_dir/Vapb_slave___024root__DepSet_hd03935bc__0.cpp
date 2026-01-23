// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_slave.h for the primary calling header

#include "Vapb_slave__pch.h"
#include "Vapb_slave___024root.h"

void Vapb_slave___024root___eval_act(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___eval_act\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vapb_slave___024root___nba_sequent__TOP__0(Vapb_slave___024root* vlSelf);

void Vapb_slave___024root___eval_nba(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___eval_nba\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vapb_slave___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vapb_slave___024root___nba_sequent__TOP__0(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___nba_sequent__TOP__0\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__apb_slave__DOT__mem__v0;
    __VdlyVal__apb_slave__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__apb_slave__DOT__mem__v0;
    __VdlyDim0__apb_slave__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__apb_slave__DOT__mem__v0;
    __VdlySet__apb_slave__DOT__mem__v0 = 0;
    // Body
    __VdlySet__apb_slave__DOT__mem__v0 = 0U;
    if (((IData)(vlSelfRef.psel) & (IData)(vlSelfRef.penable))) {
        if (vlSelfRef.pwrite) {
            __VdlyVal__apb_slave__DOT__mem__v0 = vlSelfRef.pwdata;
            __VdlyDim0__apb_slave__DOT__mem__v0 = (0x3ffU 
                                                   & ((IData)(vlSelfRef.paddr) 
                                                      >> 2U));
            __VdlySet__apb_slave__DOT__mem__v0 = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.pwrite)))) {
            vlSelfRef.prdata = vlSelfRef.apb_slave__DOT__mem
                [(0x3ffU & ((IData)(vlSelfRef.paddr) 
                            >> 2U))];
        }
        vlSelfRef.pready = 1U;
    } else {
        vlSelfRef.pready = 0U;
    }
    if (__VdlySet__apb_slave__DOT__mem__v0) {
        vlSelfRef.apb_slave__DOT__mem[__VdlyDim0__apb_slave__DOT__mem__v0] 
            = __VdlyVal__apb_slave__DOT__mem__v0;
    }
}

void Vapb_slave___024root___eval_triggers__act(Vapb_slave___024root* vlSelf);

bool Vapb_slave___024root___eval_phase__act(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___eval_phase__act\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vapb_slave___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vapb_slave___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vapb_slave___024root___eval_phase__nba(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___eval_phase__nba\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vapb_slave___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_slave___024root___dump_triggers__nba(Vapb_slave___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_slave___024root___dump_triggers__act(Vapb_slave___024root* vlSelf);
#endif  // VL_DEBUG

void Vapb_slave___024root___eval(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___eval\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vapb_slave___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("interface_example.sv", 42, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vapb_slave___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("interface_example.sv", 42, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vapb_slave___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vapb_slave___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vapb_slave___024root___eval_debug_assertions(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___eval_debug_assertions\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.psel & 0xfeU)))) {
        Verilated::overWidthError("psel");}
    if (VL_UNLIKELY(((vlSelfRef.penable & 0xfeU)))) {
        Verilated::overWidthError("penable");}
    if (VL_UNLIKELY(((vlSelfRef.pwrite & 0xfeU)))) {
        Verilated::overWidthError("pwrite");}
}
#endif  // VL_DEBUG
