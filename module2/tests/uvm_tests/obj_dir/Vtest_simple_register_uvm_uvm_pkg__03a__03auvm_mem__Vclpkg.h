// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_MEM__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_MEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtest_simple_register_uvm_uvm_pkg.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi100;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_comparer;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem_mam;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem_mam_cfg;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_string_pool__Tz208;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_packer;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz207;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequencer_base;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg_field;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_max_size(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
};

#include "Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem : public Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_locked;
    CData/*0:0*/ __PVT__m_read_in_progress;
    CData/*0:0*/ __PVT__m_write_in_progress;
    CData/*0:0*/ __PVT__m_is_powered_down;
    IData/*31:0*/ __PVT__m_n_bits;
    IData/*31:0*/ __PVT__m_has_cover;
    IData/*31:0*/ __PVT__m_cover_on;
    IData/*31:0*/ __PVT__m_lineno;
    QData/*63:0*/ __PVT__m_size;
    VlAssocArray<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__m_maps;
    VlAssocArray<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg>, CData/*0:0*/> __PVT__m_vregs;
    std::string __PVT__m_access;
    std::string __PVT__m_fname;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__m_backdoor;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_string_pool__Tz208> __PVT__m_hdl_paths_pool;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem_mam> __PVT__mam;
    void __VnoInFunc_Xadd_vregX(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    void __VnoInFunc_Xdelete_vregX(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_Xlock_modelX(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_XsampleX(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_coverage(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    void __VnoInFunc_add_hdl_path(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<Vtest_simple_register_uvm_uvm_hdl_path_slice__struct__0> slices, std::string kind);
    void __VnoInFunc_add_hdl_path_slice(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind);
    void __VnoInFunc_add_map(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn);
    virtual void __VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_build_coverage(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_burst_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_burst_write(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_clear_hdl_path(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_addresses(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn);
    void __VnoInFunc_get_backdoor(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_coverage(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    void __VnoInFunc_get_default_map(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    void __VnoInFunc_get_frontdoor(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind);
    void __VnoInFunc_get_hdl_path_kinds(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds);
    void __VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map>> &maps);
    void __VnoInFunc_get_n_bits(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    void __VnoInFunc_get_n_bytes(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_offset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    void __VnoInFunc_get_size(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_get_vfield_by_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg_field>> &fields);
    virtual void __VnoInFunc_get_virtual_registers(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg>> &regs);
    virtual void __VnoInFunc_get_vreg_by_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_vreg_by_offset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual void __VnoInFunc_peek(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_poke(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_sample(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_set_backdoor(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_frontdoor(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_offset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_set_parent(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_write(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ size, IData/*31:0*/ n_bits, std::string access, IData/*31:0*/ has_coverage);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>& obj);

#endif  // guard
