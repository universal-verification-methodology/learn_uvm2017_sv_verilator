// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_RELATED_LINK__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_RELATED_LINK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_std__03a__03aprocess;
class Varchitecture_uvm_pkg__03a__03auvm_link_base;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi119;
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_related_link;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_related_link__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_related_link__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_related_link__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_related_link__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_link(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> rhs, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_related_link> &get_link__Vfuncrtn);
    void __VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi119> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_link_base__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_related_link : public Varchitecture_uvm_pkg__03a__03auvm_link_base {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> __PVT__m_lhs;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> __PVT__m_rhs;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_get_lhs(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &do_get_lhs__Vfuncrtn);
    virtual void __VnoInFunc_do_get_rhs(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &do_get_rhs__Vfuncrtn);
    virtual void __VnoInFunc_do_set_lhs(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> lhs);
    virtual void __VnoInFunc_do_set_rhs(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_related_link(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_related_link();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_related_link>& obj);

#endif  // guard
