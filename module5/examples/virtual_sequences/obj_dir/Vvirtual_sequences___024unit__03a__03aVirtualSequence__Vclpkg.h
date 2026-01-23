// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES___024UNIT__03A__03AVIRTUALSEQUENCE__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES___024UNIT__03A__03AVIRTUALSEQUENCE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences___024unit__03a__03aChannelSequence;
class Vvirtual_sequences___024unit__03a__03aVirtualSequence;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences___024unit__03a__03aVirtualSequence__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences___024unit__03a__03aVirtualSequence__Vclpkg();
    ~Vvirtual_sequences___024unit__03a__03aVirtualSequence__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences___024unit__03a__03aVirtualSequence__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__Tz5_TBz6> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence___Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences___024unit__03a__03aVirtualSequence : public Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_ {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1> __PVT__master_seqr;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1> __PVT__slave_seqr;
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_body____Vfork_1__0(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> &master_seq, VlForkSync __Vfork_1__sync);
    VlCoroutine __VnoInFunc_body____Vfork_1__1(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aChannelSequence> &slave_seq, VlForkSync __Vfork_1__sync);
  public:
    void __VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences___024unit__03a__03aVirtualSequence(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences___024unit__03a__03aVirtualSequence();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequence>& obj);

#endif  // guard
