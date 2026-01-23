// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_counter.h for the primary calling header

#include "Vtest_counter__pch.h"
#include "Vtest_counter___024root.h"

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

VL_INLINE_OPT VlCoroutine Vtest_counter___024root___eval_initial__TOP__Vtiming__0(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_counter__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "test_counter.sv", 
                                             22);
        vlSelfRef.test_counter__DOT__clk = (1U & (~ (IData)(vlSelfRef.test_counter__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtest_counter___024root___eval_initial__TOP__Vtiming__1(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i;
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i;
    __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i = 0;
    // Body
    VL_WRITEF_NX("============================================================\nCounter SystemVerilog Testbench\n============================================================\n\n",0);
    VL_WRITEF_NX("Test 1: Reset functionality\n",0);
    vlSelfRef.test_counter__DOT__rst_n = 0U;
    vlSelfRef.test_counter__DOT__enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "test_counter.sv", 
                                         39);
    vlSelfRef.test_counter__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_counter.sv", 
                                         41);
    VL_WRITEF_NX("Test 1 passed!\n\n",0);
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 0;
    VL_WRITEF_NX("Test 2: Increment functionality\n",0);
    vlSelfRef.test_counter__DOT__rst_n = 0U;
    vlSelfRef.test_counter__DOT__enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "test_counter.sv", 
                                         39);
    vlSelfRef.test_counter__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_counter.sv", 
                                         41);
    vlSelfRef.test_counter__DOT__enable = 1U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         67);
    VL_WRITEF_NX("  Count = %0# (PASS)\n",0,8,vlSelfRef.test_counter__DOT__count);
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         67);
    VL_WRITEF_NX("  Count = %0# (PASS)\n",0,8,vlSelfRef.test_counter__DOT__count);
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         67);
    VL_WRITEF_NX("  Count = %0# (PASS)\n",0,8,vlSelfRef.test_counter__DOT__count);
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         67);
    VL_WRITEF_NX("  Count = %0# (PASS)\n",0,8,vlSelfRef.test_counter__DOT__count);
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 4U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         67);
    VL_WRITEF_NX("  Count = %0# (PASS)\n",0,8,vlSelfRef.test_counter__DOT__count);
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 5U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         67);
    VL_WRITEF_NX("  Count = %0# (PASS)\n",0,8,vlSelfRef.test_counter__DOT__count);
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 6U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         67);
    VL_WRITEF_NX("  Count = %0# (PASS)\n",0,8,vlSelfRef.test_counter__DOT__count);
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 7U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         67);
    VL_WRITEF_NX("  Count = %0# (PASS)\n",0,8,vlSelfRef.test_counter__DOT__count);
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 8U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         67);
    VL_WRITEF_NX("  Count = %0# (PASS)\n",0,8,vlSelfRef.test_counter__DOT__count);
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 9U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         67);
    VL_WRITEF_NX("  Count = %0# (PASS)\n",0,8,vlSelfRef.test_counter__DOT__count);
    __Vtask_test_counter__DOT__test_increment__2__unnamedblk1__DOT__i = 0xaU;
    VL_WRITEF_NX("Test 2 passed!\n\n",0);
    VL_WRITEF_NX("Test 3: Enable control\n",0);
    vlSelfRef.test_counter__DOT__rst_n = 0U;
    vlSelfRef.test_counter__DOT__enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "test_counter.sv", 
                                         39);
    vlSelfRef.test_counter__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_counter.sv", 
                                         41);
    vlSelfRef.test_counter__DOT__enable = 1U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         84);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         85);
    vlSelfRef.test_counter__DOT__enable = 0U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         89);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         90);
    vlSelfRef.test_counter__DOT__enable = 1U;
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         94);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         95);
    VL_WRITEF_NX("Test 3 passed!\n\n",0);
    __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i = 0;
    VL_WRITEF_NX("Test 4: Overflow behavior\n",0);
    vlSelfRef.test_counter__DOT__rst_n = 0U;
    vlSelfRef.test_counter__DOT__enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "test_counter.sv", 
                                         39);
    vlSelfRef.test_counter__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "test_counter.sv", 
                                         41);
    vlSelfRef.test_counter__DOT__enable = 1U;
    __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge test_counter.clk)", 
                                                             "test_counter.sv", 
                                                             112);
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "test_counter.sv", 
                                             113);
        __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_test_counter__DOT__test_overflow__6__unnamedblk2__DOT__i);
    }
    co_await vlSelfRef.__VtrigSched_h8ca4d732__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge test_counter.clk)", 
                                                         "test_counter.sv", 
                                                         119);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "test_counter.sv", 
                                         120);
    VL_WRITEF_NX("Test 4 passed!\n\n============================================================\nAll tests passed!\n============================================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "test_counter.sv", 
                                         150);
    VL_FINISH_MT("test_counter.sv", 151, "");
}

void Vtest_counter___024root___eval_act(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_act\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtest_counter___024root___nba_sequent__TOP__0(Vtest_counter___024root* vlSelf);

void Vtest_counter___024root___eval_nba(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_nba\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtest_counter___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtest_counter___024root___nba_sequent__TOP__0(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___nba_sequent__TOP__0\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.test_counter__DOT__rst_n) {
        if (vlSelfRef.test_counter__DOT__enable) {
            vlSelfRef.test_counter__DOT__count = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.test_counter__DOT__count)));
        }
    } else {
        vlSelfRef.test_counter__DOT__count = 0U;
    }
}

void Vtest_counter___024root___timing_resume(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___timing_resume\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h8ca4d732__0.resume(
                                                   "@(posedge test_counter.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_counter___024root___timing_commit(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___timing_commit\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h8ca4d732__0.commit(
                                                   "@(posedge test_counter.clk)");
    }
}

void Vtest_counter___024root___eval_triggers__act(Vtest_counter___024root* vlSelf);

bool Vtest_counter___024root___eval_phase__act(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_phase__act\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_counter___024root___eval_triggers__act(vlSelf);
    Vtest_counter___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtest_counter___024root___timing_resume(vlSelf);
        Vtest_counter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtest_counter___024root___eval_phase__nba(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_phase__nba\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtest_counter___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_counter___024root___dump_triggers__nba(Vtest_counter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_counter___024root___dump_triggers__act(Vtest_counter___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_counter___024root___eval(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtest_counter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test_counter.sv", 12, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_counter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test_counter.sv", 12, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtest_counter___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtest_counter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtest_counter___024root___eval_debug_assertions(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_debug_assertions\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
