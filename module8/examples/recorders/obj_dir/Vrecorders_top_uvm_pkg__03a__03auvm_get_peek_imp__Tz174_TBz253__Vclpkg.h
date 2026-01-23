// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ174_TBZ253__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ174_TBZ253__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz251;
class Vrecorders_top_uvm_pkg__03a__03auvm_reg_item;
class Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz174;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz174_TBz253__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz174_TBz253__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz174_TBz253__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz174_TBz253__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz251__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz174_TBz253 : public Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz251 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz174> __PVT__m_imp;
    void __VnoInFunc_can_get(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    void __VnoInFunc_can_peek(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    VlCoroutine __VnoInFunc_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> &t);
    void __VnoInFunc_try_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz174_TBz253(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz174> imp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz174_TBz253();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz174_TBz253>& obj);

#endif  // guard
