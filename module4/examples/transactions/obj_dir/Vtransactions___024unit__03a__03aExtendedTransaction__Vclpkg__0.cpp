// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions___024unit__03a__03aExtendedTransaction__Vclpkg::__VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions___024unit__03a__03aExtendedTransaction__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions___024unit__03a__03aExtendedTransaction__Vclpkg::__VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions___024unit__03a__03aExtendedTransaction__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "ExtendedTransaction"s;
}

void Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_create(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtransactions___024unit__03a__03aExtendedTransaction> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtransactions___024unit__03a__03aExtendedTransaction, vlProcess, vlSymsp, "ExtendedTransaction"s)
            : VL_NEW(Vtransactions___024unit__03a__03aExtendedTransaction, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "ExtendedTransaction"s;
}

Vtransactions___024unit__03a__03aExtendedTransaction::Vtransactions___024unit__03a__03aExtendedTransaction(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions___024unit__03a__03aBaseTransaction(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__control = 0U;
    this->__PVT__status = 0U;
}

void Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vfunc_convert2string__4__Vfuncout;
    std::string __Vtemp_1;
    // Body
    __Vtemp_1 = ([&]() {
            Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vfunc_convert2string__4__Vfuncout);
        }(), __Vfunc_convert2string__4__Vfuncout);
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("%@, ctrl=0x%02x, status=0x%02x",0,
                                                -1,
                                                &(__Vtemp_1),
                                                8,(IData)(this->__PVT__control),
                                                8,this->__PVT__status) ;
}

void Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_do_copy\n"); );
    // Body
    VlClassRef<Vtransactions___024unit__03a__03aExtendedTransaction> txn;
    {
        Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if ((! VL_CAST_DYNAMIC(rhs, txn))) {
            goto __Vlabel0;
        }
        this->__PVT__control = VL_NULL_CHECK(txn, "transactions.sv", 154)
            ->__PVT__control;
        this->__PVT__status = VL_NULL_CHECK(txn, "transactions.sv", 155)
            ->__PVT__status;
        __Vlabel0: ;
    }
}

void Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_do_compare(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_do_compare\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_do_compare__6__Vfuncout;
    __Vfunc_do_compare__6__Vfuncout = 0;
    // Body
    VlClassRef<Vtransactions___024unit__03a__03aExtendedTransaction> txn;
    {
        if ((! VL_CAST_DYNAMIC(rhs, txn))) {
            do_compare__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        do_compare__Vfuncrtn = ((([&]() {
                        Vtransactions___024unit__03a__03aBaseTransaction::__VnoInFunc_do_compare(vlProcess, vlSymsp, rhs, comparer, __Vfunc_do_compare__6__Vfuncout);
                    }(), (IData)(__Vfunc_do_compare__6__Vfuncout)) 
                                 && ((IData)(this->__PVT__control) 
                                     == VL_NULL_CHECK(txn, "transactions.sv", 162)
                                     ->__PVT__control)) 
                                && ((IData)(this->__PVT__status) 
                                    == VL_NULL_CHECK(txn, "transactions.sv", 162)
                                    ->__PVT__status));
        __Vlabel0: ;
    }
}

void Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc_randomize\n"); );
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

void Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtransactions___024unit__03a__03aExtendedTransaction::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__control = VL_SCOPED_RAND_RESET_I(8, 2331418154681128992ULL, 14074454917777209462ull);
    __PVT__status = VL_SCOPED_RAND_RESET_I(8, 2331418154681128992ULL, 14822974759303984767ull);
}

Vtransactions___024unit__03a__03aExtendedTransaction::~Vtransactions___024unit__03a__03aExtendedTransaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions___024unit__03a__03aExtendedTransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions___024unit__03a__03aExtendedTransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions___024unit__03a__03aExtendedTransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aExtendedTransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "control:" + VL_TO_STRING(__PVT__control);
    out += ", status:" + VL_TO_STRING(__PVT__status);
    out += ", "+ Vtransactions___024unit__03a__03aBaseTransaction::to_string_middle();
    return (out);
}
