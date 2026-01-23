// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_VREG__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_VREG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_std__03a__03asemaphore;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi93;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi94;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_mem;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_mam;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_mam_policy;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_packer;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_printer;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg_cbs;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg_field;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg_field_cbs;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_vreg_cbs;

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg : public Vclass_hierarchy_uvm_pkg__03a__03auvm_object {
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
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg_field>> __PVT__fields;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem> __PVT__mem;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region> __PVT__region;
    VlClassRef<Vclass_hierarchy_std__03a__03asemaphore> __PVT__atomic;
    VlCoroutine __VnoInFunc_XatomicX(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    void __VnoInFunc_Xlock_modelX(Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_field(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg_field> field);
    virtual void __VnoInFunc_allocate(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_mam> mam, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region> &allocate__Vfuncrtn);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ size, QData/*63:0*/ offset, IData/*31:0*/ incr);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_access(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ idx, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg_field>> &fields);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_incr(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_incr__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_memory(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bytes(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_n_memlocs(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_memlocs__Vfuncrtn);
    virtual void __VnoInFunc_get_offset_in_memory(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &get_offset_in_memory__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_region(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem_region> &get_region__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    virtual void __VnoInFunc_get_size(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_implement(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, IData/*31:0*/ incr, CData/*0:0*/ &implement__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual void __VnoInFunc_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_poke(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_post_write(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_pre_read(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_pre_write(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_release_region(Vclass_hierarchy__Syms* __restrict vlSymsp);
    void __VnoInFunc_reset(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_set_parent(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_write(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_vreg>& obj);

#endif  // guard
