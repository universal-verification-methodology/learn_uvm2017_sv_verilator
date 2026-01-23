// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtransactions_uvm_pkg.h"


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_hdl_path_concat : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<Vtransactions_uvm_hdl_path_slice__struct__0> __PVT__slices;
    void __VnoInFunc_add_path(Vtransactions__Syms* __restrict vlSymsp, std::string path, IData/*31:0*/ offset, IData/*31:0*/ size);
    void __VnoInFunc_add_slice(Vtransactions__Syms* __restrict vlSymsp, Vtransactions_uvm_hdl_path_slice__struct__0 slice);
    void __VnoInFunc_set(Vtransactions__Syms* __restrict vlSymsp, VlQueue<Vtransactions_uvm_hdl_path_slice__struct__0> t);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_hdl_path_concat(Vtransactions__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransactions_uvm_pkg__03a__03auvm_hdl_path_concat() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_hdl_path_concat>& obj);

#endif  // guard
