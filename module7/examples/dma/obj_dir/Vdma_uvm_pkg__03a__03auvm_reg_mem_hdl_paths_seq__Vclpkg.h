// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vdma_uvm_pkg.h"
class Vdma_uvm_pkg__03a__03auvm_comparer;
class Vdma_uvm_pkg__03a__03auvm_copier;
class Vdma_uvm_pkg__03a__03auvm_field_op;
class Vdma_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vdma_uvm_pkg__03a__03auvm_mem;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_registry__pi182;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_packer;
class Vdma_uvm_pkg__03a__03auvm_policy;
class Vdma_uvm_pkg__03a__03auvm_printer;
class Vdma_uvm_pkg__03a__03auvm_recorder;
class Vdma_uvm_pkg__03a__03auvm_reg;
class Vdma_uvm_pkg__03a__03auvm_reg_block;
class Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq;
class Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307;
class Vdma_uvm_pkg__03a__03auvm_resource_;
class Vdma_uvm_pkg__03a__03auvm_resource__Tz10;
class Vdma_uvm_pkg__03a__03auvm_resource__Tz2;
class Vdma_uvm_pkg__03a__03auvm_resource__Tz8;
class Vdma_uvm_pkg__03a__03auvm_resource__Tz9;
class Vdma_uvm_pkg__03a__03auvm_resource_base;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi182> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq : public Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307 {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__abstractions;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_execute_field_op(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op> ___05Flocal_op___05F);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_check_mem(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_mem> m, std::string kind);
    virtual void __VnoInFunc_check_reg(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg> r, std::string kind);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_block(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_block> blk, std::string kind);
    void __VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op> op);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset_blk(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_block> blk);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>& obj);

#endif  // guard
