// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA___024UNIT__03A__03ADMATXN__VCLPKG_H_
#define VERILATED_VDMA___024UNIT__03A__03ADMATXN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma___024unit__03a__03aDmaTxn;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_registry__pi60;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_sequence_item;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma___024unit__03a__03aDmaTxn__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma___024unit__03a__03aDmaTxn__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma___024unit__03a__03aDmaTxn__Vclpkg();
    VL_UNCOPYABLE(Vdma___024unit__03a__03aDmaTxn__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi60> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vdma__Syms;

class Vdma___024unit__03a__03aDmaTxn : public Vdma_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ __PVT__ch;
    SData/*15:0*/ __PVT__len;
    IData/*31:0*/ __PVT__src;
    IData/*31:0*/ __PVT__dst;
    virtual void __VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    void __VnoInFunc___Vrandwith_hc6e33871__0(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vrandwith_hc6e33871__0__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma___024unit__03a__03aDmaTxn(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string n);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma___024unit__03a__03aDmaTxn() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma___024unit__03a__03aDmaTxn>& obj);

#endif  // guard
