// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions___024unit__03a__03aTransactionsTest__Vclpkg::__VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component_registry__pi1> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions___024unit__03a__03aTransactionsTest__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component_registry__pi1> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions___024unit__03a__03aTransactionsTest__Vclpkg::__VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions___024unit__03a__03aTransactionsTest__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "TransactionsTest"s;
}

void Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component_registry__pi1> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "TransactionsTest"s;
}

Vtransactions___024unit__03a__03aTransactionsTest::Vtransactions___024unit__03a__03aTransactionsTest(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> parent)
    : Vtransactions_uvm_pkg__03a__03auvm_test(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc_build_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    VlClassRef<Vtransactions___024unit__03a__03aBaseTransaction> __Vfunc_create__5__Vfuncout;
    VlClassRef<Vtransactions___024unit__03a__03aBaseTransaction> __Vfunc_create__6__Vfuncout;
    VlClassRef<Vtransactions___024unit__03a__03aExtendedTransaction> __Vfunc_create__7__Vfuncout;
    VlClassRef<Vtransactions___024unit__03a__03aConstrainedTransaction> __Vfunc_create__8__Vfuncout;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__3__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Building transaction test"s, 0x000000c8U, "transactions.sv"s, 0x00000110U, ""s, 1U);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "base_txn1"s, VlNull{}, ""s, __Vfunc_create__5__Vfuncout);
    this->__PVT__base_txn1 = __Vfunc_create__5__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "base_txn2"s, VlNull{}, ""s, __Vfunc_create__6__Vfuncout);
    this->__PVT__base_txn2 = __Vfunc_create__6__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "ext_txn"s, VlNull{}, ""s, __Vfunc_create__7__Vfuncout);
    this->__PVT__ext_txn = __Vfunc_create__7__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "constr_txn"s, VlNull{}, ""s, __Vfunc_create__8__Vfuncout);
    this->__PVT__constr_txn = __Vfunc_create__8__Vfuncout;
}

