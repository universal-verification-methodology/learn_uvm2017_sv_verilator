// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_REG_ADAPTER__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_REG_ADAPTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Varchitecture_uvm_pkg.h"
class Varchitecture_uvm_pkg__03a__03auvm_abstract_object_registry__pi116;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_reg_item;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_base;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_item;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_abstract_object_registry__pi116> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_reg_adapter : public Varchitecture_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__supports_byte_enable;
    CData/*0:0*/ __PVT__provides_responses;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> __PVT__parent_sequence;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> __PVT__m_item;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_bus2reg(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> bus_item, Varchitecture_uvm_reg_bus_op__struct__0 &rw);
    virtual void __VnoInFunc_get_item(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &get_item__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_set_item(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> item);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reg2bus(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, const Varchitecture_uvm_reg_bus_op__struct__0 &rw, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> &reg2bus__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_reg_adapter(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_reg_adapter();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_adapter>& obj);

#endif  // guard
