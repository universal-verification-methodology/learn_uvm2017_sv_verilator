// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_REG_ADAPTER__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_REG_ADAPTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtransactions_uvm_pkg.h"
class Vtransactions_uvm_pkg__03a__03auvm_abstract_object_registry__pi87;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_object_wrapper;
class Vtransactions_uvm_pkg__03a__03auvm_reg_item;
class Vtransactions_uvm_pkg__03a__03auvm_sequence_base;
class Vtransactions_uvm_pkg__03a__03auvm_sequence_item;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_abstract_object_registry__pi87> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_reg_adapter : public Vtransactions_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__supports_byte_enable;
    CData/*0:0*/ __PVT__provides_responses;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> __PVT__parent_sequence;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> __PVT__m_item;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_bus2reg(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item> bus_item, Vtransactions_uvm_reg_bus_op__struct__0 &rw);
    virtual void __VnoInFunc_get_item(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> &get_item__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_set_item(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> item);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reg2bus(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, const Vtransactions_uvm_reg_bus_op__struct__0 &rw, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item> &reg2bus__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_reg_adapter(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_reg_adapter();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_adapter>& obj);

#endif  // guard
