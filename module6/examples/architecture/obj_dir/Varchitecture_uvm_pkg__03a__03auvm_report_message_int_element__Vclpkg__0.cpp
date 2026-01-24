// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_get_value(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &size, IData/*27:0*/ &radix, VlWide<128>/*4095:0*/ &get_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_get_value\n"); );
    // Body
    size = this->__PVT___size;
    radix = this->__PVT___radix;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        get_value__Vfuncrtn[__Vilp1] = this->__PVT___val[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_set_value(Varchitecture__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_set_value\n"); );
    // Body
    this->__PVT___size = size;
    this->__PVT___radix = radix;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        this->__PVT___val[__Vilp1] = value[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_print(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_print\n"); );
    // Body
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 146)->__VnoInFunc_print_field(vlProcess, vlSymsp, Varchitecture_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val, this->__PVT___size, this->__PVT___radix, 0x2eU, ""s);
}

void Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_record(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_record\n"); );
    // Body
    VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 150)->__VnoInFunc_record_field(vlProcess, vlSymsp, Varchitecture_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val, this->__PVT___size, this->__PVT___radix);
}

void Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_copy(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_message_element_base> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_copy\n"); );
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element> _rhs;
    if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(rhs, _rhs))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_report_message.svh:155: Assertion failed in %Nuvm_pkg.uvm_report_message_int_element.do_copy: '$cast' failed.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 155, "");
    }
    Varchitecture_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name 
        = VL_NULL_CHECK(_rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 156)
        ->__PVT___name;
    VL_ASSIGN_W(4096, this->__PVT___val, VL_NULL_CHECK(_rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 157)
                ->__PVT___val);
    this->__PVT___size = VL_NULL_CHECK(_rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 158)
        ->__PVT___size;
    this->__PVT___radix = VL_NULL_CHECK(_rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 159)
        ->__PVT___radix;
    Varchitecture_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___action 
        = VL_NULL_CHECK(rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 160)
        ->__PVT___action;
}

void Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_clone(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_message_element_base> &do_clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::__VnoInFunc_do_clone\n"); );
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element> tmp;
    tmp = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element, vlSymsp);
    VL_NULL_CHECK(tmp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_message.svh", 165)->__VnoInFunc_copy(vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element>{this});
    do_clone__Vfuncrtn = tmp;
}

Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element(Varchitecture__Syms* __restrict vlSymsp)
    : Varchitecture_uvm_pkg__03a__03auvm_report_message_element_base(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    VL_SCOPED_RAND_RESET_W(4096, __PVT___val, 7558448463692394339ULL, 1123822410863971104ull);
    __PVT___size = 0;
    __PVT___radix = 0;
}

Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::~Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_report_message_int_element::to_string_middle\n"); );
    // Body
    std::string out;
    out += "_val:" + VL_TO_STRING_W(128, __PVT___val);
    out += ", _size:" + VL_TO_STRING(__PVT___size);
    out += ", _radix:" + VL_TO_STRING(__PVT___radix);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_report_message_element_base::to_string_middle();
    return (out);
}
