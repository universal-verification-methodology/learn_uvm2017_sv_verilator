// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi179> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi179> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi179__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_hw_reset_seq"s;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi179> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi179__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq, vlProcess, vlSymsp, "uvm_reg_hw_reset_seq"s)
            : VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_hw_reset_seq"s;
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__7__Vfuncout;
    __Vtask_uvm_report_enabled__7__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__8__id;
    std::string __Vtask_uvm_report_error__8__message;
    IData/*31:0*/ __Vtask_uvm_report_error__8__verbosity;
    __Vtask_uvm_report_error__8__verbosity = 0;
    std::string __Vtask_uvm_report_error__8__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__8__line;
    __Vtask_uvm_report_error__8__line = 0;
    std::string __Vtask_uvm_report_error__8__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__8__report_enabled_checked;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__Vfuncout;
    __Vfunc_uvm_report_enabled__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__verbosity;
    __Vfunc_uvm_report_enabled__12__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__12__severity;
    __Vfunc_uvm_report_enabled__12__severity = 0;
    std::string __Vfunc_uvm_report_enabled__12__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
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
    std::string __Vfunc_get_name__17__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    // Body
    VL_KEEP_THIS;
    {
        if ((VlNull{} == Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323::__PVT__model)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__4__id = "uvm_reg_hw_reset_seq"s;
                            __Vfunc_uvm_report_enabled__4__severity = 2U;
                            __Vfunc_uvm_report_enabled__4__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__5__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__6__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), __Vfunc_uvm_report_enabled__4__id, __Vtask_uvm_report_enabled__7__Vfuncout);
                            __Vfunc_uvm_report_enabled__4__Vfuncout 
                                = __Vtask_uvm_report_enabled__7__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                __Vtask_uvm_report_error__8__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__8__context_name = ""s;
                __Vtask_uvm_report_error__8__line = 0x00000050U;
                __Vtask_uvm_report_error__8__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s;
                __Vtask_uvm_report_error__8__verbosity = 0U;
                __Vtask_uvm_report_error__8__message = "Not block or system specified to run sequence on"s;
                __Vtask_uvm_report_error__8__id = "uvm_reg_hw_reset_seq"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__10__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__8__id, __Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, __Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, __Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__12__id = "STARTING_SEQ"s;
                        __Vfunc_uvm_report_enabled__12__severity = 0U;
                        __Vfunc_uvm_report_enabled__12__verbosity = 0x00000064U;
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
            __Vtask_uvm_report_info__16__line = 0x00000053U;
            __Vtask_uvm_report_info__16__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s;
            __Vtask_uvm_report_info__16__verbosity = 0x00000064U;
            __Vtask_uvm_report_info__16__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("\n\nStarting "s, 
                                                                 ([&]() {
                                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__17__Vfuncout);
                            }(), __Vfunc_get_name__17__Vfuncout)), " sequence...\n"s));
            __Vtask_uvm_report_info__16__id = "STARTING_SEQ"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__16__id, __Vtask_uvm_report_info__16__message, __Vtask_uvm_report_info__16__verbosity, __Vtask_uvm_report_info__16__filename, __Vtask_uvm_report_info__16__line, __Vtask_uvm_report_info__16__context_name, (IData)(__Vtask_uvm_report_info__16__report_enabled_checked));
        }
        this->__VnoInFunc_reset_blk(vlSymsp, Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323::__PVT__model);
        VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323::__PVT__model, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 86)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323::__PVT__model);
        __Vlabel0: ;
    }
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_do_block\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__24__Vfuncout;
    std::string __Vtask_get_full_name__25__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__26__Vfuncout;
    std::string __Vtask_get_full_name__27__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__29__Vfuncout;
    std::string __Vtask_get_full_name__30__Vfuncout;
    CData/*0:0*/ __Vtask_has_reset__31__Vfuncout;
    __Vtask_has_reset__31__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__32__Vfuncout;
    std::string __Vtask_get_full_name__33__Vfuncout;
    CData/*0:0*/ __Vtask_has_reset__36__Vfuncout;
    __Vtask_has_reset__36__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_compare__37__Vfuncout;
    __Vtask_get_compare__37__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__38__Vfuncout;
    std::string __Vtask_get_full_name__39__Vfuncout;
    IData/*31:0*/ __Vtask_get_compare__40__Vfuncout;
    __Vtask_get_compare__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__Vfuncout;
    __Vfunc_uvm_report_enabled__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__verbosity;
    __Vfunc_uvm_report_enabled__42__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__42__severity;
    __Vfunc_uvm_report_enabled__42__severity = 0;
    std::string __Vfunc_uvm_report_enabled__42__id;
    std::string __Vfunc_get_type_name__43__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__46__Vfuncout;
    __Vtask_uvm_report_enabled__46__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__47__id;
    std::string __Vtask_uvm_report_info__47__message;
    IData/*31:0*/ __Vtask_uvm_report_info__47__verbosity;
    __Vtask_uvm_report_info__47__verbosity = 0;
    std::string __Vtask_uvm_report_info__47__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__47__line;
    __Vtask_uvm_report_info__47__line = 0;
    std::string __Vtask_uvm_report_info__47__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__47__report_enabled_checked;
    __Vtask_uvm_report_info__47__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__48__Vfuncout;
    std::string __Vtask_get_full_name__49__Vfuncout;
    std::string __Vfunc_get_type_name__50__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
    IData/*31:0*/ __Vtask_mirror__54__status;
    __Vtask_mirror__54__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__55__Vfuncout;
    __Vfunc_uvm_report_enabled__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__55__verbosity;
    __Vfunc_uvm_report_enabled__55__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__55__severity;
    __Vfunc_uvm_report_enabled__55__severity = 0;
    std::string __Vfunc_uvm_report_enabled__55__id;
    std::string __Vfunc_get_type_name__56__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__59__Vfuncout;
    __Vtask_uvm_report_enabled__59__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__60__id;
    std::string __Vtask_uvm_report_error__60__message;
    IData/*31:0*/ __Vtask_uvm_report_error__60__verbosity;
    __Vtask_uvm_report_error__60__verbosity = 0;
    std::string __Vtask_uvm_report_error__60__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__60__line;
    __Vtask_uvm_report_error__60__line = 0;
    std::string __Vtask_uvm_report_error__60__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__60__report_enabled_checked;
    __Vtask_uvm_report_error__60__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__61__Vfuncout;
    std::string __Vtask_get_full_name__62__Vfuncout;
    std::string __Vfunc_get_type_name__63__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__ridx;
    unnamedblk1__DOT__ridx = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map>> unnamedblk1__DOT__unnamedblk2__DOT__rm;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__status;
    unnamedblk1__DOT__unnamedblk2__DOT__status = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>> unnamedblk1__DOT__unnamedblk2__DOT__fields;
    VlAssocArray<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>, IData/*31:0*/> unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore;
    unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.atDefault() = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block>> unnamedblk6__DOT__blks;
    IData/*31:0*/ unnamedblk6__DOT__unnamedblk7__DOT__i;
    unnamedblk6__DOT__unnamedblk7__DOT__i = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map>> maps;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map>> sub_maps;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg>> regs;
    {
        if (((VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 100)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__25__Vfuncout);
                                            }(), __Vtask_get_full_name__25__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__24__Vfuncout);
                        }(), __Vfunc_get_by_name__24__Vfuncout)) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 102)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__27__Vfuncout);
                                            }(), __Vtask_get_full_name__27__Vfuncout))), "NO_REG_HW_RESET_TEST"s, 0U, __Vfunc_get_by_name__26__Vfuncout);
                        }(), __Vfunc_get_by_name__26__Vfuncout)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 108)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
        unnamedblk1__DOT__ridx = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__ridx, regs.size())) {
            {
                if ((((VlNull{} != ([&]() {
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                            VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 111)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__30__Vfuncout);
                                                        }(), __Vtask_get_full_name__30__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__29__Vfuncout);
                                    }(), __Vfunc_get_by_name__29__Vfuncout)) 
                      || (1U & (~ ([&]() {
                                            VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 113)
                                   ->__VnoInFunc_has_reset(vlSymsp, "HARD"s, 0U, __Vtask_has_reset__31__Vfuncout);
                                        }(), (IData)(__Vtask_has_reset__31__Vfuncout))))) 
                     || (VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 114)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__33__Vfuncout);
                                                    }(), __Vtask_get_full_name__33__Vfuncout))), "NO_REG_HW_RESET_TEST"s, 0U, __Vfunc_get_by_name__32__Vfuncout);
                                }(), __Vfunc_get_by_name__32__Vfuncout)))) {
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 124)->__VnoInFunc_get_maps(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__rm);
                VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 126)->__VnoInFunc_get_fields(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__fields);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx, unnamedblk1__DOT__unnamedblk2__DOT__fields.size())) {
                    if ((((1U & (~ ([&]() {
                                                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 129)
                                    ->__VnoInFunc_has_reset(vlSymsp, "HARD"s, 0U, __Vtask_has_reset__36__Vfuncout);
                                            }(), (IData)(__Vtask_has_reset__36__Vfuncout)))) 
                          || (0U == ([&]() {
                                            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 130)
                                     ->__VnoInFunc_get_compare(vlSymsp, __Vtask_get_compare__37__Vfuncout);
                                        }(), __Vtask_get_compare__37__Vfuncout))) 
                         || (VlNull{} != ([&]() {
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 131)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__39__Vfuncout);
                                                        }(), __Vtask_get_full_name__39__Vfuncout))), "NO_REG_HW_RESET_TEST"s, 0U, __Vfunc_get_by_name__38__Vfuncout);
                                    }(), __Vfunc_get_by_name__38__Vfuncout)))) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 133)->__VnoInFunc_get_compare(vlSymsp, __Vtask_get_compare__40__Vfuncout);
                        unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.at(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx)) 
                            = __Vtask_get_compare__40__Vfuncout;
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 134)->__VnoInFunc_set_compare(vlSymsp, 0U);
                    }
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx);
                }
                if ((unnamedblk1__DOT__unnamedblk2__DOT__fields.size() 
                     != unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.size())) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx = 0U;
                    while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx, unnamedblk1__DOT__unnamedblk2__DOT__rm.size())) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__42__id 
                                            = VL_CVT_PACK_STR_NN(
                                                                 ([&]() {
                                                    this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__43__Vfuncout);
                                                }(), __Vfunc_get_type_name__43__Vfuncout));
                                        __Vfunc_uvm_report_enabled__42__severity = 0U;
                                        __Vfunc_uvm_report_enabled__42__verbosity = 0x00000064U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__44__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__45__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__42__verbosity, (IData)(__Vfunc_uvm_report_enabled__42__severity), __Vfunc_uvm_report_enabled__42__id, __Vtask_uvm_report_enabled__46__Vfuncout);
                                        __Vfunc_uvm_report_enabled__42__Vfuncout 
                                            = __Vtask_uvm_report_enabled__46__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__42__Vfuncout))) {
                            __Vtask_uvm_report_info__47__report_enabled_checked = 1U;
                            __Vtask_uvm_report_info__47__context_name = ""s;
                            __Vtask_uvm_report_info__47__line = 0x0000008eU;
                            __Vtask_uvm_report_info__47__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s;
                            __Vtask_uvm_report_info__47__verbosity = 0x00000064U;
                            __Vtemp_1 = ([&]() {
                                    VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 142)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__48__Vfuncout);
                                }(), __Vtask_get_full_name__48__Vfuncout);
                            __Vtemp_2 = ([&]() {
                                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__rm.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 142)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__49__Vfuncout);
                                }(), __Vtask_get_full_name__49__Vfuncout);
                            __Vtask_uvm_report_info__47__message 
                                = VL_SFORMATF_N_NX("Verifying reset value of register %@ in map \"%@\"...",0,
                                                   -1,
                                                   &(__Vtemp_1),
                                                   -1,
                                                   &(__Vtemp_2)) ;
                            __Vtask_uvm_report_info__47__id 
                                = VL_CVT_PACK_STR_NN(
                                                     ([&]() {
                                        this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__50__Vfuncout);
                                    }(), __Vfunc_get_type_name__50__Vfuncout));
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__51__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__52__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__47__id, __Vtask_uvm_report_info__47__message, __Vtask_uvm_report_info__47__verbosity, __Vtask_uvm_report_info__47__filename, __Vtask_uvm_report_info__47__line, __Vtask_uvm_report_info__47__context_name, (IData)(__Vtask_uvm_report_info__47__report_enabled_checked));
                        }
                        co_await VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 144)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__54__status, 1U, 0U, unnamedblk1__DOT__unnamedblk2__DOT__rm.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx), 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk1__DOT__unnamedblk2__DOT__status 
                            = __Vtask_mirror__54__status;
                        if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__55__id 
                                                = VL_CVT_PACK_STR_NN(
                                                                     ([&]() {
                                                        this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__56__Vfuncout);
                                                    }(), __Vfunc_get_type_name__56__Vfuncout));
                                            __Vfunc_uvm_report_enabled__55__severity = 2U;
                                            __Vfunc_uvm_report_enabled__55__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__57__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__58__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__55__verbosity, (IData)(__Vfunc_uvm_report_enabled__55__severity), __Vfunc_uvm_report_enabled__55__id, __Vtask_uvm_report_enabled__59__Vfuncout);
                                            __Vfunc_uvm_report_enabled__55__Vfuncout 
                                                = __Vtask_uvm_report_enabled__59__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__55__Vfuncout))) {
                                __Vtask_uvm_report_error__60__report_enabled_checked = 1U;
                                __Vtask_uvm_report_error__60__context_name = ""s;
                                __Vtask_uvm_report_error__60__line = 0x00000095U;
                                __Vtask_uvm_report_error__60__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s;
                                __Vtask_uvm_report_error__60__verbosity = 0U;
                                __Vtemp_3 = Vtest_simple_register_uvm___024unit::__Venumtab_enum_name71
                                    [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                                __Vtemp_4 = ([&]() {
                                        VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 149)
                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__61__Vfuncout);
                                    }(), __Vtask_get_full_name__61__Vfuncout);
                                __Vtemp_5 = ([&]() {
                                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__rm.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 149)
                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__62__Vfuncout);
                                    }(), __Vtask_get_full_name__62__Vfuncout);
                                __Vtask_uvm_report_error__60__message 
                                    = VL_SFORMATF_N_NX("Status was %@ when reading reset value of register \"%@\" through map \"%@\".",0,
                                                       -1,
                                                       &(__Vtemp_3),
                                                       -1,
                                                       &(__Vtemp_4),
                                                       -1,
                                                       &(__Vtemp_5)) ;
                                __Vtask_uvm_report_error__60__id 
                                    = VL_CVT_PACK_STR_NN(
                                                         ([&]() {
                                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__63__Vfuncout);
                                        }(), __Vfunc_get_type_name__63__Vfuncout));
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__64__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__64__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__65__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__60__id, __Vtask_uvm_report_error__60__message, __Vtask_uvm_report_error__60__verbosity, __Vtask_uvm_report_error__60__filename, __Vtask_uvm_report_error__60__line, __Vtask_uvm_report_error__60__context_name, (IData)(__Vtask_uvm_report_error__60__report_enabled_checked));
                            }
                        }
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx 
                            = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx);
                    }
                }
                if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.first(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field))) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst = 1U;
                    while (((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst) 
                            || (0U != unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.next(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field)))) {
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst = 0U;
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 155)->__VnoInFunc_set_compare(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore
                                                                                .at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field));
                    }
                }
                __Vlabel1: ;
            }
            unnamedblk1__DOT__ridx = ((IData)(1U) + unnamedblk1__DOT__ridx);
        }
        VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 163)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk6__DOT__blks, 1U);
        unnamedblk6__DOT__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__unnamedblk7__DOT__i, unnamedblk6__DOT__blks.size())) {
            co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk6__DOT__blks.at(unnamedblk6__DOT__unnamedblk7__DOT__i));
            unnamedblk6__DOT__unnamedblk7__DOT__i = 
                ((IData)(1U) + unnamedblk6__DOT__unnamedblk7__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_reset_blk(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_reset_blk\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__71__Vfuncout;
    __Vfunc___Vbasic_randomize__71__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__71__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__71__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323::to_string_middle();
    return (out);
}
