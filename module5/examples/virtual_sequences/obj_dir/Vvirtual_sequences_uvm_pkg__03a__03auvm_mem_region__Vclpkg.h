// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_MEM_REGION__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_MEM_REGION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_root;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__len;
    IData/*31:0*/ __PVT__n_bytes;
    IData/*31:0*/ __PVT__lineno;
    QData/*63:0*/ __PVT__Xstart_offsetX;
    QData/*63:0*/ __PVT__Xend_offsetX;
    std::string __PVT__fname;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam> __PVT__parent;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg> __PVT__XvregX;
    VlCoroutine __VnoInFunc_burst_read(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    VlCoroutine __VnoInFunc_burst_write(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_convert2string(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_get_end_offset(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_offset__Vfuncrtn);
    void __VnoInFunc_get_len(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_len__Vfuncrtn);
    void __VnoInFunc_get_memory(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    void __VnoInFunc_get_n_bytes(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    void __VnoInFunc_get_start_offset(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ &get_start_offset__Vfuncrtn);
    void __VnoInFunc_get_virtual_registers(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg> &get_virtual_registers__Vfuncrtn);
    void __VnoInFunc_peek(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_poke(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    VlCoroutine __VnoInFunc_read(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_release_region(Vvirtual_sequences__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_write(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, QData/*63:0*/ end_offset, IData/*31:0*/ len, IData/*31:0*/ n_bytes, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region() {}
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region>& obj);

#endif  // guard
