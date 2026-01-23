// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::Vrecorders_top_uvm_pkg__03a__03auvm_printer_element(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set(Vrecorders_top__Syms* __restrict vlSymsp, std::string element_name, std::string element_type_name, std::string element_size, std::string element_value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set\n"); );
    // Body
    this->__PVT__m_name = element_name;
    this->__PVT__m_type_name = element_type_name;
    this->__PVT__m_size = element_size;
    this->__PVT__m_value = element_value;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string element_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_name\n"); );
    // Body
    this->__PVT__m_name = element_name;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_element_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_name\n"); );
    // Body
    get_element_name__Vfuncrtn = this->__PVT__m_name;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string element_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_type_name\n"); );
    // Body
    this->__PVT__m_type_name = element_type_name;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_element_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_type_name\n"); );
    // Body
    get_element_type_name__Vfuncrtn = this->__PVT__m_type_name;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_size(Vrecorders_top__Syms* __restrict vlSymsp, std::string element_size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_size\n"); );
    // Body
    this->__PVT__m_size = element_size;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_size(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_element_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_size\n"); );
    // Body
    get_element_size__Vfuncrtn = this->__PVT__m_size;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_value(Vrecorders_top__Syms* __restrict vlSymsp, std::string element_value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_value\n"); );
    // Body
    this->__PVT__m_value = element_value;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_value(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_element_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_value\n"); );
    // Body
    get_element_value__Vfuncrtn = this->__PVT__m_value;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_add_child(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_printer_element> child) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_add_child\n"); );
    // Body
    this->__PVT__m_children.push_back(child);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_children(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_printer_element>> &children, CData/*0:0*/ recurse) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_children\n"); );
    // Body
    IData/*31:0*/ unnamedblk43__DOT__i;
    unnamedblk43__DOT__i = 0;
    unnamedblk43__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk43__DOT__i, this->__PVT__m_children.size())) {
        children.push_back(this->__PVT__m_children.at(unnamedblk43__DOT__i));
        if (recurse) {
            VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk43__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1457)->__VnoInFunc_get_children(vlSymsp, children, 1U);
        }
        unnamedblk43__DOT__i = ((IData)(1U) + unnamedblk43__DOT__i);
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_clear_children(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_clear_children\n"); );
    // Body
    this->__PVT__m_children.clear();
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__3__Vfuncout;
    __Vfunc___Vbasic_randomize__3__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__3__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__3__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc___Vbasic_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_printer_element>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_printer_element::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_name:" + VL_TO_STRING(__PVT__m_name);
    out += ", m_type_name:" + VL_TO_STRING(__PVT__m_type_name);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", m_value:" + VL_TO_STRING(__PVT__m_value);
    out += ", m_children:" + VL_TO_STRING(__PVT__m_children);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
