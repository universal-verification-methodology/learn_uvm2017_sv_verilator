// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ1__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture___024unit__03a__03aArchTxn;
class Varchitecture_uvm_pkg__03a__03auvm_abstract_component_registry__pi89;
class Varchitecture_uvm_pkg__03a__03auvm_analysis_port__Tz1;
class Varchitecture_uvm_pkg__03a__03auvm_component;
class Varchitecture_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz174;
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174;
class Varchitecture_uvm_pkg__03a__03auvm_tlm_event;
class Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_abstract_component_registry__pi89> &get_type__Vfuncrtn);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1 : public Varchitecture_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174> __PVT__put_export;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz174> __PVT__get_peek_export;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_analysis_port__Tz1> __PVT__put_ap;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_analysis_port__Tz1> __PVT__get_ap;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174> __PVT__blocking_put_export;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174> __PVT__nonblocking_put_export;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz174> __PVT__blocking_get_export;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz174> __PVT__nonblocking_get_export;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz174> __PVT__get_export;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz174> __PVT__blocking_peek_export;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz174> __PVT__nonblocking_peek_export;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz174> __PVT__peek_export;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz174> __PVT__blocking_get_peek_export;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz174> __PVT__nonblocking_get_peek_export;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_can_get(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Varchitecture__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> &t);
    virtual void __VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_is_empty(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_peek(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> &t);
    virtual VlCoroutine __VnoInFunc_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> t);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_use_automatic_config(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn);
    virtual void __VnoInFunc_used(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1>& obj);

#endif  // guard
