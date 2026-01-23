// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_counter.h for the primary calling header

#include "Vtest_counter__pch.h"

VlCoroutine Vtest_counter___024root___eval_initial__TOP__Vtiming__0(Vtest_counter___024root* vlSelf);
VlCoroutine Vtest_counter___024root___eval_initial__TOP__Vtiming__1(Vtest_counter___024root* vlSelf);

void Vtest_counter___024root___eval_initial(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_initial\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_counter___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_counter___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtest_counter___024root___eval_initial__TOP__Vtiming__0(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_counter__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "test_counter.sv", 
                                             22);
        vlSelfRef.test_counter__DOT__clk = (1U & (~ (IData)(vlSelfRef.test_counter__DOT__clk)));
    }
}

VlCoroutine Vtest_counter___024root___eval_initial__TOP__Vtiming__1(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i;
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i;
    __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i = 0;
    // Body
    VL_WRITEF_NX("============================================================\nCounter SystemVerilog Testbench\n============================================================\n\n",0);
    VL_WRITEF_NX("Test 1: Reset functionality\n",0);
    vlSelfRef.test_counter__DOT__rst_n = 0U;
    vlSelfRef.test_counter__DOT__enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "test_counter.sv", 
                                         39);
    vlSelfRef.test_counter__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "test_counter.sv", 
                                         41);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.test_counter__DOT__count))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_counter.sv:51: Assertion failed in %Ntest_counter.test_reset: Test failed: Counter should reset to 0\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_counter.sv", 51, "");
        }
    }
    VL_WRITEF_NX("Test 1 passed!\n\n",0);
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 0;
    VL_WRITEF_NX("Test 2: Increment functionality\n",0);
    vlSelfRef.test_counter__DOT__rst_n = 0U;
    vlSelfRef.test_counter__DOT__enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "test_counter.sv", 
                                         39);
    vlSelfRef.test_counter__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "test_counter.sv", 
                                         41);
    vlSelfRef.test_counter__DOT__enable = 1U;
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000000aU, __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_h1263e6a3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_counter.clk)", 
                                                             "test_counter.sv", 
                                                             66);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "test_counter.sv", 
                                             67);
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.test_counter__DOT__count) 
                              != (0x000000ffU & __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i))))) {
                VL_WRITEF_NX("[%0t] %%Error: test_counter.sv:68: Assertion failed in %Ntest_counter.test_increment.unnamedblk1: Test failed: Expected count=%0d, got %0#\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i,
                             8,(IData)(vlSelfRef.test_counter__DOT__count));
                VL_STOP_MT("test_counter.sv", 68, "");
            }
        }
        VL_WRITEF_NX("  Count = %0# (PASS)\n",0,8,vlSelfRef.test_counter__DOT__count);
        __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("Test 2 passed!\n\n",0);
    VL_WRITEF_NX("Test 3: Enable control\n",0);
    vlSelfRef.test_counter__DOT__rst_n = 0U;
    vlSelfRef.test_counter__DOT__enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "test_counter.sv", 
                                         39);
    vlSelfRef.test_counter__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "test_counter.sv", 
                                         41);
    vlSelfRef.test_counter__DOT__enable = 1U;
    co_await vlSelfRef.__VtrigSched_h1263e6a3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         84);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         85);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.test_counter__DOT__count))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_counter.sv:86: Assertion failed in %Ntest_counter.test_enable: Test failed: Counter should increment when enabled\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_counter.sv", 86, "");
        }
    }
    vlSelfRef.test_counter__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_h1263e6a3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         89);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         90);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.test_counter__DOT__count))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_counter.sv:91: Assertion failed in %Ntest_counter.test_enable: Test failed: Counter should hold when disabled\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_counter.sv", 91, "");
        }
    }
    vlSelfRef.test_counter__DOT__enable = 1U;
    co_await vlSelfRef.__VtrigSched_h1263e6a3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         94);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         95);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.test_counter__DOT__count))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_counter.sv:96: Assertion failed in %Ntest_counter.test_enable: Test failed: Counter should increment when re-enabled\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_counter.sv", 96, "");
        }
    }
    VL_WRITEF_NX("Test 3 passed!\n\n",0);
    __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i = 0;
    VL_WRITEF_NX("Test 4: Overflow behavior\n",0);
    vlSelfRef.test_counter__DOT__rst_n = 0U;
    vlSelfRef.test_counter__DOT__enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "test_counter.sv", 
                                         39);
    vlSelfRef.test_counter__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "test_counter.sv", 
                                         41);
    vlSelfRef.test_counter__DOT__enable = 1U;
    __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_h1263e6a3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_counter.clk)", 
                                                             "test_counter.sv", 
                                                             112);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "test_counter.sv", 
                                             113);
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.test_counter__DOT__count) 
                              != (0x000000ffU & VL_MODDIVS_III(32, __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i, (IData)(0x00000100U))))))) {
                VL_WRITEF_NX("[%0t] %%Error: test_counter.sv:115: Assertion failed in %Ntest_counter.test_overflow.unnamedblk2: Test failed: Expected count=%0d, got %0#\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             VL_MODDIVS_III(32, __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i, (IData)(0x00000100U)),
                             8,(IData)(vlSelfRef.test_counter__DOT__count));
                VL_STOP_MT("test_counter.sv", 115, "");
            }
        }
        __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i);
    }
    co_await vlSelfRef.__VtrigSched_h1263e6a3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         119);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         120);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.test_counter__DOT__count))))) {
            VL_WRITEF_NX("[%0t] %%Error: test_counter.sv:121: Assertion failed in %Ntest_counter.test_overflow: Test failed: Counter should wrap to 0\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("test_counter.sv", 121, "");
        }
    }
    VL_WRITEF_NX("Test 4 passed!\n\n============================================================\nAll tests passed!\n============================================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "test_counter.sv", 
                                         150);
    VL_FINISH_MT("test_counter.sv", 151, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_counter___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtest_counter___024root___eval_triggers__act(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_triggers__act\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.test_counter__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_counter__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.test_counter__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_counter__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__test_counter__DOT__clk__0 
        = vlSelfRef.test_counter__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_counter__DOT__rst_n__0 
        = vlSelfRef.test_counter__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_counter___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtest_counter___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___trigger_anySet__act\n"); );
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

void Vtest_counter___024root___nba_sequent__TOP__0(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___nba_sequent__TOP__0\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.test_counter__DOT__rst_n) {
        if (vlSelfRef.test_counter__DOT__enable) {
            vlSelfRef.test_counter__DOT__count = (0x000000ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.test_counter__DOT__count)));
        }
    } else {
        vlSelfRef.test_counter__DOT__count = 0U;
    }
}

void Vtest_counter___024root___eval_nba(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_nba\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtest_counter___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtest_counter___024root___timing_commit(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___timing_commit\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h1263e6a3__0.commit(
                                                   "@(posedge test_counter.clk)");
    }
}

void Vtest_counter___024root___timing_resume(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___timing_resume\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1263e6a3__0.resume(
                                                   "@(posedge test_counter.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_counter___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtest_counter___024root___eval_phase__act(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_phase__act\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_counter___024root___eval_triggers__act(vlSelf);
    Vtest_counter___024root___timing_commit(vlSelf);
    Vtest_counter___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtest_counter___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtest_counter___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vtest_counter___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtest_counter___024root___eval_phase__nba(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_phase__nba\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtest_counter___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtest_counter___024root___eval_nba(vlSelf);
        Vtest_counter___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtest_counter___024root___eval(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtest_counter___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("test_counter.sv", 12, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_counter___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("test_counter.sv", 12, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtest_counter___024root___eval_phase__act(vlSelf));
    } while (Vtest_counter___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtest_counter___024root___eval_debug_assertions(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_debug_assertions\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
