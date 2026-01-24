// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg::__VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg::__VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "BaseTransaction"s;
}

void Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_create(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtransactions___024unit__03a__03aBaseTransaction> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtransactions___024unit__03a__03aBaseTransaction, vlProcess, vlSymsp, "BaseTransaction"s)
            : VL_NEW(Vtransactions___024unit__03a__03aBaseTransaction, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "BaseTransaction"s;
}

Vtransactions___024unit__03a__03aBaseTransaction::Vtransactions___024unit__03a__03aBaseTransaction(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions_uvm_pkg__03a__03auvm_sequence_item(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__data = 0U;
    this->__PVT__address = 0U;
}

void Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("data=0x%02x, addr=0x%04x",0,
                                                8,this->__PVT__data,
                                                16,
                                                (IData)(this->__PVT__address)) ;
}

void Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    // Body
    VlClassRef<Vtransactions___024unit__03a__03aBaseTransaction> txn;
    {
        if ((! VL_CAST_DYNAMIC(rhs, txn))) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "COPY"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "COPY"s, "Copy failed: wrong type"s, 0U, "transactions.sv"s, 0x00000054U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        Vtransactions_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        this->__PVT__data = VL_NULL_CHECK(txn, "transactions.sv", 94)
            ->__PVT__data;
        this->__PVT__address = VL_NULL_CHECK(txn, "transactions.sv", 95)
            ->__PVT__address;
        __Vlabel0: ;
    }
}

void Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_do_compare(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_do_compare\n"); );
    // Body
    VlClassRef<Vtransactions___024unit__03a__03aBaseTransaction> txn;
    {
        if ((! VL_CAST_DYNAMIC(rhs, txn))) {
            do_compare__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        do_compare__Vfuncrtn = (((IData)(this->__PVT__data) 
                                 == VL_NULL_CHECK(txn, "transactions.sv", 126)
                                 ->__PVT__data) && 
                                ((IData)(this->__PVT__address) 
                                 == VL_NULL_CHECK(txn, "transactions.sv", 126)
                                 ->__PVT__address));
        __Vlabel0: ;
    }
}

void Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__8__Vfuncout;
    __Vfunc___VBasicRand__8__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__8__Vfuncout);
            }(), __Vfunc___VBasicRand__8__Vfuncout));
}

void Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtransactions___024unit__03a__03aBaseTransaction::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data = VL_SCOPED_RAND_RESET_I(8, 3545824888113081052ULL, 10363016170300574568ull);
    __PVT__address = VL_SCOPED_RAND_RESET_I(16, 3545824888113081052ULL, 12021632533271657083ull);
}

Vtransactions___024unit__03a__03aBaseTransaction::~Vtransactions___024unit__03a__03aBaseTransaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions___024unit__03a__03aBaseTransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions___024unit__03a__03aBaseTransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions___024unit__03a__03aBaseTransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aBaseTransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "data:" + VL_TO_STRING(__PVT__data);
    out += ", address:" + VL_TO_STRING(__PVT__address);
    out += ", "+ Vtransactions_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
