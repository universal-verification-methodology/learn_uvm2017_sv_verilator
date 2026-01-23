// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ67_TBZ187__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ67_TBZ187__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_catcher;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_object;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz187__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz187__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz187__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz187__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz187 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_object> __PVT__m_obj;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_catcher> __PVT__m_cb;
    void __VnoInFunc_first(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_catcher> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_catcher> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_catcher> &last__Vfuncrtn);
    void __VnoInFunc_next(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_catcher> &next__Vfuncrtn);
    void __VnoInFunc_prev(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_catcher> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz187(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_object> obj);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz187() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz187>& obj);

#endif  // guard
