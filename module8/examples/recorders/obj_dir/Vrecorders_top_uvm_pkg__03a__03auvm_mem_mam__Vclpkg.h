// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_mem;
class Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam;
class Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg;
class Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_policy;
class Vrecorders_top_uvm_pkg__03a__03auvm_mem_region;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__for_each_idx;
    IData/*31:0*/ __PVT__lineno;
    std::string __PVT__fname;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_policy> __PVT__default_alloc;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> __PVT__memory;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg> __PVT__cfg;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_region>> __PVT__in_use;
    void __VnoInFunc_convert2string(Vrecorders_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_for_each(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ reset, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_region> &for_each__Vfuncrtn);
    void __VnoInFunc_get_memory(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    void __VnoInFunc_reconfigure(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg> &reconfigure__Vfuncrtn);
    void __VnoInFunc_release_all_regions(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_release_region(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_region> region);
    void __VnoInFunc_request_region(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ n_bytes, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_region> &request_region__Vfuncrtn);
    void __VnoInFunc_reserve_region(Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, IData/*31:0*/ n_bytes, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_region> &reserve_region__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam>& obj);

#endif  // guard
