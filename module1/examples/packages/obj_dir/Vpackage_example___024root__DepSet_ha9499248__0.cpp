// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpackage_example.h for the primary calling header

#include "Vpackage_example__pch.h"
#include "Vpackage_example___024root.h"

VlCoroutine Vpackage_example___024root___eval_initial__TOP__Vtiming__0(Vpackage_example___024root* vlSelf);

void Vpackage_example___024root___eval_initial(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_initial\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpackage_example___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vpackage_example___024root* vlSelf, VlForkSync __Vfork_1__sync);
VlCoroutine Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vpackage_example___024root* vlSelf, VlForkSync __Vfork_1__sync);

VL_INLINE_OPT VlCoroutine Vpackage_example___024root___eval_initial__TOP__Vtiming__0(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("============================================================\nModule 1 Example 1.3: Packages and Namespaces\n============================================================\n\n1. Using enum type from package:\n   Initial state: IDLE\n",0);
    vlSelfRef.package_example__DOT__current_state = 1U;
    VL_WRITEF_NX("   Active state: ACTIVE\n\n2. Using struct type from package:\n",0);
    vlSelfRef.package_example__DOT__trans = 0x201bd5b7ddfULL;
    VL_WRITEF_NX("   Transaction: addr=0x100, data=0xdeadbeef, valid=1\n\n3. Using functions from package:\n   Address 0x0100 is valid: 1\n   Address 0x2000 is valid: 0\n   Checksum of 0xDEADBEEF: 0x22\n\n4. Using constants from package:\n   MAX_TRANSACTIONS: 100\n   TIMEOUT_CYCLES: 1000\n\n5. Using task from package:\n",0);
    vlSelfRef.package_example__DOT__condition = 0U;
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(2U, nullptr);
    Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(vlSelf, __Vfork_1__sync);
    Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(vlSelf, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(nullptr, "package_example.sv", 
                                  109);
    VL_WRITEF_NX("   Condition met after wait\n\n============================================================\nExample completed successfully!\n============================================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "package_example.sv", 
                                         127);
    VL_FINISH_MT("package_example.sv", 128, "");
    co_return;
}

VL_INLINE_OPT VlCoroutine Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vpackage_example___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "package_example.sv", 
                                         111);
    vlSelfRef.package_example__DOT__condition = 1U;
    __Vfork_1__sync.done("package_example.sv", 110);
}

void Vpackage_example___024root___eval_act(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_act\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vpackage_example___024root___eval_nba(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_nba\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vpackage_example___024root___timing_resume(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___timing_resume\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vpackage_example___024root___eval_triggers__act(Vpackage_example___024root* vlSelf);

bool Vpackage_example___024root___eval_phase__act(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_phase__act\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpackage_example___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpackage_example___024root___timing_resume(vlSelf);
        Vpackage_example___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpackage_example___024root___eval_phase__nba(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_phase__nba\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpackage_example___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpackage_example___024root___dump_triggers__nba(Vpackage_example___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpackage_example___024root___dump_triggers__act(Vpackage_example___024root* vlSelf);
#endif  // VL_DEBUG

void Vpackage_example___024root___eval(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vpackage_example___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("package_example.sv", 62, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpackage_example___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("package_example.sv", 62, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpackage_example___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpackage_example___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpackage_example___024root___eval_debug_assertions(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_debug_assertions\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
