// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA___024UNIT__03A__03ADMADRIVER__VCLPKG_H_
#define VERILATED_VDMA___024UNIT__03A__03ADMADRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma___024unit__03a__03aDmaTxn;
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_component_registry__pi62;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_phase;
class Vdma_uvm_pkg__03a__03auvm_root;
class Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma___024unit__03a__03aDmaDriver__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma___024unit__03a__03aDmaDriver__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma___024unit__03a__03aDmaDriver__Vclpkg();
    VL_UNCOPYABLE(Vdma___024unit__03a__03aDmaDriver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__pi62> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126__Vclpkg.h"

class Vdma__Syms;

class Vdma___024unit__03a__03aDmaDriver : public Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vtrigprevexpr_h27194be2__0;
    CData/*0:0*/ __Vtrigprevexpr_h27194be2__1;
    CData/*0:0*/ __Vtrigprevexpr_h27194be2__2;
    Vdma_dma_if* __PVT__vif;
    virtual void __VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_run_phase____Vfork_1__0(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h9084ef4e__0);
    VlCoroutine __VnoInFunc_run_phase____Vfork_2__0(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hc9f1fa1e__0);
    VlCoroutine __VnoInFunc_run_phase____Vfork_3__0(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h2b829b73__0);
    VlCoroutine __VnoInFunc_run_phase____Vfork_4__0(Vdma__Syms* __restrict vlSymsp, SData/*15:0*/ __Vintraval_hc1c8c667__0);
    VlCoroutine __VnoInFunc_run_phase____Vfork_5__0(Vdma__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h0e859cd4__0);
    VlCoroutine __VnoInFunc_run_phase____Vfork_6__0(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h9084ff9a__0);
    VlCoroutine __VnoInFunc_run_phase____Vfork_7__0(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h9084ef4e__1);
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma___024unit__03a__03aDmaDriver(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string n, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> p);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma___024unit__03a__03aDmaDriver() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma___024unit__03a__03aDmaDriver>& obj);

#endif  // guard
