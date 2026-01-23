// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_MEM_REGION__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_MEM_REGION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_mem;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_mam;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__len;
    IData/*31:0*/ __PVT__n_bytes;
    IData/*31:0*/ __PVT__lineno;
    QData/*63:0*/ __PVT__Xstart_offsetX;
    QData/*63:0*/ __PVT__Xend_offsetX;
    std::string __PVT__fname;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_mam> __PVT__parent;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg> __PVT__XvregX;
    VlCoroutine __VnoInFunc_burst_read(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    VlCoroutine __VnoInFunc_burst_write(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_convert2string(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_get_end_offset(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_offset__Vfuncrtn);
    void __VnoInFunc_get_len(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_len__Vfuncrtn);
    void __VnoInFunc_get_memory(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    void __VnoInFunc_get_n_bytes(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    void __VnoInFunc_get_start_offset(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ &get_start_offset__Vfuncrtn);
    void __VnoInFunc_get_virtual_registers(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg> &get_virtual_registers__Vfuncrtn);
    void __VnoInFunc_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_poke(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    VlCoroutine __VnoInFunc_read(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_release_region(Vclass_hierarchy__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_write(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, QData/*63:0*/ end_offset, IData/*31:0*/ len, IData/*31:0*/ n_bytes, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_mam> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region() {}
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region>& obj);

#endif  // guard
