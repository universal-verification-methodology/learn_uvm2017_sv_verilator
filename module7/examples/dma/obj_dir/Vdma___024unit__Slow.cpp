// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"
VlAssocArray<IData/*31:0*/, CData/*0:0*/> Vdma___024unit::__Venumtab_enum_valid13;
VlAssocArray<IData/*31:0*/, std::string> Vdma___024unit::__Venumtab_enum_name25;
VlAssocArray<IData/*27:0*/, std::string> Vdma___024unit::__Venumtab_enum_name3;
VlAssocArray<IData/*31:0*/, std::string> Vdma___024unit::__Venumtab_enum_name13;
VlAssocArray<IData/*31:0*/, std::string> Vdma___024unit::__Venumtab_enum_name63;
VlUnpacked<CData/*1:0*/, 4> Vdma___024unit::__Venumtab_enum_next9;
VlUnpacked<std::string, 8> Vdma___024unit::__Venumtab_enum_name23;
VlUnpacked<std::string, 4> Vdma___024unit::__Venumtab_enum_name9;
VlUnpacked<std::string, 2> Vdma___024unit::__Venumtab_enum_name59;
VlUnpacked<std::string, 4> Vdma___024unit::__Venumtab_enum_name61;
VlUnpacked<std::string, 4> Vdma___024unit::__Venumtab_enum_name81;
VlUnpacked<std::string, 4> Vdma___024unit::__Venumtab_enum_name79;
VlUnpacked<std::string, 4> Vdma___024unit::__Venumtab_enum_name73;
VlUnpacked<std::string, 4> Vdma___024unit::__Venumtab_enum_name71;
VlUnpacked<std::string, 8> Vdma___024unit::__Venumtab_enum_name77;
VlUnpacked<IData/*31:0*/, 4> Vdma___024unit::__Venumvaltab_0;
VlUnpacked<IData/*31:0*/, 8> Vdma___024unit::__Venumvaltab_1;
VlUnpacked<IData/*31:0*/, 5> Vdma___024unit::__Venumvaltab_2;

void Vdma___024unit___ctor_var_reset(Vdma___024unit* vlSelf);

Vdma___024unit::Vdma___024unit(Vdma__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdma___024unit___ctor_var_reset(this);
}

void Vdma___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdma___024unit::~Vdma___024unit() {
}
