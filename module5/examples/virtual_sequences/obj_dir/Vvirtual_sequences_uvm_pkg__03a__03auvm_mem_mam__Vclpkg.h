// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_cfg;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_policy;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_root;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__for_each_idx;
    IData/*31:0*/ __PVT__lineno;
    std::string __PVT__fname;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_policy> __PVT__default_alloc;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem> __PVT__memory;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_cfg> __PVT__cfg;
    VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region>> __PVT__in_use;
    void __VnoInFunc_convert2string(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_for_each(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ reset, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region> &for_each__Vfuncrtn);
    void __VnoInFunc_get_memory(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    void __VnoInFunc_reconfigure(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_cfg> &reconfigure__Vfuncrtn);
    void __VnoInFunc_release_all_regions(Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_release_region(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region> region);
    void __VnoInFunc_request_region(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ n_bytes, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region> &request_region__Vfuncrtn);
    void __VnoInFunc_reserve_region(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, IData/*31:0*/ n_bytes, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region> &reserve_region__Vfuncrtn);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem> mem);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam() {}
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam>& obj);

#endif  // guard
