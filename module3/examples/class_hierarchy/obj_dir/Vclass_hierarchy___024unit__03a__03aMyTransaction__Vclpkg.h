// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY___024UNIT__03A__03AMYTRANSACTION__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY___024UNIT__03A__03AMYTRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy___024unit__03a__03aMyTransaction;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_item;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy___024unit__03a__03aMyTransaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy___024unit__03a__03aMyTransaction__Vclpkg();
    ~Vclass_hierarchy___024unit__03a__03aMyTransaction__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy___024unit__03a__03aMyTransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy___024unit__03a__03aMyTransaction : public Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__data;
    SData/*15:0*/ __PVT__address;
    virtual void __VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy___024unit__03a__03aMyTransaction(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy___024unit__03a__03aMyTransaction();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction>& obj);

#endif  // guard
