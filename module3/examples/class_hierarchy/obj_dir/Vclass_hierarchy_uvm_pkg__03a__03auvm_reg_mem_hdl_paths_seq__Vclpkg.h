// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vclass_hierarchy_uvm_pkg.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_copier;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_field_op;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_mem;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi185;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_packer;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_policy;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_printer;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_recorder;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_reg;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_sequence__Tz311;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz21;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz23;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz24;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz38;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_base;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi185> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_sequence__Tz311__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq : public Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_sequence__Tz311 {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__abstractions;
    virtual void __VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_execute_field_op(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_field_op> ___05Flocal_op___05F);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_check_mem(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_mem> m, std::string kind);
    virtual void __VnoInFunc_check_reg(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg> r, std::string kind);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_block(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> blk, std::string kind);
    void __VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_field_op> op);
    virtual void __VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset_blk(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> blk);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>& obj);

#endif  // guard
