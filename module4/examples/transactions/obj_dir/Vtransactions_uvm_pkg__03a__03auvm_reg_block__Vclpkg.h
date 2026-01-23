// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_REG_BLOCK__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_REG_BLOCK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_comparer;
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_mem;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi82;
class Vtransactions_uvm_pkg__03a__03auvm_object_string_pool__Tz170;
class Vtransactions_uvm_pkg__03a__03auvm_object_wrapper;
class Vtransactions_uvm_pkg__03a__03auvm_packer;
class Vtransactions_uvm_pkg__03a__03auvm_printer;
class Vtransactions_uvm_pkg__03a__03auvm_queue__Tz50;
class Vtransactions_uvm_pkg__03a__03auvm_reg;
class Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtransactions_uvm_pkg__03a__03auvm_reg_block;
class Vtransactions_uvm_pkg__03a__03auvm_reg_field;
class Vtransactions_uvm_pkg__03a__03auvm_reg_map;
class Vtransactions_uvm_pkg__03a__03auvm_root;
class Vtransactions_uvm_pkg__03a__03auvm_sequence_base;
class Vtransactions_uvm_pkg__03a__03auvm_vreg;
class Vtransactions_uvm_pkg__03a__03auvm_vreg_field;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_reg_block__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__id;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block>, CData/*0:0*/> __PVT__m_roots;
    VlAssocArray<std::string, IData/*31:0*/> __PVT__m_root_names;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_reg_block__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_reg_block__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_reg_block__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_check_data_width(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ width, CData/*0:0*/ &check_data_width__Vfuncrtn);
    void __VnoInFunc_find_block(Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> &find_block__Vfuncrtn);
    void __VnoInFunc_find_blocks(Vtransactions__Syms* __restrict vlSymsp, std::string name, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block>> &blks, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> accessor, IData/*31:0*/ &find_blocks__Vfuncrtn);
    void __VnoInFunc_get_root_blocks(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block>> &blks);
    void __VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi82> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_reg_block : public Vtransactions_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__locked;
    IData/*31:0*/ __PVT__default_path;
    IData/*31:0*/ __PVT__has_cover;
    IData/*31:0*/ __PVT__cover_on;
    IData/*31:0*/ __PVT__lineno;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__maps;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block>, IData/*31:0*/> __PVT__blks;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg>, IData/*31:0*/> __PVT__regs;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg>, IData/*31:0*/> __PVT__vregs;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem>, IData/*31:0*/> __PVT__mems;
    VlAssocArray<std::string, std::string> __PVT__root_hdl_paths;
    std::string __PVT__default_hdl_path;
    std::string __PVT__fname;
    VlAssignableEvent __PVT__m_uvm_lock_model_complete;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__backdoor;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_string_pool__Tz170> __PVT__hdl_paths_pool;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> __PVT__default_map;
    void __VnoInFunc_Xinit_address_mapsX(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_XsampleX(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_block(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> blk);
    virtual void __VnoInFunc_add_coverage(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    void __VnoInFunc_add_hdl_path(Vtransactions__Syms* __restrict vlSymsp, std::string path, std::string kind);
    void __VnoInFunc_add_map(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_add_mem(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> mem);
    void __VnoInFunc_add_reg(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg> rg);
    void __VnoInFunc_add_vreg(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_build_coverage(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    void __VnoInFunc_clear_hdl_path(Vtransactions__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_create_map(Vtransactions__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> &create_map__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_get_backdoor(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> &get_block_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_blocks(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block>> &blks, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_coverage(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    virtual void __VnoInFunc_get_default_door(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_door__Vfuncrtn);
    void __VnoInFunc_get_default_hdl_path(Vtransactions__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn);
    void __VnoInFunc_get_default_map(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vtransactions__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind);
    virtual void __VnoInFunc_get_map_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> &get_map_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_mem_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> &get_mem_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_memories(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg> &get_reg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_registers(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_vfield_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_virtual_registers(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_vreg_by_name(Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vtransactions__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    void __VnoInFunc_is_hdl_path_root(Vtransactions__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &is_hdl_path_root__Vfuncrtn);
    void __VnoInFunc_is_locked(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &is_locked__Vfuncrtn);
    virtual void __VnoInFunc_lock_model(Vtransactions__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_mirror(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read_mem_by_name(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_read_reg_by_name(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_readmemh(Vtransactions__Syms* __restrict vlSymsp, std::string filename);
    virtual void __VnoInFunc_reset(Vtransactions__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_sample(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_sample_values(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_backdoor(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    virtual void __VnoInFunc_set_default_door(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ door);
    void __VnoInFunc_set_default_hdl_path(Vtransactions__Syms* __restrict vlSymsp, std::string kind);
    void __VnoInFunc_set_default_map(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_set_hdl_path_root(Vtransactions__Syms* __restrict vlSymsp, std::string path, std::string kind);
    virtual void __VnoInFunc_set_lock(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ v);
    virtual void __VnoInFunc_set_parent(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual void __VnoInFunc_unlock_model(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_unregister(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> m);
    virtual VlCoroutine __VnoInFunc_update(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_wait_for_lock(Vtransactions__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_write_mem_by_name(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write_reg_by_name(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_writememh(Vtransactions__Syms* __restrict vlSymsp, std::string filename);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_reg_block(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ has_coverage);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_reg_block();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block>& obj);

#endif  // guard
