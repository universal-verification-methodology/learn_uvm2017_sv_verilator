// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP___024UNIT__03A__03ATRANSACTIONPOOL__VCLPKG_H_
#define VERILATED_VPOOLS_TOP___024UNIT__03A__03ATRANSACTIONPOOL__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top___024unit__03a__03aPoolTransaction;
class Vpools_top___024unit__03a__03aTransactionPool;
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4;
class Vpools_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vpools_top_uvm_pkg__03a__03auvm_phase;
class Vpools_top_uvm_pkg__03a__03auvm_root;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top___024unit__03a__03aTransactionPool__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpools_top___024unit__03a__03aTransactionPool__Vclpkg(Vpools_top__Syms* symsp, const char* v__name);
    ~Vpools_top___024unit__03a__03aTransactionPool__Vclpkg();
    VL_UNCOPYABLE(Vpools_top___024unit__03a__03aTransactionPool__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top___024unit__03a__03aTransactionPool : public Vpools_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__pool_size;
    IData/*31:0*/ __PVT__allocated_count;
    IData/*31:0*/ __PVT__freed_count;
    VlQueue<VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction>> __PVT__pool;
    virtual void __VnoInFunc___Vbasic_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_allocate(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction> &allocate__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_free(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction> txn);
    virtual void __VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_initialize_pool(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_report_phase(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top___024unit__03a__03aTransactionPool(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top___024unit__03a__03aTransactionPool() {}
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top___024unit__03a__03aTransactionPool>& obj);

#endif  // guard
