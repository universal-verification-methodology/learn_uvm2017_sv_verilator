// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03auvm_printer_element::Vdma_uvm_pkg__03a__03auvm_printer_element(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set(Vdma__Syms* __restrict vlSymsp, std::string element_name, std::string element_type_name, std::string element_size, std::string element_value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set\n"); );
    // Body
    this->__PVT__m_name = element_name;
    this->__PVT__m_type_name = element_type_name;
    this->__PVT__m_size = element_size;
    this->__PVT__m_value = element_value;
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_name(Vdma__Syms* __restrict vlSymsp, std::string element_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_name\n"); );
    // Body
    this->__PVT__m_name = element_name;
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_name(Vdma__Syms* __restrict vlSymsp, std::string &get_element_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_name\n"); );
    // Body
    get_element_name__Vfuncrtn = this->__PVT__m_name;
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_type_name(Vdma__Syms* __restrict vlSymsp, std::string element_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_type_name\n"); );
    // Body
    this->__PVT__m_type_name = element_type_name;
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_element_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_type_name\n"); );
    // Body
    get_element_type_name__Vfuncrtn = this->__PVT__m_type_name;
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_size(Vdma__Syms* __restrict vlSymsp, std::string element_size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_size\n"); );
    // Body
    this->__PVT__m_size = element_size;
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_size(Vdma__Syms* __restrict vlSymsp, std::string &get_element_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_size\n"); );
    // Body
    get_element_size__Vfuncrtn = this->__PVT__m_size;
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_value(Vdma__Syms* __restrict vlSymsp, std::string element_value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_set_element_value\n"); );
    // Body
    this->__PVT__m_value = element_value;
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_value(Vdma__Syms* __restrict vlSymsp, std::string &get_element_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_element_value\n"); );
    // Body
    get_element_value__Vfuncrtn = this->__PVT__m_value;
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_add_child(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> child) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_add_child\n"); );
    // Body
    this->__PVT__m_children.push_back(child);
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_children(Vdma__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element>> &children, CData/*0:0*/ recurse) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_get_children\n"); );
    // Body
    IData/*31:0*/ unnamedblk43__DOT__i;
    unnamedblk43__DOT__i = 0;
    unnamedblk43__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk43__DOT__i, this->__PVT__m_children.size())) {
        children.push_back(this->__PVT__m_children.at(unnamedblk43__DOT__i));
        if (recurse) {
            VL_NULL_CHECK(this->__PVT__m_children.at(unnamedblk43__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1457)->__VnoInFunc_get_children(vlSymsp, children, 1U);
        }
        unnamedblk43__DOT__i = ((IData)(1U) + unnamedblk43__DOT__i);
    }
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_clear_children(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_clear_children\n"); );
    // Body
    this->__PVT__m_children.clear();
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__3__Vfuncout;
    __Vfunc___VBasicRand__3__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__3__Vfuncout);
            }(), __Vfunc___VBasicRand__3__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_printer_element::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_printer_element::~Vdma_uvm_pkg__03a__03auvm_printer_element() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_printer_element::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_printer_element::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer_element::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_name:" + VL_TO_STRING(__PVT__m_name);
    out += ", m_type_name:" + VL_TO_STRING(__PVT__m_type_name);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", m_value:" + VL_TO_STRING(__PVT__m_value);
    out += ", m_children:" + VL_TO_STRING(__PVT__m_children);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
