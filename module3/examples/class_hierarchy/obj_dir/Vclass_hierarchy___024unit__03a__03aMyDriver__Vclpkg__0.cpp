// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy___024unit__03a__03aMyDriver__Vclpkg::__VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi1> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy___024unit__03a__03aMyDriver__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi1> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy___024unit__03a__03aMyDriver__Vclpkg::__VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy___024unit__03a__03aMyDriver__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "MyDriver"s;
}

void Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi1> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "MyDriver"s;
}

Vclass_hierarchy___024unit__03a__03aMyDriver::Vclass_hierarchy___024unit__03a__03aMyDriver(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_driver__Tz1_TBz1(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyDriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc_build_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    std::string __Vfunc_uvm_report_enabled__3__id;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__6__Vfuncout;
    __Vtask_uvm_report_enabled__6__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__7__id;
    std::string __Vtask_uvm_report_info__7__message;
    IData/*31:0*/ __Vtask_uvm_report_info__7__verbosity;
    __Vtask_uvm_report_info__7__verbosity = 0;
    std::string __Vtask_uvm_report_info__7__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__7__line;
    __Vtask_uvm_report_info__7__line = 0;
    std::string __Vtask_uvm_report_info__7__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__7__report_enabled_checked;
    __Vtask_uvm_report_info__7__report_enabled_checked = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__3__id = "DRIVER"s;
                    __Vfunc_uvm_report_enabled__3__severity = 0U;
                    __Vfunc_uvm_report_enabled__3__verbosity = 0x000000c8U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__4__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__5__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), __Vfunc_uvm_report_enabled__3__id, __Vtask_uvm_report_enabled__6__Vfuncout);
                    __Vfunc_uvm_report_enabled__3__Vfuncout 
                        = __Vtask_uvm_report_enabled__6__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
        __Vtask_uvm_report_info__7__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__7__context_name = ""s;
        __Vtask_uvm_report_info__7__line = 0x0000002dU;
        __Vtask_uvm_report_info__7__filename = "class_hierarchy.sv"s;
        __Vtask_uvm_report_info__7__verbosity = 0x000000c8U;
        __Vtask_uvm_report_info__7__message = "Building driver component"s;
        __Vtask_uvm_report_info__7__id = "DRIVER"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__9__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__7__id, __Vtask_uvm_report_info__7__message, __Vtask_uvm_report_info__7__verbosity, __Vtask_uvm_report_info__7__filename, __Vtask_uvm_report_info__7__line, __Vtask_uvm_report_info__7__context_name, (IData)(__Vtask_uvm_report_info__7__report_enabled_checked));
    }
}

void Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc_connect_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__Vfuncout;
    __Vfunc_uvm_report_enabled__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__verbosity;
    __Vfunc_uvm_report_enabled__12__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__12__severity;
    __Vfunc_uvm_report_enabled__12__severity = 0;
    std::string __Vfunc_uvm_report_enabled__12__id;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__15__Vfuncout;
    __Vtask_uvm_report_enabled__15__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__16__id;
    std::string __Vtask_uvm_report_info__16__message;
    IData/*31:0*/ __Vtask_uvm_report_info__16__verbosity;
    __Vtask_uvm_report_info__16__verbosity = 0;
    std::string __Vtask_uvm_report_info__16__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__16__line;
    __Vtask_uvm_report_info__16__line = 0;
    std::string __Vtask_uvm_report_info__16__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__16__report_enabled_checked;
    __Vtask_uvm_report_info__16__report_enabled_checked = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__12__id = "DRIVER"s;
                    __Vfunc_uvm_report_enabled__12__severity = 0U;
                    __Vfunc_uvm_report_enabled__12__verbosity = 0x000000c8U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__13__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__14__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__12__verbosity, (IData)(__Vfunc_uvm_report_enabled__12__severity), __Vfunc_uvm_report_enabled__12__id, __Vtask_uvm_report_enabled__15__Vfuncout);
                    __Vfunc_uvm_report_enabled__12__Vfuncout 
                        = __Vtask_uvm_report_enabled__15__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__12__Vfuncout))) {
        __Vtask_uvm_report_info__16__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__16__context_name = ""s;
        __Vtask_uvm_report_info__16__line = 0x00000032U;
        __Vtask_uvm_report_info__16__filename = "class_hierarchy.sv"s;
        __Vtask_uvm_report_info__16__verbosity = 0x000000c8U;
        __Vtask_uvm_report_info__16__message = "Connecting driver component"s;
        __Vtask_uvm_report_info__16__id = "DRIVER"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__17__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__18__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__16__id, __Vtask_uvm_report_info__16__message, __Vtask_uvm_report_info__16__verbosity, __Vtask_uvm_report_info__16__filename, __Vtask_uvm_report_info__16__line, __Vtask_uvm_report_info__16__context_name, (IData)(__Vtask_uvm_report_info__16__report_enabled_checked));
    }
}

