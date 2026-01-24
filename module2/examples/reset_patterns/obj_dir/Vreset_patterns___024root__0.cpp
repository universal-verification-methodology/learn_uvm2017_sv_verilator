// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreset_patterns.h for the primary calling header

#include "Vreset_patterns__pch.h"

VlCoroutine Vreset_patterns___024root___eval_initial__TOP__Vtiming__0(Vreset_patterns___024root* vlSelf);
VlCoroutine Vreset_patterns___024root___eval_initial__TOP__Vtiming__1(Vreset_patterns___024root* vlSelf);

void Vreset_patterns___024root___eval_initial(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___eval_initial\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vreset_patterns___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vreset_patterns___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vreset_patterns___024root___eval_initial__TOP__Vtiming__0(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_reset_patterns__DOT__async_reset_sequence__0__reset_duration_ns;
    __Vtask_reset_patterns__DOT__async_reset_sequence__0__reset_duration_ns = 0;
    IData/*31:0*/ __Vtask_reset_patterns__DOT__sync_reset_sequence__2__reset_cycles;
    __Vtask_reset_patterns__DOT__sync_reset_sequence__2__reset_cycles = 0;
    IData/*31:0*/ __Vtask_reset_patterns__DOT__sync_reset_sequence__2__reset_patterns__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_reset_patterns__DOT__sync_reset_sequence__2__reset_patterns__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_reset_patterns__DOT__async_reset_sequence__4__reset_duration_ns;
    __Vtask_reset_patterns__DOT__async_reset_sequence__4__reset_duration_ns = 0;
    // Body
    VL_WRITEF_NX("============================================================\nReset Patterns Examples\n============================================================\n\n",0);
    vlSelfRef.reset_patterns__DOT__rst_n = 1U;
    vlSelfRef.reset_patterns__DOT__rst_sync = 0U;
    vlSelfRef.reset_patterns__DOT__reg_async = 0xffU;
    vlSelfRef.reset_patterns__DOT__reg_sync = 0xffU;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "reset_patterns.sv", 
                                         125);
    VL_WRITEF_NX("Example 1: Asynchronous Reset\n  Reset is independent of clock\n",0);
    __Vtask_reset_patterns__DOT__async_reset_sequence__0__reset_duration_ns = 0x00000064U;
    VL_WRITEF_NX("[%0t] Asserting async reset\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.reset_patterns__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay((0x00000000000003e8ULL 
                                          * (QData)((IData)(__Vtask_reset_patterns__DOT__async_reset_sequence__0__reset_duration_ns))), 
                                         nullptr, "reset_patterns.sv", 
                                         82);
    VL_WRITEF_NX("[%0t] De-asserting async reset\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.reset_patterns__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "reset_patterns.sv", 
                                         85);
    VL_WRITEF_NX("[%0t] Verifying reset state\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.reset_patterns__DOT__reg_async))))) {
            VL_WRITEF_NX("[%0t] %%Error: reset_patterns.sv:104: Assertion failed in %Nreset_patterns.verify_reset: Async reset failed: reg_async = 0x%02x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,(IData)(vlSelfRef.reset_patterns__DOT__reg_async));
            VL_STOP_MT("reset_patterns.sv", 104, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.reset_patterns__DOT__reg_sync))))) {
            VL_WRITEF_NX("[%0t] %%Error: reset_patterns.sv:106: Assertion failed in %Nreset_patterns.verify_reset: Sync reset failed: reg_sync = 0x%02x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,(IData)(vlSelfRef.reset_patterns__DOT__reg_sync));
            VL_STOP_MT("reset_patterns.sv", 106, "");
        }
    }
    VL_WRITEF_NX("  Reset verification PASSED\n\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "reset_patterns.sv", 
                                         135);
    VL_WRITEF_NX("[%0t] After 5 cycles: reg_async = 0x%02x, reg_sync = 0x%02x\n\nExample 2: Synchronous Reset\n  Reset is synchronized to clock\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.reset_patterns__DOT__reg_async),
                 8,vlSelfRef.reset_patterns__DOT__reg_sync);
    __Vtask_reset_patterns__DOT__sync_reset_sequence__2__reset_cycles = 5U;
    __Vtask_reset_patterns__DOT__sync_reset_sequence__2__reset_patterns__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    VL_WRITEF_NX("[%0t] Asserting sync reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.reset_patterns__DOT__rst_sync = 1U;
    __Vtask_reset_patterns__DOT__sync_reset_sequence__2__reset_patterns__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_reset_patterns__DOT__sync_reset_sequence__2__reset_cycles;
    while (VL_LTS_III(32, 0U, __Vtask_reset_patterns__DOT__sync_reset_sequence__2__reset_patterns__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h7aaa51b2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge reset_patterns.clk)", 
                                                             "reset_patterns.sv", 
                                                             91);
        __Vtask_reset_patterns__DOT__sync_reset_sequence__2__reset_patterns__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_reset_patterns__DOT__sync_reset_sequence__2__reset_patterns__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("[%0t] De-asserting sync reset\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.reset_patterns__DOT__rst_sync = 0U;
    co_await vlSelfRef.__VtrigSched_h7aaa51b2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reset_patterns.clk)", 
                                                         "reset_patterns.sv", 
                                                         94);
    VL_WRITEF_NX("[%0t] Verifying reset state\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.reset_patterns__DOT__reg_async))))) {
            VL_WRITEF_NX("[%0t] %%Error: reset_patterns.sv:104: Assertion failed in %Nreset_patterns.verify_reset: Async reset failed: reg_async = 0x%02x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,(IData)(vlSelfRef.reset_patterns__DOT__reg_async));
            VL_STOP_MT("reset_patterns.sv", 104, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.reset_patterns__DOT__reg_sync))))) {
            VL_WRITEF_NX("[%0t] %%Error: reset_patterns.sv:106: Assertion failed in %Nreset_patterns.verify_reset: Sync reset failed: reg_sync = 0x%02x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,(IData)(vlSelfRef.reset_patterns__DOT__reg_sync));
            VL_STOP_MT("reset_patterns.sv", 106, "");
        }
    }
    VL_WRITEF_NX("  Reset verification PASSED\n\nExample 3: Reset During Operation\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "reset_patterns.sv", 
                                         149);
    VL_WRITEF_NX("[%0t] Before reset: reg_async = 0x%02x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.reset_patterns__DOT__reg_async));
    __Vtask_reset_patterns__DOT__async_reset_sequence__4__reset_duration_ns = 0x00000032U;
    VL_WRITEF_NX("[%0t] Asserting async reset\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.reset_patterns__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay((0x00000000000003e8ULL 
                                          * (QData)((IData)(__Vtask_reset_patterns__DOT__async_reset_sequence__4__reset_duration_ns))), 
                                         nullptr, "reset_patterns.sv", 
                                         82);
    VL_WRITEF_NX("[%0t] De-asserting async reset\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.reset_patterns__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "reset_patterns.sv", 
                                         85);
    VL_WRITEF_NX("[%0t] After reset: reg_async = 0x%02x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.reset_patterns__DOT__reg_async));
    VL_WRITEF_NX("[%0t] Verifying reset state\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.reset_patterns__DOT__reg_async))))) {
            VL_WRITEF_NX("[%0t] %%Error: reset_patterns.sv:104: Assertion failed in %Nreset_patterns.verify_reset: Async reset failed: reg_async = 0x%02x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,(IData)(vlSelfRef.reset_patterns__DOT__reg_async));
            VL_STOP_MT("reset_patterns.sv", 104, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.reset_patterns__DOT__reg_sync))))) {
            VL_WRITEF_NX("[%0t] %%Error: reset_patterns.sv:106: Assertion failed in %Nreset_patterns.verify_reset: Sync reset failed: reg_sync = 0x%02x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,(IData)(vlSelfRef.reset_patterns__DOT__reg_sync));
            VL_STOP_MT("reset_patterns.sv", 106, "");
        }
    }
    VL_WRITEF_NX("  Reset verification PASSED\n\n============================================================\nReset Patterns Examples Complete\n============================================================\n\nKey Concepts:\n  - Reset is critical for proper design initialization\n  - Synchronous vs asynchronous reset have different timing\n  - Reset sequences must follow design requirements\n  - Reset verification ensures proper operation\n\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "reset_patterns.sv", 
                                         168);
    VL_FINISH_MT("reset_patterns.sv", 169, "");
    co_return;}

