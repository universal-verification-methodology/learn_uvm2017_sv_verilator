// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_REG_SINGLE_BIT_BASH_SEQ__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_REG_SINGLE_BIT_BASH_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_registry__pi169;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_reg;
class Vdma_uvm_pkg__03a__03auvm_reg_field;
class Vdma_uvm_pkg__03a__03auvm_reg_map;
class Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307;
class Vdma_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq;
class Vdma_uvm_pkg__03a__03auvm_resource__Tz30;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi169> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq : public Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg> __PVT__rg;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_bash_kth_bit(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ k, std::string mode, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ dc_mask);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>& obj);

#endif  // guard
