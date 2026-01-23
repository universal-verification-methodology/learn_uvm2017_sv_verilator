// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"
VlAssocArray<IData/*31:0*/, CData/*0:0*/> Vtransactions___024unit::__Venumtab_enum_valid13;
VlAssocArray<IData/*31:0*/, std::string> Vtransactions___024unit::__Venumtab_enum_name25;
VlAssocArray<IData/*27:0*/, std::string> Vtransactions___024unit::__Venumtab_enum_name3;
VlAssocArray<IData/*31:0*/, std::string> Vtransactions___024unit::__Venumtab_enum_name13;
VlAssocArray<IData/*31:0*/, std::string> Vtransactions___024unit::__Venumtab_enum_name63;
VlUnpacked<CData/*1:0*/, 4> Vtransactions___024unit::__Venumtab_enum_next9;
VlUnpacked<std::string, 8> Vtransactions___024unit::__Venumtab_enum_name23;
VlUnpacked<std::string, 4> Vtransactions___024unit::__Venumtab_enum_name9;
VlUnpacked<std::string, 2> Vtransactions___024unit::__Venumtab_enum_name59;
VlUnpacked<std::string, 4> Vtransactions___024unit::__Venumtab_enum_name61;
VlUnpacked<std::string, 4> Vtransactions___024unit::__Venumtab_enum_name81;
VlUnpacked<std::string, 4> Vtransactions___024unit::__Venumtab_enum_name79;
VlUnpacked<std::string, 4> Vtransactions___024unit::__Venumtab_enum_name73;
VlUnpacked<std::string, 4> Vtransactions___024unit::__Venumtab_enum_name71;
VlUnpacked<std::string, 8> Vtransactions___024unit::__Venumtab_enum_name77;
VlUnpacked<IData/*31:0*/, 4> Vtransactions___024unit::__Venumvaltab_0;
VlUnpacked<IData/*31:0*/, 8> Vtransactions___024unit::__Venumvaltab_1;
VlUnpacked<IData/*31:0*/, 5> Vtransactions___024unit::__Venumvaltab_2;

void Vtransactions___024unit___ctor_var_reset(Vtransactions___024unit* vlSelf);

Vtransactions___024unit::Vtransactions___024unit(Vtransactions__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtransactions___024unit___ctor_var_reset(this);
}

void Vtransactions___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtransactions___024unit::~Vtransactions___024unit() {
}