VlCoroutine Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc_run_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20__Vfuncout;
    __Vfunc_uvm_report_enabled__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20__verbosity;
    __Vfunc_uvm_report_enabled__20__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__20__severity;
    __Vfunc_uvm_report_enabled__20__severity = 0;
    std::string __Vfunc_uvm_report_enabled__20__id;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__23__Vfuncout;
    __Vtask_uvm_report_enabled__23__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__24__id;
    std::string __Vtask_uvm_report_info__24__message;
    IData/*31:0*/ __Vtask_uvm_report_info__24__verbosity;
    __Vtask_uvm_report_info__24__verbosity = 0;
    std::string __Vtask_uvm_report_info__24__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__24__line;
    __Vtask_uvm_report_info__24__line = 0;
    std::string __Vtask_uvm_report_info__24__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__24__report_enabled_checked;
    __Vtask_uvm_report_info__24__report_enabled_checked = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    // Body
    VL_KEEP_THIS;
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__20__id = "DRIVER"s;
                    __Vfunc_uvm_report_enabled__20__severity = 0U;
                    __Vfunc_uvm_report_enabled__20__verbosity = 0x000000c8U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__21__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__22__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__20__verbosity, (IData)(__Vfunc_uvm_report_enabled__20__severity), __Vfunc_uvm_report_enabled__20__id, __Vtask_uvm_report_enabled__23__Vfuncout);
                    __Vfunc_uvm_report_enabled__20__Vfuncout 
                        = __Vtask_uvm_report_enabled__23__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__20__Vfuncout))) {
        __Vtask_uvm_report_info__24__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__24__context_name = ""s;
        __Vtask_uvm_report_info__24__line = 0x00000036U;
        __Vtask_uvm_report_info__24__filename = "class_hierarchy.sv"s;
        __Vtask_uvm_report_info__24__verbosity = 0x000000c8U;
        __Vtask_uvm_report_info__24__message = "Driver run_phase executing"s;
        __Vtask_uvm_report_info__24__id = "DRIVER"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__25__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__26__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__24__id, __Vtask_uvm_report_info__24__message, __Vtask_uvm_report_info__24__verbosity, __Vtask_uvm_report_info__24__filename, __Vtask_uvm_report_info__24__line, __Vtask_uvm_report_info__24__context_name, (IData)(__Vtask_uvm_report_info__24__report_enabled_checked));
    }
    VL_NULL_CHECK(phase, "class_hierarchy.sv", 55)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy___024unit__03a__03aMyDriver>{this}, ""s, 1U);
    co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                            vlProcess, 
                                            "class_hierarchy.sv", 
                                            56);
    VL_NULL_CHECK(phase, "class_hierarchy.sv", 57)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                               VlClassRef<Vclass_hierarchy___024unit__03a__03aMyDriver>{this}, ""s, 1U);
}

void Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__31__Vfuncout;
    __Vfunc___Vbasic_randomize__31__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__31__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__31__Vfuncout));
}

void Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc___Vbasic_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyDriver::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vclass_hierarchy___024unit__03a__03aMyDriver::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyDriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy___024unit__03a__03aMyDriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyDriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy___024unit__03a__03aMyDriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyDriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy___024unit__03a__03aMyDriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyDriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vclass_hierarchy_uvm_pkg__03a__03auvm_driver__Tz1_TBz1::to_string_middle();
    return (out);
}
