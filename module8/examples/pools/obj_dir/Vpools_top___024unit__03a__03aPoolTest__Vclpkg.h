// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP___024UNIT__03A__03APOOLTEST__VCLPKG_H_
#define VERILATED_VPOOLS_TOP___024UNIT__03A__03APOOLTEST__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top___024unit__03a__03aPoolTest;
class Vpools_top___024unit__03a__03aPoolTransaction;
class Vpools_top___024unit__03a__03aTransactionPool;
class Vpools_top_uvm_pkg__03a__03auvm_component;
class Vpools_top_uvm_pkg__03a__03auvm_component_registry__pi1;
class Vpools_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vpools_top_uvm_pkg__03a__03auvm_phase;
class Vpools_top_uvm_pkg__03a__03auvm_test;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top___024unit__03a__03aPoolTest__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top___024unit__03a__03aPoolTest__Vclpkg();
    ~Vpools_top___024unit__03a__03aPoolTest__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top___024unit__03a__03aPoolTest__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component_registry__pi1> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_test__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top___024unit__03a__03aPoolTest : public Vpools_top_uvm_pkg__03a__03auvm_test {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vpools_top___024unit__03a__03aTransactionPool> __PVT__pool;
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top___024unit__03a__03aPoolTest(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top___024unit__03a__03aPoolTest();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top___024unit__03a__03aPoolTest>& obj);

#endif  // guard
