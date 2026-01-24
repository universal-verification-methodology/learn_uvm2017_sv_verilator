// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"

VlCoroutine Vtransaction_example___024root___eval_initial__TOP__Vtiming__0(Vtransaction_example___024root* vlSelf);

void Vtransaction_example___024root___eval_initial(Vtransaction_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___eval_initial\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtransaction_example___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vtransaction_example___024root___eval_initial__TOP__Vtiming__0(Vtransaction_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
        = VL_NEW(Vtransaction_example_transaction_pkg__03a__03aTransaction, vlSymsp, "Transaction"s);
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 605)->__PVT__data = 0x00001234U;
    __Vtemp_1 = ([&]() {
            VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 608)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__1__Vfuncout);
        }(), __Vtask_convert2string__1__Vfuncout);
    VL_WRITEF_NX("   %@\n",0,-1,&(__Vtemp_1));
    VL_WRITEF_NX("   Transaction ID: %0d\n",0,32,([&]() {
                    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 611)
                                                  ->__VnoInFunc_get_id(vlSymsp, __Vtask_get_id__2__Vfuncout);
                }(), __Vtask_get_id__2__Vfuncout));
    VL_WRITEF_NX("\n2. Creating read transaction (inheritance):\n",0);
    transaction_example__DOT__unnamedblk1__DOT__read_txn 
        = VL_NEW(Vtransaction_example_transaction_pkg__03a__03aReadTransaction, vlSymsp, "ReadTransaction"s);
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__read_txn, "transaction.sv", 621)->__PVT__address = 0x1000U;
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__read_txn, "transaction.sv", 624)->__PVT__data = 0x0000deadU;
    __Vtemp_2 = ([&]() {
            VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__read_txn, "transaction.sv", 627)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__4__Vfuncout);
        }(), __Vtask_convert2string__4__Vfuncout);
    VL_WRITEF_NX("   %@\n",0,-1,&(__Vtemp_2));
    VL_WRITEF_NX("   Address: 0x%0x\n",0,16,([&]() {
                    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__read_txn, "transaction.sv", 630)
                                             ->__VnoInFunc_get_address(vlSymsp, __Vtask_get_address__5__Vfuncout);
                }(), (IData)(__Vtask_get_address__5__Vfuncout)));
    VL_WRITEF_NX("\n3. Creating write transaction (inheritance):\n",0);
    transaction_example__DOT__unnamedblk1__DOT__write_txn 
        = VL_NEW(Vtransaction_example_transaction_pkg__03a__03aWriteTransaction, vlSymsp, "WriteTransaction"s);
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__write_txn, "transaction.sv", 640)->__PVT__address = 0x2000U;
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__write_txn, "transaction.sv", 643)->__PVT__data = 0x0000beefU;
    __Vtemp_3 = ([&]() {
            VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__write_txn, "transaction.sv", 646)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__7__Vfuncout);
        }(), __Vtask_convert2string__7__Vfuncout);
    VL_WRITEF_NX("   %@\n",0,-1,&(__Vtemp_3));
    VL_WRITEF_NX("   Address: 0x%0x\n",0,16,([&]() {
                    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__write_txn, "transaction.sv", 648)
                                             ->__VnoInFunc_get_address(vlSymsp, __Vtask_get_address__8__Vfuncout);
                }(), (IData)(__Vtask_get_address__8__Vfuncout)));
    VL_WRITEF_NX("\n4. Testing copy:\n",0);
    transaction_example__DOT__unnamedblk1__DOT__txn_copy 
        = VL_NEW(Vtransaction_example_transaction_pkg__03a__03aTransaction, vlSymsp, "Transaction"s);
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn_copy, "transaction.sv", 657)->__VnoInFunc_copy(vlSymsp, transaction_example__DOT__unnamedblk1__DOT__txn1);
    __Vtemp_4 = ([&]() {
            VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 659)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__11__Vfuncout);
        }(), __Vtask_convert2string__11__Vfuncout);
    VL_WRITEF_NX("   Original: %@\n",0,-1,&(__Vtemp_4));
    __Vtemp_5 = ([&]() {
            VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn_copy, "transaction.sv", 660)
                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__12__Vfuncout);
        }(), __Vtask_convert2string__12__Vfuncout);
    VL_WRITEF_NX("   Copy:     %@\n\n5. Testing compare:\n",0,
                 -1,&(__Vtemp_5));
    transaction_example__DOT__unnamedblk1__DOT__txn2 
        = VL_NEW(Vtransaction_example_transaction_pkg__03a__03aTransaction, vlSymsp, "Transaction"s);
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn2, "transaction.sv", 668)->__PVT__data = 0x00001234U;
    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn2, "transaction.sv", 671)->__PVT__id 
        = VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 671)
        ->__PVT__id;
    VL_WRITEF_NX("   txn1 == txn2: %0#\n",0,1,([&]() {
                    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 674)
                                               ->__VnoInFunc_compare(vlSymsp, transaction_example__DOT__unnamedblk1__DOT__txn2, __Vtask_compare__14__Vfuncout);
                }(), (IData)(__Vtask_compare__14__Vfuncout)));
    VL_WRITEF_NX("   txn1 == read_txn: %0#\n",0,1,([&]() {
                    VL_NULL_CHECK(transaction_example__DOT__unnamedblk1__DOT__txn1, "transaction.sv", 677)
                                                   ->__VnoInFunc_compare(vlSymsp, transaction_example__DOT__unnamedblk1__DOT__read_txn, __Vtask_compare__15__Vfuncout);
                }(), (IData)(__Vtask_compare__15__Vfuncout)));
    VL_WRITEF_NX("\n============================================================\nExample completed successfully!\n============================================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "transaction.sv", 
                                         688);
    VL_FINISH_MT("transaction.sv", 691, "");
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransaction_example___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtransaction_example___024root___eval_triggers__act(Vtransaction_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___eval_triggers__act\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtransaction_example___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtransaction_example___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___trigger_anySet__act\n"); );
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

void Vtransaction_example___024root___timing_resume(Vtransaction_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___timing_resume\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtransaction_example___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtransaction_example___024root___eval_phase__act(Vtransaction_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___eval_phase__act\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtransaction_example___024root___eval_triggers__act(vlSelf);
    Vtransaction_example___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtransaction_example___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtransaction_example___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vtransaction_example___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtransaction_example___024root___eval_phase__nba(Vtransaction_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___eval_phase__nba\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtransaction_example___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtransaction_example___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtransaction_example___024root___eval(Vtransaction_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___eval\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtransaction_example___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("transaction.sv", 570, "", "DIDNOTCONVERGE: NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtransaction_example___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("transaction.sv", 570, "", "DIDNOTCONVERGE: Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtransaction_example___024root___eval_phase__act(vlSelf));
    } while (Vtransaction_example___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtransaction_example___024root___eval_debug_assertions(Vtransaction_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___eval_debug_assertions\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
