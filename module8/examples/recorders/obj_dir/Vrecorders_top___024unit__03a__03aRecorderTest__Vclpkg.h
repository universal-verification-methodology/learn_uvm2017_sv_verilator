// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP___024UNIT__03A__03ARECORDERTEST__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP___024UNIT__03A__03ARECORDERTEST__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top___024unit__03a__03aRecorderTest;
class Vrecorders_top___024unit__03a__03aRecorderTransaction;
class Vrecorders_top___024unit__03a__03aTransactionRecorder;
class Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz1_TBz3;
class Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz1;
class Vrecorders_top_uvm_pkg__03a__03auvm_component;
class Vrecorders_top_uvm_pkg__03a__03auvm_component_registry__pi2;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_test;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top___024unit__03a__03aRecorderTest__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top___024unit__03a__03aRecorderTest__Vclpkg();
    ~Vrecorders_top___024unit__03a__03aRecorderTest__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top___024unit__03a__03aRecorderTest__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component_registry__pi2> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_test__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top___024unit__03a__03aRecorderTest : public Vrecorders_top_uvm_pkg__03a__03auvm_test {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vrecorders_top___024unit__03a__03aTransactionRecorder> __PVT__recorder;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz1> __PVT__transaction_port;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top___024unit__03a__03aRecorderTest(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top___024unit__03a__03aRecorderTest();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTest>& obj);

#endif  // guard
