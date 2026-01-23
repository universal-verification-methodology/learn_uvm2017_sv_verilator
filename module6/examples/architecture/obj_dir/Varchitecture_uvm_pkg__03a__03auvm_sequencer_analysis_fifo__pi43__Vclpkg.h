// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_SEQUENCER_ANALYSIS_FIFO__PI43__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_SEQUENCER_ANALYSIS_FIFO__PI43__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture___024unit__03a__03aArchTxn;
class Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz1_TBz153;
class Varchitecture_uvm_pkg__03a__03auvm_component;
class Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi43;
class Varchitecture_uvm_pkg__03a__03auvm_sequencer_base;
class Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz1;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi43__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi43__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi43__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi43__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz1__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi43 : public Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz1 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz1_TBz153> __PVT__analysis_export;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base> __PVT__sequencer_ptr;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> t);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi43(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi43();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi43>& obj);

#endif  // guard
