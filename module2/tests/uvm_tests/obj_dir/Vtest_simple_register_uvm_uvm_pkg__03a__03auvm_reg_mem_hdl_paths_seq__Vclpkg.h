// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtest_simple_register_uvm_uvm_pkg.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_comparer;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_copier;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_field_op;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi193;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_packer;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_policy;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz10;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz2;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz8;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz9;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_base;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi193> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323__Vclpkg.h"

class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq : public Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323 {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__abstractions;
    virtual void __VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_execute_field_op(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_field_op> ___05Flocal_op___05F);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_check_mem(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem> m, std::string kind);
    virtual void __VnoInFunc_check_reg(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg> r, std::string kind);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_block(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> blk, std::string kind);
    void __VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_field_op> op);
    virtual void __VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset_blk(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> blk);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>& obj);

#endif  // guard
