// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"
#include "Vdata_structures_example__Syms.h"
#include "Vdata_structures_example___024root.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector__Vclpkg.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction__Vclpkg.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vdata_structures_example___024root___eval_initial__TOP__Vtiming__0(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue> data_structures_example__DOT__txn_queue;
    VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aScoreboard> data_structures_example__DOT__scoreboard;
    VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector> data_structures_example__DOT__coverage;
    VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction> data_structures_example__DOT__txn;
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
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    // Body
    VL_WRITEF_NX("============================================================\nModule 1 Example 1.4: Data Structures for Verification\n============================================================\n\n",0);
    data_structures_example__DOT__txn_queue = VL_NEW(Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue, vlSymsp);
    data_structures_example__DOT__scoreboard = VL_NEW(Vdata_structures_example_data_structures_pkg__03a__03aScoreboard, vlSymsp);
    data_structures_example__DOT__coverage = VL_NEW(Vdata_structures_example_data_structures_pkg__03a__03aCoverageCollector, vlSymsp);
    VL_WRITEF_NX("1. Transaction Queue:\n",0);
    data_structures_example__DOT__txn = VL_NEW(Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction, vlSymsp, 0U, 0x1000U);
    VL_NULL_CHECK(data_structures_example__DOT__txn_queue, "data_structures_example.sv", 163)->__VnoInFunc_push(vlSymsp, data_structures_example__DOT__txn);
    __Vtemp_1 = ([&]() {
            VL_NULL_CHECK(data_structures_example__DOT__txn, "data_structures_example.sv", 164)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__5__Vfuncout);
        }(), __Vtask_convert2string__5__Vfuncout);
    VL_WRITEF_NX("   Pushed: %@\n",0,-1,&(__Vtemp_1));
    vlSelfRef.data_structures_example__DOT__unnamedblk1__DOT__i = 1U;
    data_structures_example__DOT__txn = VL_NEW(Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction, vlSymsp, 1U, 0x1001U);
    VL_NULL_CHECK(data_structures_example__DOT__txn_queue, "data_structures_example.sv", 163)->__VnoInFunc_push(vlSymsp, data_structures_example__DOT__txn);
    __Vtemp_2 = ([&]() {
            VL_NULL_CHECK(data_structures_example__DOT__txn, "data_structures_example.sv", 164)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__5__Vfuncout);
        }(), __Vtask_convert2string__5__Vfuncout);
    VL_WRITEF_NX("   Pushed: %@\n",0,-1,&(__Vtemp_2));
    vlSelfRef.data_structures_example__DOT__unnamedblk1__DOT__i = 2U;
    data_structures_example__DOT__txn = VL_NEW(Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction, vlSymsp, 2U, 0x1002U);
    VL_NULL_CHECK(data_structures_example__DOT__txn_queue, "data_structures_example.sv", 163)->__VnoInFunc_push(vlSymsp, data_structures_example__DOT__txn);
    __Vtemp_3 = ([&]() {
            VL_NULL_CHECK(data_structures_example__DOT__txn, "data_structures_example.sv", 164)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__5__Vfuncout);
        }(), __Vtask_convert2string__5__Vfuncout);
    VL_WRITEF_NX("   Pushed: %@\n",0,-1,&(__Vtemp_3));
    vlSelfRef.data_structures_example__DOT__unnamedblk1__DOT__i = 3U;
    data_structures_example__DOT__txn = VL_NEW(Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction, vlSymsp, 3U, 0x1003U);
    VL_NULL_CHECK(data_structures_example__DOT__txn_queue, "data_structures_example.sv", 163)->__VnoInFunc_push(vlSymsp, data_structures_example__DOT__txn);
    __Vtemp_4 = ([&]() {
            VL_NULL_CHECK(data_structures_example__DOT__txn, "data_structures_example.sv", 164)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__5__Vfuncout);
        }(), __Vtask_convert2string__5__Vfuncout);
    VL_WRITEF_NX("   Pushed: %@\n",0,-1,&(__Vtemp_4));
    vlSelfRef.data_structures_example__DOT__unnamedblk1__DOT__i = 4U;
    data_structures_example__DOT__txn = VL_NEW(Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction, vlSymsp, 4U, 0x1004U);
    VL_NULL_CHECK(data_structures_example__DOT__txn_queue, "data_structures_example.sv", 163)->__VnoInFunc_push(vlSymsp, data_structures_example__DOT__txn);
    __Vtemp_5 = ([&]() {
            VL_NULL_CHECK(data_structures_example__DOT__txn, "data_structures_example.sv", 164)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__5__Vfuncout);
        }(), __Vtask_convert2string__5__Vfuncout);
    VL_WRITEF_NX("   Pushed: %@\n",0,-1,&(__Vtemp_5));
    vlSelfRef.data_structures_example__DOT__unnamedblk1__DOT__i = 5U;
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
        data_structures_example__DOT__txn = __Vtask_pop__8__Vfuncout;
        __Vtemp_6 = ([&]() {
                VL_NULL_CHECK(data_structures_example__DOT__txn, "data_structures_example.sv", 172)
                     ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__9__Vfuncout);
            }(), __Vtask_convert2string__9__Vfuncout);
        VL_WRITEF_NX("   Popped: %@\n",0,-1,&(__Vtemp_6));
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
    VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 189)->__VnoInFunc_sample_address(vlSymsp, 0U);
    vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i = 1U;
    VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 189)->__VnoInFunc_sample_address(vlSymsp, 0x10U);
    vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i = 2U;
    VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 189)->__VnoInFunc_sample_address(vlSymsp, 0x20U);
    vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i = 3U;
    VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 189)->__VnoInFunc_sample_address(vlSymsp, 0x30U);
    vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i = 4U;
    VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 189)->__VnoInFunc_sample_address(vlSymsp, 0x40U);
    vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i = 5U;
    VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 189)->__VnoInFunc_sample_address(vlSymsp, 0x50U);
    vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i = 6U;
    VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 189)->__VnoInFunc_sample_address(vlSymsp, 0x60U);
    vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i = 7U;
    VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 189)->__VnoInFunc_sample_address(vlSymsp, 0x70U);
    vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i = 8U;
    VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 189)->__VnoInFunc_sample_address(vlSymsp, 0x80U);
    vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i = 9U;
    VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 189)->__VnoInFunc_sample_address(vlSymsp, 0x90U);
    vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i = 0xaU;
    VL_WRITEF_NX("   Coverage: %0.2f%%\n",0,64,([&]() {
                    VL_NULL_CHECK(data_structures_example__DOT__coverage, "data_structures_example.sv", 191)
                                                ->__VnoInFunc_get_coverage(vlSymsp, 0x100U, __Vtask_get_coverage__17__Vfuncout);
                }(), __Vtask_get_coverage__17__Vfuncout));
    VL_WRITEF_NX("\n============================================================\nExample completed successfully!\n============================================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "data_structures_example.sv", 
                                         198);
    VL_FINISH_MT("data_structures_example.sv", 199, "");
}
