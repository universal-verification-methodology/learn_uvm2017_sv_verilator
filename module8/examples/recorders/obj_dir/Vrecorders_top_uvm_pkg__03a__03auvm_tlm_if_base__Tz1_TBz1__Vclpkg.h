// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_TLM_IF_BASE__TZ1_TBZ1__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_TLM_IF_BASE__TZ1_TBZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top___024unit__03a__03aRecorderTransaction;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_tlm_if_base__Tz1_TBz1__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_tlm_if_base__Tz1_TBz1__Vclpkg(Vrecorders_top__Syms* symsp, const char* v__name);
    ~Vrecorders_top_uvm_pkg__03a__03auvm_tlm_if_base__Tz1_TBz1__Vclpkg();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_tlm_if_base__Tz1_TBz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_tlm_if_base__Tz1_TBz1 : public virtual VlClass {
  public:
    virtual void __VnoInFunc_can_get(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> &t);
    virtual void __VnoInFunc_nb_transport(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> req, VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> &rsp, CData/*0:0*/ &nb_transport__Vfuncrtn);
    virtual void __VnoInFunc_peek(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> &t);
    virtual void __VnoInFunc_put(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> t);
    virtual void __VnoInFunc_transport(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> req, VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> &rsp);
    virtual void __VnoInFunc_try_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_write(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> t);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_tlm_if_base__Tz1_TBz1(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_tlm_if_base__Tz1_TBz1() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tlm_if_base__Tz1_TBz1>& obj);

#endif  // guard
