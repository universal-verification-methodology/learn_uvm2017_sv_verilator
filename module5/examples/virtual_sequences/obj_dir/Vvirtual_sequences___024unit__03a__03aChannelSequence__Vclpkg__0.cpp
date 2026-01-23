// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences___024unit__03a__03aChannelSequence__Vclpkg::__VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences___024unit__03a__03aChannelSequence__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences___024unit__03a__03aChannelSequence__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences___024unit__03a__03aChannelSequence__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "ChannelSequence"s;
}

void Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> tmp;
    tmp = ((""s == name) ? VL_NEW(Vvirtual_sequences___024unit__03a__03aChannelSequence, vlProcess, vlSymsp, "ChannelSequence"s)
            : VL_NEW(Vvirtual_sequences___024unit__03a__03aChannelSequence, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "ChannelSequence"s;
}

Vvirtual_sequences___024unit__03a__03aChannelSequence::Vvirtual_sequences___024unit__03a__03aChannelSequence(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__num_items = 5U;
    ;
}

VlCoroutine Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc_body(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> __Vfunc_create__6__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__Vfuncout;
    __Vfunc_uvm_report_enabled__9__Vfuncout = 0;
    std::string __Vtask_convert2string__11__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> item;
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "SEQUENCE"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "SEQUENCE"s, VL_SFORMATF_N_NX("Starting channel %0d sequence with %0d items",0,
                                                                                32,
                                                                                this->__PVT__channel,
                                                                                32,
                                                                                this->__PVT__num_items) , 0x000000c8U, "virtual_sequences.sv"s, 0x00000032U, ""s, 1U);
    }
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__num_items)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, VL_SFORMATF_N_NX("item_%0d",0,
                                                                                32,
                                                                                unnamedblk1__DOT__i) , VlNull{}, ""s, __Vfunc_create__6__Vfuncout);
        item = __Vfunc_create__6__Vfuncout;
        VL_NULL_CHECK(item, "virtual_sequences.sv", 54)->__PVT__data 
            = (0x000000ffU & VL_SHIFTL_III(8,32,32, unnamedblk1__DOT__i, 4U));
        VL_NULL_CHECK(item, "virtual_sequences.sv", 55)->__PVT__channel 
            = this->__PVT__channel;
        co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, item, 0xffffffffU, VlNull{});
        co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, item, 0xffffffffU);
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "SEQUENCE"s, __Vfunc_uvm_report_enabled__9__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__9__Vfuncout))) {
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(item, "virtual_sequences.sv", 61)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__11__Vfuncout);
                }(), __Vtask_convert2string__11__Vfuncout);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "SEQUENCE"s, VL_SFORMATF_N_NX("Generated transaction %0d for channel %0d: %@",0,
                                                                                32,
                                                                                unnamedblk1__DOT__i,
                                                                                32,
                                                                                this->__PVT__channel,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x000000c8U, "virtual_sequences.sv"s, 0x0000003dU, ""s, 1U);
        }
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    co_return;}

void Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__13__Vfuncout;
    __Vfunc___VBasicRand__13__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__13__Vfuncout);
            }(), __Vfunc___VBasicRand__13__Vfuncout));
}

void Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences___024unit__03a__03aChannelSequence::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__channel = 0;
    __PVT__num_items = 0;
}

Vvirtual_sequences___024unit__03a__03aChannelSequence::~Vvirtual_sequences___024unit__03a__03aChannelSequence() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences___024unit__03a__03aChannelSequence::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences___024unit__03a__03aChannelSequence::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aChannelSequence::to_string_middle\n"); );
    // Body
    std::string out;
    out += "channel:" + VL_TO_STRING(__PVT__channel);
    out += ", num_items:" + VL_TO_STRING(__PVT__num_items);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1::to_string_middle();
    return (out);
}
