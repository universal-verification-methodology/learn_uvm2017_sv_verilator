// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE___024UNIT__03A__03AARCHAGENT__VCLPKG_H_
#define VERILATED_VARCHITECTURE___024UNIT__03A__03AARCHAGENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture___024unit__03a__03aArchDriver;
class Varchitecture___024unit__03a__03aArchMonitor;
class Varchitecture___024unit__03a__03aArchSequencer;
class Varchitecture_uvm_pkg__03a__03auvm_agent;
class Varchitecture_uvm_pkg__03a__03auvm_component;
class Varchitecture_uvm_pkg__03a__03auvm_component_registry__pi4;
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_phase;
class Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi12;
class Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_port__pi15;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture___024unit__03a__03aArchAgent__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* const vlSymsp;

    // CONSTRUCTORS
    Varchitecture___024unit__03a__03aArchAgent__Vclpkg(Varchitecture__Syms* symsp, const char* v__name);
    ~Varchitecture___024unit__03a__03aArchAgent__Vclpkg();
    VL_UNCOPYABLE(Varchitecture___024unit__03a__03aArchAgent__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component_registry__pi4> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_agent__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture___024unit__03a__03aArchAgent : public Varchitecture_uvm_pkg__03a__03auvm_agent {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Varchitecture___024unit__03a__03aArchSequencer> __PVT__seqr;
    VlClassRef<Varchitecture___024unit__03a__03aArchDriver> __PVT__drv;
    VlClassRef<Varchitecture___024unit__03a__03aArchMonitor> __PVT__mon;
    virtual void __VnoInFunc___Vbasic_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture___024unit__03a__03aArchAgent(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture___024unit__03a__03aArchAgent() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture___024unit__03a__03aArchAgent>& obj);

#endif  // guard
