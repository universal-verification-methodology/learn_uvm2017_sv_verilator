// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_MEM__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_MEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vvirtual_sequences_uvm_pkg.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi85;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_comparer;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_cfg;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz187;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_packer;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_printer;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_queue__Tz186;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map_info;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_root;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg_field;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_mem__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_mem__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_mem__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_mem__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_max_size(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_mem : public Vvirtual_sequences_uvm_pkg__03a__03auvm_object {
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
    VlAssocArray<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__m_maps;
    VlAssocArray<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg>, CData/*0:0*/> __PVT__m_vregs;
    std::string __PVT__m_access;
    std::string __PVT__m_fname;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__m_backdoor;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz187> __PVT__m_hdl_paths_pool;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam> __PVT__mam;
    void __VnoInFunc_Xadd_vregX(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    void __VnoInFunc_Xdelete_vregX(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_Xlock_modelX(Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_XsampleX(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_coverage(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    void __VnoInFunc_add_hdl_path(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<Vvirtual_sequences_uvm_hdl_path_slice__struct__0> slices, std::string kind);
    void __VnoInFunc_add_hdl_path_slice(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind);
    void __VnoInFunc_add_map(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn);
    virtual void __VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_build_coverage(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_burst_read(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_burst_write(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_clear_hdl_path(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_addresses(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn);
    void __VnoInFunc_get_backdoor(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_coverage(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    void __VnoInFunc_get_default_map(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    void __VnoInFunc_get_frontdoor(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind);
    void __VnoInFunc_get_hdl_path_kinds(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds);
    void __VnoInFunc_get_local_map(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map>> &maps);
    void __VnoInFunc_get_n_bits(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    void __VnoInFunc_get_n_bytes(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_offset(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    void __VnoInFunc_get_size(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_get_vfield_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg_field>> &fields);
    virtual void __VnoInFunc_get_virtual_registers(Vvirtual_sequences__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg>> &regs);
    virtual void __VnoInFunc_get_vreg_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_vreg_by_offset(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual void __VnoInFunc_peek(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_poke(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_sample(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_set_backdoor(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_frontdoor(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_offset(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_set_parent(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_write(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_mem(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ size, IData/*31:0*/ n_bits, std::string access, IData/*31:0*/ has_coverage);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_mem();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem>& obj);

#endif  // guard
