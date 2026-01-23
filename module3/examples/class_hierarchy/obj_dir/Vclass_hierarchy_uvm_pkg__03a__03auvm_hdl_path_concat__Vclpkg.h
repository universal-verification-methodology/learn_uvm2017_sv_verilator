// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vclass_hierarchy_uvm_pkg.h"


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<Vclass_hierarchy_uvm_hdl_path_slice__struct__0> __PVT__slices;
    void __VnoInFunc_add_path(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string path, IData/*31:0*/ offset, IData/*31:0*/ size);
    void __VnoInFunc_add_slice(Vclass_hierarchy__Syms* __restrict vlSymsp, Vclass_hierarchy_uvm_hdl_path_slice__struct__0 slice);
    void __VnoInFunc_set(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<Vclass_hierarchy_uvm_hdl_path_slice__struct__0> t);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat(Vclass_hierarchy__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat() {}
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat>& obj);

#endif  // guard
