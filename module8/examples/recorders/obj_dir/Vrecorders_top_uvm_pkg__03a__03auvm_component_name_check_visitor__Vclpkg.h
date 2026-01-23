// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_COMPONENT_NAME_CHECK_VISITOR__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_COMPONENT_NAME_CHECK_VISITOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_component;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;
class Vrecorders_top_uvm_pkg__03a__03auvm_visitor_;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_component_name_check_visitor__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_component_name_check_visitor__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_component_name_check_visitor__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_component_name_check_visitor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_visitor___Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_component_name_check_visitor : public Vrecorders_top_uvm_pkg__03a__03auvm_visitor_ {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __PVT___root;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_begin_v(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_name_constraint(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_name_constraint__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_visit(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> node);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_component_name_check_visitor(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_component_name_check_visitor();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component_name_check_visitor>& obj);

#endif  // guard
