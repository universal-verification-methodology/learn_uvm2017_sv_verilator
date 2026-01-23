// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_SQR_IF_BASE__TZ216_TBZ216__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_SQR_IF_BASE__TZ216_TBZ216__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_reg_item;
class Varchitecture_uvm_pkg__03a__03auvm_root;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_sqr_if_base__Tz216_TBz216__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_sqr_if_base__Tz216_TBz216__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_sqr_if_base__Tz216_TBz216__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_sqr_if_base__Tz216_TBz216__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_sqr_if_base__Tz216_TBz216 : public virtual VlClass {
  public:
    virtual void __VnoInFunc_disable_auto_item_recording(Varchitecture__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_get_next_item(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_has_do_available(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    virtual void __VnoInFunc_is_auto_item_recording_enabled(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    virtual void __VnoInFunc_item_done(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> t);
    virtual VlCoroutine __VnoInFunc_peek(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> t);
    virtual VlCoroutine __VnoInFunc_try_next_item(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_wait_for_sequences(Varchitecture__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_sqr_if_base__Tz216_TBz216(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_sqr_if_base__Tz216_TBz216();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sqr_if_base__Tz216_TBz216>& obj);

#endif  // guard
