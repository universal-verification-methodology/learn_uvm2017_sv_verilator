// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg::__VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi108> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi108> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi108__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_seq_base"s;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi108> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi108__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base> tmp;
    tmp = ((""s == name) ? VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base, vlProcess, vlSymsp, "uvm_reg_seq_base"s)
            : VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_seq_base"s;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::~Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_seq_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base::to_string_middle();
    return (out);
}
