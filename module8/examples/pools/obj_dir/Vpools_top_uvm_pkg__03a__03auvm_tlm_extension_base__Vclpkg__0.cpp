// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc_get_type_handle(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc_get_type_handle\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc_get_type_handle_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_handle_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc_get_type_handle_name\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc_do_copy\n"); );
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
}

void Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc_create\n"); );
    // Body
    create__Vfuncrtn = VlNull{};
}

void Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__3__Vfuncout;
    __Vfunc___VBasicRand__3__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__3__Vfuncout);
            }(), __Vfunc___VBasicRand__3__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::~Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tlm_extension_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vpools_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
