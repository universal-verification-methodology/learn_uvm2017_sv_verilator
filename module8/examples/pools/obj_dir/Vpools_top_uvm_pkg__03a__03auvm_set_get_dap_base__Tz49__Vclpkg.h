// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_SET_GET_DAP_BASE__TZ49__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_SET_GET_DAP_BASE__TZ49__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_object;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz49__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz49__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz49__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz49__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz49 : public Vpools_top_uvm_pkg__03a__03auvm_object {
  public:
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get(Vpools_top__Syms* __restrict vlSymsp, std::string &get__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string value);
    virtual void __VnoInFunc_try_get(Vpools_top__Syms* __restrict vlSymsp, std::string &value, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_set(Vpools_top__Syms* __restrict vlSymsp, std::string value, CData/*0:0*/ &try_set__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz49(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz49();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz49>& obj);

#endif  // guard
