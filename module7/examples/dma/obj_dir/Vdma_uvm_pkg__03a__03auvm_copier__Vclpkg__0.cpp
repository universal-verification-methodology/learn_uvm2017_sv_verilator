// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi11> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi11> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_copier"s;
}

void Vdma_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_set_default(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_copier> copier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_set_default\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    coreservice = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(coreservice, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_copier.svh", 198)->__VnoInFunc_set_default_copier(vlSymsp, copier);
}

void Vdma_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_get_default(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_copier> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_get_default\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_copier> __Vtask_get_default_copier__4__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
    coreservice = __Vfunc_get__3__Vfuncout;
    VL_NULL_CHECK(coreservice, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_copier.svh", 205)->__VnoInFunc_get_default_copier(vlProcess, vlSymsp, __Vtask_get_default_copier__4__Vfuncout);
    get_default__Vfuncrtn = __Vtask_get_default_copier__4__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi11> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_copier> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_copier, vlProcess, vlSymsp, "uvm_copier"s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_copier, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_copier"s;
}

Vdma_uvm_pkg__03a__03auvm_copier::Vdma_uvm_pkg__03a__03auvm_copier(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_policy(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__policy = 0U;
    ;
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_copy_object(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_copy_object\n"); );
    // Locals
    IData/*27:0*/ __Vfunc_get_recursion_policy__4__Vfuncout;
    __Vfunc_get_recursion_policy__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__verbosity;
    __Vfunc_uvm_report_enabled__5__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__5__severity;
    __Vfunc_uvm_report_enabled__5__severity = 0;
    std::string __Vfunc_uvm_report_enabled__5__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__8__Vfuncout;
    __Vtask_uvm_report_enabled__8__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__9__id;
    std::string __Vtask_uvm_report_error__9__message;
    IData/*31:0*/ __Vtask_uvm_report_error__9__verbosity;
    __Vtask_uvm_report_error__9__verbosity = 0;
    std::string __Vtask_uvm_report_error__9__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__9__line;
    __Vtask_uvm_report_error__9__line = 0;
    std::string __Vtask_uvm_report_error__9__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__9__report_enabled_checked;
    __Vtask_uvm_report_error__9__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__Vfuncout;
    __Vfunc_uvm_report_enabled__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    std::string __Vfunc_uvm_report_enabled__13__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__16__Vfuncout;
    __Vtask_uvm_report_enabled__16__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__17__id;
    std::string __Vtask_uvm_report_error__17__message;
    IData/*31:0*/ __Vtask_uvm_report_error__17__verbosity;
    __Vtask_uvm_report_error__17__verbosity = 0;
    std::string __Vtask_uvm_report_error__17__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__17__line;
    __Vtask_uvm_report_error__17__line = 0;
    std::string __Vtask_uvm_report_error__17__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__17__report_enabled_checked;
    __Vtask_uvm_report_error__17__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    IData/*27:0*/ __Vfunc_get_recursion_policy__22__Vfuncout;
    __Vfunc_get_recursion_policy__22__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op> __Vfunc_m_get_available_op__23__Vfuncout;
    CData/*0:0*/ __Vtask_user_hook_enabled__26__Vfuncout;
    __Vtask_user_hook_enabled__26__Vfuncout = 0;
    IData/*27:0*/ __Vfunc_get_recursion_policy__29__Vfuncout;
    __Vfunc_get_recursion_policy__29__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__30__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op> field_op;
    {
        if ((0x00040000U == ([&]() {
                        this->__VnoInFunc_get_recursion_policy(vlSymsp, __Vfunc_get_recursion_policy__4__Vfuncout);
                    }(), __Vfunc_get_recursion_policy__4__Vfuncout))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__5__id = "UVM_COPY_POLICY"s;
                            __Vfunc_uvm_report_enabled__5__severity = 2U;
                            __Vfunc_uvm_report_enabled__5__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__6__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__7__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__5__verbosity, (IData)(__Vfunc_uvm_report_enabled__5__severity), __Vfunc_uvm_report_enabled__5__id, __Vtask_uvm_report_enabled__8__Vfuncout);
                            __Vfunc_uvm_report_enabled__5__Vfuncout 
                                = __Vtask_uvm_report_enabled__8__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__5__Vfuncout))) {
                __Vtask_uvm_report_error__9__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__9__context_name = ""s;
                __Vtask_uvm_report_error__9__line = 0x00000052U;
                __Vtask_uvm_report_error__9__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_copier.svh"s;
                __Vtask_uvm_report_error__9__verbosity = 0U;
                __Vtask_uvm_report_error__9__message = "Attempting to make a copy of a object which is a reference"s;
                __Vtask_uvm_report_error__9__id = "UVM_COPY_POLICY"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__10__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__11__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__9__id, __Vtask_uvm_report_error__9__message, __Vtask_uvm_report_error__9__verbosity, __Vtask_uvm_report_error__9__filename, __Vtask_uvm_report_error__9__line, __Vtask_uvm_report_error__9__context_name, (IData)(__Vtask_uvm_report_error__9__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if (((VlNull{} == rhs) | (VlNull{} == lhs))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__13__id = "UVM_COPY_NULL_OBJ"s;
                            __Vfunc_uvm_report_enabled__13__severity = 2U;
                            __Vfunc_uvm_report_enabled__13__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__14__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__15__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), __Vfunc_uvm_report_enabled__13__id, __Vtask_uvm_report_enabled__16__Vfuncout);
                            __Vfunc_uvm_report_enabled__13__Vfuncout 
                                = __Vtask_uvm_report_enabled__16__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__13__Vfuncout))) {
                __Vtask_uvm_report_error__17__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__17__context_name = ""s;
                __Vtask_uvm_report_error__17__line = 0x00000057U;
                __Vtask_uvm_report_error__17__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_copier.svh"s;
                __Vtask_uvm_report_error__17__verbosity = 0U;
                __Vtask_uvm_report_error__17__message = "Attempting to make a copy of a object with null src/target"s;
                __Vtask_uvm_report_error__17__id = "UVM_COPY_NULL_OBJ"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__18__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__19__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__17__id, __Vtask_uvm_report_error__17__message, __Vtask_uvm_report_error__17__verbosity, __Vtask_uvm_report_error__17__filename, __Vtask_uvm_report_error__17__line, __Vtask_uvm_report_error__17__context_name, (IData)(__Vtask_uvm_report_error__17__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, lhs);
        this->__PVT__m_recur_states.at(rhs).at(lhs).at(
                                                       ([&]() {
                    this->__VnoInFunc_get_recursion_policy(vlSymsp, __Vfunc_get_recursion_policy__22__Vfuncout);
                }(), __Vfunc_get_recursion_policy__22__Vfuncout)) = 1U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, __Vfunc_m_get_available_op__23__Vfuncout);
        field_op = __Vfunc_m_get_available_op__23__Vfuncout;
        VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_copier.svh", 94)->__VnoInFunc_set(vlProcess, vlSymsp, 1U, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_copier>{this}, rhs);
        VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_copier.svh", 95)->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, field_op);
        if (([&]() {
                    VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_copier.svh", 96)
             ->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __Vtask_user_hook_enabled__26__Vfuncout);
                }(), (IData)(__Vtask_user_hook_enabled__26__Vfuncout))) {
            VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_copier.svh", 97)->__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        }
        VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_copier.svh", 99)->__VnoInFunc_m_recycle(vlSymsp);
        this->__PVT__m_recur_states.at(rhs).at(lhs).at(
                                                       ([&]() {
                    this->__VnoInFunc_get_recursion_policy(vlSymsp, __Vfunc_get_recursion_policy__29__Vfuncout);
                }(), __Vfunc_get_recursion_policy__29__Vfuncout)) = 2U;
        this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__30__Vfuncout);
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_object_copied(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs, IData/*27:0*/ recursion, IData/*31:0*/ &object_copied__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_object_copied\n"); );
    // Body
    if (this->__PVT__m_recur_states.exists(rhs)) {
        if (this->__PVT__m_recur_states.at(rhs).exists(lhs)) {
            if (this->__PVT__m_recur_states.at(rhs)
                .at(lhs).exists(recursion)) {
                object_copied__Vfuncrtn = this->__PVT__m_recur_states
                    .at(rhs).at(lhs).at(recursion);
            } else {
                object_copied__Vfuncrtn = 0U;
            }
        } else {
            object_copied__Vfuncrtn = 0U;
        }
    } else {
        object_copied__Vfuncrtn = 0U;
    }
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_flush(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_flush\n"); );
    // Body
    this->__PVT__m_recur_states.clear();
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_set_recursion_policy(Vdma__Syms* __restrict vlSymsp, IData/*27:0*/ policy) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_set_recursion_policy\n"); );
    // Body
    this->__PVT__policy = policy;
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_recursion_policy(Vdma__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_recursion_policy\n"); );
    // Body
    get_recursion_policy__Vfuncrtn = this->__PVT__policy;
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_num_copies(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs, IData/*31:0*/ &get_num_copies__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_num_copies\n"); );
    // Body
    {
        if (this->__PVT__m_recur_states.exists(rhs)) {
            get_num_copies__Vfuncrtn = this->__PVT__m_recur_states
                .at(rhs).size();
            goto __Vlabel0;
        }
        get_num_copies__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_first_copy(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_first_copy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_first_copy\n"); );
    // Body
    {
        if (this->__PVT__m_recur_states.exists(rhs)) {
            get_first_copy__Vfuncrtn = this->__PVT__m_recur_states
                .at(rhs).first(lhs);
            goto __Vlabel0;
        }
        get_first_copy__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_next_copy(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_next_copy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_next_copy\n"); );
    // Body
    {
        if (this->__PVT__m_recur_states.exists(rhs)) {
            get_next_copy__Vfuncrtn = this->__PVT__m_recur_states
                .at(rhs).next(lhs);
            goto __Vlabel0;
        }
        get_next_copy__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_last_copy(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_last_copy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_last_copy\n"); );
    // Body
    {
        if (this->__PVT__m_recur_states.exists(rhs)) {
            get_last_copy__Vfuncrtn = this->__PVT__m_recur_states
                .at(rhs).last(lhs);
            goto __Vlabel0;
        }
        get_last_copy__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_prev_copy(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_prev_copy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_prev_copy\n"); );
    // Body
    {
        if (this->__PVT__m_recur_states.exists(rhs)) {
            get_prev_copy__Vfuncrtn = this->__PVT__m_recur_states
                .at(rhs).prev(lhs);
            goto __Vlabel0;
        }
        get_prev_copy__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__32__Vfuncout;
    __Vfunc___VBasicRand__32__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__32__Vfuncout);
            }(), __Vfunc___VBasicRand__32__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_copier::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__policy = 0;
    __PVT__m_recur_states.atDefault().atDefault().atDefault() = 0;
}

Vdma_uvm_pkg__03a__03auvm_copier::~Vdma_uvm_pkg__03a__03auvm_copier() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_copier>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_copier::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_copier::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_copier::to_string_middle\n"); );
    // Body
    std::string out;
    out += "policy:" + VL_TO_STRING(__PVT__policy);
    out += ", m_recur_states:" + VL_TO_STRING(__PVT__m_recur_states);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_policy::to_string_middle();
    return (out);
}
