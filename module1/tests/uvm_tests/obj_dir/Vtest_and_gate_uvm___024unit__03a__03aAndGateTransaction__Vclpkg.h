// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM___024UNIT__03A__03AANDGATETRANSACTION__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM___024UNIT__03A__03AANDGATETRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi60;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_item;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction__Vclpkg();
    ~Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi60> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__a;
    CData/*0:0*/ __PVT__b;
    CData/*0:0*/ __PVT__expected_y;
    virtual void __VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_valid_combination_setup_constraint(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {}
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction>& obj);

#endif  // guard
