// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"
#include "Vtransaction_example__Syms.h"
#include "Vtransaction_example___024root.h"
#include "Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg.h"
#include "Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg.h"
#include "Vtransaction_example_transaction_pkg__03a__03aWriteTransaction__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vtransaction_example___024root___eval_initial__TOP__Vtiming__0(Vtransaction_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlClassRef<Vtransaction_example_transaction_pkg__03a__03aTransaction> transaction_example__DOT__unnamedblk1__DOT__txn1;
    VlClassRef<Vtransaction_example_transaction_pkg__03a__03aTransaction> transaction_example__DOT__unnamedblk1__DOT__txn2;
    VlClassRef<Vtransaction_example_transaction_pkg__03a__03aReadTransaction> transaction_example__DOT__unnamedblk1__DOT__read_txn;
    VlClassRef<Vtransaction_example_transaction_pkg__03a__03aWriteTransaction> transaction_example__DOT__unnamedblk1__DOT__write_txn;
    VlClassRef<Vtransaction_example_transaction_pkg__03a__03aTransaction> transaction_example__DOT__unnamedblk1__DOT__txn_copy;
    std::string __Vtask_convert2string__1__Vfuncout;
    IData/*31:0*/ __Vtask_get_id__2__Vfuncout;
    __Vtask_get_id__2__Vfuncout = 0;
    std::string __Vtask_convert2string__4__Vfuncout;
    SData/*15:0*/ __Vtask_get_address__5__Vfuncout;
    __Vtask_get_address__5__Vfuncout = 0;
    std::string __Vtask_convert2string__7__Vfuncout;
    SData/*15:0*/ __Vtask_get_address__8__Vfuncout;
    __Vtask_get_address__8__Vfuncout = 0;
    std::string __Vtask_convert2string__11__Vfuncout;
    std::string __Vtask_convert2string__12__Vfuncout;
    CData/*0:0*/ __Vtask_compare__14__Vfuncout;
    __Vtask_compare__14__Vfuncout = 0;
    CData/*0:0*/ __Vtask_compare__15__Vfuncout;
    __Vtask_compare__15__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    VL_WRITEF_NX("============================================================\nModule 1 Example 1.1: SystemVerilog Class Basics\n============================================================\n\n1. Creating base transaction:\n",0);
    transaction_example__DOT__unnamedblk1__DOT__txn1 
        = VL_NEW(Vtransaction_example_transaction_pkg__03a__03aTransaction, vlSymsp, 
                 std::string{"Transaction"});
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 166)->__PVT__data = 0x1234U;
    __Vtemp_1 = ([&]() {
            VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 167)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__1__Vfuncout);
        }(), __Vtask_convert2string__1__Vfuncout);
    VL_WRITEF_NX("   %@\n",0,-1,&(__Vtemp_1));
    VL_WRITEF_NX("   Transaction ID: %0d\n",0,32,([&]() {
                    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 168)
                                                  ->__VnoInFunc_get_id(vlSymsp, __Vtask_get_id__2__Vfuncout);
                }(), __Vtask_get_id__2__Vfuncout));
    VL_WRITEF_NX("\n2. Creating read transaction (inheritance):\n",0);
    transaction_example__DOT__unnamedblk1__DOT__read_txn 
        = VL_NEW(Vtransaction_example_transaction_pkg__03a__03aReadTransaction, vlSymsp, 
                 std::string{"ReadTransaction"});
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__read_txn, "transaction.sv", 174)->__PVT__address = 0x1000U;
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__read_txn, "transaction.sv", 175)->__PVT__data = 0xdeadU;
    __Vtemp_2 = ([&]() {
            VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__read_txn, "transaction.sv", 176)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__4__Vfuncout);
        }(), __Vtask_convert2string__4__Vfuncout);
    VL_WRITEF_NX("   %@\n",0,-1,&(__Vtemp_2));
    VL_WRITEF_NX("   Address: 0x%0x\n",0,16,([&]() {
                    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__read_txn, "transaction.sv", 177)
                                             ->__VnoInFunc_get_address(vlSymsp, __Vtask_get_address__5__Vfuncout);
                }(), (IData)(__Vtask_get_address__5__Vfuncout)));
    VL_WRITEF_NX("\n3. Creating write transaction (inheritance):\n",0);
    transaction_example__DOT__unnamedblk1__DOT__write_txn 
        = VL_NEW(Vtransaction_example_transaction_pkg__03a__03aWriteTransaction, vlSymsp, 
                 std::string{"WriteTransaction"});
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__write_txn, "transaction.sv", 183)->__PVT__address = 0x2000U;
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__write_txn, "transaction.sv", 184)->__PVT__data = 0xbeefU;
    __Vtemp_3 = ([&]() {
            VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__write_txn, "transaction.sv", 185)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__7__Vfuncout);
        }(), __Vtask_convert2string__7__Vfuncout);
    VL_WRITEF_NX("   %@\n",0,-1,&(__Vtemp_3));
    VL_WRITEF_NX("   Address: 0x%0x\n",0,16,([&]() {
                    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__write_txn, "transaction.sv", 186)
                                             ->__VnoInFunc_get_address(vlSymsp, __Vtask_get_address__8__Vfuncout);
                }(), (IData)(__Vtask_get_address__8__Vfuncout)));
    VL_WRITEF_NX("\n4. Testing copy:\n",0);
    transaction_example__DOT__unnamedblk1__DOT__txn_copy 
        = VL_NEW(Vtransaction_example_transaction_pkg__03a__03aTransaction, vlSymsp, 
                 std::string{"Transaction"});
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn_copy, "transaction.sv", 192)->__VnoInFunc_copy(vlSymsp, transaction_example__DOT__unnamedblk1__DOT__txn1);
    __Vtemp_4 = ([&]() {
            VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 193)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__11__Vfuncout);
        }(), __Vtask_convert2string__11__Vfuncout);
    VL_WRITEF_NX("   Original: %@\n",0,-1,&(__Vtemp_4));
    __Vtemp_5 = ([&]() {
            VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn_copy, "transaction.sv", 194)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__12__Vfuncout);
        }(), __Vtask_convert2string__12__Vfuncout);
    VL_WRITEF_NX("   Copy:     %@\n\n5. Testing compare:\n",0,
                 -1,&(__Vtemp_5));
    transaction_example__DOT__unnamedblk1__DOT__txn2 
        = VL_NEW(Vtransaction_example_transaction_pkg__03a__03aTransaction, vlSymsp, 
                 std::string{"Transaction"});
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn2, "transaction.sv", 200)->__PVT__data = 0x1234U;
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn2, "transaction.sv", 201)->__PVT__id 
        = VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 201)
        ->__PVT__id;
    VL_WRITEF_NX("   txn1 == txn2: %0#\n",0,1,([&]() {
                    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 202)
                                               ->__VnoInFunc_compare(vlSymsp, transaction_example__DOT__unnamedblk1__DOT__txn2, __Vtask_compare__14__Vfuncout);
                }(), (IData)(__Vtask_compare__14__Vfuncout)));
    VL_WRITEF_NX("   txn1 == read_txn: %0#\n",0,1,([&]() {
                    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 203)
                                                   ->__VnoInFunc_compare(vlSymsp, transaction_example__DOT__unnamedblk1__DOT__read_txn, __Vtask_compare__15__Vfuncout);
                }(), (IData)(__Vtask_compare__15__Vfuncout)));
    VL_WRITEF_NX("\n============================================================\nExample completed successfully!\n============================================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "transaction.sv", 
                                         210);
    VL_FINISH_MT("transaction.sv", 211, "");
}
