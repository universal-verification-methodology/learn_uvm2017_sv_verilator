// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_get_value(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_get_value\n"); );
    // Body
    get_value__Vfuncrtn = this->__PVT___val;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_set_value(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_set_value\n"); );
    // Body
    this->__PVT___val = value;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_print\n"); );
    // Body
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 202)->__VnoInFunc_print_string(vlProcess, vlSymsp, Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val, 0x2eU);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_record(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_record\n"); );
    // Body
    VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 206)->__VnoInFunc_record_string(vlProcess, vlSymsp, Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_copy(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_element_base> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_copy\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element> _rhs;
    if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(rhs, _rhs))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_report_message.svh:211: Assertion failed in %Nuvm_pkg.uvm_report_message_string_element.do_copy: '$cast' failed.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 211, "");
    }
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name 
        = VL_NULL_CHECK(_rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 212)
        ->__PVT___name;
    this->__PVT___val = VL_NULL_CHECK(_rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 213)
        ->__PVT___val;
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___action 
        = VL_NULL_CHECK(rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 214)
        ->__PVT___action;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_clone(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_element_base> &do_clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::__VnoInFunc_do_clone\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element> tmp;
    tmp = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element, vlSymsp);
    VL_NULL_CHECK(tmp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 219)->__VnoInFunc_copy(vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element>{this});
    do_clone__Vfuncrtn = tmp;
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element(Vtest_simple_register_uvm__Syms* __restrict vlSymsp)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_element_base(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_string_element::to_string_middle\n"); );
    // Body
    std::string out;
    out += "_val:" + VL_TO_STRING(__PVT___val);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_message_element_base::to_string_middle();
    return (out);
}
