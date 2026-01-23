// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ1__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy___024unit__03a__03aMyTransaction;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_abstract_component_registry__pi86;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_port__Tz1;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_component;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz169;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_event;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_abstract_component_registry__pi86> &get_type__Vfuncrtn);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1 : public Vclass_hierarchy_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz169> __PVT__put_export;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169> __PVT__get_peek_export;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_port__Tz1> __PVT__put_ap;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_port__Tz1> __PVT__get_ap;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz169> __PVT__blocking_put_export;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz169> __PVT__nonblocking_put_export;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169> __PVT__blocking_get_export;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169> __PVT__nonblocking_get_export;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169> __PVT__get_export;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169> __PVT__blocking_peek_export;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169> __PVT__nonblocking_peek_export;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169> __PVT__peek_export;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169> __PVT__blocking_get_peek_export;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169> __PVT__nonblocking_get_peek_export;
    virtual void __VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_can_get(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t);
    virtual void __VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_is_empty(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_put(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t);
    virtual VlCoroutine __VnoInFunc_put(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> t);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_use_automatic_config(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn);
    virtual void __VnoInFunc_used(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1>& obj);

#endif  // guard
