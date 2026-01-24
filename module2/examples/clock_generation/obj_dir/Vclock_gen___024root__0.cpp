// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_gen.h for the primary calling header

#include "Vclock_gen__pch.h"

VL_ATTR_COLD void Vclock_gen___024root___eval_initial__TOP(Vclock_gen___024root* vlSelf);
VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__0(Vclock_gen___024root* vlSelf);
VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__1(Vclock_gen___024root* vlSelf);
VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__2(Vclock_gen___024root* vlSelf);
VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__3(Vclock_gen___024root* vlSelf);
VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__4(Vclock_gen___024root* vlSelf);
VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__5(Vclock_gen___024root* vlSelf);
VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__6(Vclock_gen___024root* vlSelf);
VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__7(Vclock_gen___024root* vlSelf);
VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__8(Vclock_gen___024root* vlSelf);
VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__9(Vclock_gen___024root* vlSelf);

void Vclock_gen___024root___eval_initial(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_initial\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vclock_gen___024root___eval_initial__TOP(vlSelf);
    Vclock_gen___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vclock_gen___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vclock_gen___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vclock_gen___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vclock_gen___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vclock_gen___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    Vclock_gen___024root___eval_initial__TOP__Vtiming__6(vlSelf);
    Vclock_gen___024root___eval_initial__TOP__Vtiming__7(vlSelf);
    Vclock_gen___024root___eval_initial__TOP__Vtiming__8(vlSelf);
    Vclock_gen___024root___eval_initial__TOP__Vtiming__9(vlSelf);
}

VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__0(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "clock_gen.sv", 
                                         74);
    VL_WRITEF_NX("Example 2: Parameterized Clock\n  Clock period: 20 ns\n",0);
    co_return;}

VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__1(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "clock_gen.sv", 
                                         91);
    VL_WRITEF_NX("Example 3: Multiple Clocks\n  Clock 1 period: 10 ns\n  Clock 2 period: 20 ns\n  Clock 3 period: 5 ns\n",0);
    co_return;}

VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__2(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clock_gen__DOT__clk_gated = 0U;
    vlSelfRef.clock_gen__DOT__clk_enable = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000249f0ULL, 
                                         nullptr, "clock_gen.sv", 
                                         113);
    VL_WRITEF_NX("Example 4: Clock Gating\n  Clock enabled initially\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "clock_gen.sv", 
                                         117);
    vlSelfRef.clock_gen__DOT__clk_enable = 0U;
    VL_WRITEF_NX("  Clock disabled at 200ns\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "clock_gen.sv", 
                                         121);
    vlSelfRef.clock_gen__DOT__clk_enable = 1U;
    VL_WRITEF_NX("  Clock re-enabled at 250ns\n",0);
    co_return;}

VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__3(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clock_gen__DOT__clk_stop = 0U;
    vlSelfRef.clock_gen__DOT__clk_stopped = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000493e0ULL, 
                                         nullptr, "clock_gen.sv", 
                                         150);
    VL_WRITEF_NX("Example 5: Clock Stopping\n  Stopping clock at 300ns\n",0);
    vlSelfRef.clock_gen__DOT__clk_stop = 1U;
    co_return;}

VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__4(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000055730ULL, 
                                         nullptr, "clock_gen.sv", 
                                         172);
    VL_WRITEF_NX("\n============================================================\nClock Generation Examples Complete\n============================================================\n\nKey Concepts:\n  - Clocks are fundamental to synchronous designs\n  - Parameterized clocks enable flexibility\n  - Multiple clocks require careful synchronization\n  - Clock gating is common in low-power designs\n  - Clock stopping enables controlled simulation\n",0);
    VL_FINISH_MT("clock_gen.sv", 184, "");
    co_return;}

VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__5(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        if ((1U & ((~ (IData)(vlSelfRef.clock_gen__DOT__clk_stop)) 
                   & (~ (IData)(vlSelfRef.clock_gen__DOT__clk_stopped))))) {
            vlSelfRef.clock_gen__DOT__clk_stopped = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                                 nullptr, 
                                                 "clock_gen.sv", 
                                                 159);
            vlSelfRef.clock_gen__DOT__clk_stopped = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                                 nullptr, 
                                                 "clock_gen.sv", 
                                                 161);
        } else {
            vlSelfRef.clock_gen__DOT__clk_stopped = 0U;
            while (vlSelfRef.clock_gen__DOT__clk_stop) {
                co_await vlSelfRef.__VtrigSched_hd03cc761__0.trigger(1U, 
                                                                     nullptr, 
                                                                     "@( (~ clock_gen.clk_stop))", 
                                                                     "clock_gen.sv", 
                                                                     164);
            }
        }
    }
    co_return;}

VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__6(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_initial__TOP__Vtiming__6\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        if (vlSelfRef.clock_gen__DOT__clk_enable) {
            vlSelfRef.clock_gen__DOT__clk_gated = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                                 nullptr, 
                                                 "clock_gen.sv", 
                                                 130);
            vlSelfRef.clock_gen__DOT__clk_gated = 1U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                                 nullptr, 
                                                 "clock_gen.sv", 
                                                 132);
        } else {
            vlSelfRef.clock_gen__DOT__clk_gated = 0U;
            co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                                 nullptr, 
                                                 "clock_gen.sv", 
                                                 135);
        }
    }
    co_return;}

VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__7(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_initial__TOP__Vtiming__7\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.clock_gen__DOT__clk3 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                             nullptr, 
                                             "clock_gen.sv", 
                                             100);
        vlSelfRef.clock_gen__DOT__clk3 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                             nullptr, 
                                             "clock_gen.sv", 
                                             102);
    }
    co_return;}

VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__8(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_initial__TOP__Vtiming__8\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.clock_gen__DOT__clk2 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "clock_gen.sv", 
                                             81);
        vlSelfRef.clock_gen__DOT__clk2 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "clock_gen.sv", 
                                             83);
    }
    co_return;}

VlCoroutine Vclock_gen___024root___eval_initial__TOP__Vtiming__9(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_initial__TOP__Vtiming__9\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.clock_gen__DOT__clk1 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "clock_gen.sv", 
                                             64);
        vlSelfRef.clock_gen__DOT__clk1 = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "clock_gen.sv", 
                                             66);
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_gen___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vclock_gen___024root___eval_triggers__act(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_triggers__act\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h588af64e__0;
    __Vtrigprevexpr_h588af64e__0 = 0;
    // Body
    __Vtrigprevexpr_h588af64e__0 = (1U & (~ (IData)(vlSelfRef.clock_gen__DOT__clk_stop)));
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(__Vtrigprevexpr_h588af64e__0) 
                                                       != (IData)(vlSelfRef.__Vtrigprevexpr_h588af64e__1)) 
                                                      << 4U) 
                                                     | (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.clock_gen__DOT__clk3) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock_gen__DOT__clk3__0))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.clock_gen__DOT__clk2) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock_gen__DOT__clk2__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.clock_gen__DOT__clk1) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock_gen__DOT__clk1__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock_gen__DOT__clk1__0 
        = vlSelfRef.clock_gen__DOT__clk1;
    vlSelfRef.__Vtrigprevexpr___TOP__clock_gen__DOT__clk2__0 
        = vlSelfRef.clock_gen__DOT__clk2;
    vlSelfRef.__Vtrigprevexpr___TOP__clock_gen__DOT__clk3__0 
        = vlSelfRef.clock_gen__DOT__clk3;
    vlSelfRef.__Vtrigprevexpr_h588af64e__1 = __Vtrigprevexpr_h588af64e__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclock_gen___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vclock_gen___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___trigger_anySet__act\n"); );
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

void Vclock_gen___024root___nba_sequent__TOP__0(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___nba_sequent__TOP__0\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clock_gen__DOT__clk1_edges = ((IData)(1U) 
                                            + vlSelfRef.clock_gen__DOT__clk1_edges);
    if (VL_UNLIKELY((VL_GTES_III(32, 3U, vlSelfRef.clock_gen__DOT__clk1_edges)))) {
        VL_WRITEF_NX("[%0t] CLK1 rising edge #%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.clock_gen__DOT__clk1_edges);
    }
}

void Vclock_gen___024root___nba_sequent__TOP__1(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___nba_sequent__TOP__1\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clock_gen__DOT__clk2_edges = ((IData)(1U) 
                                            + vlSelfRef.clock_gen__DOT__clk2_edges);
    if (VL_UNLIKELY((VL_GTES_III(32, 3U, vlSelfRef.clock_gen__DOT__clk2_edges)))) {
        VL_WRITEF_NX("[%0t] CLK2 rising edge #%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.clock_gen__DOT__clk2_edges);
    }
}

void Vclock_gen___024root___nba_sequent__TOP__2(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___nba_sequent__TOP__2\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clock_gen__DOT__clk3_edges = ((IData)(1U) 
                                            + vlSelfRef.clock_gen__DOT__clk3_edges);
    if (VL_UNLIKELY((VL_GTES_III(32, 3U, vlSelfRef.clock_gen__DOT__clk3_edges)))) {
        VL_WRITEF_NX("[%0t] CLK3 rising edge #%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.clock_gen__DOT__clk3_edges);
    }
}

void Vclock_gen___024root___eval_nba(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_nba\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vclock_gen___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vclock_gen___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vclock_gen___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vclock_gen___024root___timing_commit(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___timing_commit\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x0000000000000010ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_hd03cc761__0.commit(
                                                   "@( (~ clock_gen.clk_stop))");
    }
}

void Vclock_gen___024root___timing_resume(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___timing_resume\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VtrigSched_hd03cc761__0.resume(
                                                   "@( (~ clock_gen.clk_stop))");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vclock_gen___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vclock_gen___024root___eval_phase__act(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_phase__act\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vclock_gen___024root___eval_triggers__act(vlSelf);
    Vclock_gen___024root___timing_commit(vlSelf);
    Vclock_gen___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vclock_gen___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vclock_gen___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vclock_gen___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vclock_gen___024root___eval_phase__nba(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_phase__nba\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vclock_gen___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vclock_gen___024root___eval_nba(vlSelf);
        Vclock_gen___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vclock_gen___024root___eval(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vclock_gen___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("clock_gen.sv", 35, "", "DIDNOTCONVERGE: NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vclock_gen___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("clock_gen.sv", 35, "", "DIDNOTCONVERGE: Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vclock_gen___024root___eval_phase__act(vlSelf));
    } while (Vclock_gen___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vclock_gen___024root___eval_debug_assertions(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_debug_assertions\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
