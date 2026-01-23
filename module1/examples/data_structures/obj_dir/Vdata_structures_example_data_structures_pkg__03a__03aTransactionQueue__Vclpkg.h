// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_structures_example.h for the primary calling header

#ifndef VERILATED_VDATA_STRUCTURES_EXAMPLE_DATA_STRUCTURES_PKG__03A__03ATRANSACTIONQUEUE__VCLPKG_H_
#define VERILATED_VDATA_STRUCTURES_EXAMPLE_DATA_STRUCTURES_PKG__03A__03ATRANSACTIONQUEUE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction;


class Vdata_structures_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdata_structures_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg(Vdata_structures_example__Syms* symsp, const char* v__name);
    ~Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg();
    VL_UNCOPYABLE(Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdata_structures_example__Syms;

class Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction>> __PVT__queue;
    void __VnoInFunc_is_empty(Vdata_structures_example__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    void __VnoInFunc_pop(Vdata_structures_example__Syms* __restrict vlSymsp, VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction> &pop__Vfuncrtn);
    void __VnoInFunc_push(Vdata_structures_example__Syms* __restrict vlSymsp, VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction> txn);
    void __VnoInFunc_size(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdata_structures_example__Syms* __restrict vlSymsp);
  public:
    Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue(Vdata_structures_example__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue>& obj);

#endif  // guard
