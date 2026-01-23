// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi66;
class Vpools_top_uvm_pkg__03a__03auvm_comparer;
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi75;
class Vpools_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vpools_top_uvm_pkg__03a__03auvm_packer;
class Vpools_top_uvm_pkg__03a__03auvm_printer;
class Vpools_top_uvm_pkg__03a__03auvm_reg;
class Vpools_top_uvm_pkg__03a__03auvm_reg_adapter;
class Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor;
class Vpools_top_uvm_pkg__03a__03auvm_reg_block;
class Vpools_top_uvm_pkg__03a__03auvm_reg_cbs;
class Vpools_top_uvm_pkg__03a__03auvm_reg_field;
class Vpools_top_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vpools_top_uvm_pkg__03a__03auvm_reg_item;
class Vpools_top_uvm_pkg__03a__03auvm_reg_map;
class Vpools_top_uvm_pkg__03a__03auvm_reg_map_info;
class Vpools_top_uvm_pkg__03a__03auvm_root;
class Vpools_top_uvm_pkg__03a__03auvm_sequence_base;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_predefined;
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__m_policy_names;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_define_access(Vpools_top__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &define_access__Vfuncrtn);
    void __VnoInFunc_get_max_size(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
    void __VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi75> &get_type__Vfuncrtn);
    void __VnoInFunc_m_predefine_policies(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &m_predefine_policies__Vfuncrtn);
    void __VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_reg_field : public Vpools_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_volatile;
    CData/*0:0*/ __PVT__m_written;
    CData/*0:0*/ __PVT__m_read_in_progress;
    CData/*0:0*/ __PVT__m_write_in_progress;
    CData/*0:0*/ __PVT__m_individually_accessible;
    IData/*31:0*/ __PVT__m_lsb;
    IData/*31:0*/ __PVT__m_size;
    IData/*31:0*/ __PVT__m_lineno;
    IData/*31:0*/ __PVT__m_cover_on;
    IData/*31:0*/ __PVT__m_check;
    QData/*63:0*/ __PVT__value;
    QData/*63:0*/ __PVT__m_mirrored;
    QData/*63:0*/ __PVT__m_desired;
    VlAssocArray<std::string, QData/*63:0*/> __PVT__m_reset;
    std::string __PVT__m_access;
    std::string __PVT__m_fname;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> __PVT__m_parent;
    void __VnoInFunc_Xcheck_accessX(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    virtual void __VnoInFunc_XpredictX(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ cur_val, QData/*63:0*/ wr_val, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &XpredictX__Vfuncrtn);
    virtual void __VnoInFunc_XupdateX(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ &XupdateX__Vfuncrtn);
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos, std::string access, CData/*0:0*/ __SYM__volatile, QData/*63:0*/ reset, CData/*0:0*/ has_reset, CData/*0:0*/ is_rand, CData/*0:0*/ individually_accessible);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get(Vpools_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    void __VnoInFunc_get_compare(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_compare__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_lsb_pos(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos__Vfuncrtn);
    virtual void __VnoInFunc_get_mirrored_value(Vpools_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_register(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> &get_register__Vfuncrtn);
    virtual void __VnoInFunc_get_reset(Vpools_top__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_has_reset(Vpools_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn);
    void __VnoInFunc_is_indv_accessible(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> local_map, CData/*0:0*/ &is_indv_accessible__Vfuncrtn);
    virtual void __VnoInFunc_is_known_access(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_known_access__Vfuncrtn);
    virtual void __VnoInFunc_is_volatile(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_volatile__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_post_randomize(Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_read(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_pre_randomize(Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_read(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_predict(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_reset(Vpools_top__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_access(Vpools_top__Syms* __restrict vlSymsp, std::string mode, std::string &set_access__Vfuncrtn);
    void __VnoInFunc_set_compare(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ check);
    virtual void __VnoInFunc_set_reset(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind);
    virtual void __VnoInFunc_set_volatility(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ __SYM__volatile);
    void __VnoInFunc_uvm_reg_field_valid_setup_constraint(Vpools_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_write(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_reg_field(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_reg_field();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_field>& obj);

#endif  // guard
