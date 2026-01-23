// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_VREG_FIELD__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_VREG_FIELD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_callback_iter__pi69;
class Vtransactions_uvm_pkg__03a__03auvm_comparer;
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_mem;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi78;
class Vtransactions_uvm_pkg__03a__03auvm_object_wrapper;
class Vtransactions_uvm_pkg__03a__03auvm_packer;
class Vtransactions_uvm_pkg__03a__03auvm_printer;
class Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtransactions_uvm_pkg__03a__03auvm_reg_block;
class Vtransactions_uvm_pkg__03a__03auvm_reg_map;
class Vtransactions_uvm_pkg__03a__03auvm_root;
class Vtransactions_uvm_pkg__03a__03auvm_sequence_base;
class Vtransactions_uvm_pkg__03a__03auvm_vreg;
class Vtransactions_uvm_pkg__03a__03auvm_vreg_field;
class Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_vreg_field__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_vreg_field_cbs;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_vreg_field__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_vreg_field__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_vreg_field__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi78> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_vreg_field : public Vtransactions_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__read_in_progress;
    CData/*0:0*/ __PVT__write_in_progress;
    IData/*31:0*/ __PVT__lsb;
    IData/*31:0*/ __PVT__size;
    IData/*31:0*/ __PVT__lineno;
    std::string __PVT__fname;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg> __PVT__parent;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_access(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_lsb_pos_in_register(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos_in_register__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_register(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg> &get_register__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ &path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> &map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_post_write(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_pre_read(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_pre_write(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_vreg_field(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_vreg_field();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field>& obj);

#endif  // guard
