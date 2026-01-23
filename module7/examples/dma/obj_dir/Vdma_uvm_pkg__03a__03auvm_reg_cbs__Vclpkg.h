// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_REG_CBS__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_REG_CBS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_callback;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_registry__pi93;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_reg_cbs;
class Vdma_uvm_pkg__03a__03auvm_reg_field;
class Vdma_uvm_pkg__03a__03auvm_reg_item;
class Vdma_uvm_pkg__03a__03auvm_reg_map;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_reg_cbs__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_reg_cbs__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_reg_cbs__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_reg_cbs__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi93> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_callback__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_reg_cbs : public Vdma_uvm_pkg__03a__03auvm_callback {
  public:
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_decode(Vdma__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &data);
    virtual void __VnoInFunc_encode(Vdma__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &data);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_post_predict(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_field> fld, QData/*63:0*/ previous, QData/*63:0*/ &value, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_post_read(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_reg_cbs(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_reg_cbs();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_cbs>& obj);

#endif  // guard
