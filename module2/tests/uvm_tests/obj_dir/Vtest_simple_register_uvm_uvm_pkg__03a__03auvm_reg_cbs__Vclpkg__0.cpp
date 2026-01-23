// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi108> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi108> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi108__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_cbs"s;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi108> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi108__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs, vlProcess, vlSymsp, "uvm_reg_cbs"s)
            : VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_cbs"s;
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_pre_write(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_pre_write\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_post_write(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_post_write\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_pre_read(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_pre_read\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_post_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_post_read\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_post_predict(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field> fld, QData/*63:0*/ previous, QData/*63:0*/ &value, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_post_predict\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_encode(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_encode\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_decode(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_decode\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
