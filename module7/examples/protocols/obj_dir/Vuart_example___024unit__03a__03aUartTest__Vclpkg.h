// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE___024UNIT__03A__03AUARTTEST__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE___024UNIT__03A__03AUARTTEST__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example___024unit__03a__03aUartEnv;
class Vuart_example___024unit__03a__03aUartSeq;
class Vuart_example___024unit__03a__03aUartTest;
class Vuart_example_uvm_pkg__03a__03auvm_component;
class Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi64;
class Vuart_example_uvm_pkg__03a__03auvm_object_wrapper;
class Vuart_example_uvm_pkg__03a__03auvm_phase;
class Vuart_example_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126;
class Vuart_example_uvm_pkg__03a__03auvm_test;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example___024unit__03a__03aUartTest__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example___024unit__03a__03aUartTest__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example___024unit__03a__03aUartTest__Vclpkg();
    VL_UNCOPYABLE(Vuart_example___024unit__03a__03aUartTest__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi64> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vuart_example_uvm_pkg__03a__03auvm_test__Vclpkg.h"

class Vuart_example__Syms;

class Vuart_example___024unit__03a__03aUartTest : public Vuart_example_uvm_pkg__03a__03auvm_test {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuart_example___024unit__03a__03aUartEnv> __PVT__env;
    virtual void __VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuart_example__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase);
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example___024unit__03a__03aUartTest(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string n, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> p);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example___024unit__03a__03aUartTest() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example___024unit__03a__03aUartTest>& obj);

#endif  // guard
