// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_COPIER__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_COPIER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_field_op;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi11;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_policy;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi11> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier> copier);
    void __VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_policy {
  public:

    // DESIGN SPECIFIC STATE
    IData/*27:0*/ __PVT__policy;
    VlAssocArray<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object>, VlAssocArray<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object>, VlAssocArray<IData/*27:0*/, IData/*31:0*/>>> __PVT__m_recur_states;
    virtual void __VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_copy_object(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_flush(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_first_copy(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_first_copy__Vfuncrtn);
    void __VnoInFunc_get_last_copy(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_last_copy__Vfuncrtn);
    void __VnoInFunc_get_next_copy(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_next_copy__Vfuncrtn);
    void __VnoInFunc_get_num_copies(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs, IData/*31:0*/ &get_num_copies__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_prev_copy(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_prev_copy__Vfuncrtn);
    virtual void __VnoInFunc_get_recursion_policy(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_object_copied(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs, IData/*27:0*/ recursion, IData/*31:0*/ &object_copied__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_recursion_policy(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*27:0*/ policy);
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier>& obj);

#endif  // guard
