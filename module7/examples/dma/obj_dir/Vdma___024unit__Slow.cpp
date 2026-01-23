// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"
VlAssocArray<IData/*31:0*/, CData/*0:0*/> Vdma___024unit::__Venumtab_enum_valid25;
VlAssocArray<IData/*31:0*/, std::string> Vdma___024unit::__Venumtab_enum_name37;
VlAssocArray<IData/*27:0*/, std::string> Vdma___024unit::__Venumtab_enum_name15;
VlAssocArray<IData/*31:0*/, std::string> Vdma___024unit::__Venumtab_enum_name25;
VlAssocArray<IData/*31:0*/, std::string> Vdma___024unit::__Venumtab_enum_name75;
VlUnpacked<CData/*1:0*/, 4> Vdma___024unit::__Venumtab_enum_next21;
VlUnpacked<std::string, 8> Vdma___024unit::__Venumtab_enum_name35;
VlUnpacked<std::string, 4> Vdma___024unit::__Venumtab_enum_name21;
VlUnpacked<std::string, 2> Vdma___024unit::__Venumtab_enum_name71;
VlUnpacked<std::string, 4> Vdma___024unit::__Venumtab_enum_name73;
VlUnpacked<std::string, 4> Vdma___024unit::__Venumtab_enum_name93;
VlUnpacked<std::string, 4> Vdma___024unit::__Venumtab_enum_name91;
VlUnpacked<std::string, 4> Vdma___024unit::__Venumtab_enum_name85;
VlUnpacked<std::string, 4> Vdma___024unit::__Venumtab_enum_name83;
VlUnpacked<std::string, 8> Vdma___024unit::__Venumtab_enum_name89;
VlUnpacked<IData/*31:0*/, 4> Vdma___024unit::__Venumvaltab_0;
VlUnpacked<IData/*31:0*/, 8> Vdma___024unit::__Venumvaltab_1;
VlUnpacked<IData/*31:0*/, 5> Vdma___024unit::__Venumvaltab_2;

void Vdma___024unit___ctor_var_reset(Vdma___024unit* vlSelf);

Vdma___024unit::Vdma___024unit() = default;
Vdma___024unit::~Vdma___024unit() = default;

void Vdma___024unit::ctor(Vdma__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdma___024unit___ctor_var_reset(this);
}

void Vdma___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdma___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
