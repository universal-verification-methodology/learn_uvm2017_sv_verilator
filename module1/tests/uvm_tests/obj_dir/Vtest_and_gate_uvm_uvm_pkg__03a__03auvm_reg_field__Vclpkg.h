// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_comparer;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi110;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_printer;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_adapter;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_block;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_cbs;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_item;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map_info;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_predefined;
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__m_policy_names;

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_define_access(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &define_access__Vfuncrtn);
    void __VnoInFunc_get_max_size(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
    void __VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi110> &get_type__Vfuncrtn);
    void __VnoInFunc_m_predefine_policies(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &m_predefine_policies__Vfuncrtn);
    void __VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object {
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
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg> __PVT__m_parent;
    void __VnoInFunc_Xcheck_accessX(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    virtual void __VnoInFunc_XpredictX(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ cur_val, QData/*63:0*/ wr_val, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &XpredictX__Vfuncrtn);
    virtual void __VnoInFunc_XupdateX(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &XupdateX__Vfuncrtn);
    virtual void __VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos, std::string access, CData/*0:0*/ __SYM__volatile, QData/*63:0*/ reset, CData/*0:0*/ has_reset, CData/*0:0*/ is_rand, CData/*0:0*/ individually_accessible);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    void __VnoInFunc_get_compare(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_compare__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_lsb_pos(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos__Vfuncrtn);
    virtual void __VnoInFunc_get_mirrored_value(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_register(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg> &get_register__Vfuncrtn);
    virtual void __VnoInFunc_get_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_has_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn);
    void __VnoInFunc_is_indv_accessible(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ path, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> local_map, CData/*0:0*/ &is_indv_accessible__Vfuncrtn);
    virtual void __VnoInFunc_is_known_access(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_known_access__Vfuncrtn);
    virtual void __VnoInFunc_is_volatile(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_volatile__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_post_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_read(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_pre_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_read(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_predict(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_access(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string mode, std::string &set_access__Vfuncrtn);
    void __VnoInFunc_set_compare(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ check);
    virtual void __VnoInFunc_set_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind);
    virtual void __VnoInFunc_set_volatility(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ __SYM__volatile);
    void __VnoInFunc_uvm_reg_field_valid_setup_constraint(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_write(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field>& obj);

#endif  // guard
