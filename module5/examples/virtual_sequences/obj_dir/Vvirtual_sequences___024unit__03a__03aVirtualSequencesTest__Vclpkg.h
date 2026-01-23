// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES___024UNIT__03A__03AVIRTUALSEQUENCESTEST__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES___024UNIT__03A__03AVIRTUALSEQUENCESTEST__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences___024unit__03a__03aVirtualDriver;
class Vvirtual_sequences___024unit__03a__03aVirtualSequence;
class Vvirtual_sequences___024unit__03a__03aVirtualSequencer;
class Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__pi3;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_port__pi14;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_test;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest__Vclpkg(Vvirtual_sequences__Syms* symsp, const char* v__name);
    ~Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest__Vclpkg();
    VL_UNCOPYABLE(Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__pi3> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_test__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest : public Vvirtual_sequences_uvm_pkg__03a__03auvm_test {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequencer> __PVT__vseqr;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1> __PVT__master_seqr;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1> __PVT__slave_seqr;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualDriver> __PVT__master_driver;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualDriver> __PVT__slave_driver;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequence> __PVT__vseq;
    virtual void __VnoInFunc___Vbasic_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> phase);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest() {}
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequencesTest>& obj);

#endif  // guard