VlCoroutine Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc_run_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__10__Vfuncout;
    __Vfunc_uvm_report_enabled__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__Vfuncout;
    __Vfunc_uvm_report_enabled__12__Vfuncout = 0;
    std::string __Vtask_convert2string__14__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__Vfuncout;
    __Vfunc_uvm_report_enabled__15__Vfuncout = 0;
    std::string __Vtask_convert2string__17__Vfuncout;
    CData/*0:0*/ __Vtask_compare__18__Vfuncout;
    __Vtask_compare__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__Vfuncout;
    __Vfunc_uvm_report_enabled__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__21__Vfuncout;
    __Vfunc_uvm_report_enabled__21__Vfuncout = 0;
    VlClassRef<Vtransactions___024unit__03a__03aBaseTransaction> __Vfunc_create__23__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25__Vfuncout;
    __Vfunc_uvm_report_enabled__25__Vfuncout = 0;
    std::string __Vtask_convert2string__27__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28__Vfuncout;
    __Vfunc_uvm_report_enabled__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__Vfuncout;
    __Vfunc_uvm_report_enabled__30__Vfuncout = 0;
    std::string __Vtask_convert2string__32__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__Vfuncout;
    __Vfunc_uvm_report_enabled__33__Vfuncout = 0;
    IData/*31:0*/ __Vtask_randomize__35__Vfuncout;
    __Vtask_randomize__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__Vfuncout;
    __Vfunc_uvm_report_enabled__36__Vfuncout = 0;
    std::string __Vtask_convert2string__38__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__39__Vfuncout;
    __Vfunc_uvm_report_enabled__39__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtransactions___024unit__03a__03aBaseTransaction> base_copy;
    VL_NULL_CHECK(phase, "transactions.sv", 283)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                              VlClassRef<Vtransactions___024unit__03a__03aTransactionsTest>{this}, ""s, 1U);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__10__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__10__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Demonstrating base transactions"s, 0x000000c8U, "transactions.sv"s, 0x0000011dU, ""s, 1U);
    }
    VL_NULL_CHECK(this->__PVT__base_txn1, "transactions.sv", 286)->__PVT__data = 0xaaU;
    VL_NULL_CHECK(this->__PVT__base_txn1, "transactions.sv", 287)->__PVT__address = 0x1234U;
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__12__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__12__Vfuncout))) {
        __Vtemp_1 = ([&]() {
                VL_NULL_CHECK(this->__PVT__base_txn1, "transactions.sv", 288)
                     ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__14__Vfuncout);
            }(), __Vtask_convert2string__14__Vfuncout);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, VL_SFORMATF_N_NX("Base transaction 1: %@",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x000000c8U, "transactions.sv"s, 0x00000120U, ""s, 1U);
    }
    VL_NULL_CHECK(this->__PVT__base_txn2, "transactions.sv", 290)->__PVT__data = 0xaaU;
    VL_NULL_CHECK(this->__PVT__base_txn2, "transactions.sv", 291)->__PVT__address = 0x1234U;
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__15__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__15__Vfuncout))) {
        __Vtemp_2 = ([&]() {
                VL_NULL_CHECK(this->__PVT__base_txn2, "transactions.sv", 292)
                     ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__17__Vfuncout);
            }(), __Vtask_convert2string__17__Vfuncout);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, VL_SFORMATF_N_NX("Base transaction 2: %@",0,
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0x000000c8U, "transactions.sv"s, 0x00000124U, ""s, 1U);
    }
    if (([&]() {
                VL_NULL_CHECK(this->__PVT__base_txn1, "transactions.sv", 294)
         ->__VnoInFunc_compare(vlProcess, vlSymsp, this->__PVT__base_txn2, VlNull{}, __Vtask_compare__18__Vfuncout);
            }(), (IData)(__Vtask_compare__18__Vfuncout))) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__19__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__19__Vfuncout))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Transactions are equal"s, 0x000000c8U, "transactions.sv"s, 0x00000127U, ""s, 1U);
        }
    } else if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "TEST"s, __Vfunc_uvm_report_enabled__21__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__21__Vfuncout))) {
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "TEST"s, "Transactions should be equal"s, 0U, "transactions.sv"s, 0x00000129U, ""s, 1U);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "base_copy"s, VlNull{}, ""s, __Vfunc_create__23__Vfuncout);
    base_copy = __Vfunc_create__23__Vfuncout;
    VL_NULL_CHECK(base_copy, "transactions.sv", 302)->__VnoInFunc_copy(vlProcess, vlSymsp, this->__PVT__base_txn1, VlNull{});
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__25__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__25__Vfuncout))) {
        __Vtemp_3 = ([&]() {
                VL_NULL_CHECK(base_copy, "transactions.sv", 303)
                     ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__27__Vfuncout);
            }(), __Vtask_convert2string__27__Vfuncout);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, VL_SFORMATF_N_NX("Copied transaction: %@",0,
                                                                                -1,
                                                                                &(__Vtemp_3)) , 0x000000c8U, "transactions.sv"s, 0x0000012fU, ""s, 1U);
    }
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__28__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__28__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Demonstrating extended transactions"s, 0x000000c8U, "transactions.sv"s, 0x00000132U, ""s, 1U);
    }
    VL_NULL_CHECK(this->__PVT__ext_txn, "transactions.sv", 307)->__PVT__data = 0xbbU;
    VL_NULL_CHECK(this->__PVT__ext_txn, "transactions.sv", 308)->__PVT__address = 0x5678U;
    VL_NULL_CHECK(this->__PVT__ext_txn, "transactions.sv", 309)->__PVT__control = 0x11U;
    VL_NULL_CHECK(this->__PVT__ext_txn, "transactions.sv", 310)->__PVT__status = 0x22U;
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__30__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__30__Vfuncout))) {
        __Vtemp_4 = ([&]() {
                VL_NULL_CHECK(this->__PVT__ext_txn, "transactions.sv", 311)
                     ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__32__Vfuncout);
            }(), __Vtask_convert2string__32__Vfuncout);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, VL_SFORMATF_N_NX("Extended transaction: %@",0,
                                                                                -1,
                                                                                &(__Vtemp_4)) , 0x000000c8U, "transactions.sv"s, 0x00000137U, ""s, 1U);
    }
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__33__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__33__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Demonstrating constrained transactions"s, 0x000000c8U, "transactions.sv"s, 0x0000013aU, ""s, 1U);
    }
    if ((0U != ([&]() {
                    VL_NULL_CHECK(this->__PVT__constr_txn, "transactions.sv", 315)
                ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__35__Vfuncout);
                }(), __Vtask_randomize__35__Vfuncout))) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__36__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__36__Vfuncout))) {
            __Vtemp_5 = ([&]() {
                    VL_NULL_CHECK(this->__PVT__constr_txn, "transactions.sv", 316)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__38__Vfuncout);
                }(), __Vtask_convert2string__38__Vfuncout);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, VL_SFORMATF_N_NX("Randomized transaction: %@",0,
                                                                                -1,
                                                                                &(__Vtemp_5)) , 0x000000c8U, "transactions.sv"s, 0x0000013cU, ""s, 1U);
        }
    } else if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "TEST"s, __Vfunc_uvm_report_enabled__39__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__39__Vfuncout))) {
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "TEST"s, "Randomization failed"s, 0U, "transactions.sv"s, 0x0000013eU, ""s, 1U);
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                            vlProcess, 
                                            "transactions.sv", 
                                            321);
    VL_NULL_CHECK(phase, "transactions.sv", 322)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                             VlClassRef<Vtransactions___024unit__03a__03aTransactionsTest>{this}, ""s, 1U);
    co_return;}

void Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc_report_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__43__Vfuncout;
    __Vfunc_uvm_report_enabled__43__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__43__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__43__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Transaction demonstration complete"s, 0x000000c8U, "transactions.sv"s, 0x00000147U, ""s, 1U);
    }
}

void Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__46__Vfuncout;
    __Vfunc___VBasicRand__46__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__46__Vfuncout);
            }(), __Vfunc___VBasicRand__46__Vfuncout));
}

void Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtransactions___024unit__03a__03aTransactionsTest::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtransactions___024unit__03a__03aTransactionsTest::~Vtransactions___024unit__03a__03aTransactionsTest() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions___024unit__03a__03aTransactionsTest>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions___024unit__03a__03aTransactionsTest::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions___024unit__03a__03aTransactionsTest::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aTransactionsTest::to_string_middle\n"); );
    // Body
    std::string out;
    out += "base_txn1:" + VL_TO_STRING(__PVT__base_txn1);
    out += ", base_txn2:" + VL_TO_STRING(__PVT__base_txn2);
    out += ", ext_txn:" + VL_TO_STRING(__PVT__ext_txn);
    out += ", constr_txn:" + VL_TO_STRING(__PVT__constr_txn);
    out += ", "+ Vtransactions_uvm_pkg__03a__03auvm_test::to_string_middle();
    return (out);
}
