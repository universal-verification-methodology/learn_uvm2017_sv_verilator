// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ126_TBZ154__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ126_TBZ154__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma___024unit__03a__03aDmaTxn;
class Vdma_uvm_pkg__03a__03auvm_port_base__Tz149;
class Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154__Vclpkg();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vdma_uvm_pkg__03a__03auvm_port_base__Tz149__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154 : public Vdma_uvm_pkg__03a__03auvm_port_base__Tz149 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75> __PVT__m_imp;
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> t);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75> imp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154>& obj);

#endif  // guard
