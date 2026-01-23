// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_TIME__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_TIME__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_time__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    double __PVT__m_resolution;

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_time__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_time__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_time__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_set_time_resolution(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, double res);
};


class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_time : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    QData/*63:0*/ __PVT__m_time;
    double __PVT__m_res;
    std::string __PVT__m_name;
    void __VnoInFunc_decr(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs);
    void __VnoInFunc_get_abstime(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, double secs, double &get_abstime__Vfuncrtn);
    void __VnoInFunc_get_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    void __VnoInFunc_get_realtime(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ scaled, double secs, double &get_realtime__Vfuncrtn);
    void __VnoInFunc_incr(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs);
    void __VnoInFunc_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_abstime(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, double t, double secs);
    void __VnoInFunc_to_m_res(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs, double &to_m_res__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_time(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, double res);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_time() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_time>& obj);

#endif  // guard
