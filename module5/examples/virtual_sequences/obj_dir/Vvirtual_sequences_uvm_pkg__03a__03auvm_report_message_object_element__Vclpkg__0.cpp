// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_get_value(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &get_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_get_value\n"); );
    // Body
    get_value__Vfuncrtn = this->__PVT___val;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_set_value(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_set_value\n"); );
    // Body
    this->__PVT___val = value;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_print(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_print\n"); );
    // Body
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 258)->__VnoInFunc_print_object(vlProcess, vlSymsp, Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val, 0x2eU);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_record(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_record\n"); );
    // Body
    VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 262)->__VnoInFunc_record_object(vlProcess, vlSymsp, Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_copy(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_base> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_copy\n"); );
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element> _rhs;
    if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(rhs, _rhs))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_report_message.svh:267: Assertion failed in %Nuvm_pkg.uvm_report_message_object_element.do_copy: 'assert' failed.\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 267, "");
    }
    Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name 
        = VL_NULL_CHECK(_rhs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 268)
        ->__PVT___name;
    this->__PVT___val = VL_NULL_CHECK(_rhs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 269)
        ->__PVT___val;
    Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___action 
        = VL_NULL_CHECK(rhs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 270)
        ->__PVT___action;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_clone(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_base> &do_clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_clone\n"); );
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element> tmp;
    tmp = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element, vlSymsp);
    VL_NULL_CHECK(tmp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 275)->__VnoInFunc_copy(vlSymsp, 
                                                                                VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element>{this});
    do_clone__Vfuncrtn = tmp;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element(Vvirtual_sequences__Syms* __restrict vlSymsp)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_base(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_object_element::to_string_middle\n"); );
    // Body
    std::string out;
    out += "_val:" + VL_TO_STRING(__PVT___val);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_report_message_element_base::to_string_middle();
    return (out);
}
