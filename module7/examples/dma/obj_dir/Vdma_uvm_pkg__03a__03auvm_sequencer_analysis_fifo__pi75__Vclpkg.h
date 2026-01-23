// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_SEQUENCER_ANALYSIS_FIFO__PI75__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_SEQUENCER_ANALYSIS_FIFO__PI75__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma___024unit__03a__03aDmaTxn;
class Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154;
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75;
class Vdma_uvm_pkg__03a__03auvm_sequencer_base;
class Vdma_uvm_pkg__03a__03auvm_tlm_fifo__Tz126;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75__Vclpkg();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vdma_uvm_pkg__03a__03auvm_tlm_fifo__Tz126__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75 : public Vdma_uvm_pkg__03a__03auvm_tlm_fifo__Tz126 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154> __PVT__analysis_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> __PVT__sequencer_ptr;
    virtual void __VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> t);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75>& obj);

#endif  // guard
