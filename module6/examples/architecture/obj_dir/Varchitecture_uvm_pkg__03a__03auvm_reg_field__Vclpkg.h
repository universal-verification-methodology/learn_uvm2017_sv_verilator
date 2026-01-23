// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi97;
class Varchitecture_uvm_pkg__03a__03auvm_comparer;
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi106;
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_packer;
class Varchitecture_uvm_pkg__03a__03auvm_printer;
class Varchitecture_uvm_pkg__03a__03auvm_reg;
class Varchitecture_uvm_pkg__03a__03auvm_reg_adapter;
class Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor;
class Varchitecture_uvm_pkg__03a__03auvm_reg_block;
class Varchitecture_uvm_pkg__03a__03auvm_reg_cbs;
class Varchitecture_uvm_pkg__03a__03auvm_reg_field;
class Varchitecture_uvm_pkg__03a__03auvm_reg_frontdoor;
class Varchitecture_uvm_pkg__03a__03auvm_reg_item;
class Varchitecture_uvm_pkg__03a__03auvm_reg_map;
class Varchitecture_uvm_pkg__03a__03auvm_reg_map_info;
class Varchitecture_uvm_pkg__03a__03auvm_root;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_base;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_reg_field__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_predefined;
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__m_policy_names;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_reg_field__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_define_access(Varchitecture__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &define_access__Vfuncrtn);
    void __VnoInFunc_get_max_size(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
    void __VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi106> &get_type__Vfuncrtn);
    void __VnoInFunc_m_predefine_policies(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &m_predefine_policies__Vfuncrtn);
    void __VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_reg_field : public Varchitecture_uvm_pkg__03a__03auvm_object {
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
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> __PVT__m_parent;
    void __VnoInFunc_Xcheck_accessX(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    virtual void __VnoInFunc_XpredictX(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ cur_val, QData/*63:0*/ wr_val, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &XpredictX__Vfuncrtn);
    virtual void __VnoInFunc_XupdateX(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ &XupdateX__Vfuncrtn);
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos, std::string access, CData/*0:0*/ __SYM__volatile, QData/*63:0*/ reset, CData/*0:0*/ has_reset, CData/*0:0*/ is_rand, CData/*0:0*/ individually_accessible);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get(Varchitecture__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    void __VnoInFunc_get_compare(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_compare__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_lsb_pos(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos__Vfuncrtn);
    virtual void __VnoInFunc_get_mirrored_value(Varchitecture__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_register(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> &get_register__Vfuncrtn);
    virtual void __VnoInFunc_get_reset(Varchitecture__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_has_reset(Varchitecture__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn);
    void __VnoInFunc_is_indv_accessible(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> local_map, CData/*0:0*/ &is_indv_accessible__Vfuncrtn);
    virtual void __VnoInFunc_is_known_access(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_known_access__Vfuncrtn);
    virtual void __VnoInFunc_is_volatile(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_volatile__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_post_randomize(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_read(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_pre_randomize(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_read(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_predict(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_reset(Varchitecture__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_access(Varchitecture__Syms* __restrict vlSymsp, std::string mode, std::string &set_access__Vfuncrtn);
    void __VnoInFunc_set_compare(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ check);
    virtual void __VnoInFunc_set_reset(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind);
    virtual void __VnoInFunc_set_volatility(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ __SYM__volatile);
    void __VnoInFunc_uvm_reg_field_valid_setup_constraint(Varchitecture__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_write(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_reg_field(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_reg_field();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_field>& obj);

#endif  // guard
