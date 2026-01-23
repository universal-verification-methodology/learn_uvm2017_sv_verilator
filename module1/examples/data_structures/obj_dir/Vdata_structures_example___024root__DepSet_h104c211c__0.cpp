// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"
#include "Vdata_structures_example___024root.h"

VlCoroutine Vdata_structures_example___024root___eval_initial__TOP__Vtiming__0(Vdata_structures_example___024root* vlSelf);

void Vdata_structures_example___024root___eval_initial(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_initial\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdata_structures_example___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vdata_structures_example___024root___eval_act(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_act\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdata_structures_example___024root___eval_nba(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_nba\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdata_structures_example___024root___timing_resume(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___timing_resume\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdata_structures_example___024root___eval_triggers__act(Vdata_structures_example___024root* vlSelf);

bool Vdata_structures_example___024root___eval_phase__act(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_phase__act\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdata_structures_example___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdata_structures_example___024root___timing_resume(vlSelf);
        Vdata_structures_example___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdata_structures_example___024root___eval_phase__nba(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_phase__nba\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdata_structures_example___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_structures_example___024root___dump_triggers__nba(Vdata_structures_example___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_structures_example___024root___dump_triggers__act(Vdata_structures_example___024root* vlSelf);
#endif  // VL_DEBUG

void Vdata_structures_example___024root___eval(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vdata_structures_example___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("data_structures_example.sv", 140, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdata_structures_example___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("data_structures_example.sv", 140, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdata_structures_example___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdata_structures_example___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdata_structures_example___024root___eval_debug_assertions(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_debug_assertions\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
