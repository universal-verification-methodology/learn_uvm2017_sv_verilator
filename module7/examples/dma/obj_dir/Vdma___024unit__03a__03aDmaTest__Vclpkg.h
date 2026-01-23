// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA___024UNIT__03A__03ADMATEST__VCLPKG_H_
#define VERILATED_VDMA___024UNIT__03A__03ADMATEST__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma___024unit__03a__03aDmaEnv;
class Vdma___024unit__03a__03aDmaSeq;
class Vdma___024unit__03a__03aDmaTest;
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_component_registry__pi64;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_phase;
class Vdma_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126;
class Vdma_uvm_pkg__03a__03auvm_test;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma___024unit__03a__03aDmaTest__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma___024unit__03a__03aDmaTest__Vclpkg();
    ~Vdma___024unit__03a__03aDmaTest__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma___024unit__03a__03aDmaTest__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__pi64> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_test__Vclpkg.h"

class Vdma__Syms;

class Vdma___024unit__03a__03aDmaTest : public Vdma_uvm_pkg__03a__03auvm_test {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vdma___024unit__03a__03aDmaEnv> __PVT__env;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma___024unit__03a__03aDmaTest(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string n, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> p);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma___024unit__03a__03aDmaTest();
};

std::string VL_TO_STRING(const VlClassRef<Vdma___024unit__03a__03aDmaTest>& obj);

#endif  // guard
