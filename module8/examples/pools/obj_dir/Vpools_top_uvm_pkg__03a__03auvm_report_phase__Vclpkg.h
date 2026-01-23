// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_REPORT_PHASE__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_REPORT_PHASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_bottomup_phase;
class Vpools_top_uvm_pkg__03a__03auvm_component;
class Vpools_top_uvm_pkg__03a__03auvm_phase;
class Vpools_top_uvm_pkg__03a__03auvm_report_phase;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_report_phase__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_phase> __PVT__m_inst;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_report_phase__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_report_phase__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_report_phase__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_phase> &get__Vfuncrtn);
    void __VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_bottomup_phase__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_report_phase : public Vpools_top_uvm_pkg__03a__03auvm_bottomup_phase {
  public:
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_exec_func(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_report_phase(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_report_phase();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_phase>& obj);

#endif  // guard
