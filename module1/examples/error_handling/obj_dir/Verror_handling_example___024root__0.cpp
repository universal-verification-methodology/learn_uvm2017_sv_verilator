// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verror_handling_example.h for the primary calling header

#include "Verror_handling_example__pch.h"

VlCoroutine Verror_handling_example___024root___eval_initial__TOP__Vtiming__0(Verror_handling_example___024root* vlSelf);

void Verror_handling_example___024root___eval_initial(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___eval_initial\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verror_handling_example___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Verror_handling_example___024root___eval_initial__TOP__Vtiming__0(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___eval_initial__TOP__Vtiming__0\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent> error_handling_example__DOT__comp;
    VlClassRef<Verror_handling_example_error_handling_pkg__03a__03aVerificationException> error_handling_example__DOT__unnamedblk1__DOT__exc;
    std::string __Vtask_convert2string__4__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VL_WRITEF_NX("============================================================\nModule 1 Example 1.5: Error Handling and Logging\n============================================================\n\n",0);
    error_handling_example__DOT__comp = VL_NEW(Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent, vlSymsp);
    VL_WRITEF_NX("1. Reporting Levels:\n",0);
    VL_NULL_CHECK(error_handling_example__DOT__comp, "error_handling_example.sv", 97)->__VnoInFunc_demonstrate_reporting(vlSymsp);
    VL_WRITEF_NX("\n2. Retry Logic:\n",0);
    co_await VL_NULL_CHECK(error_handling_example__DOT__comp, "error_handling_example.sv", 102)->__VnoInFunc_retry_task(vlSymsp, 3U);
    VL_WRITEF_NX("\n3. Exception Handling:\n",0);
    error_handling_example__DOT__unnamedblk1__DOT__exc 
        = VL_NEW(Verror_handling_example_error_handling_pkg__03a__03aVerificationException, vlSymsp, "Test exception"s, 0x0000002aU);
    __Vtemp_1 = ([&]() {
            VL_NULL_CHECK(error_handling_example__DOT__unnamedblk1__DOT__exc, "error_handling_example.sv", 110)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__4__Vfuncout);
        }(), __Vtask_convert2string__4__Vfuncout);
    VL_WRITEF_NX("   Created exception: %@\n\n============================================================\nExample completed successfully!\n============================================================\n",0,
                 -1,&(__Vtemp_1));
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "error_handling_example.sv", 
                                         118);
    VL_FINISH_MT("error_handling_example.sv", 119, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Verror_handling_example___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Verror_handling_example___024root___eval_triggers__act(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___eval_triggers__act\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Verror_handling_example___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Verror_handling_example___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___trigger_anySet__act\n"); );
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

void Verror_handling_example___024root___timing_resume(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___timing_resume\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Verror_handling_example___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Verror_handling_example___024root___eval_phase__act(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___eval_phase__act\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Verror_handling_example___024root___eval_triggers__act(vlSelf);
    Verror_handling_example___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Verror_handling_example___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Verror_handling_example___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Verror_handling_example___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Verror_handling_example___024root___eval_phase__nba(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___eval_phase__nba\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Verror_handling_example___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Verror_handling_example___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Verror_handling_example___024root___eval(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___eval\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Verror_handling_example___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("error_handling_example.sv", 81, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Verror_handling_example___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("error_handling_example.sv", 81, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Verror_handling_example___024root___eval_phase__act(vlSelf));
    } while (Verror_handling_example___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Verror_handling_example___024root___eval_debug_assertions(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___eval_debug_assertions\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
