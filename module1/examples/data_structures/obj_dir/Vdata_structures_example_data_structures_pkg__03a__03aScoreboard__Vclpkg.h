// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_structures_example.h for the primary calling header

#ifndef VERILATED_VDATA_STRUCTURES_EXAMPLE_DATA_STRUCTURES_PKG__03A__03ASCOREBOARD__VCLPKG_H_
#define VERILATED_VDATA_STRUCTURES_EXAMPLE_DATA_STRUCTURES_PKG__03A__03ASCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdata_structures_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdata_structures_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg(Vdata_structures_example__Syms* symsp, const char* v__name);
    ~Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg();
    VL_UNCOPYABLE(Vdata_structures_example_data_structures_pkg__03a__03aScoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdata_structures_example__Syms;

class Vdata_structures_example_data_structures_pkg__03a__03aScoreboard : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__expected_data;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__actual_data;
    void __VnoInFunc_add_actual(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ id, IData/*31:0*/ data);
    void __VnoInFunc_add_expected(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ id, IData/*31:0*/ data);
    void __VnoInFunc_check(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ id, CData/*0:0*/ &check__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdata_structures_example__Syms* __restrict vlSymsp);
  public:
    Vdata_structures_example_data_structures_pkg__03a__03aScoreboard(Vdata_structures_example__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdata_structures_example_data_structures_pkg__03a__03aScoreboard() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aScoreboard>& obj);

#endif  // guard
