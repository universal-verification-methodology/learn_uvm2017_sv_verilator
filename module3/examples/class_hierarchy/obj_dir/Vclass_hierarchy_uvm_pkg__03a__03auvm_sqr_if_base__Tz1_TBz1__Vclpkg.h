// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_SQR_IF_BASE__TZ1_TBZ1__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_SQR_IF_BASE__TZ1_TBZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy___024unit__03a__03aMyTransaction;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1 : public virtual VlClass {
  public:
    virtual void __VnoInFunc_disable_auto_item_recording(Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t);
    virtual VlCoroutine __VnoInFunc_get_next_item(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t);
    virtual void __VnoInFunc_has_do_available(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    virtual void __VnoInFunc_is_auto_item_recording_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    virtual void __VnoInFunc_item_done(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> t);
    virtual VlCoroutine __VnoInFunc_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t);
    virtual void __VnoInFunc_put(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> t);
    virtual void __VnoInFunc_put_response(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> t);
    virtual VlCoroutine __VnoInFunc_try_next_item(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t);
    virtual VlCoroutine __VnoInFunc_wait_for_sequences(Vclass_hierarchy__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1>& obj);

#endif  // guard
