// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE___024UNIT__03A__03AUARTDRIVER__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE___024UNIT__03A__03AUARTDRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example___024unit__03a__03aUartTxn;
class Vuart_example_uvm_pkg__03a__03auvm_component;
class Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62;
class Vuart_example_uvm_pkg__03a__03auvm_coreservice_t;
class Vuart_example_uvm_pkg__03a__03auvm_driver__Tz126_TBz126;
class Vuart_example_uvm_pkg__03a__03auvm_object_wrapper;
class Vuart_example_uvm_pkg__03a__03auvm_phase;
class Vuart_example_uvm_pkg__03a__03auvm_root;
class Vuart_example_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example___024unit__03a__03aUartDriver__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example___024unit__03a__03aUartDriver__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example___024unit__03a__03aUartDriver__Vclpkg();
    VL_UNCOPYABLE(Vuart_example___024unit__03a__03aUartDriver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vuart_example_uvm_pkg__03a__03auvm_driver__Tz126_TBz126__Vclpkg.h"

class Vuart_example__Syms;

class Vuart_example___024unit__03a__03aUartDriver : public Vuart_example_uvm_pkg__03a__03auvm_driver__Tz126_TBz126 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vtrigprevexpr_hce555e1d__0;
    CData/*0:0*/ __Vtrigprevexpr_hce555e1d__1;
    CData/*0:0*/ __Vtrigprevexpr_hce555e1d__2;
    Vuart_example_uart_if* __PVT__vif;
    virtual void __VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuart_example__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_run_phase____Vfork_1__0(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h5b4f33a1__0);
    VlCoroutine __VnoInFunc_run_phase____Vfork_2__0(Vuart_example__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_hdd9dc4a4__0);
    VlCoroutine __VnoInFunc_run_phase____Vfork_3__0(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h5b4f4373__0);
    VlCoroutine __VnoInFunc_run_phase____Vfork_4__0(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h5b4f33a1__1);
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example___024unit__03a__03aUartDriver(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string n, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> p);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example___024unit__03a__03aUartDriver() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example___024unit__03a__03aUartDriver>& obj);

#endif  // guard
