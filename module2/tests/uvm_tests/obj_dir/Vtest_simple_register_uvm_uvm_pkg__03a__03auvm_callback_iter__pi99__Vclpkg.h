// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_CALLBACK_ITER__PI99__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_CALLBACK_ITER__PI99__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi99__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi99__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi99__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi99__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi99 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__m_obj;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __PVT__m_cb;
    void __VnoInFunc_first(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> &last__Vfuncrtn);
    void __VnoInFunc_next(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> &next__Vfuncrtn);
    void __VnoInFunc_prev(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi99(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> obj);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi99() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi99>& obj);

#endif  // guard
