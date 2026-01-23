// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_PUT_IMP__TZ172_TBZ251__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_PUT_IMP__TZ172_TBZ251__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz249;
class Vpools_top_uvm_pkg__03a__03auvm_reg_item;
class Vpools_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz172;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_put_imp__Tz172_TBz251__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_put_imp__Tz172_TBz251__Vclpkg(Vpools_top__Syms* symsp, const char* v__name);
    ~Vpools_top_uvm_pkg__03a__03auvm_put_imp__Tz172_TBz251__Vclpkg();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_put_imp__Tz172_TBz251__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz249__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_put_imp__Tz172_TBz251 : public Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz249 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz172> __PVT__m_imp;
    void __VnoInFunc_can_put(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_put(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> t);
    void __VnoInFunc_try_put(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_put_imp__Tz172_TBz251(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz172> imp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_put_imp__Tz172_TBz251() {}
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_put_imp__Tz172_TBz251>& obj);

#endif  // guard
