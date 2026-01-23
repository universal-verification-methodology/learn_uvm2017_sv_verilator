// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_RUN_TEST_CALLBACK__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_RUN_TEST_CALLBACK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_callback;
class Varchitecture_uvm_pkg__03a__03auvm_run_test_callback;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_run_test_callback>> __PVT__m_registered_cbs;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_run_test_callback> cb, CData/*0:0*/ &add__Vfuncrtn);
    void __VnoInFunc_delete(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_run_test_callback> cb, CData/*0:0*/ &delete__Vfuncrtn);
    void __VnoInFunc_m_do_post_run_test(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_pre_abort(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_pre_run_test(Varchitecture__Syms* __restrict vlSymsp);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_callback__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_run_test_callback : public Varchitecture_uvm_pkg__03a__03auvm_callback {
  public:
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_run_test(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_abort(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_run_test(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_run_test_callback(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_run_test_callback();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_run_test_callback>& obj);

#endif  // guard
