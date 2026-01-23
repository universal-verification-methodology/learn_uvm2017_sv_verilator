// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsignal_access.h for the primary calling header

#include "Vsignal_access__pch.h"

VlCoroutine Vsignal_access___024root___eval_initial__TOP__Vtiming__0(Vsignal_access___024root* vlSelf);
VlCoroutine Vsignal_access___024root___eval_initial__TOP__Vtiming__1(Vsignal_access___024root* vlSelf);

void Vsignal_access___024root___eval_initial(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval_initial\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsignal_access___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vsignal_access___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vsignal_access___024root___eval_initial__TOP__Vtiming__0(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_signal_access__DOT__test_signal_types__3__unnamedblk1__DOT__i;
    __Vtask_signal_access__DOT__test_signal_types__3__unnamedblk1__DOT__i = 0;
    // Body
    VL_WRITEF_NX("============================================================\nSignal Access Examples\n============================================================\n\n",0);
    vlSelfRef.signal_access__DOT__rst_n = 0U;
    vlSelfRef.signal_access__DOT__enable = 0U;
    vlSelfRef.signal_access__DOT__d = 0U;
    vlSelfRef.signal_access__DOT__single_bit = 0U;
    vlSelfRef.signal_access__DOT__multi_bit = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "signal_access.sv", 
                                         191);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Example 1: Signal Reading\n",0);
    vlSelfRef.signal_access__DOT__rst_n = 0U;
    vlSelfRef.signal_access__DOT__enable = 0U;
    vlSelfRef.signal_access__DOT__d = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "signal_access.sv", 
                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("  Initial state:\n    q = 0x%02x (%0#)\n    rst_n = %b\n    enable = %b\n",0,
                 8,vlSelfRef.signal_access__DOT__q,
                 8,(IData)(vlSelfRef.signal_access__DOT__q),
                 1,vlSelfRef.signal_access__DOT__rst_n,
                 1,(IData)(vlSelfRef.signal_access__DOT__enable));
    vlSelfRef.signal_access__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "signal_access.sv", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("  After reset de-assert:\n    q = 0x%02x (%0#)\n",0,
                 8,vlSelfRef.signal_access__DOT__q,
                 8,(IData)(vlSelfRef.signal_access__DOT__q));
    vlSelfRef.signal_access__DOT__enable = 1U;
    vlSelfRef.signal_access__DOT__d = 0xaaU;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "signal_access.sv", 
                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("  After write (d=0xAA):\n    q = 0x%02x (%0#)\n",0,
                 8,vlSelfRef.signal_access__DOT__q,
                 8,(IData)(vlSelfRef.signal_access__DOT__q));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0xaaU != (IData)(vlSelfRef.signal_access__DOT__q))))) {
            VL_WRITEF_NX("[%0t] %%Error: signal_access.sv:78: Assertion failed in %Nsignal_access.test_signal_reading: Read failed: expected 0xAA, got 0x%02x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,(IData)(vlSelfRef.signal_access__DOT__q));
            VL_STOP_MT("signal_access.sv", 78, "");
        }
    }
    VL_WRITEF_NX("  Signal reading PASSED\n",0);
    VL_WRITEF_NX("\nExample 2: Signal Driving\n",0);
    vlSelfRef.signal_access__DOT__d = 0x55U;
    vlSelfRef.signal_access__DOT__enable = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "signal_access.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("  Drove d = 0x%02x, q = 0x%02x\n",0,
                 8,vlSelfRef.signal_access__DOT__d,
                 8,(IData)(vlSelfRef.signal_access__DOT__q));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x55U != (IData)(vlSelfRef.signal_access__DOT__q))))) {
            VL_WRITEF_NX("[%0t] %%Error: signal_access.sv:96: Assertion failed in %Nsignal_access.test_signal_driving: Drive failed\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("signal_access.sv", 96, "");
        }
    }
    vlSelfRef.signal_access__DOT__d = 0xffU;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "signal_access.sv", 
                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("  Drove d = 0x%02x, q = 0x%02x\n",0,
                 8,vlSelfRef.signal_access__DOT__d,
                 8,(IData)(vlSelfRef.signal_access__DOT__q));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0xffU != (IData)(vlSelfRef.signal_access__DOT__q))))) {
            VL_WRITEF_NX("[%0t] %%Error: signal_access.sv:101: Assertion failed in %Nsignal_access.test_signal_driving: Drive failed\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("signal_access.sv", 101, "");
        }
    }
    vlSelfRef.signal_access__DOT__d = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "signal_access.sv", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("  Drove d = 0x%02x, q = 0x%02x\n",0,
                 8,vlSelfRef.signal_access__DOT__d,
                 8,(IData)(vlSelfRef.signal_access__DOT__q));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.signal_access__DOT__q))))) {
            VL_WRITEF_NX("[%0t] %%Error: signal_access.sv:106: Assertion failed in %Nsignal_access.test_signal_driving: Drive failed\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("signal_access.sv", 106, "");
        }
    }
    VL_WRITEF_NX("  Signal driving PASSED\n",0);
    VL_WRITEF_NX("\nExample 3: Signal Monitoring\n  Monitoring q signal changes...\n",0);
    vlSelfRef.signal_access__DOT__monitor_count = 0U;
    vlSelfRef.signal_access__DOT__d = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "signal_access.sv", 
                                         126);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.signal_access__DOT__d = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "signal_access.sv", 
                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.signal_access__DOT__d = 0x33U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "signal_access.sv", 
                                         132);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("  Signal monitoring PASSED (monitored %0d changes)\n",0,
                 32,vlSelfRef.signal_access__DOT__monitor_count);
    __Vtask_signal_access__DOT__test_signal_types__3__unnamedblk1__DOT__i = 0;
    VL_WRITEF_NX("\nExample 4: Different Signal Types\n",0);
    vlSelfRef.signal_access__DOT__single_bit = 0U;
    VL_WRITEF_NX("  Single-bit: %b\n",0,1,vlSelfRef.signal_access__DOT__single_bit);
    vlSelfRef.signal_access__DOT__single_bit = 1U;
    VL_WRITEF_NX("  Single-bit: %b\n",0,1,vlSelfRef.signal_access__DOT__single_bit);
    vlSelfRef.signal_access__DOT__multi_bit = 0xabcdU;
    VL_WRITEF_NX("  Multi-bit: 0x%04x (%0#)\n  Multi-bit width: 16 bits\n",0,
                 16,vlSelfRef.signal_access__DOT__multi_bit,
                 16,(IData)(vlSelfRef.signal_access__DOT__multi_bit));
    vlSelfRef.signal_access__DOT__array_signal = 0x33221100U;
    VL_WRITEF_NX("  Array signal:\n",0);
    __Vtask_signal_access__DOT__test_signal_types__3__unnamedblk1__DOT__i = 0U;
    VL_WRITEF_NX("    array_signal[0] = 0x%02x\n",0,
                 8,(0x000000ffU & vlSelfRef.signal_access__DOT__array_signal));
    __Vtask_signal_access__DOT__test_signal_types__3__unnamedblk1__DOT__i = 1U;
    VL_WRITEF_NX("    array_signal[1] = 0x%02x\n",0,
                 8,(0x000000ffU & (vlSelfRef.signal_access__DOT__array_signal 
                                   >> 8U)));
    __Vtask_signal_access__DOT__test_signal_types__3__unnamedblk1__DOT__i = 2U;
    VL_WRITEF_NX("    array_signal[2] = 0x%02x\n",0,
                 8,(0x000000ffU & (vlSelfRef.signal_access__DOT__array_signal 
                                   >> 0x10U)));
    __Vtask_signal_access__DOT__test_signal_types__3__unnamedblk1__DOT__i = 3U;
    VL_WRITEF_NX("    array_signal[3] = 0x%02x\n",0,
                 8,(vlSelfRef.signal_access__DOT__array_signal 
                    >> 0x18U));
    __Vtask_signal_access__DOT__test_signal_types__3__unnamedblk1__DOT__i = 4U;
    VL_WRITEF_NX("  Signal types PASSED\n\n============================================================\nSignal Access Examples Complete\n============================================================\n\nKey Concepts:\n  - Signal access is fundamental to testbench operation\n  - Proper timing is essential for signal driving\n  - Signal monitoring enables response checking\n  - Different signal types require different handling\n\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "signal_access.sv", 
                                         212);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("signal_access.sv", 213, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;}

