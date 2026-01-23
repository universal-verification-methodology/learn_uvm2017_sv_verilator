// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_SEQUENCER__TZ1_TBZ1__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_SEQUENCER__TZ1_TBZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences___024unit__03a__03aVirtualTransaction;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__Tz18;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz19;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_request;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_param_base__pi7;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo__Tz1;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__Tz18> &get_type__Vfuncrtn);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_param_base__pi7__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1 : public Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_param_base__pi7 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__sequence_item_requested;
    CData/*0:0*/ __PVT__get_next_item_called;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8> __PVT__seq_item_export;
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_get(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &t);
    virtual VlCoroutine __VnoInFunc_get_next_item(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &t);
    virtual void __VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_item_done(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> item);
    void __VnoInFunc_item_done_get_trigger_data(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &item_done_get_trigger_data__Vfuncrtn);
    void __VnoInFunc_item_done_trigger(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> item);
    virtual void __VnoInFunc_m_find_number_driver_connections(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &t);
    virtual void __VnoInFunc_put(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> t);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_stop_sequences(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_try_next_item(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &t);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1>& obj);

#endif  // guard
