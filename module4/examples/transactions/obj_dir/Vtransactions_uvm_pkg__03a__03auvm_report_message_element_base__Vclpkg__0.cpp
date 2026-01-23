// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_get_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = this->__PVT___name;
}

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_set_name(Vtransactions__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_set_name\n"); );
    // Body
    this->__PVT___name = name;
}

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_get_action(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_get_action\n"); );
    // Body
    get_action__Vfuncrtn = this->__PVT___action;
}

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_set_action(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_set_action\n"); );
    // Body
    this->__PVT___action = action;
}

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_print(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_print\n"); );
    // Body
    if ((0U != (3U & this->__PVT___action))) {
        this->__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_record(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_record\n"); );
    // Body
    if ((0U != (0x00000040U & this->__PVT___action))) {
        this->__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_copy(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_copy\n"); );
    // Body
    this->__VnoInFunc_do_copy(vlSymsp, rhs);
}

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_clone(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_clone\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base> __Vfunc_do_clone__3__Vfuncout;
    // Body
    this->__VnoInFunc_do_clone(vlSymsp, __Vfunc_do_clone__3__Vfuncout);
    clone__Vfuncrtn = __Vfunc_do_clone__3__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_print\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_record(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_record\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_copy(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_copy\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_clone(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base> &do_clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::__VnoInFunc_do_clone\n"); );
}

Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT___action = 0;
}

Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::~Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_report_message_element_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "_action:" + VL_TO_STRING(__PVT___action);
    out += ", _name:" + VL_TO_STRING(__PVT___name);
    return (out);
}
