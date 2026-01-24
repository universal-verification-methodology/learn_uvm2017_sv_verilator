// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions___024unit__03a__03aConstrainedTransaction__Vclpkg::__VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions___024unit__03a__03aConstrainedTransaction__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions___024unit__03a__03aConstrainedTransaction__Vclpkg::__VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions___024unit__03a__03aConstrainedTransaction__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "ConstrainedTransaction"s;
}

void Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_create(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtransactions___024unit__03a__03aConstrainedTransaction> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtransactions___024unit__03a__03aConstrainedTransaction, vlProcess, vlSymsp, "ConstrainedTransaction"s)
            : VL_NEW(Vtransactions___024unit__03a__03aConstrainedTransaction, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "ConstrainedTransaction"s;
}

Vtransactions___024unit__03a__03aConstrainedTransaction::Vtransactions___024unit__03a__03aConstrainedTransaction(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions_uvm_pkg__03a__03auvm_sequence_item(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__address, 0x0000000000000010ULL, 
                                                                         "address", 0ULL);
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__data, 8ULL, 
                                                                         "data", 0ULL);
}

void Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("data=0x%02x, addr=0x%04x",0,
                                                8,this->__PVT__data,
                                                16,
                                                (IData)(this->__PVT__address)) ;
}

void Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_address_aligned_setup_constraint(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_address_aligned_setup_constraint\n"); );
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(__Vbv (= ((_ extract 1 0) address) #b00))"s, "transactions.sv", 
                                                                    210, 
                                                                    "        address[1:0] == 2'b00;   ");
}

void Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_address_aligned_setup_constraint(vlSymsp);
    this->__VnoInFunc_data_nonzero_setup_constraint(vlSymsp);
}

void Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_data_nonzero_setup_constraint(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc_data_nonzero_setup_constraint\n"); );
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(__Vbv (not (= data #x00)))"s, "transactions.sv", 
                                                                    223, 
                                                                    "        data != 8'h00;   ");
}

void Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtransactions___024unit__03a__03aConstrainedTransaction::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data = VL_SCOPED_RAND_RESET_I(8, 7042654601604259502ULL, 10363016170300574568ull);
    __PVT__address = VL_SCOPED_RAND_RESET_I(16, 7042654601604259502ULL, 12021632533271657083ull);
}

Vtransactions___024unit__03a__03aConstrainedTransaction::~Vtransactions___024unit__03a__03aConstrainedTransaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions___024unit__03a__03aConstrainedTransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions___024unit__03a__03aConstrainedTransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions___024unit__03a__03aConstrainedTransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransactions___024unit__03a__03aConstrainedTransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "data:" + VL_TO_STRING(__PVT__data);
    out += ", address:" + VL_TO_STRING(__PVT__address);
    out += ", "+ Vtransactions_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
