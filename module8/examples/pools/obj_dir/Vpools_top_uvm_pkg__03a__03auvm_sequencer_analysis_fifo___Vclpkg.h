// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_SEQUENCER_ANALYSIS_FIFO___VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_SEQUENCER_ANALYSIS_FIFO___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz9_TBz197;
class Vpools_top_uvm_pkg__03a__03auvm_component;
class Vpools_top_uvm_pkg__03a__03auvm_sequence_item;
class Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_;
class Vpools_top_uvm_pkg__03a__03auvm_sequencer_base;
class Vpools_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz9;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo___Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo___Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo___Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz9__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_ : public Vpools_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz9 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz9_TBz197> __PVT__analysis_export;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequencer_base> __PVT__sequencer_ptr;
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_item> t);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_>& obj);

#endif  // guard
