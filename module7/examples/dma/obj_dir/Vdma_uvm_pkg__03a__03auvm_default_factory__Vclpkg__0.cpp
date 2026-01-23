// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

std::string VL_TO_STRING(const Vdma_m_inst_typename_alias_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_default_factory__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{orig:" + VL_TO_STRING(obj.__PVT__orig);
    out += ", alias_type_name:" + VL_TO_STRING(obj.__PVT__alias_type_name);
    out += ", full_inst_path:" + VL_TO_STRING(obj.__PVT__full_inst_path);
    out += "}";
    return (out);
}

Vdma_uvm_pkg__03a__03auvm_default_factory::Vdma_uvm_pkg__03a__03auvm_default_factory(Vdma__Syms* __restrict vlSymsp)
    : Vdma_uvm_pkg__03a__03auvm_factory(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_register(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_register\n"); );
    // Locals
    std::string __Vtask_get_type_name__2__Vfuncout;
    std::string __Vtask_get_type_name__3__Vfuncout;
    std::string __Vtask_get_type_name__4__Vfuncout;
    std::string __Vtask_uvm_report_warning__5__id;
    std::string __Vtask_uvm_report_warning__5__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__5__verbosity;
    __Vtask_uvm_report_warning__5__verbosity = 0;
    std::string __Vtask_uvm_report_warning__5__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__5__line;
    __Vtask_uvm_report_warning__5__line = 0;
    std::string __Vtask_uvm_report_warning__5__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__5__report_enabled_checked;
    __Vtask_uvm_report_warning__5__report_enabled_checked = 0;
    std::string __Vtask_get_type_name__6__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    std::string __Vtask_get_type_name__10__Vfuncout;
    std::string __Vtask_get_type_name__11__Vfuncout;
    std::string __Vtask_get_type_name__12__Vfuncout;
    std::string __Vtask_uvm_report_warning__13__id;
    std::string __Vtask_uvm_report_warning__13__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__13__verbosity;
    __Vtask_uvm_report_warning__13__verbosity = 0;
    std::string __Vtask_uvm_report_warning__13__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__13__line;
    __Vtask_uvm_report_warning__13__line = 0;
    std::string __Vtask_uvm_report_warning__13__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__13__report_enabled_checked;
    __Vtask_uvm_report_warning__13__report_enabled_checked = 0;
    std::string __Vtask_get_type_name__14__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    CData/*0:0*/ __Vfunc_m_matches_type_pair__18__Vfuncout;
    __Vfunc_m_matches_type_pair__18__Vfuncout = 0;
    std::string __Vtask_get_type_name__19__Vfuncout;
    CData/*0:0*/ __Vfunc_m_matches_type_pair__20__Vfuncout;
    __Vfunc_m_matches_type_pair__20__Vfuncout = 0;
    std::string __Vtask_get_type_name__21__Vfuncout;
    // Body
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override>> unnamedblk13__DOT__overrides;
    IData/*31:0*/ unnamedblk13__DOT__unnamedblk14__DOT__index;
    unnamedblk13__DOT__unnamedblk14__DOT__index = 0;
    if ((VlNull{} == obj)) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NULLWR"s, "Attempting to register a null object with the factory"s, 0U, ""s, 0U, ""s, 0U);
    }
    if (((""s != ([&]() {
                        VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1042)
                  ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__2__Vfuncout);
                    }(), __Vtask_get_type_name__2__Vfuncout)) 
         && ("<unknown>"s != ([&]() {
                        VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1042)
                              ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__3__Vfuncout);
                    }(), __Vtask_get_type_name__3__Vfuncout)))) {
        if (this->__PVT__m_type_names.exists(([&]() {
                        VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1043)
                                              ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__4__Vfuncout);
                    }(), __Vtask_get_type_name__4__Vfuncout))) {
            __Vtask_uvm_report_warning__5__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__5__context_name = ""s;
            __Vtask_uvm_report_warning__5__line = 0U;
            __Vtask_uvm_report_warning__5__filename = ""s;
            __Vtask_uvm_report_warning__5__verbosity = 0U;
            __Vtask_uvm_report_warning__5__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN("Type name '"s, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1044)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__6__Vfuncout);
                                }(), __Vtask_get_type_name__6__Vfuncout)), "' already registered with factory. No string-based lookup "s), "support for multiple types with the same type name."s));
            __Vtask_uvm_report_warning__5__id = "TPRGED"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__5__id, __Vtask_uvm_report_warning__5__message, __Vtask_uvm_report_warning__5__verbosity, __Vtask_uvm_report_warning__5__filename, __Vtask_uvm_report_warning__5__line, __Vtask_uvm_report_warning__5__context_name, (IData)(__Vtask_uvm_report_warning__5__report_enabled_checked));
        } else {
            this->__PVT__m_type_names.at(([&]() {
                        VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1048)
                                          ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__10__Vfuncout);
                    }(), __Vtask_get_type_name__10__Vfuncout)) 
                = obj;
        }
    }
    if (this->__PVT__m_types.exists(obj)) {
        if (((""s != ([&]() {
                            VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1052)
                      ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__11__Vfuncout);
                        }(), __Vtask_get_type_name__11__Vfuncout)) 
             && ("<unknown>"s != ([&]() {
                            VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1052)
                                  ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__12__Vfuncout);
                        }(), __Vtask_get_type_name__12__Vfuncout)))) {
            __Vtask_uvm_report_warning__13__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__13__context_name = ""s;
            __Vtask_uvm_report_warning__13__line = 0U;
            __Vtask_uvm_report_warning__13__filename = ""s;
            __Vtask_uvm_report_warning__13__verbosity = 0U;
            __Vtask_uvm_report_warning__13__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Object type '"s, 
                                                                   ([&]() {
                                VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1053)
                                                                    ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__14__Vfuncout);
                            }(), __Vtask_get_type_name__14__Vfuncout)), "' already registered with factory. "s));
            __Vtask_uvm_report_warning__13__id = "TPRGED"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__13__id, __Vtask_uvm_report_warning__13__message, __Vtask_uvm_report_warning__13__verbosity, __Vtask_uvm_report_warning__13__filename, __Vtask_uvm_report_warning__13__line, __Vtask_uvm_report_warning__13__context_name, (IData)(__Vtask_uvm_report_warning__13__report_enabled_checked));
        }
    } else {
        this->__PVT__m_types.at(obj) = 1U;
        unnamedblk13__DOT__overrides = VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override>>::consCC(this->__PVT__m_inst_overrides, 
                                                                                this->__PVT__m_type_overrides);
        unnamedblk13__DOT__unnamedblk14__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk13__DOT__unnamedblk14__DOT__index, unnamedblk13__DOT__overrides.size())) {
            if (([&]() {
                        this->__VnoInFunc_m_matches_type_pair(vlSymsp, VL_NULL_CHECK(unnamedblk13__DOT__overrides.at(unnamedblk13__DOT__unnamedblk14__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1065)
                                                              ->__PVT__orig, VlNull{}, 
                                                              VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                        VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1067)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__19__Vfuncout);
                                    }(), __Vtask_get_type_name__19__Vfuncout)), __Vfunc_m_matches_type_pair__18__Vfuncout);
                    }(), (IData)(__Vfunc_m_matches_type_pair__18__Vfuncout))) {
                VL_NULL_CHECK(unnamedblk13__DOT__overrides.atWriteAppend(unnamedblk13__DOT__unnamedblk14__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1068)->__PVT__orig.__PVT__m_type 
                    = obj;
            }
            if (([&]() {
                        this->__VnoInFunc_m_matches_type_pair(vlSymsp, VL_NULL_CHECK(unnamedblk13__DOT__overrides.at(unnamedblk13__DOT__unnamedblk14__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1070)
                                                              ->__PVT__ovrd, VlNull{}, 
                                                              VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                        VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1072)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__21__Vfuncout);
                                    }(), __Vtask_get_type_name__21__Vfuncout)), __Vfunc_m_matches_type_pair__20__Vfuncout);
                    }(), (IData)(__Vfunc_m_matches_type_pair__20__Vfuncout))) {
                VL_NULL_CHECK(unnamedblk13__DOT__overrides.atWriteAppend(unnamedblk13__DOT__unnamedblk14__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1073)->__PVT__ovrd.__PVT__m_type 
                    = obj;
            }
            unnamedblk13__DOT__unnamedblk14__DOT__index 
                = ((IData)(1U) + unnamedblk13__DOT__unnamedblk14__DOT__index);
        }
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_type\n"); );
    // Locals
    std::string __Vtask_get_type_name__22__Vfuncout;
    std::string __Vtask_get_type_name__23__Vfuncout;
    std::string __Vtask_uvm_report_warning__24__id;
    std::string __Vtask_uvm_report_warning__24__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__24__verbosity;
    __Vtask_uvm_report_warning__24__verbosity = 0;
    std::string __Vtask_uvm_report_warning__24__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__24__line;
    __Vtask_uvm_report_warning__24__line = 0;
    std::string __Vtask_uvm_report_warning__24__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__24__report_enabled_checked;
    __Vtask_uvm_report_warning__24__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    std::string __Vtask_uvm_report_warning__28__id;
    std::string __Vtask_uvm_report_warning__28__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__verbosity;
    __Vtask_uvm_report_warning__28__verbosity = 0;
    std::string __Vtask_uvm_report_warning__28__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__line;
    __Vtask_uvm_report_warning__28__line = 0;
    std::string __Vtask_uvm_report_warning__28__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__28__report_enabled_checked;
    __Vtask_uvm_report_warning__28__report_enabled_checked = 0;
    std::string __Vtask_get_type_name__29__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    CData/*0:0*/ __Vfunc_m_matches_type_override__35__Vfuncout;
    __Vfunc_m_matches_type_override__35__Vfuncout = 0;
    std::string __Vtask_get_type_name__36__Vfuncout;
    std::string __Vtask_get_type_name__37__Vfuncout;
    std::string __Vtask_uvm_report_info__38__id;
    std::string __Vtask_uvm_report_info__38__message;
    IData/*31:0*/ __Vtask_uvm_report_info__38__verbosity;
    __Vtask_uvm_report_info__38__verbosity = 0;
    std::string __Vtask_uvm_report_info__38__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__38__line;
    __Vtask_uvm_report_info__38__line = 0;
    std::string __Vtask_uvm_report_info__38__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__38__report_enabled_checked;
    __Vtask_uvm_report_info__38__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    std::string __Vtask_get_type_name__42__Vfuncout;
    std::string __Vtask_uvm_report_info__43__id;
    std::string __Vtask_uvm_report_info__43__message;
    IData/*31:0*/ __Vtask_uvm_report_info__43__verbosity;
    __Vtask_uvm_report_info__43__verbosity = 0;
    std::string __Vtask_uvm_report_info__43__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__43__line;
    __Vtask_uvm_report_info__43__line = 0;
    std::string __Vtask_uvm_report_info__43__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__43__report_enabled_checked;
    __Vtask_uvm_report_info__43__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    std::string __Vtask_get_type_name__47__Vfuncout;
    std::string __Vtask_get_type_name__48__Vfuncout;
    std::string __Vtask_get_type_name__50__Vfuncout;
    std::string __Vtask_get_type_name__51__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk15__DOT__index;
    unnamedblk15__DOT__index = 0;
    std::string unnamedblk15__DOT__unnamedblk16__DOT__msg;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override> unnamedblk17__DOT__override;
    CData/*0:0*/ replaced;
    replaced = 0;
    {
        if ((original_type == override_type)) {
            if (((""s == ([&]() {
                                VL_NULL_CHECK(original_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1091)
                          ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__22__Vfuncout);
                            }(), __Vtask_get_type_name__22__Vfuncout)) 
                 || ("<unknown>"s == ([&]() {
                                VL_NULL_CHECK(original_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1091)
                                      ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__23__Vfuncout);
                            }(), __Vtask_get_type_name__23__Vfuncout)))) {
                __Vtask_uvm_report_warning__24__report_enabled_checked = 0U;
                __Vtask_uvm_report_warning__24__context_name = ""s;
                __Vtask_uvm_report_warning__24__line = 0U;
                __Vtask_uvm_report_warning__24__filename = ""s;
                __Vtask_uvm_report_warning__24__verbosity = 0U;
                __Vtask_uvm_report_warning__24__message = "Original and override type arguments are identical"s;
                __Vtask_uvm_report_warning__24__id = "TYPDUP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__25__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__26__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__24__id, __Vtask_uvm_report_warning__24__message, __Vtask_uvm_report_warning__24__verbosity, __Vtask_uvm_report_warning__24__filename, __Vtask_uvm_report_warning__24__line, __Vtask_uvm_report_warning__24__context_name, (IData)(__Vtask_uvm_report_warning__24__report_enabled_checked));
            } else {
                __Vtask_uvm_report_warning__28__report_enabled_checked = 0U;
                __Vtask_uvm_report_warning__28__context_name = ""s;
                __Vtask_uvm_report_warning__28__line = 0U;
                __Vtask_uvm_report_warning__28__filename = ""s;
                __Vtask_uvm_report_warning__28__verbosity = 0U;
                __Vtask_uvm_report_warning__28__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Original and override type arguments are identical: "s, 
                                                        ([&]() {
                                VL_NULL_CHECK(original_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1097)
                                                         ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__29__Vfuncout);
                            }(), __Vtask_get_type_name__29__Vfuncout)));
                __Vtask_uvm_report_warning__28__id = "TYPDUP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__30__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__28__id, __Vtask_uvm_report_warning__28__message, __Vtask_uvm_report_warning__28__verbosity, __Vtask_uvm_report_warning__28__filename, __Vtask_uvm_report_warning__28__line, __Vtask_uvm_report_warning__28__context_name, (IData)(__Vtask_uvm_report_warning__28__report_enabled_checked));
            }
        }
        if ((! this->__PVT__m_types.exists(original_type))) {
            this->__VnoInFunc_register(vlProcess, vlSymsp, original_type);
        }
        if ((! this->__PVT__m_types.exists(override_type))) {
            this->__VnoInFunc_register(vlProcess, vlSymsp, override_type);
        }
        {
            unnamedblk15__DOT__index = 0U;
            while (VL_LTS_III(32, unnamedblk15__DOT__index, this->__PVT__m_type_overrides.size())) {
                if (([&]() {
                            this->__VnoInFunc_m_matches_type_override(vlSymsp, this->__PVT__m_type_overrides.at(unnamedblk15__DOT__index), original_type, 
                                                                      VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                            VL_NULL_CHECK(original_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1112)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__36__Vfuncout);
                                        }(), __Vtask_get_type_name__36__Vfuncout)), ""s, 1U, 0U, __Vfunc_m_matches_type_override__35__Vfuncout);
                        }(), (IData)(__Vfunc_m_matches_type_override__35__Vfuncout))) {
                    unnamedblk15__DOT__unnamedblk16__DOT__msg 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("Original object type '"s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(original_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1114)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__37__Vfuncout);
                                        }(), __Vtask_get_type_name__37__Vfuncout)), "' already registered to produce '"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk15__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1116)
                                                        ->__PVT__ovrd
                                                        .__PVT__m_type_name), "'"s);
                    if ((1U & (~ (IData)(replace)))) {
                        unnamedblk15__DOT__unnamedblk16__DOT__msg 
                            = VL_CONCATN_NNN(unnamedblk15__DOT__unnamedblk16__DOT__msg, ".  Set 'replace' argument to replace the existing entry."s);
                        __Vtask_uvm_report_info__38__report_enabled_checked = 0U;
                        __Vtask_uvm_report_info__38__context_name = ""s;
                        __Vtask_uvm_report_info__38__line = 0U;
                        __Vtask_uvm_report_info__38__filename = ""s;
                        __Vtask_uvm_report_info__38__verbosity = 0x000000c8U;
                        __Vtask_uvm_report_info__38__message 
                            = unnamedblk15__DOT__unnamedblk16__DOT__msg;
                        __Vtask_uvm_report_info__38__id = "TPREGD"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__39__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__40__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__38__id, __Vtask_uvm_report_info__38__message, __Vtask_uvm_report_info__38__verbosity, __Vtask_uvm_report_info__38__filename, __Vtask_uvm_report_info__38__line, __Vtask_uvm_report_info__38__context_name, (IData)(__Vtask_uvm_report_info__38__report_enabled_checked));
                        goto __Vlabel0;
                    }
                    unnamedblk15__DOT__unnamedblk16__DOT__msg 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(unnamedblk15__DOT__unnamedblk16__DOT__msg, ".  Replacing with override to produce type '"s), 
                                                        ([&]() {
                                    VL_NULL_CHECK(override_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1123)
                                                         ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__42__Vfuncout);
                                }(), __Vtask_get_type_name__42__Vfuncout)), "'."s);
                    __Vtask_uvm_report_info__43__report_enabled_checked = 0U;
                    __Vtask_uvm_report_info__43__context_name = ""s;
                    __Vtask_uvm_report_info__43__line = 0U;
                    __Vtask_uvm_report_info__43__filename = ""s;
                    __Vtask_uvm_report_info__43__verbosity = 0x000000c8U;
                    __Vtask_uvm_report_info__43__message 
                        = unnamedblk15__DOT__unnamedblk16__DOT__msg;
                    __Vtask_uvm_report_info__43__id = "TPREGR"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__44__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__45__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__43__id, __Vtask_uvm_report_info__43__message, __Vtask_uvm_report_info__43__verbosity, __Vtask_uvm_report_info__43__filename, __Vtask_uvm_report_info__43__line, __Vtask_uvm_report_info__43__context_name, (IData)(__Vtask_uvm_report_info__43__report_enabled_checked));
                    replaced = 1U;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk15__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1126)->__PVT__orig.__PVT__m_type 
                        = original_type;
                    VL_NULL_CHECK(original_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1127)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__47__Vfuncout);
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk15__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1127)->__PVT__orig.__PVT__m_type_name 
                        = __Vtask_get_type_name__47__Vfuncout;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk15__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1128)->__PVT__ovrd.__PVT__m_type 
                        = override_type;
                    VL_NULL_CHECK(override_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1129)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__48__Vfuncout);
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk15__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1129)->__PVT__ovrd.__PVT__m_type_name 
                        = __Vtask_get_type_name__48__Vfuncout;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk15__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1130)->__PVT__replace 
                        = replace;
                } else if ((VlNull{} == VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk15__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1132)
                            ->__PVT__orig.__PVT__m_type)) {
                    goto __Vlabel1;
                }
                unnamedblk15__DOT__index = ((IData)(1U) 
                                            + unnamedblk15__DOT__index);
            }
            __Vlabel1: ;
        }
        if ((1U & (~ (IData)(replaced)))) {
            unnamedblk17__DOT__override = VL_NEW(Vdma_uvm_pkg__03a__03auvm_factory_override, vlSymsp, ""s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    ([&]() {
                            std::string __Vtask_get_type_name__50__Vfuncout;
                            VL_NULL_CHECK(original_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1144)
                                                                     ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__50__Vfuncout);
                            return (__Vtask_get_type_name__50__Vfuncout);
                        }())), original_type, override_type, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    ([&]() {
                            std::string __Vtask_get_type_name__51__Vfuncout;
                            VL_NULL_CHECK(override_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1146)
                                                                     ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__51__Vfuncout);
                            return (__Vtask_get_type_name__51__Vfuncout);
                        }())), (IData)(replace));
            this->__PVT__m_type_overrides.push_front(unnamedblk17__DOT__override);
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_name\n"); );
    // Locals
    std::string __Vtask_uvm_report_warning__52__id;
    std::string __Vtask_uvm_report_warning__52__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__52__verbosity;
    __Vtask_uvm_report_warning__52__verbosity = 0;
    std::string __Vtask_uvm_report_warning__52__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__52__line;
    __Vtask_uvm_report_warning__52__line = 0;
    std::string __Vtask_uvm_report_warning__52__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__52__report_enabled_checked;
    __Vtask_uvm_report_warning__52__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__53__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__54__Vfuncout;
    CData/*0:0*/ __Vfunc_m_matches_type_override__56__Vfuncout;
    __Vfunc_m_matches_type_override__56__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__57__id;
    std::string __Vtask_uvm_report_info__57__message;
    IData/*31:0*/ __Vtask_uvm_report_info__57__verbosity;
    __Vtask_uvm_report_info__57__verbosity = 0;
    std::string __Vtask_uvm_report_info__57__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__57__line;
    __Vtask_uvm_report_info__57__line = 0;
    std::string __Vtask_uvm_report_info__57__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__57__report_enabled_checked;
    __Vtask_uvm_report_info__57__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__58__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__59__Vfuncout;
    std::string __Vtask_uvm_report_info__61__id;
    std::string __Vtask_uvm_report_info__61__message;
    IData/*31:0*/ __Vtask_uvm_report_info__61__verbosity;
    __Vtask_uvm_report_info__61__verbosity = 0;
    std::string __Vtask_uvm_report_info__61__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__61__line;
    __Vtask_uvm_report_info__61__line = 0;
    std::string __Vtask_uvm_report_info__61__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__61__report_enabled_checked;
    __Vtask_uvm_report_info__61__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__62__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__63__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk18__DOT__index;
    unnamedblk18__DOT__index = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override> unnamedblk19__DOT__override;
    CData/*0:0*/ replaced;
    replaced = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> override_type;
    {
        if (this->__PVT__m_type_names.exists(original_type_name)) {
            original_type = this->__PVT__m_type_names
                .at(original_type_name);
        }
        if (this->__PVT__m_type_names.exists(override_type_name)) {
            override_type = this->__PVT__m_type_names
                .at(override_type_name);
        }
        if ((original_type_name == override_type_name)) {
            __Vtask_uvm_report_warning__52__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__52__context_name = ""s;
            __Vtask_uvm_report_warning__52__line = 0U;
            __Vtask_uvm_report_warning__52__filename = ""s;
            __Vtask_uvm_report_warning__52__verbosity = 0U;
            __Vtask_uvm_report_warning__52__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Requested and actual type name  arguments are identical: "s, original_type_name), ". Ignoring this override."s));
            __Vtask_uvm_report_warning__52__id = "TYPDUP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__53__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__53__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__54__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__54__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__52__id, __Vtask_uvm_report_warning__52__message, __Vtask_uvm_report_warning__52__verbosity, __Vtask_uvm_report_warning__52__filename, __Vtask_uvm_report_warning__52__line, __Vtask_uvm_report_warning__52__context_name, (IData)(__Vtask_uvm_report_warning__52__report_enabled_checked));
            goto __Vlabel0;
        }
        {
            unnamedblk18__DOT__index = 0U;
            while (VL_LTS_III(32, unnamedblk18__DOT__index, this->__PVT__m_type_overrides.size())) {
                if (([&]() {
                            this->__VnoInFunc_m_matches_type_override(vlSymsp, this->__PVT__m_type_overrides.at(unnamedblk18__DOT__index), original_type, original_type_name, ""s, 1U, 0U, __Vfunc_m_matches_type_override__56__Vfuncout);
                        }(), (IData)(__Vfunc_m_matches_type_override__56__Vfuncout))) {
                    if ((1U & (~ (IData)(replace)))) {
                        __Vtask_uvm_report_info__57__report_enabled_checked = 0U;
                        __Vtask_uvm_report_info__57__context_name = ""s;
                        __Vtask_uvm_report_info__57__line = 0U;
                        __Vtask_uvm_report_info__57__filename = ""s;
                        __Vtask_uvm_report_info__57__verbosity = 0x000000c8U;
                        __Vtask_uvm_report_info__57__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Original type '"s, original_type_name), "'/'"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk18__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1196)
                                                                                ->__PVT__orig
                                                                                .__PVT__m_type_name), "' already registered to produce '"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk18__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1197)
                                                                               ->__PVT__ovrd
                                                                               .__PVT__m_type_name), "'.  Set 'replace' argument to replace the existing entry."s));
                        __Vtask_uvm_report_info__57__id = "TPREGD"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__58__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__58__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__59__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__59__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__57__id, __Vtask_uvm_report_info__57__message, __Vtask_uvm_report_info__57__verbosity, __Vtask_uvm_report_info__57__filename, __Vtask_uvm_report_info__57__line, __Vtask_uvm_report_info__57__context_name, (IData)(__Vtask_uvm_report_info__57__report_enabled_checked));
                        goto __Vlabel0;
                    }
                    __Vtask_uvm_report_info__61__report_enabled_checked = 0U;
                    __Vtask_uvm_report_info__61__context_name = ""s;
                    __Vtask_uvm_report_info__61__line = 0U;
                    __Vtask_uvm_report_info__61__filename = ""s;
                    __Vtask_uvm_report_info__61__verbosity = 0x000000c8U;
                    __Vtask_uvm_report_info__61__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Original object type '"s, original_type_name), "'/'"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk18__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1201)
                                                                                ->__PVT__orig
                                                                                .__PVT__m_type_name), "' already registered to produce '"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk18__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1202)
                                                                                ->__PVT__ovrd
                                                                                .__PVT__m_type_name), "'.  Replacing with override to produce type '"s), override_type_name), "'."s));
                    __Vtask_uvm_report_info__61__id = "TPREGR"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__62__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__62__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__63__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__63__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__61__id, __Vtask_uvm_report_info__61__message, __Vtask_uvm_report_info__61__verbosity, __Vtask_uvm_report_info__61__filename, __Vtask_uvm_report_info__61__line, __Vtask_uvm_report_info__61__context_name, (IData)(__Vtask_uvm_report_info__61__report_enabled_checked));
                    replaced = 1U;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk18__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1205)->__PVT__ovrd.__PVT__m_type 
                        = override_type;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk18__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1206)->__PVT__ovrd.__PVT__m_type_name 
                        = override_type_name;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk18__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1207)->__PVT__replace 
                        = replace;
                } else if (((VlNull{} == VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk18__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1209)
                             ->__PVT__orig.__PVT__m_type) 
                            || (VlNull{} == original_type))) {
                    goto __Vlabel1;
                }
                unnamedblk18__DOT__index = ((IData)(1U) 
                                            + unnamedblk18__DOT__index);
            }
            __Vlabel1: ;
        }
        if ((VlNull{} == original_type)) {
            this->__PVT__m_lookup_strs.at(original_type_name) = 1U;
        }
        if ((1U & (~ (IData)(replaced)))) {
            unnamedblk19__DOT__override = VL_NEW(Vdma_uvm_pkg__03a__03auvm_factory_override, vlSymsp, ""s, original_type_name, original_type, override_type, override_type_name, (IData)(replace));
            this->__PVT__m_type_overrides.push_front(unnamedblk19__DOT__override);
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_check_inst_override_exists(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string original_type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string override_type_name, std::string full_inst_path, CData/*0:0*/ &check_inst_override_exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_check_inst_override_exists\n"); );
    // Locals
    std::string __Vtask_uvm_report_info__66__id;
    std::string __Vtask_uvm_report_info__66__message;
    IData/*31:0*/ __Vtask_uvm_report_info__66__verbosity;
    __Vtask_uvm_report_info__66__verbosity = 0;
    std::string __Vtask_uvm_report_info__66__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__66__line;
    __Vtask_uvm_report_info__66__line = 0;
    std::string __Vtask_uvm_report_info__66__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__66__report_enabled_checked;
    __Vtask_uvm_report_info__66__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__67__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__68__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk20__DOT__i;
    unnamedblk20__DOT__i = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override> __SYM__override;
    {
        unnamedblk20__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk20__DOT__i, this->__PVT__m_inst_overrides.size())) {
            __SYM__override = this->__PVT__m_inst_overrides.at(unnamedblk20__DOT__i);
            if ((((((VL_NULL_CHECK(__SYM__override, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1249)
                     ->__PVT__full_inst_path == full_inst_path) 
                    && (VL_NULL_CHECK(__SYM__override, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1250)
                        ->__PVT__orig.__PVT__m_type 
                        == original_type)) && (VL_NULL_CHECK(__SYM__override, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1251)
                                               ->__PVT__orig
                                               .__PVT__m_type_name 
                                               == original_type_name)) 
                  && (VL_NULL_CHECK(__SYM__override, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1252)
                      ->__PVT__ovrd.__PVT__m_type == override_type)) 
                 && (VL_NULL_CHECK(__SYM__override, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1253)
                     ->__PVT__ovrd.__PVT__m_type_name 
                     == override_type_name))) {
                __Vtask_uvm_report_info__66__report_enabled_checked = 0U;
                __Vtask_uvm_report_info__66__context_name = ""s;
                __Vtask_uvm_report_info__66__line = 0U;
                __Vtask_uvm_report_info__66__filename = ""s;
                __Vtask_uvm_report_info__66__verbosity = 0x0000012cU;
                __Vtask_uvm_report_info__66__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Instance override for '"s, original_type_name), "' already exists: override type '"s), override_type_name), "' with full_inst_path '"s), full_inst_path), "'"s));
                __Vtask_uvm_report_info__66__id = "DUPOVRD"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__67__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__67__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__68__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__68__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__66__id, __Vtask_uvm_report_info__66__message, __Vtask_uvm_report_info__66__verbosity, __Vtask_uvm_report_info__66__filename, __Vtask_uvm_report_info__66__line, __Vtask_uvm_report_info__66__context_name, (IData)(__Vtask_uvm_report_info__66__report_enabled_checked));
                check_inst_override_exists__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            unnamedblk20__DOT__i = ((IData)(1U) + unnamedblk20__DOT__i);
        }
        check_inst_override_exists__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_type\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_check_inst_override_exists__72__Vfuncout;
    __Vfunc_check_inst_override_exists__72__Vfuncout = 0;
    std::string __Vtask_get_type_name__73__Vfuncout;
    std::string __Vtask_get_type_name__74__Vfuncout;
    std::string __Vtask_get_type_name__76__Vfuncout;
    std::string __Vtask_get_type_name__77__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override> __SYM__override;
    {
        if ((! this->__PVT__m_types.exists(original_type))) {
            this->__VnoInFunc_register(vlProcess, vlSymsp, original_type);
        }
        if ((! this->__PVT__m_types.exists(override_type))) {
            this->__VnoInFunc_register(vlProcess, vlSymsp, override_type);
        }
        if (([&]() {
                    this->__VnoInFunc_check_inst_override_exists(vlProcess, vlSymsp, original_type, 
                                                                 VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                    VL_NULL_CHECK(original_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1281)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__73__Vfuncout);
                                }(), __Vtask_get_type_name__73__Vfuncout)), override_type, 
                                                                 VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                    VL_NULL_CHECK(override_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1283)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__74__Vfuncout);
                                }(), __Vtask_get_type_name__74__Vfuncout)), full_inst_path, __Vfunc_check_inst_override_exists__72__Vfuncout);
                }(), (IData)(__Vfunc_check_inst_override_exists__72__Vfuncout))) {
            goto __Vlabel0;
        }
        __SYM__override = VL_NEW(Vdma_uvm_pkg__03a__03auvm_factory_override, vlSymsp, full_inst_path, 
                                 VL_CVT_PACK_STR_NN(
                                                    ([&]() {
                        std::string __Vtask_get_type_name__76__Vfuncout;
                        VL_NULL_CHECK(original_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1292)
                                                     ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__76__Vfuncout);
                        return (__Vtask_get_type_name__76__Vfuncout);
                    }())), original_type, override_type, 
                                 VL_CVT_PACK_STR_NN(
                                                    ([&]() {
                        std::string __Vtask_get_type_name__77__Vfuncout;
                        VL_NULL_CHECK(override_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1294)
                                                     ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__77__Vfuncout);
                        return (__Vtask_get_type_name__77__Vfuncout);
                    }())), 0U);
        this->__PVT__m_inst_overrides.push_back(__SYM__override);
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_name\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_check_inst_override_exists__79__Vfuncout;
    __Vfunc_check_inst_override_exists__79__Vfuncout = 0;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override> __SYM__override;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> override_type;
    {
        if (this->__PVT__m_type_names.exists(original_type_name)) {
            original_type = this->__PVT__m_type_names
                .at(original_type_name);
        }
        if (this->__PVT__m_type_names.exists(override_type_name)) {
            override_type = this->__PVT__m_type_names
                .at(override_type_name);
        }
        if ((VlNull{} == original_type)) {
            this->__PVT__m_lookup_strs.at(original_type_name) = 1U;
        }
        __SYM__override = VL_NEW(Vdma_uvm_pkg__03a__03auvm_factory_override, vlSymsp, full_inst_path, original_type_name, original_type, override_type, override_type_name, 0U);
        if (([&]() {
                    this->__VnoInFunc_check_inst_override_exists(vlProcess, vlSymsp, original_type, original_type_name, override_type, override_type_name, full_inst_path, __Vfunc_check_inst_override_exists__79__Vfuncout);
                }(), (IData)(__Vfunc_check_inst_override_exists__79__Vfuncout))) {
            goto __Vlabel0;
        }
        this->__PVT__m_inst_overrides.push_back(__SYM__override);
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_alias(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_alias\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_type_registered__80__Vfuncout;
    __Vfunc_is_type_registered__80__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_m_matches_type_pair__81__Vfuncout;
    __Vfunc_m_matches_type_pair__81__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_m_matches_type_pair__82__Vfuncout;
    __Vfunc_m_matches_type_pair__82__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__83__id;
    std::string __Vtask_uvm_report_warning__83__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__83__verbosity;
    __Vtask_uvm_report_warning__83__verbosity = 0;
    std::string __Vtask_uvm_report_warning__83__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__83__line;
    __Vtask_uvm_report_warning__83__line = 0;
    std::string __Vtask_uvm_report_warning__83__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__83__report_enabled_checked;
    __Vtask_uvm_report_warning__83__report_enabled_checked = 0;
    std::string __Vtask_get_type_name__84__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__85__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__86__Vfuncout;
    // Body
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override>> unnamedblk21__DOT__overrides;
    IData/*31:0*/ unnamedblk21__DOT__unnamedblk22__DOT__index;
    unnamedblk21__DOT__unnamedblk22__DOT__index = 0;
    if (([&]() {
                this->__VnoInFunc_is_type_registered(vlSymsp, original_type, __Vfunc_is_type_registered__80__Vfuncout);
            }(), (IData)(__Vfunc_is_type_registered__80__Vfuncout))) {
        if ((! this->__PVT__m_type_names.exists(alias_type_name))) {
            this->__PVT__m_type_names.at(alias_type_name) 
                = original_type;
            unnamedblk21__DOT__overrides = VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override>>::consCC(this->__PVT__m_inst_overrides, 
                                                                                this->__PVT__m_type_overrides);
            unnamedblk21__DOT__unnamedblk22__DOT__index = 0U;
            while (VL_LTS_III(32, unnamedblk21__DOT__unnamedblk22__DOT__index, unnamedblk21__DOT__overrides.size())) {
                if (([&]() {
                            this->__VnoInFunc_m_matches_type_pair(vlSymsp, VL_NULL_CHECK(unnamedblk21__DOT__overrides.at(unnamedblk21__DOT__unnamedblk22__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1366)
                                                                  ->__PVT__orig, VlNull{}, alias_type_name, __Vfunc_m_matches_type_pair__81__Vfuncout);
                        }(), (IData)(__Vfunc_m_matches_type_pair__81__Vfuncout))) {
                    VL_NULL_CHECK(unnamedblk21__DOT__overrides.atWriteAppend(unnamedblk21__DOT__unnamedblk22__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1369)->__PVT__orig.__PVT__m_type 
                        = original_type;
                }
                if (([&]() {
                            this->__VnoInFunc_m_matches_type_pair(vlSymsp, VL_NULL_CHECK(unnamedblk21__DOT__overrides.at(unnamedblk21__DOT__unnamedblk22__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1371)
                                                                  ->__PVT__ovrd, VlNull{}, alias_type_name, __Vfunc_m_matches_type_pair__82__Vfuncout);
                        }(), (IData)(__Vfunc_m_matches_type_pair__82__Vfuncout))) {
                    VL_NULL_CHECK(unnamedblk21__DOT__overrides.atWriteAppend(unnamedblk21__DOT__unnamedblk22__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1374)->__PVT__ovrd.__PVT__m_type 
                        = original_type;
                }
                unnamedblk21__DOT__unnamedblk22__DOT__index 
                    = ((IData)(1U) + unnamedblk21__DOT__unnamedblk22__DOT__index);
            }
        }
    } else {
        __Vtask_uvm_report_warning__83__report_enabled_checked = 0U;
        __Vtask_uvm_report_warning__83__context_name = ""s;
        __Vtask_uvm_report_warning__83__line = 0U;
        __Vtask_uvm_report_warning__83__filename = ""s;
        __Vtask_uvm_report_warning__83__verbosity = 0U;
        __Vtask_uvm_report_warning__83__message = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot define alias of type '"s, 
                                                                                ([&]() {
                            VL_NULL_CHECK(original_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1357)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__84__Vfuncout);
                        }(), __Vtask_get_type_name__84__Vfuncout)), "' because it is not registered with the factory."s));
        __Vtask_uvm_report_warning__83__id = "BDTYP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__85__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__85__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__86__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__86__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__83__id, __Vtask_uvm_report_warning__83__message, __Vtask_uvm_report_warning__83__verbosity, __Vtask_uvm_report_warning__83__filename, __Vtask_uvm_report_warning__83__line, __Vtask_uvm_report_warning__83__context_name, (IData)(__Vtask_uvm_report_warning__83__report_enabled_checked));
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_alias(Vdma__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_alias\n"); );
    // Locals
    std::string __Vtask_get_type_name__88__Vfuncout;
    CData/*0:0*/ __Vfunc_is_type_registered__89__Vfuncout;
    __Vfunc_is_type_registered__89__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__90__id;
    std::string __Vtask_uvm_report_warning__90__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__90__verbosity;
    __Vtask_uvm_report_warning__90__verbosity = 0;
    std::string __Vtask_uvm_report_warning__90__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__90__line;
    __Vtask_uvm_report_warning__90__line = 0;
    std::string __Vtask_uvm_report_warning__90__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__90__report_enabled_checked;
    __Vtask_uvm_report_warning__90__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__91__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__92__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string original_type_name;
    Vdma_m_inst_typename_alias_t__struct__0 orig_type_alias_per_inst;
    VL_NULL_CHECK(original_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1390)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__88__Vfuncout);
    original_type_name = __Vtask_get_type_name__88__Vfuncout;
    if (([&]() {
                this->__VnoInFunc_is_type_registered(vlSymsp, original_type, __Vfunc_is_type_registered__89__Vfuncout);
            }(), (IData)(__Vfunc_is_type_registered__89__Vfuncout))) {
        orig_type_alias_per_inst.__PVT__alias_type_name 
            = alias_type_name;
        orig_type_alias_per_inst.__PVT__full_inst_path 
            = full_inst_path;
        orig_type_alias_per_inst.__PVT__orig.__PVT__m_type_name 
            = original_type_name;
        orig_type_alias_per_inst.__PVT__orig.__PVT__m_type 
            = original_type;
        this->__PVT__m_inst_aliases.push_back(orig_type_alias_per_inst);
    } else {
        __Vtask_uvm_report_warning__90__report_enabled_checked = 0U;
        __Vtask_uvm_report_warning__90__context_name = ""s;
        __Vtask_uvm_report_warning__90__line = 0U;
        __Vtask_uvm_report_warning__90__filename = ""s;
        __Vtask_uvm_report_warning__90__verbosity = 0U;
        __Vtask_uvm_report_warning__90__message = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot define alias of type '"s, original_type_name), "' because it is not registered with the factory."s));
        __Vtask_uvm_report_warning__90__id = "BDTYP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__91__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__91__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__92__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__92__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__90__id, __Vtask_uvm_report_warning__90__message, __Vtask_uvm_report_warning__90__verbosity, __Vtask_uvm_report_warning__90__filename, __Vtask_uvm_report_warning__90__line, __Vtask_uvm_report_warning__90__context_name, (IData)(__Vtask_uvm_report_warning__90__report_enabled_checked));
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_name(Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create_object_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_name\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_find_override_by_name__94__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_m_resolve_type_name_by_inst__95__Vfuncout;
    std::string __Vtask_uvm_report_warning__96__id;
    std::string __Vtask_uvm_report_warning__96__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__96__verbosity;
    __Vtask_uvm_report_warning__96__verbosity = 0;
    std::string __Vtask_uvm_report_warning__96__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__96__line;
    __Vtask_uvm_report_warning__96__line = 0;
    std::string __Vtask_uvm_report_warning__96__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__96__report_enabled_checked;
    __Vtask_uvm_report_warning__96__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__97__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__98__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __Vtask_create_object__100__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    std::string inst_path;
    {
        inst_path = ((""s == parent_inst_path) ? name
                      : ((""s != name) ? VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(parent_inst_path, "."s), name)
                          : parent_inst_path));
        this->__PVT__m_override_info.clear();
        this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, requested_type_name, inst_path, __Vfunc_find_override_by_name__94__Vfuncout);
        wrapper = __Vfunc_find_override_by_name__94__Vfuncout;
        if ((VlNull{} == wrapper)) {
            this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, requested_type_name, inst_path, __Vfunc_m_resolve_type_name_by_inst__95__Vfuncout);
            wrapper = __Vfunc_m_resolve_type_name_by_inst__95__Vfuncout;
            if ((VlNull{} == wrapper)) {
                __Vtask_uvm_report_warning__96__report_enabled_checked = 0U;
                __Vtask_uvm_report_warning__96__context_name = ""s;
                __Vtask_uvm_report_warning__96__line = 0U;
                __Vtask_uvm_report_warning__96__filename = ""s;
                __Vtask_uvm_report_warning__96__verbosity = 0U;
                __Vtask_uvm_report_warning__96__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot create an object of type '"s, requested_type_name), "' because it is not registered with the factory."s));
                __Vtask_uvm_report_warning__96__id = "BDTYP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__97__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__97__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__98__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__98__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__96__id, __Vtask_uvm_report_warning__96__message, __Vtask_uvm_report_warning__96__verbosity, __Vtask_uvm_report_warning__96__filename, __Vtask_uvm_report_warning__96__line, __Vtask_uvm_report_warning__96__context_name, (IData)(__Vtask_uvm_report_warning__96__report_enabled_checked));
                create_object_by_name__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            }
        }
        VL_NULL_CHECK(wrapper, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1439)->__VnoInFunc_create_object(vlProcess, vlSymsp, name, __Vtask_create_object__100__Vfuncout);
        create_object_by_name__Vfuncrtn = __Vtask_create_object__100__Vfuncout;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_find_override_by_type__101__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __Vtask_create_object__102__Vfuncout;
    // Body
    std::string full_inst_path;
    full_inst_path = ((""s == parent_inst_path) ? name
                       : ((""s != name) ? VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(parent_inst_path, "."s), name)
                           : parent_inst_path));
    this->__PVT__m_override_info.clear();
    this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, __Vfunc_find_override_by_type__101__Vfuncout);
    requested_type = __Vfunc_find_override_by_type__101__Vfuncout;
    VL_NULL_CHECK(requested_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1464)->__VnoInFunc_create_object(vlProcess, vlSymsp, name, __Vtask_create_object__102__Vfuncout);
    create_object_by_type__Vfuncrtn = __Vtask_create_object__102__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_is_type_name_registered(Vdma__Syms* __restrict vlSymsp, std::string type_name, CData/*0:0*/ &is_type_name_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_is_type_name_registered\n"); );
    // Body
    is_type_name_registered__Vfuncrtn = (1U & this->__PVT__m_type_names.exists(type_name));
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_is_type_registered(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> obj, CData/*0:0*/ &is_type_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_is_type_registered\n"); );
    // Body
    is_type_registered__Vfuncrtn = (1U & this->__PVT__m_types.exists(obj));
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_name\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_find_override_by_name__103__Vfuncout;
    std::string __Vtask_uvm_report_warning__104__id;
    std::string __Vtask_uvm_report_warning__104__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__104__verbosity;
    __Vtask_uvm_report_warning__104__verbosity = 0;
    std::string __Vtask_uvm_report_warning__104__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__104__line;
    __Vtask_uvm_report_warning__104__line = 0;
    std::string __Vtask_uvm_report_warning__104__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__104__report_enabled_checked;
    __Vtask_uvm_report_warning__104__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> __Vtask_create_component__108__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    std::string inst_path;
    {
        inst_path = ((""s == parent_inst_path) ? name
                      : ((""s != name) ? VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(parent_inst_path, "."s), name)
                          : parent_inst_path));
        this->__PVT__m_override_info.clear();
        this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, requested_type_name, inst_path, __Vfunc_find_override_by_name__103__Vfuncout);
        wrapper = __Vfunc_find_override_by_name__103__Vfuncout;
        if ((VlNull{} == wrapper)) {
            if ((! this->__PVT__m_type_names.exists(requested_type_name))) {
                __Vtask_uvm_report_warning__104__report_enabled_checked = 0U;
                __Vtask_uvm_report_warning__104__context_name = ""s;
                __Vtask_uvm_report_warning__104__line = 0U;
                __Vtask_uvm_report_warning__104__filename = ""s;
                __Vtask_uvm_report_warning__104__verbosity = 0U;
                __Vtask_uvm_report_warning__104__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot create a component of type '"s, requested_type_name), "' because it is not registered with the factory."s));
                __Vtask_uvm_report_warning__104__id = "BDTYP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__105__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__105__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__106__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__104__id, __Vtask_uvm_report_warning__104__message, __Vtask_uvm_report_warning__104__verbosity, __Vtask_uvm_report_warning__104__filename, __Vtask_uvm_report_warning__104__line, __Vtask_uvm_report_warning__104__context_name, (IData)(__Vtask_uvm_report_warning__104__report_enabled_checked));
                create_component_by_name__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            }
            wrapper = this->__PVT__m_type_names.at(requested_type_name);
        }
        VL_NULL_CHECK(wrapper, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1514)->__VnoInFunc_create_component(vlProcess, vlSymsp, name, parent, __Vtask_create_component__108__Vfuncout);
        create_component_by_name__Vfuncrtn = __Vtask_create_component__108__Vfuncout;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_type(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_find_override_by_type__109__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> __Vtask_create_component__110__Vfuncout;
    // Body
    std::string full_inst_path;
    full_inst_path = ((""s == parent_inst_path) ? name
                       : ((""s != name) ? VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(parent_inst_path, "."s), name)
                           : parent_inst_path));
    this->__PVT__m_override_info.clear();
    this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, __Vfunc_find_override_by_type__109__Vfuncout);
    requested_type = __Vfunc_find_override_by_type__109__Vfuncout;
    VL_NULL_CHECK(requested_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1539)->__VnoInFunc_create_component(vlProcess, vlSymsp, name, parent, __Vtask_create_component__110__Vfuncout);
    create_component_by_type__Vfuncrtn = __Vtask_create_component__110__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_wrapper_by_name\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_m_resolve_type_name__111__Vfuncout;
    std::string __Vtask_uvm_report_warning__112__id;
    std::string __Vtask_uvm_report_warning__112__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__112__verbosity;
    __Vtask_uvm_report_warning__112__verbosity = 0;
    std::string __Vtask_uvm_report_warning__112__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__112__line;
    __Vtask_uvm_report_warning__112__line = 0;
    std::string __Vtask_uvm_report_warning__112__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__112__report_enabled_checked;
    __Vtask_uvm_report_warning__112__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__113__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__114__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    {
        this->__VnoInFunc_m_resolve_type_name(vlSymsp, type_name, __Vfunc_m_resolve_type_name__111__Vfuncout);
        wrapper = __Vfunc_m_resolve_type_name__111__Vfuncout;
        if ((VlNull{} != wrapper)) {
            find_wrapper_by_name__Vfuncrtn = wrapper;
            goto __Vlabel0;
        }
        __Vtask_uvm_report_warning__112__report_enabled_checked = 0U;
        __Vtask_uvm_report_warning__112__context_name = ""s;
        __Vtask_uvm_report_warning__112__line = 0U;
        __Vtask_uvm_report_warning__112__filename = ""s;
        __Vtask_uvm_report_warning__112__verbosity = 0U;
        __Vtask_uvm_report_warning__112__message = 
            VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("find_wrapper_by_name: Type name '"s, type_name), "' not registered with the factory."s));
        __Vtask_uvm_report_warning__112__id = "UnknownTypeName"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__113__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__113__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__114__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__114__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__112__id, __Vtask_uvm_report_warning__112__message, __Vtask_uvm_report_warning__112__verbosity, __Vtask_uvm_report_warning__112__filename, __Vtask_uvm_report_warning__112__line, __Vtask_uvm_report_warning__112__context_name, (IData)(__Vtask_uvm_report_warning__112__report_enabled_checked));
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_name\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_m_resolve_type_name_by_inst__116__Vfuncout;
    CData/*0:0*/ __Vfunc_m_matches_inst_override__117__Vfuncout;
    __Vfunc_m_matches_inst_override__117__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_m_matches_type_override__118__Vfuncout;
    __Vfunc_m_matches_type_override__118__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_m_matches_type_override__119__Vfuncout;
    __Vfunc_m_matches_type_override__119__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_m_resolve_type_name_by_inst__120__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_find_override_by_name__121__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_find_override_by_type__122__Vfuncout;
    std::string __Vtask_uvm_report_error__123__id;
    std::string __Vtask_uvm_report_error__123__message;
    IData/*31:0*/ __Vtask_uvm_report_error__123__verbosity;
    __Vtask_uvm_report_error__123__verbosity = 0;
    std::string __Vtask_uvm_report_error__123__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__123__line;
    __Vtask_uvm_report_error__123__line = 0;
    std::string __Vtask_uvm_report_error__123__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__123__report_enabled_checked;
    __Vtask_uvm_report_error__123__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__124__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__125__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk23__DOT__i;
    unnamedblk23__DOT__i = 0;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override>> unnamedblk24__DOT__matched_overrides;
    IData/*31:0*/ unnamedblk24__DOT__unnamedblk25__DOT__index;
    unnamedblk24__DOT__unnamedblk25__DOT__index = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk26__DOT__override;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> rtype;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override> lindex;
    {
        this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, requested_type_name, full_inst_path, __Vfunc_m_resolve_type_name_by_inst__116__Vfuncout);
        rtype = __Vfunc_m_resolve_type_name_by_inst__116__Vfuncout;
        if ((""s != full_inst_path)) {
            {
                unnamedblk23__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk23__DOT__i, this->__PVT__m_inst_overrides.size())) {
                    if (([&]() {
                                this->__VnoInFunc_m_matches_inst_override(vlSymsp, this->__PVT__m_inst_overrides.at(unnamedblk23__DOT__i), rtype, requested_type_name, full_inst_path, __Vfunc_m_matches_inst_override__117__Vfuncout);
                            }(), (IData)(__Vfunc_m_matches_inst_override__117__Vfuncout))) {
                        this->__PVT__m_override_info.push_back(this->__PVT__m_inst_overrides.at(unnamedblk23__DOT__i));
                        if ((VlNull{} == lindex)) {
                            lindex = this->__PVT__m_inst_overrides.at(unnamedblk23__DOT__i);
                            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass)))) {
                                goto __Vlabel1;
                            }
                        }
                    }
                    unnamedblk23__DOT__i = ((IData)(1U) 
                                            + unnamedblk23__DOT__i);
                }
                __Vlabel1: ;
            }
        }
        if (((VlNull{} == lindex) | (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass))) {
            {
                unnamedblk24__DOT__unnamedblk25__DOT__index = 0U;
                while (VL_LTS_III(32, unnamedblk24__DOT__unnamedblk25__DOT__index, this->__PVT__m_type_overrides.size())) {
                    if (([&]() {
                                this->__VnoInFunc_m_matches_type_override(vlSymsp, this->__PVT__m_type_overrides.at(unnamedblk24__DOT__unnamedblk25__DOT__index), rtype, requested_type_name, full_inst_path, 1U, 1U, __Vfunc_m_matches_type_override__118__Vfuncout);
                            }(), (IData)(__Vfunc_m_matches_type_override__118__Vfuncout))) {
                        unnamedblk24__DOT__matched_overrides.push_back(this->__PVT__m_type_overrides.at(unnamedblk24__DOT__unnamedblk25__DOT__index));
                        if (((VlNull{} == lindex) || 
                             (1U & (~ VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1599)
                                    ->__PVT__replace)))) {
                            lindex = this->__PVT__m_type_overrides.at(unnamedblk24__DOT__unnamedblk25__DOT__index);
                            if (((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass))) 
                                 && VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1606)
                                 ->__PVT__replace)) {
                                goto __Vlabel2;
                            }
                        }
                    }
                    unnamedblk24__DOT__unnamedblk25__DOT__index 
                        = ((IData)(1U) + unnamedblk24__DOT__unnamedblk25__DOT__index);
                }
                __Vlabel2: ;
            }
            if ((0U != unnamedblk24__DOT__matched_overrides.size())) {
                if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                    this->__PVT__m_override_info = 
                        VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override>>::consCC(unnamedblk24__DOT__matched_overrides, 
                                                                                this->__PVT__m_override_info);
                } else {
                    this->__PVT__m_override_info.push_back(unnamedblk24__DOT__matched_overrides.atBack(0U));
                }
            }
        }
        if ((VlNull{} != lindex)) {
            unnamedblk26__DOT__override = VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1623)
                ->__PVT__ovrd.__PVT__m_type;
            VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1625)->__PVT__used 
                = ((IData)(1U) + VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1625)
                   ->__PVT__used);
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1627)->__PVT__selected = 1U;
            }
            if (([&]() {
                        this->__VnoInFunc_m_matches_type_override(vlSymsp, lindex, rtype, requested_type_name, full_inst_path, 0U, 1U, __Vfunc_m_matches_type_override__119__Vfuncout);
                    }(), (IData)(__Vfunc_m_matches_type_override__119__Vfuncout))) {
                if ((VlNull{} == unnamedblk26__DOT__override)) {
                    this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1644)
                                                                                ->__PVT__ovrd
                                                                                .__PVT__m_type_name), full_inst_path, __Vfunc_m_resolve_type_name_by_inst__120__Vfuncout);
                    unnamedblk26__DOT__override = __Vfunc_m_resolve_type_name_by_inst__120__Vfuncout;
                }
            } else if ((VlNull{} == unnamedblk26__DOT__override)) {
                this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, 
                                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1637)
                                                                           ->__PVT__ovrd
                                                                           .__PVT__m_type_name), full_inst_path, __Vfunc_find_override_by_name__121__Vfuncout);
                unnamedblk26__DOT__override = __Vfunc_find_override_by_name__121__Vfuncout;
            } else {
                this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, unnamedblk26__DOT__override, full_inst_path, __Vfunc_find_override_by_type__122__Vfuncout);
                unnamedblk26__DOT__override = __Vfunc_find_override_by_type__122__Vfuncout;
            }
            if ((VlNull{} == unnamedblk26__DOT__override)) {
                __Vtask_uvm_report_error__123__report_enabled_checked = 0U;
                __Vtask_uvm_report_error__123__context_name = ""s;
                __Vtask_uvm_report_error__123__line = 0U;
                __Vtask_uvm_report_error__123__filename = ""s;
                __Vtask_uvm_report_error__123__verbosity = 0U;
                __Vtask_uvm_report_error__123__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot resolve override for original type '"s, VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1648)
                                                                                ->__PVT__orig
                                                                                .__PVT__m_type_name), "' because the override type '"s), VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1649)
                                                                       ->__PVT__ovrd
                                                                       .__PVT__m_type_name), "' is not registered with the factory."s));
                __Vtask_uvm_report_error__123__id = "TYPNTF"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__124__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__124__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__125__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__125__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__123__id, __Vtask_uvm_report_error__123__message, __Vtask_uvm_report_error__123__verbosity, __Vtask_uvm_report_error__123__filename, __Vtask_uvm_report_error__123__line, __Vtask_uvm_report_error__123__context_name, (IData)(__Vtask_uvm_report_error__123__report_enabled_checked));
            }
            find_override_by_name__Vfuncrtn = unnamedblk26__DOT__override;
            goto __Vlabel0;
        }
        find_override_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string full_inst_path, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_type\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__127__id;
    std::string __Vtask_uvm_report_error__127__message;
    IData/*31:0*/ __Vtask_uvm_report_error__127__verbosity;
    __Vtask_uvm_report_error__127__verbosity = 0;
    std::string __Vtask_uvm_report_error__127__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__127__line;
    __Vtask_uvm_report_error__127__line = 0;
    std::string __Vtask_uvm_report_error__127__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__127__report_enabled_checked;
    __Vtask_uvm_report_error__127__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__128__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__129__Vfuncout;
    CData/*0:0*/ __Vfunc_m_matches_inst_override__132__Vfuncout;
    __Vfunc_m_matches_inst_override__132__Vfuncout = 0;
    std::string __Vtask_get_type_name__133__Vfuncout;
    CData/*0:0*/ __Vfunc_m_matches_type_override__134__Vfuncout;
    __Vfunc_m_matches_type_override__134__Vfuncout = 0;
    std::string __Vtask_get_type_name__135__Vfuncout;
    CData/*0:0*/ __Vfunc_m_matches_type_override__136__Vfuncout;
    __Vfunc_m_matches_type_override__136__Vfuncout = 0;
    std::string __Vtask_get_type_name__137__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_m_resolve_type_name_by_inst__138__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_find_override_by_name__139__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_find_override_by_type__140__Vfuncout;
    std::string __Vtask_uvm_report_error__141__id;
    std::string __Vtask_uvm_report_error__141__message;
    IData/*31:0*/ __Vtask_uvm_report_error__141__verbosity;
    __Vtask_uvm_report_error__141__verbosity = 0;
    std::string __Vtask_uvm_report_error__141__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__141__line;
    __Vtask_uvm_report_error__141__line = 0;
    std::string __Vtask_uvm_report_error__141__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__141__report_enabled_checked;
    __Vtask_uvm_report_error__141__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__142__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__143__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk27__DOT__index;
    unnamedblk27__DOT__index = 0;
    IData/*31:0*/ unnamedblk28__DOT__i;
    unnamedblk28__DOT__i = 0;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override>> unnamedblk29__DOT__matched_overrides;
    IData/*31:0*/ unnamedblk29__DOT__unnamedblk30__DOT__index;
    unnamedblk29__DOT__unnamedblk30__DOT__index = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk31__DOT__override;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __SYM__override;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override> lindex;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_queue_class> qc;
    {
        unnamedblk27__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk27__DOT__index, this->__PVT__m_override_info.size())) {
            if ((VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk27__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1674)
                 ->__PVT__orig.__PVT__m_type == requested_type)) {
                __Vtask_uvm_report_error__127__report_enabled_checked = 0U;
                __Vtask_uvm_report_error__127__context_name = ""s;
                __Vtask_uvm_report_error__127__line = 0U;
                __Vtask_uvm_report_error__127__filename = ""s;
                __Vtask_uvm_report_error__127__verbosity = 0U;
                __Vtask_uvm_report_error__127__message = "Recursive loop detected while finding override."s;
                __Vtask_uvm_report_error__127__id = "OVRDLOOP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__128__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__128__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__129__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__129__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__127__id, __Vtask_uvm_report_error__127__message, __Vtask_uvm_report_error__127__verbosity, __Vtask_uvm_report_error__127__filename, __Vtask_uvm_report_error__127__line, __Vtask_uvm_report_error__127__context_name, (IData)(__Vtask_uvm_report_error__127__report_enabled_checked));
                VL_NULL_CHECK(this->__PVT__m_override_info.atWriteAppend(unnamedblk27__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1676)->__PVT__used 
                    = ((IData)(1U) + VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk27__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1676)
                       ->__PVT__used);
                if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass)))) {
                    this->__VnoInFunc_debug_create_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, ""s);
                }
                find_override_by_type__Vfuncrtn = requested_type;
                goto __Vlabel0;
            }
            unnamedblk27__DOT__index = ((IData)(1U) 
                                        + unnamedblk27__DOT__index);
        }
        if ((""s != full_inst_path)) {
            {
                unnamedblk28__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk28__DOT__i, this->__PVT__m_inst_overrides.size())) {
                    if (([&]() {
                                this->__VnoInFunc_m_matches_inst_override(vlSymsp, this->__PVT__m_inst_overrides.at(unnamedblk28__DOT__i), requested_type, 
                                                                          VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                                VL_NULL_CHECK(requested_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1688)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__133__Vfuncout);
                                            }(), __Vtask_get_type_name__133__Vfuncout)), full_inst_path, __Vfunc_m_matches_inst_override__132__Vfuncout);
                            }(), (IData)(__Vfunc_m_matches_inst_override__132__Vfuncout))) {
                        this->__PVT__m_override_info.push_back(this->__PVT__m_inst_overrides.at(unnamedblk28__DOT__i));
                        if ((VlNull{} == lindex)) {
                            lindex = this->__PVT__m_inst_overrides.at(unnamedblk28__DOT__i);
                            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass)))) {
                                goto __Vlabel1;
                            }
                        }
                    }
                    unnamedblk28__DOT__i = ((IData)(1U) 
                                            + unnamedblk28__DOT__i);
                }
                __Vlabel1: ;
            }
        }
        if (((VlNull{} == lindex) | (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass))) {
            {
                unnamedblk29__DOT__unnamedblk30__DOT__index = 0U;
                while (VL_LTS_III(32, unnamedblk29__DOT__unnamedblk30__DOT__index, this->__PVT__m_type_overrides.size())) {
                    if (([&]() {
                                this->__VnoInFunc_m_matches_type_override(vlSymsp, this->__PVT__m_type_overrides.at(unnamedblk29__DOT__unnamedblk30__DOT__index), requested_type, 
                                                                          VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                                VL_NULL_CHECK(requested_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1707)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__135__Vfuncout);
                                            }(), __Vtask_get_type_name__135__Vfuncout)), full_inst_path, 1U, 1U, __Vfunc_m_matches_type_override__134__Vfuncout);
                            }(), (IData)(__Vfunc_m_matches_type_override__134__Vfuncout))) {
                        unnamedblk29__DOT__matched_overrides.push_back(this->__PVT__m_type_overrides.at(unnamedblk29__DOT__unnamedblk30__DOT__index));
                        if (((VlNull{} == lindex) || 
                             (1U & (~ VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1711)
                                    ->__PVT__replace)))) {
                            lindex = this->__PVT__m_type_overrides.at(unnamedblk29__DOT__unnamedblk30__DOT__index);
                            if (((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass))) 
                                 && VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1718)
                                 ->__PVT__replace)) {
                                goto __Vlabel2;
                            }
                        }
                    }
                    unnamedblk29__DOT__unnamedblk30__DOT__index 
                        = ((IData)(1U) + unnamedblk29__DOT__unnamedblk30__DOT__index);
                }
                __Vlabel2: ;
            }
            if ((0U != unnamedblk29__DOT__matched_overrides.size())) {
                if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                    this->__PVT__m_override_info = 
                        VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override>>::consCC(unnamedblk29__DOT__matched_overrides, 
                                                                                this->__PVT__m_override_info);
                } else {
                    this->__PVT__m_override_info.push_back(unnamedblk29__DOT__matched_overrides.atBack(0U));
                }
            }
        }
        if ((VlNull{} != lindex)) {
            unnamedblk31__DOT__override = VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1735)
                ->__PVT__ovrd.__PVT__m_type;
            VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1737)->__PVT__used 
                = ((IData)(1U) + VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1737)
                   ->__PVT__used);
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1739)->__PVT__selected = 1U;
            }
            if (([&]() {
                        this->__VnoInFunc_m_matches_type_override(vlSymsp, lindex, requested_type, 
                                                                  VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                        VL_NULL_CHECK(requested_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1744)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__137__Vfuncout);
                                    }(), __Vtask_get_type_name__137__Vfuncout)), full_inst_path, 0U, 1U, __Vfunc_m_matches_type_override__136__Vfuncout);
                    }(), (IData)(__Vfunc_m_matches_type_override__136__Vfuncout))) {
                if ((VlNull{} == unnamedblk31__DOT__override)) {
                    this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1756)
                                                                                ->__PVT__ovrd
                                                                                .__PVT__m_type_name), full_inst_path, __Vfunc_m_resolve_type_name_by_inst__138__Vfuncout);
                    unnamedblk31__DOT__override = __Vfunc_m_resolve_type_name_by_inst__138__Vfuncout;
                }
            } else if ((VlNull{} == unnamedblk31__DOT__override)) {
                this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, 
                                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1749)
                                                                           ->__PVT__ovrd
                                                                           .__PVT__m_type_name), full_inst_path, __Vfunc_find_override_by_name__139__Vfuncout);
                unnamedblk31__DOT__override = __Vfunc_find_override_by_name__139__Vfuncout;
            } else {
                this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, unnamedblk31__DOT__override, full_inst_path, __Vfunc_find_override_by_type__140__Vfuncout);
                unnamedblk31__DOT__override = __Vfunc_find_override_by_type__140__Vfuncout;
            }
            if ((VlNull{} == unnamedblk31__DOT__override)) {
                __Vtask_uvm_report_error__141__report_enabled_checked = 0U;
                __Vtask_uvm_report_error__141__context_name = ""s;
                __Vtask_uvm_report_error__141__line = 0U;
                __Vtask_uvm_report_error__141__filename = ""s;
                __Vtask_uvm_report_error__141__verbosity = 0U;
                __Vtask_uvm_report_error__141__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot resolve override for original type '"s, VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1760)
                                                                                ->__PVT__orig
                                                                                .__PVT__m_type_name), "' because the override type '"s), VL_NULL_CHECK(lindex, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1761)
                                                                       ->__PVT__ovrd
                                                                       .__PVT__m_type_name), "' is not registered with the factory."s));
                __Vtask_uvm_report_error__141__id = "TYPNTF"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__142__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__142__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__143__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__143__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__141__id, __Vtask_uvm_report_error__141__message, __Vtask_uvm_report_error__141__verbosity, __Vtask_uvm_report_error__141__filename, __Vtask_uvm_report_error__141__line, __Vtask_uvm_report_error__141__context_name, (IData)(__Vtask_uvm_report_error__141__report_enabled_checked));
            }
            find_override_by_type__Vfuncrtn = unnamedblk31__DOT__override;
            goto __Vlabel0;
        }
        find_override_by_type__Vfuncrtn = requested_type;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_print(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ all_types) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_print\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_uvm_is_match__145__Vfuncout;
    __Vfunc_uvm_is_match__145__Vfuncout = 0;
    std::string __Vfunc_uvm_is_match__145__expr;
    std::string __Vfunc_uvm_is_match__145__str;
    std::string __Vtask_get_type_name__146__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__147__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__147__glob;
    IData/*31:0*/ __Vfunc_uvm_re_match__148__Vfuncout;
    __Vfunc_uvm_re_match__148__Vfuncout = 0;
    std::string __Vfunc_uvm_re_match__148__re;
    std::string __Vfunc_uvm_re_match__148__str;
    IData/*31:0*/ __Vfunc_uvm_re_match__148____Vincrement1;
    __Vfunc_uvm_re_match__148____Vincrement1 = 0;
    std::string __Vtask_get_type_name__149__Vfuncout;
    std::string __Vtask_get_type_name__150__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__151__Vfuncout;
    __Vfunc_uvm_report_enabled__151__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__151__verbosity;
    __Vfunc_uvm_report_enabled__151__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__151__severity;
    __Vfunc_uvm_report_enabled__151__severity = 0;
    std::string __Vfunc_uvm_report_enabled__151__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__152__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__153__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__154__Vfuncout;
    __Vtask_uvm_report_enabled__154__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__155__id;
    std::string __Vtask_uvm_report_info__155__message;
    IData/*31:0*/ __Vtask_uvm_report_info__155__verbosity;
    __Vtask_uvm_report_info__155__verbosity = 0;
    std::string __Vtask_uvm_report_info__155__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__155__line;
    __Vtask_uvm_report_info__155__line = 0;
    std::string __Vtask_uvm_report_info__155__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__155__report_enabled_checked;
    __Vtask_uvm_report_info__155__report_enabled_checked = 0;
    std::string __Vfunc_m_uvm_string_queue_join__156__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__157__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__158__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    std::string __Vtemp_13;
    std::string __Vtemp_14;
    std::string __Vtemp_15;
    std::string __Vtemp_16;
    std::string __Vtemp_17;
    std::string __Vtemp_18;
    std::string __Vtemp_19;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk32__DOT__max1;
    unnamedblk32__DOT__max1 = 0;
    IData/*31:0*/ unnamedblk32__DOT__max2;
    unnamedblk32__DOT__max2 = 0;
    IData/*31:0*/ unnamedblk32__DOT__max3;
    unnamedblk32__DOT__max3 = 0;
    std::string unnamedblk32__DOT__dash;
    std::string unnamedblk32__DOT__space;
    IData/*31:0*/ unnamedblk32__DOT__unnamedblk33__DOT__j;
    unnamedblk32__DOT__unnamedblk33__DOT__j = 0;
    IData/*31:0*/ unnamedblk32__DOT__unnamedblk34__DOT__j;
    unnamedblk32__DOT__unnamedblk34__DOT__j = 0;
    IData/*31:0*/ unnamedblk32__DOT__unnamedblk35__DOT__i;
    unnamedblk32__DOT__unnamedblk35__DOT__i = 0;
    IData/*31:0*/ unnamedblk32__DOT__unnamedblk36__DOT__index;
    unnamedblk32__DOT__unnamedblk36__DOT__index = 0;
    CData/*0:0*/ unnamedblk37__DOT__banner;
    unnamedblk37__DOT__banner = 0;
    std::string key;
    VlQueue<std::string> qs;
    qs.push_back("\n#### Factory Configuration (*)\n\n"s);
    if ((1U & ((~ (0U != this->__PVT__m_type_overrides.size())) 
               & (~ (0U != this->__PVT__m_inst_overrides.size()))))) {
        qs.push_back("  No instance or type overrides are registered with this factory\n"s);
    } else {
        unnamedblk32__DOT__dash = "---------------------------------------------------------------------------------------------------"s;
        unnamedblk32__DOT__space = "                                                                                                   "s;
        if ((0U != this->__PVT__m_inst_overrides.size())) {
            unnamedblk32__DOT__unnamedblk33__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk32__DOT__unnamedblk33__DOT__j, this->__PVT__m_inst_overrides.size())) {
                if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk33__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1796)
                                             ->__PVT__orig
                                             .__PVT__m_type_name), unnamedblk32__DOT__max1)) {
                    unnamedblk32__DOT__max1 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk33__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1797)
                                                        ->__PVT__orig
                                                        .__PVT__m_type_name);
                }
                if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk33__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1798)
                                             ->__PVT__full_inst_path), unnamedblk32__DOT__max2)) {
                    unnamedblk32__DOT__max2 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk33__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1799)
                                                        ->__PVT__full_inst_path);
                }
                if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk33__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1800)
                                             ->__PVT__ovrd
                                             .__PVT__m_type_name), unnamedblk32__DOT__max3)) {
                    unnamedblk32__DOT__max3 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk33__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1801)
                                                        ->__PVT__ovrd
                                                        .__PVT__m_type_name);
                }
                unnamedblk32__DOT__unnamedblk33__DOT__j 
                    = ((IData)(1U) + unnamedblk32__DOT__unnamedblk33__DOT__j);
            }
            if (VL_GTS_III(32, 0x0000000eU, unnamedblk32__DOT__max1)) {
                unnamedblk32__DOT__max1 = 0x0000000eU;
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk32__DOT__max2)) {
                unnamedblk32__DOT__max2 = 0x0000000dU;
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk32__DOT__max3)) {
                unnamedblk32__DOT__max3 = 0x0000000dU;
            }
            qs.push_back("Instance Overrides:\n\n"s);
            __Vtemp_1 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                    (unnamedblk32__DOT__max1 
                                     - (IData)(0x0000000eU)));
            __Vtemp_2 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                    (unnamedblk32__DOT__max2 
                                     - (IData)(0x0000000dU)));
            __Vtemp_3 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                    (unnamedblk32__DOT__max3 
                                     - (IData)(0x0000000dU)));
            qs.push_back(VL_SFORMATF_N_NX("  Requested Type%0@  Override Path%0@  Override Type%0@\n",0,
                                          -1,&(__Vtemp_1),
                                          -1,&(__Vtemp_2),
                                          -1,&(__Vtemp_3)) );
            __Vtemp_4 = VL_SUBSTR_N(unnamedblk32__DOT__dash,1U,unnamedblk32__DOT__max1);
            __Vtemp_5 = VL_SUBSTR_N(unnamedblk32__DOT__dash,1U,unnamedblk32__DOT__max2);
            __Vtemp_6 = VL_SUBSTR_N(unnamedblk32__DOT__dash,1U,unnamedblk32__DOT__max3);
            qs.push_back(VL_SFORMATF_N_NX("  %0@  %0@  %0@\n",0,
                                          -1,&(__Vtemp_4),
                                          -1,&(__Vtemp_5),
                                          -1,&(__Vtemp_6)) );
            unnamedblk32__DOT__unnamedblk34__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk32__DOT__unnamedblk34__DOT__j, this->__PVT__m_inst_overrides.size())) {
                __Vtemp_7 = VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk34__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1816)
                    ->__PVT__orig.__PVT__m_type_name;
                __Vtemp_8 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                        (unnamedblk32__DOT__max1 
                                         - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk34__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1817)
                                                     ->__PVT__orig
                                                     .__PVT__m_type_name)));
                __Vtemp_9 = VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk34__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1818)
                    ->__PVT__full_inst_path;
                __Vtemp_10 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                         (unnamedblk32__DOT__max2 
                                          - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk34__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1819)
                                                      ->__PVT__full_inst_path)));
                qs.push_back(VL_SFORMATF_N_NX("  %0@%0@  %0@%0@",0,
                                              -1,&(__Vtemp_7),
                                              -1,&(__Vtemp_8),
                                              -1,&(__Vtemp_9),
                                              -1,&(__Vtemp_10)) );
                __Vtemp_11 = VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk34__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1820)
                    ->__PVT__ovrd.__PVT__m_type_name;
                qs.push_back(VL_SFORMATF_N_NX("  %0@\n",0,
                                              -1,&(__Vtemp_11)) );
                unnamedblk32__DOT__unnamedblk34__DOT__j 
                    = ((IData)(1U) + unnamedblk32__DOT__unnamedblk34__DOT__j);
            }
        } else {
            qs.push_back("No instance overrides are registered with this factory\n"s);
        }
        if ((0U != this->__PVT__m_type_overrides.size())) {
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk32__DOT__max3)) {
                unnamedblk32__DOT__max3 = 0x0000000dU;
            }
            unnamedblk32__DOT__unnamedblk35__DOT__i = 0U;
            if (VL_GTS_III(32, 0x0000000eU, unnamedblk32__DOT__max1)) {
                unnamedblk32__DOT__max1 = 0x0000000eU;
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk32__DOT__max2)) {
                unnamedblk32__DOT__max2 = 0x0000000dU;
            }
            while (VL_LTS_III(32, unnamedblk32__DOT__unnamedblk35__DOT__i, this->__PVT__m_type_overrides.size())) {
                if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk35__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1834)
                                             ->__PVT__orig
                                             .__PVT__m_type_name), unnamedblk32__DOT__max1)) {
                    unnamedblk32__DOT__max1 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk35__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1835)
                                                        ->__PVT__orig
                                                        .__PVT__m_type_name);
                }
                if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk35__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1836)
                                             ->__PVT__ovrd
                                             .__PVT__m_type_name), unnamedblk32__DOT__max2)) {
                    unnamedblk32__DOT__max2 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk35__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1837)
                                                        ->__PVT__ovrd
                                                        .__PVT__m_type_name);
                }
                unnamedblk32__DOT__unnamedblk35__DOT__i 
                    = ((IData)(1U) + unnamedblk32__DOT__unnamedblk35__DOT__i);
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk32__DOT__max2)) {
                unnamedblk32__DOT__max2 = 0x0000000dU;
            }
            if (VL_GTS_III(32, 0x0000000eU, unnamedblk32__DOT__max1)) {
                unnamedblk32__DOT__max1 = 0x0000000eU;
            }
            qs.push_back("\nType Overrides:\n\n"s);
            __Vtemp_12 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                     (unnamedblk32__DOT__max1 
                                      - (IData)(0x0000000eU)));
            __Vtemp_13 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                     (unnamedblk32__DOT__max2 
                                      - (IData)(0x0000000dU)));
            qs.push_back(VL_SFORMATF_N_NX("  Requested Type%0@  Override Type%0@\n",0,
                                          -1,&(__Vtemp_12),
                                          -1,&(__Vtemp_13)) );
            __Vtemp_14 = VL_SUBSTR_N(unnamedblk32__DOT__dash,1U,unnamedblk32__DOT__max1);
            __Vtemp_15 = VL_SUBSTR_N(unnamedblk32__DOT__dash,1U,unnamedblk32__DOT__max2);
            qs.push_back(VL_SFORMATF_N_NX("  %0@  %0@\n",0,
                                          -1,&(__Vtemp_14),
                                          -1,&(__Vtemp_15)) );
            unnamedblk32__DOT__unnamedblk36__DOT__index 
                = (this->__PVT__m_type_overrides.size() 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, unnamedblk32__DOT__unnamedblk36__DOT__index)) {
                __Vtemp_16 = VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk36__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1848)
                    ->__PVT__orig.__PVT__m_type_name;
                __Vtemp_17 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                         (unnamedblk32__DOT__max1 
                                          - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk36__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1849)
                                                      ->__PVT__orig
                                                      .__PVT__m_type_name)));
                __Vtemp_18 = VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk36__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1850)
                    ->__PVT__ovrd.__PVT__m_type_name;
                qs.push_back(VL_SFORMATF_N_NX("  %0@%0@  %0@\n",0,
                                              -1,&(__Vtemp_16),
                                              -1,&(__Vtemp_17),
                                              -1,&(__Vtemp_18)) );
                unnamedblk32__DOT__unnamedblk36__DOT__index 
                    = (unnamedblk32__DOT__unnamedblk36__DOT__index 
                       - (IData)(1U));
            }
        } else {
            qs.push_back("\nNo type overrides are registered with this factory\n"s);
        }
    }
    if ((VL_LTES_III(32, 1U, all_types) && (0U != this->__PVT__m_type_names.first(key)))) {
        qs.push_back(VL_SFORMATF_N_NX("\nAll types registered with the factory: %0d total\n",0,
                                      32,this->__PVT__m_types.size()) );
        do {
            if (((1U & (~ (VL_GTS_III(32, 2U, all_types) 
                           && ([&]() {
                                        __Vfunc_uvm_is_match__145__str 
                                            = VL_CVT_PACK_STR_NN(
                                                                 ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_type_names
                                                                  .at(key), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1861)
                                                                  ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__146__Vfuncout);
                                                }(), __Vtask_get_type_name__146__Vfuncout));
                                        __Vfunc_uvm_is_match__145__expr = "uvm_*"s;
                                        __Vfunc_uvm_glob_to_re__147__glob 
                                            = __Vfunc_uvm_is_match__145__expr;
                                        __Vfunc_uvm_glob_to_re__147__Vfuncout 
                                            = __Vfunc_uvm_glob_to_re__147__glob;
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                            = __Vfunc_uvm_glob_to_re__147__Vfuncout;
                                        __Vfunc_uvm_is_match__145__Vfuncout 
                                            = (0U == 
                                               ([&]() {
                                                    __Vfunc_uvm_re_match__148__str 
                                                        = __Vfunc_uvm_is_match__145__str;
                                                    __Vfunc_uvm_re_match__148__re 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                                    {
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                                        if (
                                                            (0U 
                                                             == 
                                                             VL_LEN_IN(__Vfunc_uvm_re_match__148__re))) {
                                                            __Vfunc_uvm_re_match__148__Vfuncout = 0U;
                                                            goto __Vlabel0;
                                                        }
                                                        if (
                                                            (0x5eU 
                                                             == 
                                                             VL_GETC_N(__Vfunc_uvm_re_match__148__re,0U))) {
                                                            __Vfunc_uvm_re_match__148__re 
                                                                = 
                                                                VL_SUBSTR_N(__Vfunc_uvm_re_match__148__re,1U,
                                                                            (VL_LEN_IN(__Vfunc_uvm_re_match__148__re) 
                                                                             - (IData)(1U)));
                                                        }
                                                        while (
                                                               ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                 != 
                                                                 VL_LEN_IN(__Vfunc_uvm_re_match__148__str)) 
                                                                & (0x2aU 
                                                                   != 
                                                                   VL_GETC_N(__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                            if (
                                                                ((VL_GETC_N(__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                                  != 
                                                                  VL_GETC_N(__Vfunc_uvm_re_match__148__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                                 & (0x3fU 
                                                                    != 
                                                                    VL_GETC_N(__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                                __Vfunc_uvm_re_match__148__Vfuncout = 1U;
                                                                goto __Vlabel0;
                                                            }
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                        }
                                                        while (
                                                               (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                != 
                                                                VL_LEN_IN(__Vfunc_uvm_re_match__148__str))) {
                                                            if (
                                                                (0x2aU 
                                                                 == 
                                                                 VL_GETC_N(__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                                if (
                                                                    (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                     == 
                                                                     VL_LEN_IN(__Vfunc_uvm_re_match__148__re))) {
                                                                    __Vfunc_uvm_re_match__148__Vfuncout = 0U;
                                                                    goto __Vlabel0;
                                                                }
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                            } else if (
                                                                       ((VL_GETC_N(__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                                         == 
                                                                         VL_GETC_N(__Vfunc_uvm_re_match__148__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                                        | (0x3fU 
                                                                           == 
                                                                           VL_GETC_N(__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                            } else {
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                                __Vfunc_uvm_re_match__148____Vincrement1 
                                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                    = __Vfunc_uvm_re_match__148____Vincrement1;
                                                            }
                                                        }
                                                        while (
                                                               (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                                           VL_LEN_IN(__Vfunc_uvm_re_match__148__re)) 
                                                                & (0x2aU 
                                                                   == 
                                                                   VL_GETC_N(__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                        }
                                                        __Vfunc_uvm_re_match__148__Vfuncout 
                                                            = 
                                                            ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                              == 
                                                              VL_LEN_IN(__Vfunc_uvm_re_match__148__re))
                                                              ? 0U
                                                              : 1U);
                                                        __Vlabel0: ;
                                                    }
                                                }(), __Vfunc_uvm_re_match__148__Vfuncout));
                                    }(), (IData)(__Vfunc_uvm_is_match__145__Vfuncout))))) 
                 && (key == ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_type_names
                                              .at(key), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1862)
                             ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__149__Vfuncout);
                            }(), __Vtask_get_type_name__149__Vfuncout)))) {
                if ((1U & (~ (IData)(unnamedblk37__DOT__banner)))) {
                    qs.push_back("  Type Name\n"s);
                    qs.push_back("  ---------\n"s);
                    unnamedblk37__DOT__banner = 1U;
                }
                __Vtemp_19 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_type_names
                                      .at(key), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1868)
                              ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__150__Vfuncout);
                    }(), __Vtask_get_type_name__150__Vfuncout);
                qs.push_back(VL_SFORMATF_N_NX("  %@\n",0,
                                              -1,&(__Vtemp_19)) );
            }
        } while ((0U != this->__PVT__m_type_names.next(key)));
    }
    qs.push_back("(*) Types with no associated type name will be printed as <unknown>\n\n####\n\n"s);
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__151__id = "UVM/FACTORY/PRINT"s;
                    __Vfunc_uvm_report_enabled__151__severity = 0U;
                    __Vfunc_uvm_report_enabled__151__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__152__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__152__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__153__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__153__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__151__verbosity, (IData)(__Vfunc_uvm_report_enabled__151__severity), __Vfunc_uvm_report_enabled__151__id, __Vtask_uvm_report_enabled__154__Vfuncout);
                    __Vfunc_uvm_report_enabled__151__Vfuncout 
                        = __Vtask_uvm_report_enabled__154__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__151__Vfuncout))) {
        __Vtask_uvm_report_info__155__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__155__context_name = ""s;
        __Vtask_uvm_report_info__155__line = 0x00000753U;
        __Vtask_uvm_report_info__155__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh"s;
        __Vtask_uvm_report_info__155__verbosity = 0U;
        __Vtask_uvm_report_info__155__message = VL_CVT_PACK_STR_NN(
                                                                   ([&]() {
                    __Vfunc_m_uvm_string_queue_join__156__Vfuncout 
                        = VL_CVT_PACK_STR_ND(qs);
                }(), __Vfunc_m_uvm_string_queue_join__156__Vfuncout));
        __Vtask_uvm_report_info__155__id = "UVM/FACTORY/PRINT"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__157__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__157__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__158__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__158__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__155__id, __Vtask_uvm_report_info__155__message, __Vtask_uvm_report_info__155__verbosity, __Vtask_uvm_report_info__155__filename, __Vtask_uvm_report_info__155__line, __Vtask_uvm_report_info__155__context_name, (IData)(__Vtask_uvm_report_info__155__report_enabled_checked));
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_name(Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_debug_create(vlProcess, vlSymsp, requested_type_name, VlNull{}, parent_inst_path, name);
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_type\n"); );
    // Body
    this->__VnoInFunc_m_debug_create(vlProcess, vlSymsp, ""s, requested_type, parent_inst_path, name);
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_create\n"); );
    // Locals
    std::string __Vtask_uvm_report_warning__162__id;
    std::string __Vtask_uvm_report_warning__162__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__162__verbosity;
    __Vtask_uvm_report_warning__162__verbosity = 0;
    std::string __Vtask_uvm_report_warning__162__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__162__line;
    __Vtask_uvm_report_warning__162__line = 0;
    std::string __Vtask_uvm_report_warning__162__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__162__report_enabled_checked;
    __Vtask_uvm_report_warning__162__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__163__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__164__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_find_override_by_name__166__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_find_override_by_type__168__Vfuncout;
    std::string __Vtask_get_type_name__169__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk38__DOT__index;
    unnamedblk38__DOT__index = 0;
    std::string full_inst_path;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> result;
    {
        full_inst_path = ((""s == parent_inst_path)
                           ? name : ((""s != name) ? 
                                     VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(parent_inst_path, "."s), name)
                                      : parent_inst_path));
        this->__PVT__m_override_info.clear();
        if ((VlNull{} == requested_type)) {
            if (((! this->__PVT__m_type_names.exists(requested_type_name)) 
                 & (! this->__PVT__m_lookup_strs.exists(requested_type_name)))) {
                __Vtask_uvm_report_warning__162__report_enabled_checked = 0U;
                __Vtask_uvm_report_warning__162__context_name = ""s;
                __Vtask_uvm_report_warning__162__line = 0U;
                __Vtask_uvm_report_warning__162__filename = ""s;
                __Vtask_uvm_report_warning__162__verbosity = 0U;
                __Vtask_uvm_report_warning__162__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("The factory does not recognize '"s, requested_type_name), "' as a registered type."s));
                __Vtask_uvm_report_warning__162__id = "Factory Warning"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__163__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__163__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__164__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__164__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__162__id, __Vtask_uvm_report_warning__162__message, __Vtask_uvm_report_warning__162__verbosity, __Vtask_uvm_report_warning__162__filename, __Vtask_uvm_report_warning__162__line, __Vtask_uvm_report_warning__162__context_name, (IData)(__Vtask_uvm_report_warning__162__report_enabled_checked));
                goto __Vlabel0;
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass = 1U;
            this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, requested_type_name, full_inst_path, __Vfunc_find_override_by_name__166__Vfuncout);
            result = __Vfunc_find_override_by_name__166__Vfuncout;
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass = 1U;
            if ((! this->__PVT__m_types.exists(requested_type))) {
                this->__VnoInFunc_register(vlProcess, vlSymsp, requested_type);
            }
            this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, __Vfunc_find_override_by_type__168__Vfuncout);
            result = __Vfunc_find_override_by_type__168__Vfuncout;
            if ((""s == requested_type_name)) {
                VL_NULL_CHECK(requested_type, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1936)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__169__Vfuncout);
                requested_type_name = __Vtask_get_type_name__169__Vfuncout;
            }
        }
        this->__VnoInFunc_m_debug_display(vlProcess, vlSymsp, requested_type_name, result, full_inst_path);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass = 0U;
        unnamedblk38__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk38__DOT__index, this->__PVT__m_override_info.size())) {
            VL_NULL_CHECK(this->__PVT__m_override_info.atWriteAppend(unnamedblk38__DOT__index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1943)->__PVT__selected = 0U;
            unnamedblk38__DOT__index = ((IData)(1U) 
                                        + unnamedblk38__DOT__index);
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_display(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> result, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_display\n"); );
    // Locals
    std::string __Vtask_get_type_name__171__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__172__Vfuncout;
    __Vfunc_uvm_report_enabled__172__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__172__verbosity;
    __Vfunc_uvm_report_enabled__172__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__172__severity;
    __Vfunc_uvm_report_enabled__172__severity = 0;
    std::string __Vfunc_uvm_report_enabled__172__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__173__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__174__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__175__Vfuncout;
    __Vtask_uvm_report_enabled__175__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__176__id;
    std::string __Vtask_uvm_report_info__176__message;
    IData/*31:0*/ __Vtask_uvm_report_info__176__verbosity;
    __Vtask_uvm_report_info__176__verbosity = 0;
    std::string __Vtask_uvm_report_info__176__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__176__line;
    __Vtask_uvm_report_info__176__line = 0;
    std::string __Vtask_uvm_report_info__176__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__176__report_enabled_checked;
    __Vtask_uvm_report_info__176__report_enabled_checked = 0;
    std::string __Vfunc_m_uvm_string_queue_join__177__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__178__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__179__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    std::string __Vtemp_13;
    // Body
    IData/*31:0*/ unnamedblk39__DOT__i;
    unnamedblk39__DOT__i = 0;
    IData/*31:0*/ unnamedblk40__DOT__i;
    unnamedblk40__DOT__i = 0;
    IData/*31:0*/ max1;
    max1 = 0;
    IData/*31:0*/ max2;
    max2 = 0;
    IData/*31:0*/ max3;
    max3 = 0;
    std::string dash;
    dash = "---------------------------------------------------------------------------------------------------"s;
    std::string space;
    space = "                                                                                                   "s;
    VlQueue<std::string> qs;
    qs.push_back("\n#### Factory Override Information (*)\n\n"s);
    qs.push_back(VL_SFORMATF_N_NX("Given a request for an object of type '%@' with an instance\npath of '%@' the factory encountered\n\n",0,
                                  -1,&(requested_type_name),
                                  -1,&(full_inst_path)) );
    if ((0U == this->__PVT__m_override_info.size())) {
        qs.push_back("no relevant overrides.\n\n"s);
    } else {
        qs.push_back("the following relevant overrides. An 'x' next to a match indicates a\nmatch that was ignored.\n\n"s);
        unnamedblk39__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk39__DOT__i, this->__PVT__m_override_info.size())) {
            if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk39__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1972)
                                         ->__PVT__orig
                                         .__PVT__m_type_name), max1)) {
                max1 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk39__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1973)
                                 ->__PVT__orig.__PVT__m_type_name);
            }
            if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk39__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1974)
                                         ->__PVT__full_inst_path), max2)) {
                max2 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk39__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1975)
                                 ->__PVT__full_inst_path);
            }
            if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk39__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1976)
                                         ->__PVT__ovrd
                                         .__PVT__m_type_name), max3)) {
                max3 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk39__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1977)
                                 ->__PVT__ovrd.__PVT__m_type_name);
            }
            unnamedblk39__DOT__i = ((IData)(1U) + unnamedblk39__DOT__i);
        }
        if (VL_GTS_III(32, 0x0000000dU, max1)) {
            max1 = 0x0000000dU;
        }
        if (VL_GTS_III(32, 0x0000000dU, max2)) {
            max2 = 0x0000000dU;
        }
        if (VL_GTS_III(32, 0x0000000dU, max3)) {
            max3 = 0x0000000dU;
        }
        __Vtemp_1 = VL_SUBSTR_N(space,1U,(max1 - (IData)(0x0000000dU)));
        __Vtemp_2 = VL_SUBSTR_N(space,1U,(max2 - (IData)(0x0000000dU)));
        __Vtemp_3 = VL_SUBSTR_N(space,1U,(max3 - (IData)(0x0000000dU)));
        qs.push_back(VL_SFORMATF_N_NX("Original Type%0@  Instance Path%0@  Override Type%0@\n",0,
                                      -1,&(__Vtemp_1),
                                      -1,&(__Vtemp_2),
                                      -1,&(__Vtemp_3)) );
        __Vtemp_4 = VL_SUBSTR_N(dash,1U,max1);
        __Vtemp_5 = VL_SUBSTR_N(dash,1U,max2);
        __Vtemp_6 = VL_SUBSTR_N(dash,1U,max3);
        qs.push_back(VL_SFORMATF_N_NX("  %0@  %0@  %0@\n",0,
                                      -1,&(__Vtemp_4),
                                      -1,&(__Vtemp_5),
                                      -1,&(__Vtemp_6)) );
        unnamedblk40__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk40__DOT__i, this->__PVT__m_override_info.size())) {
            __Vtemp_7 = VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1994)
                ->__PVT__orig.__PVT__m_type_name;
            __Vtemp_8 = VL_SUBSTR_N(space,1U,(max1 
                                              - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1995)
                                                          ->__PVT__orig
                                                          .__PVT__m_type_name)));
            qs.push_back(VL_SFORMATF_N_NX("%s%0@%0@\n",0,
                                          16,(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1993)
                                              ->__PVT__selected
                                               ? 0x2020U
                                               : 0x7820U),
                                          -1,&(__Vtemp_7),
                                          -1,&(__Vtemp_8)) );
            __Vtemp_9 = VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1996)
                ->__PVT__full_inst_path;
            __Vtemp_10 = VL_SUBSTR_N(space,1U,(max2 
                                               - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1997)
                                                           ->__PVT__full_inst_path)));
            qs.push_back(VL_SFORMATF_N_NX("  %0@%0@",0,
                                          -1,&(__Vtemp_9),
                                          -1,&(__Vtemp_10)) );
            __Vtemp_11 = VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1998)
                ->__PVT__ovrd.__PVT__m_type_name;
            __Vtemp_12 = VL_SUBSTR_N(space,1U,(max3 
                                               - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 1999)
                                                           ->__PVT__ovrd
                                                           .__PVT__m_type_name)));
            qs.push_back(VL_SFORMATF_N_NX("  %0@%0@",0,
                                          -1,&(__Vtemp_11),
                                          -1,&(__Vtemp_12)) );
            if (("*"s == VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 2000)
                 ->__PVT__full_inst_path)) {
                qs.push_back("  <type override>"s);
            } else {
                qs.push_back("\n"s);
            }
            unnamedblk40__DOT__i = ((IData)(1U) + unnamedblk40__DOT__i);
        }
        qs.push_back("\n"s);
    }
    qs.push_back("Result:\n\n"s);
    __Vtemp_13 = ((VlNull{} == result) ? requested_type_name
                   : ([&]() {
                VL_NULL_CHECK(result, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 2011)
                      ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__171__Vfuncout);
            }(), __Vtask_get_type_name__171__Vfuncout));
    qs.push_back(VL_SFORMATF_N_NX("  The factory will produce an object of type '%0@'\n",0,
                                  -1,&(__Vtemp_13)) );
    qs.push_back("\n(*) Types with no associated type name will be printed as <unknown>\n\n####\n\n"s);
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__172__id = "UVM/FACTORY/DUMP"s;
                    __Vfunc_uvm_report_enabled__172__severity = 0U;
                    __Vfunc_uvm_report_enabled__172__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__173__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__173__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__174__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__174__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__172__verbosity, (IData)(__Vfunc_uvm_report_enabled__172__severity), __Vfunc_uvm_report_enabled__172__id, __Vtask_uvm_report_enabled__175__Vfuncout);
                    __Vfunc_uvm_report_enabled__172__Vfuncout 
                        = __Vtask_uvm_report_enabled__175__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__172__Vfuncout))) {
        __Vtask_uvm_report_info__176__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__176__context_name = ""s;
        __Vtask_uvm_report_info__176__line = 0x000007dfU;
        __Vtask_uvm_report_info__176__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh"s;
        __Vtask_uvm_report_info__176__verbosity = 0U;
        __Vtask_uvm_report_info__176__message = VL_CVT_PACK_STR_NN(
                                                                   ([&]() {
                    __Vfunc_m_uvm_string_queue_join__177__Vfuncout 
                        = VL_CVT_PACK_STR_ND(qs);
                }(), __Vfunc_m_uvm_string_queue_join__177__Vfuncout));
        __Vtask_uvm_report_info__176__id = "UVM/FACTORY/DUMP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__178__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__178__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__179__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__179__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__176__id, __Vtask_uvm_report_info__176__message, __Vtask_uvm_report_info__176__verbosity, __Vtask_uvm_report_info__176__filename, __Vtask_uvm_report_info__176__line, __Vtask_uvm_report_info__176__context_name, (IData)(__Vtask_uvm_report_info__176__report_enabled_checked));
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_resolve_type_name(Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_resolve_type_name\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    wrapper = VlNull{};
    if (this->__PVT__m_type_names.exists(requested_type_name)) {
        wrapper = this->__PVT__m_type_names.at(requested_type_name);
    }
    m_resolve_type_name__Vfuncrtn = wrapper;
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_resolve_type_name_by_inst(Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name_by_inst__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_resolve_type_name_by_inst\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_uvm_is_match__181__Vfuncout;
    __Vfunc_uvm_is_match__181__Vfuncout = 0;
    std::string __Vfunc_uvm_is_match__181__expr;
    std::string __Vfunc_uvm_is_match__181__str;
    std::string __Vfunc_uvm_glob_to_re__182__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__182__glob;
    IData/*31:0*/ __Vfunc_uvm_re_match__183__Vfuncout;
    __Vfunc_uvm_re_match__183__Vfuncout = 0;
    std::string __Vfunc_uvm_re_match__183__re;
    std::string __Vfunc_uvm_re_match__183__str;
    IData/*31:0*/ __Vfunc_uvm_re_match__183____Vincrement1;
    __Vfunc_uvm_re_match__183____Vincrement1 = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_m_resolve_type_name__184__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    VlQueue<Vdma_m_inst_typename_alias_t__struct__0> type_alias_inst;
    wrapper = VlNull{};
    type_alias_inst = this->__PVT__m_inst_aliases.find(
                                                       [&](
                                                           IData/*31:0*/ i__DOT__index, 
                                                           Vdma_m_inst_typename_alias_t__struct__0 i) -> 
                                                       CData/*31:0*/ {
            return (((i.__PVT__alias_type_name == requested_type_name) 
                     && ([&]() {
                            __Vfunc_uvm_is_match__181__str 
                                = full_inst_path;
                            __Vfunc_uvm_is_match__181__expr 
                                = VL_CVT_PACK_STR_NN(
                                                     i
                                                     .__PVT__full_inst_path);
                            __Vfunc_uvm_glob_to_re__182__glob 
                                = __Vfunc_uvm_is_match__181__expr;
                            __Vfunc_uvm_glob_to_re__182__Vfuncout 
                                = __Vfunc_uvm_glob_to_re__182__glob;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                = __Vfunc_uvm_glob_to_re__182__Vfuncout;
                            __Vfunc_uvm_is_match__181__Vfuncout 
                                = (0U == ([&]() {
                                        __Vfunc_uvm_re_match__183__str 
                                            = __Vfunc_uvm_is_match__181__str;
                                        __Vfunc_uvm_re_match__183__re 
                                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                        {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                            if ((0U 
                                                 == 
                                                 VL_LEN_IN(__Vfunc_uvm_re_match__183__re))) {
                                                __Vfunc_uvm_re_match__183__Vfuncout = 0U;
                                                goto __Vlabel0;
                                            }
                                            if ((0x5eU 
                                                 == 
                                                 VL_GETC_N(__Vfunc_uvm_re_match__183__re,0U))) {
                                                __Vfunc_uvm_re_match__183__re 
                                                    = 
                                                    VL_SUBSTR_N(__Vfunc_uvm_re_match__183__re,1U,
                                                                (VL_LEN_IN(__Vfunc_uvm_re_match__183__re) 
                                                                 - (IData)(1U)));
                                            }
                                            while (
                                                   ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                     != 
                                                     VL_LEN_IN(__Vfunc_uvm_re_match__183__str)) 
                                                    & (0x2aU 
                                                       != 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                if (
                                                    ((VL_GETC_N(__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                      != 
                                                      VL_GETC_N(__Vfunc_uvm_re_match__183__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                     & (0x3fU 
                                                        != 
                                                        VL_GETC_N(__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    __Vfunc_uvm_re_match__183__Vfuncout = 1U;
                                                    goto __Vlabel0;
                                                }
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                            }
                                            while (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    != 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__183__str))) {
                                                if (
                                                    (0x2aU 
                                                     == 
                                                     VL_GETC_N(__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    if (
                                                        (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                         == 
                                                         VL_LEN_IN(__Vfunc_uvm_re_match__183__re))) {
                                                        __Vfunc_uvm_re_match__183__Vfuncout = 0U;
                                                        goto __Vlabel0;
                                                    }
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else if (
                                                           ((VL_GETC_N(__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                             == 
                                                             VL_GETC_N(__Vfunc_uvm_re_match__183__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                            | (0x3fU 
                                                               == 
                                                               VL_GETC_N(__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                    __Vfunc_uvm_re_match__183____Vincrement1 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = __Vfunc_uvm_re_match__183____Vincrement1;
                                                }
                                            }
                                            while (
                                                   (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                               VL_LEN_IN(__Vfunc_uvm_re_match__183__re)) 
                                                    & (0x2aU 
                                                       == 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                            }
                                            __Vfunc_uvm_re_match__183__Vfuncout 
                                                = (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    == 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__183__re))
                                                    ? 0U
                                                    : 1U);
                                            __Vlabel0: ;
                                        }
                                    }(), __Vfunc_uvm_re_match__183__Vfuncout));
                        }(), (IData)(__Vfunc_uvm_is_match__181__Vfuncout))));
        }
    );
    wrapper = (VL_LTS_III(32, 0U, type_alias_inst.size())
                ? type_alias_inst.at(0U).__PVT__orig
               .__PVT__m_type : ([&]() {
                this->__VnoInFunc_m_resolve_type_name(vlSymsp, requested_type_name, __Vfunc_m_resolve_type_name__184__Vfuncout);
            }(), __Vfunc_m_resolve_type_name__184__Vfuncout));
    m_resolve_type_name_by_inst__Vfuncrtn = wrapper;
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_type_pair(Vdma__Syms* __restrict vlSymsp, Vdma_m_uvm_factory_type_pair_t__struct__0 match_type_pair, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, CData/*0:0*/ &m_matches_type_pair__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_type_pair\n"); );
    // Body
    m_matches_type_pair__Vfuncrtn = (((VlNull{} != match_type_pair
                                       .__PVT__m_type) 
                                      & (match_type_pair
                                         .__PVT__m_type 
                                         == requested_type)) 
                                     | ((("<unknown>"s 
                                          != match_type_pair
                                          .__PVT__m_type_name) 
                                         & (""s != match_type_pair
                                            .__PVT__m_type_name)) 
                                        & (match_type_pair
                                           .__PVT__m_type_name 
                                           == requested_type_name)));
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_inst_override(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override> __SYM__override, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, std::string full_inst_path, CData/*0:0*/ &m_matches_inst_override__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_inst_override\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_m_resolve_type_name_by_inst__185__Vfuncout;
    CData/*0:0*/ __Vfunc_m_matches_type_pair__186__Vfuncout;
    __Vfunc_m_matches_type_pair__186__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_uvm_is_match__187__Vfuncout;
    __Vfunc_uvm_is_match__187__Vfuncout = 0;
    std::string __Vfunc_uvm_is_match__187__expr;
    std::string __Vfunc_uvm_is_match__187__str;
    std::string __Vfunc_uvm_glob_to_re__188__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__188__glob;
    IData/*31:0*/ __Vfunc_uvm_re_match__189__Vfuncout;
    __Vfunc_uvm_re_match__189__Vfuncout = 0;
    std::string __Vfunc_uvm_re_match__189__re;
    std::string __Vfunc_uvm_re_match__189__str;
    IData/*31:0*/ __Vfunc_uvm_re_match__189____Vincrement1;
    __Vfunc_uvm_re_match__189____Vincrement1 = 0;
    // Body
    Vdma_m_uvm_factory_type_pair_t__struct__0 match_type_pair;
    {
        match_type_pair = VL_NULL_CHECK(__SYM__override, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 2068)
            ->__PVT__orig;
        if ((VlNull{} == match_type_pair.__PVT__m_type)) {
            this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(match_type_pair
                                                                             .__PVT__m_type_name), full_inst_path, __Vfunc_m_resolve_type_name_by_inst__185__Vfuncout);
            match_type_pair.__PVT__m_type = __Vfunc_m_resolve_type_name_by_inst__185__Vfuncout;
        }
        if (([&]() {
                    this->__VnoInFunc_m_matches_type_pair(vlSymsp, match_type_pair, requested_type, requested_type_name, __Vfunc_m_matches_type_pair__186__Vfuncout);
                }(), (IData)(__Vfunc_m_matches_type_pair__186__Vfuncout))) {
            if (VL_NULL_CHECK(__SYM__override, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 2075)
                ->__PVT__has_wildcard) {
                m_matches_inst_override__Vfuncrtn = 
                    (("*"s == VL_NULL_CHECK(__SYM__override, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 2076)
                      ->__PVT__full_inst_path) || ([&]() {
                            __Vfunc_uvm_is_match__187__str 
                                = full_inst_path;
                            __Vfunc_uvm_is_match__187__expr 
                                = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(__SYM__override, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 2077)
                                                     ->__PVT__full_inst_path);
                            __Vfunc_uvm_glob_to_re__188__glob 
                                = __Vfunc_uvm_is_match__187__expr;
                            __Vfunc_uvm_glob_to_re__188__Vfuncout 
                                = __Vfunc_uvm_glob_to_re__188__glob;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                = __Vfunc_uvm_glob_to_re__188__Vfuncout;
                            __Vfunc_uvm_is_match__187__Vfuncout 
                                = (0U == ([&]() {
                                        __Vfunc_uvm_re_match__189__str 
                                            = __Vfunc_uvm_is_match__187__str;
                                        __Vfunc_uvm_re_match__189__re 
                                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                        {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                            if ((0U 
                                                 == 
                                                 VL_LEN_IN(__Vfunc_uvm_re_match__189__re))) {
                                                __Vfunc_uvm_re_match__189__Vfuncout = 0U;
                                                goto __Vlabel1;
                                            }
                                            if ((0x5eU 
                                                 == 
                                                 VL_GETC_N(__Vfunc_uvm_re_match__189__re,0U))) {
                                                __Vfunc_uvm_re_match__189__re 
                                                    = 
                                                    VL_SUBSTR_N(__Vfunc_uvm_re_match__189__re,1U,
                                                                (VL_LEN_IN(__Vfunc_uvm_re_match__189__re) 
                                                                 - (IData)(1U)));
                                            }
                                            while (
                                                   ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                     != 
                                                     VL_LEN_IN(__Vfunc_uvm_re_match__189__str)) 
                                                    & (0x2aU 
                                                       != 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                if (
                                                    ((VL_GETC_N(__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                      != 
                                                      VL_GETC_N(__Vfunc_uvm_re_match__189__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                     & (0x3fU 
                                                        != 
                                                        VL_GETC_N(__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    __Vfunc_uvm_re_match__189__Vfuncout = 1U;
                                                    goto __Vlabel1;
                                                }
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                            }
                                            while (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    != 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__189__str))) {
                                                if (
                                                    (0x2aU 
                                                     == 
                                                     VL_GETC_N(__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    if (
                                                        (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                         == 
                                                         VL_LEN_IN(__Vfunc_uvm_re_match__189__re))) {
                                                        __Vfunc_uvm_re_match__189__Vfuncout = 0U;
                                                        goto __Vlabel1;
                                                    }
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else if (
                                                           ((VL_GETC_N(__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                             == 
                                                             VL_GETC_N(__Vfunc_uvm_re_match__189__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                            | (0x3fU 
                                                               == 
                                                               VL_GETC_N(__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                    __Vfunc_uvm_re_match__189____Vincrement1 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = __Vfunc_uvm_re_match__189____Vincrement1;
                                                }
                                            }
                                            while (
                                                   (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                               VL_LEN_IN(__Vfunc_uvm_re_match__189__re)) 
                                                    & (0x2aU 
                                                       == 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                            }
                                            __Vfunc_uvm_re_match__189__Vfuncout 
                                                = (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    == 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__189__re))
                                                    ? 0U
                                                    : 1U);
                                            __Vlabel1: ;
                                        }
                                    }(), __Vfunc_uvm_re_match__189__Vfuncout));
                        }(), (IData)(__Vfunc_uvm_is_match__187__Vfuncout)));
                goto __Vlabel0;
            } else {
                m_matches_inst_override__Vfuncrtn = 
                    (VL_NULL_CHECK(__SYM__override, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 2080)
                     ->__PVT__full_inst_path == full_inst_path);
                goto __Vlabel0;
            }
        }
        m_matches_inst_override__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_type_override(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory_override> __SYM__override, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, std::string full_inst_path, CData/*0:0*/ match_original_type, CData/*0:0*/ resolve_null_type_by_inst, CData/*0:0*/ &m_matches_type_override__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_type_override\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_m_resolve_type_name_by_inst__190__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_m_resolve_type_name__191__Vfuncout;
    CData/*0:0*/ __Vfunc_m_matches_type_pair__192__Vfuncout;
    __Vfunc_m_matches_type_pair__192__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> __Vtemp_1;
    // Body
    Vdma_m_uvm_factory_type_pair_t__struct__0 match_type_pair;
    match_type_pair = ((IData)(match_original_type)
                        ? VL_NULL_CHECK(__SYM__override, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 2095)
                       ->__PVT__orig : VL_NULL_CHECK(__SYM__override, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 2095)
                       ->__PVT__ovrd);
    if ((VlNull{} == match_type_pair.__PVT__m_type)) {
        __Vtemp_1 = (resolve_null_type_by_inst ? ([&]() {
                    this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(match_type_pair
                                                                                .__PVT__m_type_name), full_inst_path, __Vfunc_m_resolve_type_name_by_inst__190__Vfuncout);
                }(), __Vfunc_m_resolve_type_name_by_inst__190__Vfuncout)
                      : ([&]() {
                    this->__VnoInFunc_m_resolve_type_name(vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(match_type_pair
                                                                             .__PVT__m_type_name), __Vfunc_m_resolve_type_name__191__Vfuncout);
                }(), __Vfunc_m_resolve_type_name__191__Vfuncout));
        match_type_pair.__PVT__m_type = __Vtemp_1;
    }
    this->__VnoInFunc_m_matches_type_pair(vlSymsp, match_type_pair, requested_type, requested_type_name, __Vfunc_m_matches_type_pair__192__Vfuncout);
    m_matches_type_override__Vfuncrtn = __Vfunc_m_matches_type_pair__192__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_default_factory::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_types.atDefault() = 0;
    __PVT__m_lookup_strs.atDefault() = 0;
}

Vdma_uvm_pkg__03a__03auvm_default_factory::~Vdma_uvm_pkg__03a__03auvm_default_factory() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_default_factory>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_default_factory::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_default_factory::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_factory::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_types:" + VL_TO_STRING(__PVT__m_types);
    out += ", m_lookup_strs:" + VL_TO_STRING(__PVT__m_lookup_strs);
    out += ", m_type_names:" + VL_TO_STRING(__PVT__m_type_names);
    out += ", m_inst_aliases:" + VL_TO_STRING(__PVT__m_inst_aliases);
    out += ", m_type_overrides:" + VL_TO_STRING(__PVT__m_type_overrides);
    out += ", m_inst_overrides:" + VL_TO_STRING(__PVT__m_inst_overrides);
    out += ", m_override_info:" + VL_TO_STRING(__PVT__m_override_info);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_factory::to_string_middle();
    return (out);
}
