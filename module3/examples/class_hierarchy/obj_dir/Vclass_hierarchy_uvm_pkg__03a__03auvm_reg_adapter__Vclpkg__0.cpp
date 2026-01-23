// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg::__VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_abstract_object_registry__pi111> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_abstract_object_registry__pi111> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi111__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg::__VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_adapter"s;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_abstract_object_registry__pi111> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi111__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_adapter"s;
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_reg2bus(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, const Vclass_hierarchy_uvm_reg_bus_op__struct__0 &rw, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_item> &reg2bus__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_reg2bus\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_bus2reg(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_item> bus_item, Vclass_hierarchy_uvm_reg_bus_op__struct__0 &rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_bus2reg\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_get_item(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> &get_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_get_item\n"); );
    // Body
    get_item__Vfuncrtn = this->__PVT__m_item;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_m_set_item(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_m_set_item\n"); );
    // Body
    this->__PVT__m_item = item;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__3__Vfuncout;
    __Vfunc___VBasicRand__3__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__3__Vfuncout);
            }(), __Vfunc___VBasicRand__3__Vfuncout));
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__supports_byte_enable = 0;
    __PVT__provides_responses = 0;
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::~Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::to_string_middle\n"); );
    // Body
    std::string out;
    out += "supports_byte_enable:" + VL_TO_STRING(__PVT__supports_byte_enable);
    out += ", provides_responses:" + VL_TO_STRING(__PVT__provides_responses);
    out += ", parent_sequence:" + VL_TO_STRING(__PVT__parent_sequence);
    out += ", m_item:" + VL_TO_STRING(__PVT__m_item);
    out += ", "+ Vclass_hierarchy_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
