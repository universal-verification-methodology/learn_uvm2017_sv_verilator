// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS___024UNIT__03A__03ATRANSACTIONSTEST__VCLPKG_H_
#define VERILATED_VTRANSACTIONS___024UNIT__03A__03ATRANSACTIONSTEST__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions___024unit__03a__03aBaseTransaction;
class Vtransactions___024unit__03a__03aConstrainedTransaction;
class Vtransactions___024unit__03a__03aExtendedTransaction;
class Vtransactions___024unit__03a__03aTransactionsTest;
class Vtransactions_uvm_pkg__03a__03auvm_component;
class Vtransactions_uvm_pkg__03a__03auvm_component_registry__pi1;
class Vtransactions_uvm_pkg__03a__03auvm_object_wrapper;
class Vtransactions_uvm_pkg__03a__03auvm_phase;
class Vtransactions_uvm_pkg__03a__03auvm_test;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions___024unit__03a__03aTransactionsTest__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtransactions___024unit__03a__03aTransactionsTest__Vclpkg(Vtransactions__Syms* symsp, const char* v__name);
    ~Vtransactions___024unit__03a__03aTransactionsTest__Vclpkg();
    VL_UNCOPYABLE(Vtransactions___024unit__03a__03aTransactionsTest__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component_registry__pi1> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_test__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions___024unit__03a__03aTransactionsTest : public Vtransactions_uvm_pkg__03a__03auvm_test {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtransactions___024unit__03a__03aBaseTransaction> __PVT__base_txn1;
    VlClassRef<Vtransactions___024unit__03a__03aBaseTransaction> __PVT__base_txn2;
    VlClassRef<Vtransactions___024unit__03a__03aExtendedTransaction> __PVT__ext_txn;
    VlClassRef<Vtransactions___024unit__03a__03aConstrainedTransaction> __PVT__constr_txn;
    virtual void __VnoInFunc___Vbasic_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_report_phase(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase);
    VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions___024unit__03a__03aTransactionsTest(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions___024unit__03a__03aTransactionsTest() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions___024unit__03a__03aTransactionsTest>& obj);

#endif  // guard
