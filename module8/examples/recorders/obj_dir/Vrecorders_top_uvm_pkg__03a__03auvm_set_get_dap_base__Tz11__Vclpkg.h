// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_SET_GET_DAP_BASE__TZ11__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_SET_GET_DAP_BASE__TZ11__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11 : public Vrecorders_top_uvm_pkg__03a__03auvm_object {
  public:
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> &get__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> value);
    virtual void __VnoInFunc_try_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> &value, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_set(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> value, CData/*0:0*/ &try_set__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11>& obj);

#endif  // guard
