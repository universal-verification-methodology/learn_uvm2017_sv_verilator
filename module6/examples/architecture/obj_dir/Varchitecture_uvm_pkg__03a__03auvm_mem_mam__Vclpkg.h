// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_mem;
class Varchitecture_uvm_pkg__03a__03auvm_mem_mam;
class Varchitecture_uvm_pkg__03a__03auvm_mem_mam_cfg;
class Varchitecture_uvm_pkg__03a__03auvm_mem_mam_policy;
class Varchitecture_uvm_pkg__03a__03auvm_mem_region;
class Varchitecture_uvm_pkg__03a__03auvm_root;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_mem_mam__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_mem_mam__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_mem_mam : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__for_each_idx;
    IData/*31:0*/ __PVT__lineno;
    std::string __PVT__fname;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_mam_policy> __PVT__default_alloc;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> __PVT__memory;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_mam_cfg> __PVT__cfg;
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_region>> __PVT__in_use;
    void __VnoInFunc_convert2string(Varchitecture__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_for_each(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ reset, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_region> &for_each__Vfuncrtn);
    void __VnoInFunc_get_memory(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    void __VnoInFunc_reconfigure(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_mam_cfg> &reconfigure__Vfuncrtn);
    void __VnoInFunc_release_all_regions(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_release_region(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_region> region);
    void __VnoInFunc_request_region(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ n_bytes, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, std::string fname, IData/*31:0*/ lineno, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_region> &request_region__Vfuncrtn);
    void __VnoInFunc_reserve_region(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, IData/*31:0*/ n_bytes, std::string fname, IData/*31:0*/ lineno, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_region> &reserve_region__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_mem_mam(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> mem);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Varchitecture_uvm_pkg__03a__03auvm_mem_mam() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_mam>& obj);

#endif  // guard
