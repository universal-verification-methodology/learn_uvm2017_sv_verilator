// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest__Vclpkg::__VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__pi3> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__pi3> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi3__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "VirtualSequencesTest"s;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__pi3> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi3__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "VirtualSequencesTest"s;
}

Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_test(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc_build_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequencer> __Vfunc_create__5__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1> __Vfunc_create__6__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1> __Vfunc_create__7__Vfuncout;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualDriver> __Vfunc_create__8__Vfuncout;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualDriver> __Vfunc_create__9__Vfuncout;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequence> __Vfunc_create__10__Vfuncout;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__3__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Building virtual sequence test"s, 0x000000c8U, "virtual_sequences.sv"s, 0x000000c3U, ""s, 1U);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "vseqr"s, 
                                                                                VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest>{this}, ""s, __Vfunc_create__5__Vfuncout);
    this->__PVT__vseqr = __Vfunc_create__5__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz18__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "master_seqr"s, 
                                                                                VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest>{this}, ""s, __Vfunc_create__6__Vfuncout);
    this->__PVT__master_seqr = __Vfunc_create__6__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz18__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "slave_seqr"s, 
                                                                                VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest>{this}, ""s, __Vfunc_create__7__Vfuncout);
    this->__PVT__slave_seqr = __Vfunc_create__7__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "master_driver"s, 
                                                                                VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest>{this}, ""s, __Vfunc_create__8__Vfuncout);
    this->__PVT__master_driver = __Vfunc_create__8__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "slave_driver"s, 
                                                                                VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest>{this}, ""s, __Vfunc_create__9__Vfuncout);
    this->__PVT__slave_driver = __Vfunc_create__9__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "vseq"s, VlNull{}, ""s, __Vfunc_create__10__Vfuncout);
    this->__PVT__vseq = __Vfunc_create__10__Vfuncout;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc_connect_phase\n"); );
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__master_driver, "virtual_sequences.sv", 206)
                  ->__PVT__seq_item_port, "virtual_sequences.sv", 206)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__master_seqr, "virtual_sequences.sv", 206)
                                                                                ->__PVT__seq_item_export);
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__slave_driver, "virtual_sequences.sv", 207)
                  ->__PVT__seq_item_port, "virtual_sequences.sv", 207)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__slave_seqr, "virtual_sequences.sv", 207)
                                                                                ->__PVT__seq_item_export);
    VL_NULL_CHECK(this->__PVT__vseqr, "virtual_sequences.sv", 208)->__PVT__master_seqr 
        = this->__PVT__master_seqr;
    VL_NULL_CHECK(this->__PVT__vseqr, "virtual_sequences.sv", 209)->__PVT__slave_seqr 
        = this->__PVT__slave_seqr;
    VL_NULL_CHECK(this->__PVT__vseq, "virtual_sequences.sv", 210)->__PVT__master_seqr 
        = this->__PVT__master_seqr;
    VL_NULL_CHECK(this->__PVT__vseq, "virtual_sequences.sv", 211)->__PVT__slave_seqr 
        = this->__PVT__slave_seqr;
}

VlCoroutine Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc_run_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__Vfuncout;
    __Vfunc_uvm_report_enabled__15__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    VL_NULL_CHECK(phase, "virtual_sequences.sv", 215)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest>{this}, ""s, 1U);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__15__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__15__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Starting virtual sequence test"s, 0x000000c8U, "virtual_sequences.sv"s, 0x000000d8U, ""s, 1U);
    }
    co_await VL_NULL_CHECK(this->__PVT__vseq, "virtual_sequences.sv", 217)->__VnoInFunc_start(vlProcess, vlSymsp, this->__PVT__vseqr, VlNull{}, 0xffffffffU, 1U);
    co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                            vlProcess, 
                                            "virtual_sequences.sv", 
                                            218);
    VL_NULL_CHECK(phase, "virtual_sequences.sv", 219)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest>{this}, ""s, 1U);
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__20__Vfuncout;
    __Vfunc___Vbasic_randomize__20__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__20__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__20__Vfuncout));
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc___Vbasic_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vseqr:" + VL_TO_STRING(__PVT__vseqr);
    out += ", master_seqr:" + VL_TO_STRING(__PVT__master_seqr);
    out += ", slave_seqr:" + VL_TO_STRING(__PVT__slave_seqr);
    out += ", master_driver:" + VL_TO_STRING(__PVT__master_driver);
    out += ", slave_driver:" + VL_TO_STRING(__PVT__slave_driver);
    out += ", vseq:" + VL_TO_STRING(__PVT__vseq);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_test::to_string_middle();
    return (out);
}
