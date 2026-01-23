// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_RUN_TEST_CALLBACK__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_RUN_TEST_CALLBACK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_callback;
class Vdma_uvm_pkg__03a__03auvm_run_test_callback;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_run_test_callback>> __PVT__m_registered_cbs;

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_run_test_callback> cb, CData/*0:0*/ &add__Vfuncrtn);
    void __VnoInFunc_delete(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_run_test_callback> cb, CData/*0:0*/ &delete__Vfuncrtn);
    void __VnoInFunc_m_do_post_run_test(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_pre_abort(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_pre_run_test(Vdma__Syms* __restrict vlSymsp);
};

#include "Vdma_uvm_pkg__03a__03auvm_callback__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_run_test_callback : public Vdma_uvm_pkg__03a__03auvm_callback {
  public:
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_run_test(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_abort(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_run_test(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_run_test_callback(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_run_test_callback();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_run_test_callback>& obj);

#endif  // guard
