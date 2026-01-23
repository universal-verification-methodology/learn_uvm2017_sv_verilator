// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA___024UNIT__03A__03ADMASEQ__VCLPKG_H_
#define VERILATED_VDMA___024UNIT__03A__03ADMASEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma___024unit__03a__03aDmaSeq;
class Vdma___024unit__03a__03aDmaTxn;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_registry__pi61;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma___024unit__03a__03aDmaSeq__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma___024unit__03a__03aDmaSeq__Vclpkg();
    ~Vdma___024unit__03a__03aDmaSeq__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma___024unit__03a__03aDmaSeq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi61> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126__Vclpkg.h"

class Vdma__Syms;

class Vdma___024unit__03a__03aDmaSeq : public Vdma_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126 {
  public:
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma___024unit__03a__03aDmaSeq(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string n);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma___024unit__03a__03aDmaSeq();
};

std::string VL_TO_STRING(const VlClassRef<Vdma___024unit__03a__03aDmaSeq>& obj);

#endif  // guard
