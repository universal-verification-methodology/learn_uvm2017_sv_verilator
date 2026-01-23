// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM___024UNIT__03A__03AREGISTERDRIVER__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM___024UNIT__03A__03AREGISTERDRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi62;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_driver__Tz126_TBz126;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver__Vclpkg();
    ~Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi62> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_driver__Tz126_TBz126__Vclpkg.h"

class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver : public Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_driver__Tz126_TBz126 {
  public:

    // DESIGN SPECIFIC STATE
    Vtest_simple_register_uvm_register_if* __PVT__vif;
    virtual void __VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_run_phase____Vfork_1__0(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_ha2c20c0c__0);
    VlCoroutine __VnoInFunc_run_phase____Vfork_2__0(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_hcc603431__0);
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver>& obj);

#endif  // guard
