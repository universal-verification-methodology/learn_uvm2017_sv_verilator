// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ15_TBZ125__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ15_TBZ125__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz127;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz127__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125 : public Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz127 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> __PVT__m_imp;
    virtual void __VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> t);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> imp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125>& obj);

#endif  // guard
