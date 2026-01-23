// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"

VlCoroutine Vdata_structures_example___024root___eval_initial__TOP__Vtiming__0(Vdata_structures_example___024root* vlSelf);

void Vdata_structures_example___024root___eval_initial(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_initial\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdata_structures_example___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vdata_structures_example___024root___eval_initial__TOP__Vtiming__0(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue> data_structures_example__DOT__txn_queue;
    VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aScoreboard> data_structures_example__DOT__scoreboard;
    VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector> data_structures_example__DOT__coverage;
    std::string __Vtask_convert2string__5__Vfuncout;
    IData/*31:0*/ __Vtask_size__6__Vfuncout;
    __Vtask_size__6__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_empty__7__Vfuncout;
    __Vtask_is_empty__7__Vfuncout = 0;
    VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction> __Vtask_pop__8__Vfuncout;
    std::string __Vtask_convert2string__9__Vfuncout;
    CData/*0:0*/ __Vtask_check__14__Vfuncout;
    __Vtask_check__14__Vfuncout = 0;
    CData/*0:0*/ __Vtask_check__15__Vfuncout;
    __Vtask_check__15__Vfuncout = 0;
    double __Vtask_get_coverage__17__Vfuncout;
    __Vtask_get_coverage__17__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VL_WRITEF_NX("============================================================\nModule 1 Example 1.4: Data Structures for Verification\n============================================================\n\n",0);
    data_structures_example__DOT__txn_queue = VL_NEW(Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue, vlSymsp);
    data_structures_example__DOT__scoreboard = VL_NEW(Vdata_structures_example_data_structures_pkg__03a__03aScoreboard, vlSymsp);
    data_structures_example__DOT__coverage = VL_NEW(Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector, vlSymsp);
    VL_WRITEF_NX("1. Transaction Queue:\n",0);
    vlSelfRef.data_structures_example__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.data_structures_example__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.data_structures_example__DOT__txn 
            = VL_NEW(Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction, vlSymsp, vlSelfRef.data_structures_example__DOT__unnamedblk1__DOT__i, 
                     ((IData)(0x00001000U) + vlSelfRef.data_structures_example__DOT__unnamedblk1__DOT__i));
        VL_NULL_CHECK(data_structures_example__DOT__txn_queue, "data_structures_example.sv", 163)->__VnoInFunc_push(vlSymsp, vlSelfRef.data_structures_example__DOT__txn);
        __Vtemp_1 = ([&]() {
                VL_NULL_CHECK(vlSelfRef.data_structures_example__DOT__txn, "data_structures_example.sv", 164)
                     ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__5__Vfuncout);
            }(), __Vtask_convert2string__5__Vfuncout);
        VL_WRITEF_NX("   Pushed: %@\n",0,-1,&(__Vtemp_1));
        vlSelfRef.data_structures_example__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.data_structures_example__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("   Queue size: %0d\n",0,32,([&]() {
                    VL_NULL_CHECK(data_structures_example__DOT__txn_queue, "data_structures_example.sv", 166)
                                              ->__VnoInFunc_size(vlSymsp, __Vtask_size__6__Vfuncout);
                }(), __Vtask_size__6__Vfuncout));
    VL_WRITEF_NX("\n2. Popping from queue:\n",0);
    while ((1U & (~ ([&]() {
                        VL_NULL_CHECK(data_structures_example__DOT__txn_queue, "data_structures_example.sv", 170)
                     ->__VnoInFunc_is_empty(vlSymsp, __Vtask_is_empty__7__Vfuncout);
                    }(), (IData)(__Vtask_is_empty__7__Vfuncout))))) {
        VL_NULL_CHECK(data_structures_example__DOT__txn_queue, "data_structures_example.sv", 171)->__VnoInFunc_pop(vlSymsp, __Vtask_pop__8__Vfuncout);
        vlSelfRef.data_structures_example__DOT__txn 
            = __Vtask_pop__8__Vfuncout;
        __Vtemp_2 = ([&]() {
                VL_NULL_CHECK(vlSelfRef.data_structures_example__DOT__txn, "data_structures_example.sv", 172)
                     ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__9__Vfuncout);
            }(), __Vtask_convert2string__9__Vfuncout);
        VL_WRITEF_NX("   Popped: %@\n",0,-1,&(__Vtemp_2));
    }
    VL_WRITEF_NX("\n3. Scoreboard:\n",0);
    VL_NULL_CHECK(data_structures_example__DOT__scoreboard, "data_structures_example.sv", 178)->__VnoInFunc_add_expected(vlSymsp, 1U, 0xdeadbeefU);
    VL_NULL_CHECK(data_structures_example__DOT__scoreboard, "data_structures_example.sv", 179)->__VnoInFunc_add_expected(vlSymsp, 2U, 0xcafebabeU);
    VL_NULL_CHECK(data_structures_example__DOT__scoreboard, "data_structures_example.sv", 180)->__VnoInFunc_add_actual(vlSymsp, 1U, 0xdeadbeefU);
    VL_NULL_CHECK(data_structures_example__DOT__scoreboard, "data_structures_example.sv", 181)->__VnoInFunc_add_actual(vlSymsp, 2U, 0xcafebabeU);
    VL_WRITEF_NX("   Transaction 1 match: %0#\n",0,
                 1,([&]() {
                    VL_NULL_CHECK(data_structures_example__DOT__scoreboard, "data_structures_example.sv", 182)
                    ->__VnoInFunc_check(vlSymsp, 1U, __Vtask_check__14__Vfuncout);
                }(), (IData)(__Vtask_check__14__Vfuncout)));
    VL_WRITEF_NX("   Transaction 2 match: %0#\n",0,
                 1,([&]() {
                    VL_NULL_CHECK(data_structures_example__DOT__scoreboard, "data_structures_example.sv", 183)
                    ->__VnoInFunc_check(vlSymsp, 2U, __Vtask_check__15__Vfuncout);
                }(), (IData)(__Vtask_check__15__Vfuncout)));
    VL_WRITEF_NX("\n4. Coverage Collector:\n",0);
    vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000000aU, vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i)) {
        VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 189)->__VnoInFunc_sample_address(vlSymsp, 
                                                                                VL_MULS_III(32, (IData)(0x00000010U), vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i));
        vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i);
    }
    VL_WRITEF_NX("   Coverage: %0.2f%%\n",0,64,([&]() {
                    VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 191)
                                                ->__VnoInFunc_get_coverage(vlSymsp, 0x00000100U, __Vtask_get_coverage__17__Vfuncout);
                }(), __Vtask_get_coverage__17__Vfuncout));
    VL_WRITEF_NX("\n============================================================\nExample completed successfully!\n============================================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "data_structures_example.sv", 
                                         198);
    VL_FINISH_MT("data_structures_example.sv", 199, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_structures_example___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vdata_structures_example___024root___eval_triggers__act(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_triggers__act\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdata_structures_example___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vdata_structures_example___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___trigger_anySet__act\n"); );
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

void Vdata_structures_example___024root___timing_resume(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___timing_resume\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdata_structures_example___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdata_structures_example___024root___eval_phase__act(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_phase__act\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vdata_structures_example___024root___eval_triggers__act(vlSelf);
    Vdata_structures_example___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vdata_structures_example___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vdata_structures_example___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vdata_structures_example___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdata_structures_example___024root___eval_phase__nba(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_phase__nba\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdata_structures_example___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdata_structures_example___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vdata_structures_example___024root___eval(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdata_structures_example___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("data_structures_example.sv", 140, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdata_structures_example___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("data_structures_example.sv", 140, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vdata_structures_example___024root___eval_phase__act(vlSelf));
    } while (Vdata_structures_example___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vdata_structures_example___024root___eval_debug_assertions(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_debug_assertions\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