VlCoroutine Vreset_patterns___024root___eval_initial__TOP__Vtiming__1(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        vlSelfRef.reset_patterns__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "reset_patterns.sv", 
                                             46);
        vlSelfRef.reset_patterns__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "reset_patterns.sv", 
                                             48);
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreset_patterns___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vreset_patterns___024root___eval_triggers__act(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___eval_triggers__act\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.reset_patterns__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset_patterns__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.reset_patterns__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset_patterns__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__reset_patterns__DOT__clk__0 
        = vlSelfRef.reset_patterns__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_patterns__DOT__rst_n__0 
        = vlSelfRef.reset_patterns__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vreset_patterns___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vreset_patterns___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___trigger_anySet__act\n"); );
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

void Vreset_patterns___024root___nba_sequent__TOP__0(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___nba_sequent__TOP__0\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__reset_patterns__DOT__reg_async;
    __Vdly__reset_patterns__DOT__reg_async = 0;
    // Body
    __Vdly__reset_patterns__DOT__reg_async = ((IData)(vlSelfRef.reset_patterns__DOT__rst_n)
                                               ? (0x000000ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.reset_patterns__DOT__reg_async)))
                                               : 0U);
    vlSelfRef.reset_patterns__DOT__reg_async = __Vdly__reset_patterns__DOT__reg_async;
}

