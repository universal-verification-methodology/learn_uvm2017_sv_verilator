// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ1_TBZ169__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ1_TBZ169__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy___024unit__03a__03aMyTransaction;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz28;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz28__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169 : public Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz28 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1> __PVT__m_imp;
    void __VnoInFunc_can_get(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    void __VnoInFunc_can_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    VlCoroutine __VnoInFunc_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t);
    virtual void __VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t);
    void __VnoInFunc_try_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1> imp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169>& obj);

#endif  // guard
