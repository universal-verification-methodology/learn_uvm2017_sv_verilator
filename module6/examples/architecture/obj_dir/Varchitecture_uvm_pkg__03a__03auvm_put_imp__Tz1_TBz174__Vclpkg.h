// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_PUT_IMP__TZ1_TBZ174__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_PUT_IMP__TZ1_TBZ174__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture___024unit__03a__03aArchTxn;
class Varchitecture_uvm_pkg__03a__03auvm_port_base__Tz35;
class Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_port_base__Tz35__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174 : public Varchitecture_uvm_pkg__03a__03auvm_port_base__Tz35 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1> __PVT__m_imp;
    void __VnoInFunc_can_put(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> t);
    void __VnoInFunc_try_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> t, CData/*0:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1> imp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174>& obj);

#endif  // guard
