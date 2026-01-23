// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_COPIER__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_COPIER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example_uvm_pkg__03a__03auvm_copier;
class Vuart_example_uvm_pkg__03a__03auvm_coreservice_t;
class Vuart_example_uvm_pkg__03a__03auvm_field_op;
class Vuart_example_uvm_pkg__03a__03auvm_object;
class Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi11;
class Vuart_example_uvm_pkg__03a__03auvm_object_wrapper;
class Vuart_example_uvm_pkg__03a__03auvm_policy;
class Vuart_example_uvm_pkg__03a__03auvm_root;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03auvm_copier__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03auvm_copier__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03auvm_copier__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03auvm_copier__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_copier> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi11> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_copier> copier);
    void __VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vuart_example_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03auvm_copier : public Vuart_example_uvm_pkg__03a__03auvm_policy {
  public:

    // DESIGN SPECIFIC STATE
    IData/*27:0*/ __PVT__policy;
    VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object>, VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object>, VlAssocArray<IData/*27:0*/, IData/*31:0*/>>> __PVT__m_recur_states;
    virtual void __VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuart_example__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_copy_object(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_flush(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_first_copy(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_first_copy__Vfuncrtn);
    void __VnoInFunc_get_last_copy(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_last_copy__Vfuncrtn);
    void __VnoInFunc_get_next_copy(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_next_copy__Vfuncrtn);
    void __VnoInFunc_get_num_copies(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> rhs, IData/*31:0*/ &get_num_copies__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_prev_copy(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_prev_copy__Vfuncrtn);
    virtual void __VnoInFunc_get_recursion_policy(Vuart_example__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_object_copied(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> rhs, IData/*27:0*/ recursion, IData/*31:0*/ &object_copied__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_recursion_policy(Vuart_example__Syms* __restrict vlSymsp, IData/*27:0*/ policy);
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03auvm_copier(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example_uvm_pkg__03a__03auvm_copier() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_copier>& obj);

#endif  // guard
