// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ1__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences___024unit__03a__03aVirtualTransaction;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi71;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_port__Tz1;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz153;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz153;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_event;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi71> &get_type__Vfuncrtn);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1 : public Vvirtual_sequences_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz153> __PVT__put_export;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz153> __PVT__get_peek_export;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_port__Tz1> __PVT__put_ap;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_port__Tz1> __PVT__get_ap;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz153> __PVT__blocking_put_export;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz153> __PVT__nonblocking_put_export;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz153> __PVT__blocking_get_export;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz153> __PVT__nonblocking_get_export;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz153> __PVT__get_export;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz153> __PVT__blocking_peek_export;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz153> __PVT__nonblocking_peek_export;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz153> __PVT__peek_export;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz153> __PVT__blocking_get_peek_export;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz153> __PVT__nonblocking_get_peek_export;
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_can_get(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &t);
    virtual void __VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_is_empty(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_get(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_peek(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_put(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &t);
    virtual VlCoroutine __VnoInFunc_put(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> t);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_use_automatic_config(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn);
    virtual void __VnoInFunc_used(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1>& obj);

#endif  // guard
