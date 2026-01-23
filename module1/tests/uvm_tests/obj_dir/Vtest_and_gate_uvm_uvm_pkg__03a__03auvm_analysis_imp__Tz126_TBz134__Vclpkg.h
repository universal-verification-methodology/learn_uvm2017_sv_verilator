// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ126_TBZ134__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ126_TBZ134__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard;
class Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz146;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz134__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz134__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz134__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz134__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz146__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz134 : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz146 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard> __PVT__m_imp;
    virtual void __VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> t);
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz134(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard> imp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz134();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz134>& obj);

#endif  // guard
