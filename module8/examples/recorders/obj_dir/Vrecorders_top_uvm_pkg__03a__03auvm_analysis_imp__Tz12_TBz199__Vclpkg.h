// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ12_TBZ199__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ12_TBZ199__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz198;
class Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item;
class Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199__Vclpkg(Vrecorders_top__Syms* symsp, const char* v__name);
    ~Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199__Vclpkg();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz198__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199 : public Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz198 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> __PVT__m_imp;
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> t);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> imp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199>& obj);

#endif  // guard
