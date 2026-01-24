// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences___024unit__03a__03aVirtualSequence__Vclpkg::__VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences___024unit__03a__03aVirtualSequence__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequence__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences___024unit__03a__03aVirtualSequence__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "VirtualSequence"s;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequence> tmp;
    tmp = ((""s == name) ? VL_NEW(Vvirtual_sequences___024unit__03a__03aVirtualSequence, vlProcess, vlSymsp, "VirtualSequence"s)
            : VL_NEW(Vvirtual_sequences___024unit__03a__03aVirtualSequence, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "VirtualSequence"s;
}

Vvirtual_sequences___024unit__03a__03aVirtualSequence::Vvirtual_sequences___024unit__03a__03aVirtualSequence(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_body(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__Vfuncout;
    __Vfunc_uvm_report_enabled__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__Vfuncout;
    __Vfunc_uvm_report_enabled__14__Vfuncout = 0;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> __Vfunc_create__16__Vfuncout;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> __Vfunc_create__18__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20__Vfuncout;
    __Vfunc_uvm_report_enabled__20__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> master_seq;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> slave_seq;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> seq1;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> seq2;
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "VIRTUAL_SEQ"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "VIRTUAL_SEQ"s, "Starting virtual sequence"s, 0x000000c8U, "virtual_sequences.sv"s, 0x0000006aU, ""s, 1U);
    }
    if (((VlNull{} != this->__PVT__master_seqr) & (VlNull{} 
                                                   != this->__PVT__slave_seqr))) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "VIRTUAL_SEQ"s, __Vfunc_uvm_report_enabled__6__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "VIRTUAL_SEQ"s, "Starting parallel sequences"s, 0x000000c8U, "virtual_sequences.sv"s, 0x00000080U, ""s, 1U);
        }
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(2U, vlProcess);
        this->__VnoInFunc_body____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, master_seq, __Vfork_1__sync);
        this->__VnoInFunc_body____Vfork_1__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, slave_seq, __Vfork_1__sync);
        co_await __Vfork_1__sync.join(vlProcess, "virtual_sequences.sv", 
                                      144);
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "VIRTUAL_SEQ"s, __Vfunc_uvm_report_enabled__12__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__12__Vfuncout))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "VIRTUAL_SEQ"s, "Parallel sequences completed"s, 0x000000c8U, "virtual_sequences.sv"s, 0x000000b4U, ""s, 1U);
        }
    }
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "VIRTUAL_SEQ"s, __Vfunc_uvm_report_enabled__14__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__14__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "VIRTUAL_SEQ"s, "Starting sequential sequences"s, 0x000000c8U, "virtual_sequences.sv"s, 0x000000c0U, ""s, 1U);
    }
    if ((VlNull{} != this->__PVT__master_seqr)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "seq1"s, VlNull{}, ""s, __Vfunc_create__16__Vfuncout);
        seq1 = __Vfunc_create__16__Vfuncout;
        VL_NULL_CHECK(seq1, "virtual_sequences.sv", 204)->__PVT__channel = 0U;
        VL_NULL_CHECK(seq1, "virtual_sequences.sv", 205)->__PVT__num_items = 2U;
        co_await VL_NULL_CHECK(seq1, "virtual_sequences.sv", 211)->__VnoInFunc_start(vlProcess, vlSymsp, this->__PVT__master_seqr, VlNull{}, 0xffffffffU, 1U);
    }
    if ((VlNull{} != this->__PVT__slave_seqr)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "seq2"s, VlNull{}, ""s, __Vfunc_create__18__Vfuncout);
        seq2 = __Vfunc_create__18__Vfuncout;
        VL_NULL_CHECK(seq2, "virtual_sequences.sv", 224)->__PVT__channel = 1U;
        VL_NULL_CHECK(seq2, "virtual_sequences.sv", 225)->__PVT__num_items = 2U;
        co_await VL_NULL_CHECK(seq2, "virtual_sequences.sv", 230)->__VnoInFunc_start(vlProcess, vlSymsp, this->__PVT__slave_seqr, VlNull{}, 0xffffffffU, 1U);
    }
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "VIRTUAL_SEQ"s, __Vfunc_uvm_report_enabled__20__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__20__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "VIRTUAL_SEQ"s, "Sequential sequences completed"s, 0x000000c8U, "virtual_sequences.sv"s, 0x000000e9U, ""s, 1U);
    }
    co_return;}

VlCoroutine Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_body____Vfork_1__1(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> &slave_seq, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_body____Vfork_1__1\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> __Vfunc_create__10__Vfuncout;
    // Body
    VL_KEEP_THIS;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "slave_seq"s, VlNull{}, ""s, __Vfunc_create__10__Vfuncout);
    slave_seq = __Vfunc_create__10__Vfuncout;
    VL_NULL_CHECK(slave_seq, "virtual_sequences.sv", 174)->__PVT__channel = 1U;
    VL_NULL_CHECK(slave_seq, "virtual_sequences.sv", 175)->__PVT__num_items = 3U;
    co_await VL_NULL_CHECK(slave_seq, "virtual_sequences.sv", 176)->__VnoInFunc_start(vlProcess, vlSymsp, this->__PVT__slave_seqr, VlNull{}, 0xffffffffU, 1U);
    __Vfork_1__sync.done("virtual_sequences.sv", 164);
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_body____Vfork_1__0(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> &master_seq, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_body____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> __Vfunc_create__8__Vfuncout;
    // Body
    VL_KEEP_THIS;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "master_seq"s, VlNull{}, ""s, __Vfunc_create__8__Vfuncout);
    master_seq = __Vfunc_create__8__Vfuncout;
    VL_NULL_CHECK(master_seq, "virtual_sequences.sv", 160)->__PVT__channel = 0U;
    VL_NULL_CHECK(master_seq, "virtual_sequences.sv", 161)->__PVT__num_items = 3U;
    co_await VL_NULL_CHECK(master_seq, "virtual_sequences.sv", 162)->__VnoInFunc_start(vlProcess, vlSymsp, this->__PVT__master_seqr, VlNull{}, 0xffffffffU, 1U);
    __Vfork_1__sync.done("virtual_sequences.sv", 145);
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

void Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__23__Vfuncout;
    __Vfunc___VBasicRand__23__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__23__Vfuncout);
            }(), __Vfunc___VBasicRand__23__Vfuncout));
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequence::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences___024unit__03a__03aVirtualSequence::~Vvirtual_sequences___024unit__03a__03aVirtualSequence() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequence>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences___024unit__03a__03aVirtualSequence::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences___024unit__03a__03aVirtualSequence::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequence::to_string_middle\n"); );
    // Body
    std::string out;
    out += "master_seqr:" + VL_TO_STRING(__PVT__master_seqr);
    out += ", slave_seqr:" + VL_TO_STRING(__PVT__slave_seqr);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_::to_string_middle();
    return (out);
}