void Vreset_patterns___024root___nba_sequent__TOP__1(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___nba_sequent__TOP__1\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__reset_patterns__DOT__reg_sync;
    __Vdly__reset_patterns__DOT__reg_sync = 0;
    // Body
    __Vdly__reset_patterns__DOT__reg_sync = ((IData)(vlSelfRef.reset_patterns__DOT__rst_sync)
                                              ? 0U : 
                                             (0x000000ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.reset_patterns__DOT__reg_sync))));
    vlSelfRef.reset_patterns__DOT__reg_sync = __Vdly__reset_patterns__DOT__reg_sync;
}

void Vreset_patterns___024root___eval_nba(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___eval_nba\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vreset_patterns___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vreset_patterns___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vreset_patterns___024root___timing_commit(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___timing_commit\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h7aaa51b2__0.commit(
                                                   "@(posedge reset_patterns.clk)");
    }
}

void Vreset_patterns___024root___timing_resume(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___timing_resume\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7aaa51b2__0.resume(
                                                   "@(posedge reset_patterns.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vreset_patterns___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vreset_patterns___024root___eval_phase__act(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___eval_phase__act\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vreset_patterns___024root___eval_triggers__act(vlSelf);
    Vreset_patterns___024root___timing_commit(vlSelf);
    Vreset_patterns___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vreset_patterns___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vreset_patterns___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vreset_patterns___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vreset_patterns___024root___eval_phase__nba(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___eval_phase__nba\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vreset_patterns___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vreset_patterns___024root___eval_nba(vlSelf);
        Vreset_patterns___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vreset_patterns___024root___eval(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___eval\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vreset_patterns___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("reset_patterns.sv", 32, "", "DIDNOTCONVERGE: NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vreset_patterns___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("reset_patterns.sv", 32, "", "DIDNOTCONVERGE: Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vreset_patterns___024root___eval_phase__act(vlSelf));
    } while (Vreset_patterns___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vreset_patterns___024root___eval_debug_assertions(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___eval_debug_assertions\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
