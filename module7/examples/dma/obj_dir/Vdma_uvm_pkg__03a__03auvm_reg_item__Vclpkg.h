// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_REG_ITEM__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_REG_ITEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_registry__pi103;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_reg_item;
class Vdma_uvm_pkg__03a__03auvm_reg_map;
class Vdma_uvm_pkg__03a__03auvm_sequence_base;
class Vdma_uvm_pkg__03a__03auvm_sequence_item;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_reg_item__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_reg_item__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_reg_item__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_reg_item__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi103> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_reg_item : public Vdma_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__element_kind;
    IData/*31:0*/ __PVT__kind;
    IData/*31:0*/ __PVT__status;
    IData/*31:0*/ __PVT__path;
    IData/*31:0*/ __PVT__prior;
    IData/*31:0*/ __PVT__lineno;
    IData/*31:0*/ __Vvalue_size;
    QData/*63:0*/ __PVT__offset;
    VlQueue<QData/*63:0*/> __PVT__value;
    std::string __PVT__bd_kind;
    std::string __PVT__fname;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __PVT__element;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_map> __PVT__local_map;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_map> __PVT__map;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> __PVT__parent;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __PVT__extension;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vresize_constrained_arrays(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_max_values_resize_constrained_array(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_max_values_setup_constraint(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_reg_item(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_reg_item();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item>& obj);

#endif  // guard
