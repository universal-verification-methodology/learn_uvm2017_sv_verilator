// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_VREG__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_VREG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_std__03a__03asemaphore;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi87;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi88;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_comparer;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_policy;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_packer;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_printer;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_root;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg_cbs;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg_field;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg_field_cbs;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_vreg_cbs;

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg : public Vvirtual_sequences_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__locked;
    CData/*0:0*/ __PVT__is_static;
    CData/*0:0*/ __PVT__read_in_progress;
    CData/*0:0*/ __PVT__write_in_progress;
    IData/*31:0*/ __PVT__n_bits;
    IData/*31:0*/ __PVT__n_used_bits;
    IData/*31:0*/ __PVT__incr;
    IData/*31:0*/ __PVT__lineno;
    QData/*63:0*/ __PVT__offset;
    QData/*63:0*/ __PVT__size;
    std::string __PVT__fname;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg_field>> __PVT__fields;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem> __PVT__mem;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region> __PVT__region;
    VlClassRef<Vvirtual_sequences_std__03a__03asemaphore> __PVT__atomic;
    VlCoroutine __VnoInFunc_XatomicX(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    void __VnoInFunc_Xlock_modelX(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_field(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg_field> field);
    virtual void __VnoInFunc_allocate(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam> mam, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region> &allocate__Vfuncrtn);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block> parent, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ size, QData/*63:0*/ offset, IData/*31:0*/ incr);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_access(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ idx, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg_field>> &fields);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_incr(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_incr__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_memory(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bytes(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_n_memlocs(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_memlocs__Vfuncrtn);
    virtual void __VnoInFunc_get_offset_in_memory(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &get_offset_in_memory__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_region(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region> &get_region__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    virtual void __VnoInFunc_get_size(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_implement(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, IData/*31:0*/ incr, CData/*0:0*/ &implement__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual void __VnoInFunc_peek(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_poke(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_post_write(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_pre_read(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_pre_write(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_release_region(Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_reset(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_set_parent(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_write(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg>& obj);

#endif  // guard
