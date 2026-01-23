// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP___024UNIT__03A__03ARECORDERTRANSACTION__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP___024UNIT__03A__03ARECORDERTRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top___024unit__03a__03aRecorderTransaction;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_recorder;
class Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top___024unit__03a__03aRecorderTransaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top___024unit__03a__03aRecorderTransaction__Vclpkg();
    ~Vrecorders_top___024unit__03a__03aRecorderTransaction__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top___024unit__03a__03aRecorderTransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top___024unit__03a__03aRecorderTransaction : public Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__data;
    SData/*15:0*/ __PVT__address;
    IData/*31:0*/ __PVT__timestamp;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_do_record(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top___024unit__03a__03aRecorderTransaction(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top___024unit__03a__03aRecorderTransaction();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction>& obj);

#endif  // guard
