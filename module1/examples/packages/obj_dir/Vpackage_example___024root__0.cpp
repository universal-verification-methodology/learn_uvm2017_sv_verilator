// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpackage_example.h for the primary calling header

#include "Vpackage_example__pch.h"

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

VlCoroutine Vpackage_example___024root___eval_initial__TOP__Vtiming__0(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("============================================================\nModule 1 Example 1.3: Packages and Namespaces\n============================================================\n\n1. Using enum type from package:\n   Initial state: IDLE\n",0);
    vlSelfRef.package_example__DOT__current_state = 1U;
    VL_WRITEF_NX("   Active state: ACTIVE\n\n2. Using struct type from package:\n",0);
    vlSelfRef.package_example__DOT__trans = 0x00000201bd5b7ddfULL;
    VL_WRITEF_NX("   Transaction: addr=0x100, data=0xdeadbeef, valid=1\n\n3. Using functions from package:\n   Address 0x0100 is valid: 1\n   Address 0x2000 is valid: 0\n   Checksum of 0xDEADBEEF: 0x22\n\n4. Using constants from package:\n   MAX_TRANSACTIONS: 100\n   TIMEOUT_CYCLES: 1000\n\n5. Using task from package:\n",0);
    vlSelfRef.package_example__DOT__condition = 0U;
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(2U, nullptr);
    Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(vlSelf, __Vfork_1__sync);
    Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(vlSelf, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(nullptr, "package_example.sv", 
                                  109);
    VL_WRITEF_NX("   Condition met after wait\n\n============================================================\nExample completed successfully!\n============================================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "package_example.sv", 
                                         127);
    VL_FINISH_MT("package_example.sv", 128, "");
    co_return;}

VlCoroutine Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vpackage_example___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_wait_for_condition__3__count;
    __Vtask_wait_for_condition__3__count = 0;
    // Body
    vlSelfRef.package_example__DOT__unnamedblk1__DOT__timeout_val = 0x000003e8U;
    __Vtask_wait_for_condition__3__count = 0;
    __Vtask_wait_for_condition__3__count = 0U;
    while (((~ (IData)(vlSelfRef.package_example__DOT__condition)) 
            & VL_LTS_III(32, __Vtask_wait_for_condition__3__count, vlSelfRef.package_example__DOT__unnamedblk1__DOT__timeout_val))) {
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "package_example.sv", 
                                             50);
        __Vtask_wait_for_condition__3__count = ((IData)(1U) 
                                                + __Vtask_wait_for_condition__3__count);
    }
    if (VL_UNLIKELY((VL_GTES_III(32, __Vtask_wait_for_condition__3__count, vlSelfRef.package_example__DOT__unnamedblk1__DOT__timeout_val)))) {
        VL_WRITEF_NX("[%0t] %%Error: package_example.sv:54: Assertion failed in %Nverification_pkg.wait_for_condition: Timeout waiting for condition\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("package_example.sv", 54, "");
    }
    __Vfork_1__sync.done("package_example.sv", 114);
    co_return;}

VlCoroutine Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vpackage_example___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "package_example.sv", 
                                         111);
    vlSelfRef.package_example__DOT__condition = 1U;
    __Vfork_1__sync.done("package_example.sv", 110);
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpackage_example___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vpackage_example___024root___eval_triggers__act(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_triggers__act\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpackage_example___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vpackage_example___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vpackage_example___024root___timing_resume(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___timing_resume\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vpackage_example___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpackage_example___024root___eval_phase__act(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_phase__act\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vpackage_example___024root___eval_triggers__act(vlSelf);
    Vpackage_example___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vpackage_example___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vpackage_example___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vpackage_example___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vpackage_example___024root___eval_phase__nba(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_phase__nba\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vpackage_example___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vpackage_example___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vpackage_example___024root___eval(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vpackage_example___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("package_example.sv", 62, "", "DIDNOTCONVERGE: NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vpackage_example___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("package_example.sv", 62, "", "DIDNOTCONVERGE: Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vpackage_example___024root___eval_phase__act(vlSelf));
    } while (Vpackage_example___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vpackage_example___024root___eval_debug_assertions(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_debug_assertions\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