VlCoroutine Vsignal_access___024root___eval_initial__TOP__Vtiming__1(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.signal_access__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "signal_access.sv", 
                                             31);
        vlSelfRef.signal_access__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "signal_access.sv", 
                                             33);
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsignal_access___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vsignal_access___024root___eval_triggers__act(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval_triggers__act\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.signal_access__DOT__q) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__signal_access__DOT__q__0)) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.signal_access__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__signal_access__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.signal_access__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__signal_access__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__signal_access__DOT__clk__0 
        = vlSelfRef.signal_access__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__signal_access__DOT__rst_n__0 
        = vlSelfRef.signal_access__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__signal_access__DOT__q__0 
        = vlSelfRef.signal_access__DOT__q;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsignal_access___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vsignal_access___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___trigger_anySet__act\n"); );
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

void Vsignal_access___024root___nba_sequent__TOP__0(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___nba_sequent__TOP__0\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("    [%0t] q changed to 0x%02x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.signal_access__DOT__q));
    vlSelfRef.signal_access__DOT__monitor_count = ((IData)(1U) 
                                                   + vlSelfRef.signal_access__DOT__monitor_count);
}

void Vsignal_access___024root___nba_sequent__TOP__1(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___nba_sequent__TOP__1\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.signal_access__DOT__rst_n) {
        if (vlSelfRef.signal_access__DOT__enable) {
            vlSelfRef.signal_access__DOT__q = vlSelfRef.signal_access__DOT__d;
        }
    } else {
        vlSelfRef.signal_access__DOT__q = 0U;
    }
}

void Vsignal_access___024root___eval_nba(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval_nba\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsignal_access___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsignal_access___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vsignal_access___024root___timing_resume(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___timing_resume\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsignal_access___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsignal_access___024root___eval_phase__act(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval_phase__act\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vsignal_access___024root___eval_triggers__act(vlSelf);
    Vsignal_access___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsignal_access___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vsignal_access___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vsignal_access___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsignal_access___024root___eval_phase__nba(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval_phase__nba\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsignal_access___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsignal_access___024root___eval_nba(vlSelf);
        Vsignal_access___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsignal_access___024root___eval(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsignal_access___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("signal_access.sv", 14, "", "DIDNOTCONVERGE: NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsignal_access___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("signal_access.sv", 14, "", "DIDNOTCONVERGE: Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vsignal_access___024root___eval_phase__act(vlSelf));
    } while (Vsignal_access___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vsignal_access___024root___eval_debug_assertions(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval_debug_assertions\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
