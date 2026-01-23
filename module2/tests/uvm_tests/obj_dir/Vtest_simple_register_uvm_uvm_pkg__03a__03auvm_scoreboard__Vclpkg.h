// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_SCOREBOARD__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_SCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_abstract_component_registry__pi76;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_scoreboard__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_scoreboard__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_scoreboard__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_scoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_abstract_component_registry__pi76> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_scoreboard : public Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component {
  public:
    virtual void __VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_scoreboard(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_scoreboard();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_scoreboard>& obj);

#endif  // guard
