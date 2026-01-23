// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinterface_example.h for the primary calling header

#include "Vinterface_example__pch.h"
#include "Vinterface_example___024root.h"

VlCoroutine Vinterface_example___024root___eval_initial__TOP__Vtiming__0(Vinterface_example___024root* vlSelf);
VlCoroutine Vinterface_example___024root___eval_initial__TOP__Vtiming__1(Vinterface_example___024root* vlSelf);

void Vinterface_example___024root___eval_initial(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_initial\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vinterface_example___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vinterface_example___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vinterface_example___024root___eval_initial__TOP__Vtiming__0(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interface_example__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "interface_example.sv", 
                                             80);
        vlSelfRef.interface_example__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.interface_example__DOT__clk)));
    }
}

void Vinterface_example___024root___eval_act(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_act\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vinterface_example___024root___nba_sequent__TOP__0(Vinterface_example___024root* vlSelf);

void Vinterface_example___024root___eval_nba(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_nba\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vinterface_example___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vinterface_example___024root___timing_resume(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___timing_resume\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h58f3d192__0.resume(
                                                   "@(posedge interface_example.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vinterface_example___024root___timing_commit(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___timing_commit\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h58f3d192__0.commit(
                                                   "@(posedge interface_example.clk)");
    }
}

void Vinterface_example___024root___eval_triggers__act(Vinterface_example___024root* vlSelf);

bool Vinterface_example___024root___eval_phase__act(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_phase__act\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vinterface_example___024root___eval_triggers__act(vlSelf);
    Vinterface_example___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vinterface_example___024root___timing_resume(vlSelf);
        Vinterface_example___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vinterface_example___024root___eval_phase__nba(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_phase__nba\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vinterface_example___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinterface_example___024root___dump_triggers__nba(Vinterface_example___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vinterface_example___024root___dump_triggers__act(Vinterface_example___024root* vlSelf);
#endif  // VL_DEBUG

void Vinterface_example___024root___eval(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vinterface_example___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("interface_example.sv", 75, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vinterface_example___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("interface_example.sv", 75, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vinterface_example___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vinterface_example___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vinterface_example___024root___eval_debug_assertions(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_debug_assertions\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
