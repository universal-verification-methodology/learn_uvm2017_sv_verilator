// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA___024UNIT_H_
#define VERILATED_VDMA___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlAssocArray<IData/*31:0*/, CData/*0:0*/> __Venumtab_enum_valid13;
    static VlAssocArray<IData/*31:0*/, std::string> __Venumtab_enum_name25;
    static VlAssocArray<IData/*27:0*/, std::string> __Venumtab_enum_name3;
    static VlAssocArray<IData/*31:0*/, std::string> __Venumtab_enum_name13;
    static VlAssocArray<IData/*31:0*/, std::string> __Venumtab_enum_name63;
    static VlUnpacked<CData/*1:0*/, 4> __Venumtab_enum_next9;
    static VlUnpacked<std::string, 8> __Venumtab_enum_name23;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name9;
    static VlUnpacked<std::string, 2> __Venumtab_enum_name59;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name61;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name81;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name79;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name73;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name71;
    static VlUnpacked<std::string, 8> __Venumtab_enum_name77;
    static VlUnpacked<IData/*31:0*/, 4> __Venumvaltab_0;
    static VlUnpacked<IData/*31:0*/, 8> __Venumvaltab_1;
    static VlUnpacked<IData/*31:0*/, 5> __Venumvaltab_2;

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma___024unit(Vdma__Syms* symsp, const char* v__name);
    ~Vdma___024unit();
    VL_UNCOPYABLE(Vdma___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
