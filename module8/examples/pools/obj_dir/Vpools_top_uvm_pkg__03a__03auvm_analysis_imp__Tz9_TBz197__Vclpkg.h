// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ9_TBZ197__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ9_TBZ197__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz196;
class Vpools_top_uvm_pkg__03a__03auvm_sequence_item;
class Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz9_TBz197__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz9_TBz197__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz9_TBz197__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz9_TBz197__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz196__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz9_TBz197 : public Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz196 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> __PVT__m_imp;
    virtual void __VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_item> t);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz9_TBz197(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> imp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz9_TBz197();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz9_TBz197>& obj);

#endif  // guard
