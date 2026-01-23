// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vdma_uvm_pkg.h"


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_hdl_path_concat : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<Vdma_uvm_hdl_path_slice__struct__0> __PVT__slices;
    void __VnoInFunc_add_path(Vdma__Syms* __restrict vlSymsp, std::string path, IData/*31:0*/ offset, IData/*31:0*/ size);
    void __VnoInFunc_add_slice(Vdma__Syms* __restrict vlSymsp, Vdma_uvm_hdl_path_slice__struct__0 slice);
    void __VnoInFunc_set(Vdma__Syms* __restrict vlSymsp, VlQueue<Vdma_uvm_hdl_path_slice__struct__0> t);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_hdl_path_concat(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_uvm_pkg__03a__03auvm_hdl_path_concat() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat>& obj);

#endif  // guard
