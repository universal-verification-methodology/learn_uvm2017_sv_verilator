// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_get_max_size(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_include_coverage(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ models, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_include_coverage\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz175__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, scope)), "include_coverage"s, models, accessor);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_unregister(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_unregister\n"); );
    // Body
    this->__PVT__m_maps.erase(map);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XsampleX(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XsampleX\n"); );
    // Body
    this->__VnoInFunc_sample(vlSymsp, data, byte_en, (IData)(is_read), map);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_write(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_write\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_write(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_write\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_read(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_read\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_read(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_read\n"); );
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::Vclass_hierarchy_uvm_pkg__03a__03auvm_reg(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_coverage)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__Vfuncout;
    __Vfunc_uvm_report_enabled__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    std::string __Vfunc_uvm_report_enabled__2__id;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__5__Vfuncout;
    __Vtask_uvm_report_enabled__5__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__6__id;
    std::string __Vtask_uvm_report_error__6__message;
    IData/*31:0*/ __Vtask_uvm_report_error__6__verbosity;
    __Vtask_uvm_report_error__6__verbosity = 0;
    std::string __Vtask_uvm_report_error__6__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__6__line;
    __Vtask_uvm_report_error__6__line = 0;
    std::string __Vtask_uvm_report_error__6__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__6__report_enabled_checked;
    __Vtask_uvm_report_error__6__report_enabled_checked = 0;
    std::string __Vfunc_get_name__7__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    std::string __Vtemp_1;
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    if ((0U == n_bits)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__2__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__2__severity = 2U;
                        __Vfunc_uvm_report_enabled__2__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__3__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__4__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), __Vfunc_uvm_report_enabled__2__id, __Vtask_uvm_report_enabled__5__Vfuncout);
                        __Vfunc_uvm_report_enabled__2__Vfuncout 
                            = __Vtask_uvm_report_enabled__5__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__2__Vfuncout))) {
            __Vtask_uvm_report_error__6__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__6__context_name = ""s;
            __Vtask_uvm_report_error__6__line = 0x00000257U;
            __Vtask_uvm_report_error__6__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
            __Vtask_uvm_report_error__6__verbosity = 0U;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__7__Vfuncout);
                }(), __Vfunc_get_name__7__Vfuncout);
            __Vtask_uvm_report_error__6__message = VL_SFORMATF_N_NX("Register \"%@\" cannot have 0 bits",0,
                                                                    -1,
                                                                    &(__Vtemp_1)) ;
            __Vtask_uvm_report_error__6__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__6__id, __Vtask_uvm_report_error__6__message, __Vtask_uvm_report_error__6__verbosity, __Vtask_uvm_report_error__6__filename, __Vtask_uvm_report_error__6__line, __Vtask_uvm_report_error__6__context_name, (IData)(__Vtask_uvm_report_error__6__report_enabled_checked));
        }
        n_bits = 1U;
    }
    this->__PVT__m_n_bits = n_bits;
    this->__PVT__m_has_cover = has_coverage;
    this->__PVT__m_atomic = VL_NEW(Vclass_hierarchy_std__03a__03asemaphore, vlSymsp, 1U);
    this->__PVT__m_n_used_bits = 0U;
    this->__PVT__m_locked = 0U;
    this->__PVT__m_is_busy = 0U;
    this->__PVT__m_is_locked_by_field = 0U;
    this->__PVT__m_hdl_paths_pool = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_object_string_pool__Tz194, vlProcess, vlSymsp, "hdl_paths"s);
    if ((n_bits > vlSymsp->TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__PVT__m_max_size 
            = n_bits;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_configure(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__Vfuncout;
    __Vfunc_uvm_report_enabled__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    std::string __Vfunc_uvm_report_enabled__13__id;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
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
    std::string __Vfunc_get_name__18__Vfuncout;
    std::string __Vfunc_get_type_name__19__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == blk_parent)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__13__id = "UVM/REG/CFG/NOBLK"s;
                            __Vfunc_uvm_report_enabled__13__severity = 2U;
                            __Vfunc_uvm_report_enabled__13__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__14__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__15__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), __Vfunc_uvm_report_enabled__13__id, __Vtask_uvm_report_enabled__16__Vfuncout);
                            __Vfunc_uvm_report_enabled__13__Vfuncout 
                                = __Vtask_uvm_report_enabled__16__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__13__Vfuncout))) {
                __Vtask_uvm_report_error__17__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__17__context_name = ""s;
                __Vtask_uvm_report_error__17__line = 0x0000026fU;
                __Vtask_uvm_report_error__17__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_error__17__verbosity = 0U;
                __Vtask_uvm_report_error__17__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("uvm_reg::configure() called without a parent block for instance \""s, 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__18__Vfuncout);
                                }(), __Vfunc_get_name__18__Vfuncout)), "\" of register type \""s), 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__19__Vfuncout);
                                }(), __Vfunc_get_type_name__19__Vfuncout)), "\"."s));
                            __Vtask_uvm_report_error__17__id = "UVM/REG/CFG/NOBLK"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__20__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__20__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__21__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__17__id, __Vtask_uvm_report_error__17__message, __Vtask_uvm_report_error__17__verbosity, __Vtask_uvm_report_error__17__filename, __Vtask_uvm_report_error__17__line, __Vtask_uvm_report_error__17__context_name, (IData)(__Vtask_uvm_report_error__17__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    this->__PVT__m_parent = blk_parent;
                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 628)
                                                        ->__VnoInFunc_add_reg(vlSymsp, 
                                                                              VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this});
                    this->__PVT__m_regfile_parent = regfile_parent;
                    if ((""s != hdl_path)) {
                        this->__VnoInFunc_add_hdl_path_slice(vlSymsp, hdl_path, 0xffffffffU, 0xffffffffU, 0U, "RTL"s);
                    }
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_field(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_field> field) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_field\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__25__Vfuncout;
                __Vfunc_uvm_report_enabled__25__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__25__verbosity;
                __Vfunc_uvm_report_enabled__25__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__25__severity;
                __Vfunc_uvm_report_enabled__25__severity = 0;
                std::string __Vfunc_uvm_report_enabled__25__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__28__Vfuncout;
                __Vtask_uvm_report_enabled__28__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__29__id;
                std::string __Vtask_uvm_report_error__29__message;
                IData/*31:0*/ __Vtask_uvm_report_error__29__verbosity;
                __Vtask_uvm_report_error__29__verbosity = 0;
                std::string __Vtask_uvm_report_error__29__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__29__line;
                __Vtask_uvm_report_error__29__line = 0;
                std::string __Vtask_uvm_report_error__29__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__29__report_enabled_checked;
                __Vtask_uvm_report_error__29__report_enabled_checked = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__33__Vfuncout;
                __Vfunc_uvm_report_enabled__33__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
                __Vfunc_uvm_report_enabled__33__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
                __Vfunc_uvm_report_enabled__33__severity = 0;
                std::string __Vfunc_uvm_report_enabled__33__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__36__Vfuncout;
                __Vtask_uvm_report_enabled__36__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__38__Vfuncout;
                __Vtask_get_lsb_pos__38__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__39__Vfuncout;
                __Vtask_get_lsb_pos__39__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__40__Vfuncout;
                __Vtask_get_n_bits__40__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__41__Vfuncout;
                __Vfunc_uvm_report_enabled__41__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__41__verbosity;
                __Vfunc_uvm_report_enabled__41__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__41__severity;
                __Vfunc_uvm_report_enabled__41__severity = 0;
                std::string __Vfunc_uvm_report_enabled__41__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__44__Vfuncout;
                __Vtask_uvm_report_enabled__44__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__45__id;
                std::string __Vtask_uvm_report_error__45__message;
                IData/*31:0*/ __Vtask_uvm_report_error__45__verbosity;
                __Vtask_uvm_report_error__45__verbosity = 0;
                std::string __Vtask_uvm_report_error__45__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__45__line;
                __Vtask_uvm_report_error__45__line = 0;
                std::string __Vtask_uvm_report_error__45__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__45__report_enabled_checked;
                __Vtask_uvm_report_error__45__report_enabled_checked = 0;
                std::string __Vfunc_get_name__46__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__47__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__48__Vfuncout;
                IData/*31:0*/ __Vtask_get_lsb_pos__50__Vfuncout;
                __Vtask_get_lsb_pos__50__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__51__Vfuncout;
                __Vtask_get_n_bits__51__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__52__Vfuncout;
                __Vfunc_uvm_report_enabled__52__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__52__verbosity;
                __Vfunc_uvm_report_enabled__52__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__52__severity;
                __Vfunc_uvm_report_enabled__52__severity = 0;
                std::string __Vfunc_uvm_report_enabled__52__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__53__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__54__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__55__Vfuncout;
                __Vtask_uvm_report_enabled__55__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__56__id;
                std::string __Vtask_uvm_report_error__56__message;
                IData/*31:0*/ __Vtask_uvm_report_error__56__verbosity;
                __Vtask_uvm_report_error__56__verbosity = 0;
                std::string __Vtask_uvm_report_error__56__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__56__line;
                __Vtask_uvm_report_error__56__line = 0;
                std::string __Vtask_uvm_report_error__56__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__56__report_enabled_checked;
                __Vtask_uvm_report_error__56__report_enabled_checked = 0;
                std::string __Vtask_get_name__57__Vfuncout;
                std::string __Vtask_get_name__58__Vfuncout;
                std::string __Vfunc_get_name__59__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
                IData/*31:0*/ __Vtask_get_n_bits__63__Vfuncout;
                __Vtask_get_n_bits__63__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__64__Vfuncout;
                __Vtask_get_lsb_pos__64__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__65__Vfuncout;
                __Vfunc_uvm_report_enabled__65__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__65__verbosity;
                __Vfunc_uvm_report_enabled__65__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__65__severity;
                __Vfunc_uvm_report_enabled__65__severity = 0;
                std::string __Vfunc_uvm_report_enabled__65__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__66__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__67__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__68__Vfuncout;
                __Vtask_uvm_report_enabled__68__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__69__id;
                std::string __Vtask_uvm_report_error__69__message;
                IData/*31:0*/ __Vtask_uvm_report_error__69__verbosity;
                __Vtask_uvm_report_error__69__verbosity = 0;
                std::string __Vtask_uvm_report_error__69__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__69__line;
                __Vtask_uvm_report_error__69__line = 0;
                std::string __Vtask_uvm_report_error__69__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__69__report_enabled_checked;
                __Vtask_uvm_report_error__69__report_enabled_checked = 0;
                std::string __Vtask_get_name__70__Vfuncout;
                std::string __Vtask_get_name__71__Vfuncout;
                std::string __Vfunc_get_name__72__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__73__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__74__Vfuncout;
                std::string __Vtemp_1;
                std::string __Vtemp_2;
                std::string __Vtemp_3;
                std::string __Vtemp_4;
                std::string __Vtemp_5;
                std::string __Vtemp_6;
                std::string __Vtemp_7;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ unnamedblk299__DOT__i;
                unnamedblk299__DOT__i = 0;
                IData/*31:0*/ unnamedblk299__DOT__unnamedblk300__DOT__j;
                unnamedblk299__DOT__unnamedblk300__DOT__j = 0;
                IData/*31:0*/ offset;
                offset = 0;
                IData/*31:0*/ idx;
                idx = 0;
                {
                    if (this->__PVT__m_locked) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__25__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__25__severity = 2U;
                                        __Vfunc_uvm_report_enabled__25__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__26__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__26__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__27__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__27__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__25__verbosity, (IData)(__Vfunc_uvm_report_enabled__25__severity), __Vfunc_uvm_report_enabled__25__id, __Vtask_uvm_report_enabled__28__Vfuncout);
                                        __Vfunc_uvm_report_enabled__25__Vfuncout 
                                            = __Vtask_uvm_report_enabled__28__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__25__Vfuncout))) {
                            __Vtask_uvm_report_error__29__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__29__context_name = ""s;
                            __Vtask_uvm_report_error__29__line = 0x00000282U;
                            __Vtask_uvm_report_error__29__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__29__verbosity = 0U;
                            __Vtask_uvm_report_error__29__message = "Cannot add field to locked register model"s;
                            __Vtask_uvm_report_error__29__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__30__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__31__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__29__id, __Vtask_uvm_report_error__29__message, __Vtask_uvm_report_error__29__verbosity, __Vtask_uvm_report_error__29__filename, __Vtask_uvm_report_error__29__line, __Vtask_uvm_report_error__29__context_name, (IData)(__Vtask_uvm_report_error__29__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    if ((VlNull{} == field)) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__33__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__33__severity = 3U;
                                        __Vfunc_uvm_report_enabled__33__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__34__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__35__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), __Vfunc_uvm_report_enabled__33__id, __Vtask_uvm_report_enabled__36__Vfuncout);
                                        __Vfunc_uvm_report_enabled__33__Vfuncout 
                                            = __Vtask_uvm_report_enabled__36__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__33__Vfuncout))) {
                            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Attempting to register NULL field"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s, 0x00000286U, ""s, 1U);
                        }
                    }
                    VL_NULL_CHECK(field, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 649)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__38__Vfuncout);
                    offset = __Vtask_get_lsb_pos__38__Vfuncout;
                    idx = 0xffffffffU;
                    {
                        unnamedblk299__DOT__i = 0U;
                        while (VL_LTS_III(32, unnamedblk299__DOT__i, this->__PVT__m_fields.size())) {
                            if ((offset < ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk299__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 653)
                                           ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__39__Vfuncout);
                                        }(), __Vtask_get_lsb_pos__39__Vfuncout))) {
                                unnamedblk299__DOT__unnamedblk300__DOT__j 
                                    = unnamedblk299__DOT__i;
                                this->__PVT__m_fields.insert(unnamedblk299__DOT__unnamedblk300__DOT__j, field);
                                idx = unnamedblk299__DOT__i;
                                goto __Vlabel1;
                            }
                            unnamedblk299__DOT__i = 
                                ((IData)(1U) + unnamedblk299__DOT__i);
                        }
                        __Vlabel1: ;
                    }
                    if (VL_GTS_III(32, 0U, idx)) {
                        this->__PVT__m_fields.push_back(field);
                        idx = (this->__PVT__m_fields.size() 
                               - (IData)(1U));
                    }
                    this->__PVT__m_n_used_bits = (this->__PVT__m_n_used_bits 
                                                  + 
                                                  ([&]() {
                                VL_NULL_CHECK(field, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 665)
                                                   ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__40__Vfuncout);
                            }(), __Vtask_get_n_bits__40__Vfuncout));
                    if ((this->__PVT__m_n_used_bits 
                         > this->__PVT__m_n_bits)) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__41__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__41__severity = 2U;
                                        __Vfunc_uvm_report_enabled__41__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__42__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__43__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__41__verbosity, (IData)(__Vfunc_uvm_report_enabled__41__severity), __Vfunc_uvm_report_enabled__41__id, __Vtask_uvm_report_enabled__44__Vfuncout);
                                        __Vfunc_uvm_report_enabled__41__Vfuncout 
                                            = __Vtask_uvm_report_enabled__44__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__41__Vfuncout))) {
                            __Vtask_uvm_report_error__45__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__45__context_name = ""s;
                            __Vtask_uvm_report_error__45__line = 0x0000029fU;
                            __Vtask_uvm_report_error__45__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__45__verbosity = 0U;
                            __Vtemp_1 = ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__46__Vfuncout);
                                }(), __Vfunc_get_name__46__Vfuncout);
                            __Vtask_uvm_report_error__45__message 
                                = VL_SFORMATF_N_NX("Fields use more bits (%0#) than available in register \"%@\" (%0#)",0,
                                                   32,
                                                   this->__PVT__m_n_used_bits,
                                                   -1,
                                                   &(__Vtemp_1),
                                                   32,
                                                   this->__PVT__m_n_bits) ;
                            __Vtask_uvm_report_error__45__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__47__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__47__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__48__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__48__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__45__id, __Vtask_uvm_report_error__45__message, __Vtask_uvm_report_error__45__verbosity, __Vtask_uvm_report_error__45__filename, __Vtask_uvm_report_error__45__line, __Vtask_uvm_report_error__45__context_name, (IData)(__Vtask_uvm_report_error__45__report_enabled_checked));
                        }
                    }
                    if (VL_LTS_III(32, 0U, idx)) {
                        if (((([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                                                (idx 
                                                                                - (IData)(1U))), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 676)
                               ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__50__Vfuncout);
                                        }(), __Vtask_get_lsb_pos__50__Vfuncout) 
                              + ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                                                (idx 
                                                                                - (IData)(1U))), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 677)
                                 ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__51__Vfuncout);
                                        }(), __Vtask_get_n_bits__51__Vfuncout)) 
                             > offset)) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__52__id = "RegModel"s;
                                            __Vfunc_uvm_report_enabled__52__severity = 2U;
                                            __Vfunc_uvm_report_enabled__52__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__53__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__53__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__54__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__54__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__52__verbosity, (IData)(__Vfunc_uvm_report_enabled__52__severity), __Vfunc_uvm_report_enabled__52__id, __Vtask_uvm_report_enabled__55__Vfuncout);
                                            __Vfunc_uvm_report_enabled__52__Vfuncout 
                                                = __Vtask_uvm_report_enabled__55__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__52__Vfuncout))) {
                                __Vtask_uvm_report_error__56__report_enabled_checked = 1U;
                                __Vtask_uvm_report_error__56__context_name = ""s;
                                __Vtask_uvm_report_error__56__line = 0x000002a8U;
                                __Vtask_uvm_report_error__56__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__56__verbosity = 0U;
                                __Vtemp_2 = ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                                               (idx 
                                                                                - (IData)(1U))), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 680)
                                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__57__Vfuncout);
                                    }(), __Vtask_get_name__57__Vfuncout);
                                __Vtemp_3 = ([&]() {
                                        VL_NULL_CHECK(field, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 680)
                                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__58__Vfuncout);
                                    }(), __Vtask_get_name__58__Vfuncout);
                                __Vtemp_4 = ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__59__Vfuncout);
                                    }(), __Vfunc_get_name__59__Vfuncout);
                                __Vtask_uvm_report_error__56__message 
                                    = VL_SFORMATF_N_NX("Field %@ overlaps field %@ in register \"%@\"",0,
                                                       -1,
                                                       &(__Vtemp_2),
                                                       -1,
                                                       &(__Vtemp_3),
                                                       -1,
                                                       &(__Vtemp_4)) ;
                                __Vtask_uvm_report_error__56__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__60__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__60__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__61__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__56__id, __Vtask_uvm_report_error__56__message, __Vtask_uvm_report_error__56__verbosity, __Vtask_uvm_report_error__56__filename, __Vtask_uvm_report_error__56__line, __Vtask_uvm_report_error__56__context_name, (IData)(__Vtask_uvm_report_error__56__report_enabled_checked));
                            }
                        }
                    }
                    if (VL_LTS_III(32, idx, (this->__PVT__m_fields.size() 
                                             - (IData)(1U)))) {
                        if (((offset + ([&]() {
                                            VL_NULL_CHECK(field, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 684)
                                        ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__63__Vfuncout);
                                        }(), __Vtask_get_n_bits__63__Vfuncout)) 
                             > ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                                               ((IData)(1U) 
                                                                                + idx)), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 685)
                                ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__64__Vfuncout);
                                    }(), __Vtask_get_lsb_pos__64__Vfuncout))) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__65__id = "RegModel"s;
                                            __Vfunc_uvm_report_enabled__65__severity = 2U;
                                            __Vfunc_uvm_report_enabled__65__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__66__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__66__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__67__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__67__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__65__verbosity, (IData)(__Vfunc_uvm_report_enabled__65__severity), __Vfunc_uvm_report_enabled__65__id, __Vtask_uvm_report_enabled__68__Vfuncout);
                                            __Vfunc_uvm_report_enabled__65__Vfuncout 
                                                = __Vtask_uvm_report_enabled__68__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__65__Vfuncout))) {
                                __Vtask_uvm_report_error__69__report_enabled_checked = 1U;
                                __Vtask_uvm_report_error__69__context_name = ""s;
                                __Vtask_uvm_report_error__69__line = 0x000002b1U;
                                __Vtask_uvm_report_error__69__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__69__verbosity = 0U;
                                __Vtemp_5 = ([&]() {
                                        VL_NULL_CHECK(field, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 689)
                                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__70__Vfuncout);
                                    }(), __Vtask_get_name__70__Vfuncout);
                                __Vtemp_6 = ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                                               ((IData)(1U) 
                                                                                + idx)), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 689)
                                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__71__Vfuncout);
                                    }(), __Vtask_get_name__71__Vfuncout);
                                __Vtemp_7 = ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__72__Vfuncout);
                                    }(), __Vfunc_get_name__72__Vfuncout);
                                __Vtask_uvm_report_error__69__message 
                                    = VL_SFORMATF_N_NX("Field %@ overlaps field %@ in register \"%@\"",0,
                                                       -1,
                                                       &(__Vtemp_5),
                                                       -1,
                                                       &(__Vtemp_6),
                                                       -1,
                                                       &(__Vtemp_7)) ;
                                __Vtask_uvm_report_error__69__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__73__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__73__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__74__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__74__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__69__id, __Vtask_uvm_report_error__69__message, __Vtask_uvm_report_error__69__verbosity, __Vtask_uvm_report_error__69__filename, __Vtask_uvm_report_error__69__line, __Vtask_uvm_report_error__69__context_name, (IData)(__Vtask_uvm_report_error__69__report_enabled_checked));
                            }
                        }
                    }
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xlock_modelX(Vclass_hierarchy__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xlock_modelX\n"); );
                // Body
                {
                    if (this->__PVT__m_locked) {
                        goto __Vlabel0;
                    }
                    this->__PVT__m_locked = 1U;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_frontdoor(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_frontdoor\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__76__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_reg_map_info__77__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                {
                    VL_NULL_CHECK(ftdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 715)
                                                        ->__PVT__fname 
                        = this->__PVT__m_fname;
                    VL_NULL_CHECK(ftdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 716)
                                                        ->__PVT__lineno 
                        = this->__PVT__m_lineno;
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__76__Vfuncout);
                    map = __Vfunc_get_local_map__76__Vfuncout;
                    if ((VlNull{} == map)) {
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 720)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this}, 1U, __Vtask_get_reg_map_info__77__Vfuncout);
                    map_info = __Vtask_get_reg_map_info__77__Vfuncout;
                    if ((VlNull{} == map_info)) {
                        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 722)
                                                        ->__VnoInFunc_add_reg(vlSymsp, 
                                                                              VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this}, 0xffffffffffffffffULL, "RW"s, 1U, ftdr);
                    } else {
                        VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 724)
                                                        ->__PVT__frontdoor 
                            = ftdr;
                    }
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_frontdoor(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_frontdoor\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__79__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_reg_map_info__80__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                {
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__79__Vfuncout);
                    map = __Vfunc_get_local_map__79__Vfuncout;
                    if ((VlNull{} == map)) {
                        get_frontdoor__Vfuncrtn = VlNull{};
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 736)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this}, 1U, __Vtask_get_reg_map_info__80__Vfuncout);
                    map_info = __Vtask_get_reg_map_info__80__Vfuncout;
                    get_frontdoor__Vfuncrtn = VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 737)
                        ->__PVT__frontdoor;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_backdoor(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_backdoor\n"); );
                // Locals
                CData/*0:0*/ __Vtask_has_update_threads__81__Vfuncout;
                __Vtask_has_update_threads__81__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__82__Vfuncout;
                __Vfunc_uvm_report_enabled__82__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__82__verbosity;
                __Vfunc_uvm_report_enabled__82__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__82__severity;
                __Vfunc_uvm_report_enabled__82__severity = 0;
                std::string __Vfunc_uvm_report_enabled__82__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__83__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__84__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__85__Vfuncout;
                __Vtask_uvm_report_enabled__85__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__86__id;
                std::string __Vtask_uvm_report_warning__86__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__86__verbosity;
                __Vtask_uvm_report_warning__86__verbosity = 0;
                std::string __Vtask_uvm_report_warning__86__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__86__line;
                __Vtask_uvm_report_warning__86__line = 0;
                std::string __Vtask_uvm_report_warning__86__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__86__report_enabled_checked;
                __Vtask_uvm_report_warning__86__report_enabled_checked = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__87__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__88__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VL_NULL_CHECK(bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 746)
                                                        ->__PVT__fname 
                    = fname;
                VL_NULL_CHECK(bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 747)
                                                        ->__PVT__lineno 
                    = lineno;
                if (((VlNull{} != this->__PVT__m_backdoor) 
                     && ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_backdoor, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 749)
                         ->__VnoInFunc_has_update_threads(vlSymsp, __Vtask_has_update_threads__81__Vfuncout);
                            }(), (IData)(__Vtask_has_update_threads__81__Vfuncout)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__82__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__82__severity = 1U;
                                    __Vfunc_uvm_report_enabled__82__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__83__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__84__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__84__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__82__verbosity, (IData)(__Vfunc_uvm_report_enabled__82__severity), __Vfunc_uvm_report_enabled__82__id, __Vtask_uvm_report_enabled__85__Vfuncout);
                                    __Vfunc_uvm_report_enabled__82__Vfuncout 
                                        = __Vtask_uvm_report_enabled__85__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__82__Vfuncout))) {
                        __Vtask_uvm_report_warning__86__report_enabled_checked = 1U;
                        __Vtask_uvm_report_warning__86__context_name = ""s;
                        __Vtask_uvm_report_warning__86__line = 0x000002eeU;
                        __Vtask_uvm_report_warning__86__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_warning__86__verbosity = 0U;
                        __Vtask_uvm_report_warning__86__message = "Previous register backdoor still has update threads running. Backdoors with active mirroring should only be set before simulation starts."s;
                        __Vtask_uvm_report_warning__86__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__87__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__87__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__88__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__88__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__86__id, __Vtask_uvm_report_warning__86__message, __Vtask_uvm_report_warning__86__verbosity, __Vtask_uvm_report_warning__86__filename, __Vtask_uvm_report_warning__86__line, __Vtask_uvm_report_warning__86__context_name, (IData)(__Vtask_uvm_report_warning__86__report_enabled_checked));
                    }
                }
                this->__PVT__m_backdoor = bkdr;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_backdoor(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_backdoor\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_parent__90__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__91__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_parent__92__Vfuncout;
                // Body
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> unnamedblk301__DOT__blk;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk301__DOT__bkdr;
                if (inherited) {
                    this->__VnoInFunc_get_parent(vlSymsp, __Vfunc_get_parent__90__Vfuncout);
                    unnamedblk301__DOT__blk = __Vfunc_get_parent__90__Vfuncout;
                    {
                        while ((VlNull{} != unnamedblk301__DOT__blk)) {
                            VL_NULL_CHECK(unnamedblk301__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 764)
                                                        ->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__91__Vfuncout);
                            unnamedblk301__DOT__bkdr 
                                = __Vtask_get_backdoor__91__Vfuncout;
                            if ((VlNull{} != unnamedblk301__DOT__bkdr)) {
                                this->__PVT__m_backdoor 
                                    = unnamedblk301__DOT__bkdr;
                                goto __Vlabel0;
                            }
                            VL_NULL_CHECK(unnamedblk301__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 769)
                                                        ->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__92__Vfuncout);
                            unnamedblk301__DOT__blk 
                                = __Vtask_get_parent__92__Vfuncout;
                        }
                        __Vlabel0: ;
                    }
                }
                get_backdoor__Vfuncrtn = this->__PVT__m_backdoor;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clear_hdl_path(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clear_hdl_path\n"); );
                // Locals
                std::string __Vtask_get_default_hdl_path__94__Vfuncout;
                std::string __Vtask_get_default_hdl_path__95__Vfuncout;
                IData/*31:0*/ __Vtask_exists__96__Vfuncout;
                __Vtask_exists__96__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__97__Vfuncout;
                __Vfunc_uvm_report_enabled__97__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__97__verbosity;
                __Vfunc_uvm_report_enabled__97__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__97__severity;
                __Vfunc_uvm_report_enabled__97__severity = 0;
                std::string __Vfunc_uvm_report_enabled__97__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__98__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__99__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__100__Vfuncout;
                __Vtask_uvm_report_enabled__100__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__101__id;
                std::string __Vtask_uvm_report_warning__101__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__101__verbosity;
                __Vtask_uvm_report_warning__101__verbosity = 0;
                std::string __Vtask_uvm_report_warning__101__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__101__line;
                __Vtask_uvm_report_warning__101__line = 0;
                std::string __Vtask_uvm_report_warning__101__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__101__report_enabled_checked;
                __Vtask_uvm_report_warning__101__report_enabled_checked = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__102__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__103__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                {
                    if (("ALL"s == kind)) {
                        this->__PVT__m_hdl_paths_pool 
                            = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_object_string_pool__Tz194, vlProcess, vlSymsp, "hdl_paths"s);
                        goto __Vlabel0;
                    }
                    if ((""s == kind)) {
                        kind = ((VlNull{} != this->__PVT__m_regfile_parent)
                                 ? ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 787)
                                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__94__Vfuncout);
                                }(), __Vtask_get_default_hdl_path__94__Vfuncout)
                                 : ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 789)
                                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__95__Vfuncout);
                                }(), __Vtask_get_default_hdl_path__95__Vfuncout));
                    }
                    if ((1U & (~ (0U != ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 792)
                                         ->__VnoInFunc_exists(vlSymsp, kind, __Vtask_exists__96__Vfuncout);
                                        }(), __Vtask_exists__96__Vfuncout))))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__97__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__97__severity = 1U;
                                        __Vfunc_uvm_report_enabled__97__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__98__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__98__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__99__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__99__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__97__verbosity, (IData)(__Vfunc_uvm_report_enabled__97__severity), __Vfunc_uvm_report_enabled__97__id, __Vtask_uvm_report_enabled__100__Vfuncout);
                                        __Vfunc_uvm_report_enabled__97__Vfuncout 
                                            = __Vtask_uvm_report_enabled__100__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__97__Vfuncout))) {
                            __Vtask_uvm_report_warning__101__report_enabled_checked = 1U;
                            __Vtask_uvm_report_warning__101__context_name = ""s;
                            __Vtask_uvm_report_warning__101__line = 0x00000319U;
                            __Vtask_uvm_report_warning__101__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__101__verbosity = 0U;
                            __Vtask_uvm_report_warning__101__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                            __Vtask_uvm_report_warning__101__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__102__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__102__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__103__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__103__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__101__id, __Vtask_uvm_report_warning__101__message, __Vtask_uvm_report_warning__101__verbosity, __Vtask_uvm_report_warning__101__filename, __Vtask_uvm_report_warning__101__line, __Vtask_uvm_report_warning__101__context_name, (IData)(__Vtask_uvm_report_warning__101__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 797)
                                                        ->__VnoInFunc_delete(vlSymsp, kind);
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<Vclass_hierarchy_uvm_hdl_path_slice__struct__0> slices, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz193> __Vtask_get__106__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz193> paths;
                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 805)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__106__Vfuncout);
                paths = __Vtask_get__106__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
                concat = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                VL_NULL_CHECK(concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 808)
                                                        ->__VnoInFunc_set(vlSymsp, slices);
                VL_NULL_CHECK(paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 809)
                                                        ->__VnoInFunc_push_back(vlSymsp, concat);
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path_slice(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path_slice\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz193> __Vtask_get__110__Vfuncout;
                IData/*31:0*/ __Vtask_size__111__Vfuncout;
                __Vtask_size__111__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat> __Vtask_get__114__Vfuncout;
                IData/*31:0*/ __Vtask_size__115__Vfuncout;
                __Vtask_size__115__Vfuncout = 0;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz193> paths;
                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 820)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__110__Vfuncout);
                paths = __Vtask_get__110__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
                if (((IData)(first) || (0U == ([&]() {
                                    VL_NULL_CHECK(paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 823)
                                               ->__VnoInFunc_size(vlSymsp, __Vtask_size__111__Vfuncout);
                                }(), __Vtask_size__111__Vfuncout)))) {
                    concat = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                    VL_NULL_CHECK(paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 825)
                                                        ->__VnoInFunc_push_back(vlSymsp, concat);
                } else {
                    VL_NULL_CHECK(paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 828)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                          (([&]() {
                                    VL_NULL_CHECK(paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 828)
                                                                            ->__VnoInFunc_size(vlSymsp, __Vtask_size__115__Vfuncout);
                                }(), __Vtask_size__115__Vfuncout) 
                                                                           - (IData)(1U)), __Vtask_get__114__Vfuncout);
                    concat = __Vtask_get__114__Vfuncout;
                }
                VL_NULL_CHECK(concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 830)
                                                        ->__VnoInFunc_add_path(vlSymsp, name, offset, size);
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_hdl_path(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_hdl_path\n"); );
                // Locals
                std::string __Vtask_get_default_hdl_path__117__Vfuncout;
                std::string __Vtask_get_default_hdl_path__118__Vfuncout;
                IData/*31:0*/ __Vtask_exists__119__Vfuncout;
                __Vtask_exists__119__Vfuncout = 0;
                // Body
                if ((""s == kind)) {
                    kind = ((VlNull{} != this->__PVT__m_regfile_parent)
                             ? ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 839)
                                ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__117__Vfuncout);
                            }(), __Vtask_get_default_hdl_path__117__Vfuncout)
                             : ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 841)
                                ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__118__Vfuncout);
                            }(), __Vtask_get_default_hdl_path__118__Vfuncout));
                }
                has_hdl_path__Vfuncrtn = (1U & ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 844)
                                                ->__VnoInFunc_exists(vlSymsp, kind, __Vtask_exists__119__Vfuncout);
                        }(), __Vtask_exists__119__Vfuncout));
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path_kinds(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path_kinds\n"); );
                // Locals
                IData/*31:0*/ __Vtask_first__120__Vfuncout;
                __Vtask_first__120__Vfuncout = 0;
                IData/*31:0*/ __Vtask_next__121__Vfuncout;
                __Vtask_next__121__Vfuncout = 0;
                // Body
                std::string kind;
                {
                    kinds.clear();
                    if ((1U & (~ (0U != ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 853)
                                         ->__VnoInFunc_first(vlSymsp, kind, __Vtask_first__120__Vfuncout);
                                        }(), __Vtask_first__120__Vfuncout))))) {
                        goto __Vlabel0;
                    }
                    do {
                        kinds.push_back(kind);
                    } while ((0U != ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 857)
                                     ->__VnoInFunc_next(vlSymsp, kind, __Vtask_next__121__Vfuncout);
                                }(), __Vtask_next__121__Vfuncout)));
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path\n"); );
                // Locals
                std::string __Vtask_get_default_hdl_path__122__Vfuncout;
                std::string __Vtask_get_default_hdl_path__123__Vfuncout;
                CData/*0:0*/ __Vfunc_has_hdl_path__124__Vfuncout;
                __Vfunc_has_hdl_path__124__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__125__Vfuncout;
                __Vfunc_uvm_report_enabled__125__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__125__verbosity;
                __Vfunc_uvm_report_enabled__125__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__125__severity;
                __Vfunc_uvm_report_enabled__125__severity = 0;
                std::string __Vfunc_uvm_report_enabled__125__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__126__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__127__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__128__Vfuncout;
                __Vtask_uvm_report_enabled__128__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__129__id;
                std::string __Vtask_uvm_report_error__129__message;
                IData/*31:0*/ __Vtask_uvm_report_error__129__verbosity;
                __Vtask_uvm_report_error__129__verbosity = 0;
                std::string __Vtask_uvm_report_error__129__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__129__line;
                __Vtask_uvm_report_error__129__line = 0;
                std::string __Vtask_uvm_report_error__129__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__129__report_enabled_checked;
                __Vtask_uvm_report_error__129__report_enabled_checked = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__130__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__131__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz193> __Vtask_get__133__Vfuncout;
                IData/*31:0*/ __Vtask_size__134__Vfuncout;
                __Vtask_size__134__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat> __Vtask_get__135__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ unnamedblk302__DOT__i;
                unnamedblk302__DOT__i = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz193> hdl_paths;
                {
                    if ((""s == kind)) {
                        kind = ((VlNull{} != this->__PVT__m_regfile_parent)
                                 ? ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 870)
                                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__122__Vfuncout);
                                }(), __Vtask_get_default_hdl_path__122__Vfuncout)
                                 : ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 872)
                                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__123__Vfuncout);
                                }(), __Vtask_get_default_hdl_path__123__Vfuncout));
                    }
                    if ((1U & (~ ([&]() {
                                        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__124__Vfuncout);
                                    }(), (IData)(__Vfunc_has_hdl_path__124__Vfuncout))))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__125__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__125__severity = 2U;
                                        __Vfunc_uvm_report_enabled__125__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__126__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__126__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__127__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__127__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__125__verbosity, (IData)(__Vfunc_uvm_report_enabled__125__severity), __Vfunc_uvm_report_enabled__125__id, __Vtask_uvm_report_enabled__128__Vfuncout);
                                        __Vfunc_uvm_report_enabled__125__Vfuncout 
                                            = __Vtask_uvm_report_enabled__128__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__125__Vfuncout))) {
                            __Vtask_uvm_report_error__129__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__129__context_name = ""s;
                            __Vtask_uvm_report_error__129__line = 0x0000036dU;
                            __Vtask_uvm_report_error__129__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__129__verbosity = 0U;
                            __Vtask_uvm_report_error__129__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Register does not have hdl path defined for abstraction '"s, kind), "'"s));
                            __Vtask_uvm_report_error__129__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__130__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__130__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__131__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__131__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__129__id, __Vtask_uvm_report_error__129__message, __Vtask_uvm_report_error__129__verbosity, __Vtask_uvm_report_error__129__filename, __Vtask_uvm_report_error__129__line, __Vtask_uvm_report_error__129__context_name, (IData)(__Vtask_uvm_report_error__129__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 881)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__133__Vfuncout);
                    hdl_paths = __Vtask_get__133__Vfuncout;
                    unnamedblk302__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk302__DOT__i, 
                                      ([&]() {
                                    VL_NULL_CHECK(hdl_paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 883)
                                       ->__VnoInFunc_size(vlSymsp, __Vtask_size__134__Vfuncout);
                                }(), __Vtask_size__134__Vfuncout))) {
                        paths.push_back(([&]() {
                                    VL_NULL_CHECK(hdl_paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 884)
                                         ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk302__DOT__i, __Vtask_get__135__Vfuncout);
                                }(), __Vtask_get__135__Vfuncout));
                        unnamedblk302__DOT__i = ((IData)(1U) 
                                                 + unnamedblk302__DOT__i);
                    }
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_hdl_path\n"); );
                // Locals
                std::string __Vtask_get_default_hdl_path__136__Vfuncout;
                std::string __Vtask_get_default_hdl_path__137__Vfuncout;
                CData/*0:0*/ __Vfunc_has_hdl_path__138__Vfuncout;
                __Vfunc_has_hdl_path__138__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__139__Vfuncout;
                __Vfunc_uvm_report_enabled__139__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__139__verbosity;
                __Vfunc_uvm_report_enabled__139__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__139__severity;
                __Vfunc_uvm_report_enabled__139__severity = 0;
                std::string __Vfunc_uvm_report_enabled__139__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__140__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__141__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__142__Vfuncout;
                __Vtask_uvm_report_enabled__142__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__143__id;
                std::string __Vtask_uvm_report_error__143__message;
                IData/*31:0*/ __Vtask_uvm_report_error__143__verbosity;
                __Vtask_uvm_report_error__143__verbosity = 0;
                std::string __Vtask_uvm_report_error__143__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__143__line;
                __Vtask_uvm_report_error__143__line = 0;
                std::string __Vtask_uvm_report_error__143__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__143__report_enabled_checked;
                __Vtask_uvm_report_error__143__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__144__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__145__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__146__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz193> __Vtask_get__148__Vfuncout;
                IData/*31:0*/ __Vtask_size__151__Vfuncout;
                __Vtask_size__151__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat> __Vtask_get__152__Vfuncout;
                // Body
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz193> unnamedblk303__DOT__hdl_paths;
                VlQueue<std::string> unnamedblk303__DOT__parent_paths;
                IData/*31:0*/ unnamedblk303__DOT__unnamedblk304__DOT__i;
                unnamedblk303__DOT__unnamedblk304__DOT__i = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat;
                IData/*31:0*/ unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j;
                unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__t;
                IData/*31:0*/ unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k;
                unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k = 0;
                {
                    if ((""s == kind)) {
                        kind = ((VlNull{} != this->__PVT__m_regfile_parent)
                                 ? ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 898)
                                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__136__Vfuncout);
                                }(), __Vtask_get_default_hdl_path__136__Vfuncout)
                                 : ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 900)
                                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__137__Vfuncout);
                                }(), __Vtask_get_default_hdl_path__137__Vfuncout));
                    }
                    if ((1U & (~ ([&]() {
                                        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__138__Vfuncout);
                                    }(), (IData)(__Vfunc_has_hdl_path__138__Vfuncout))))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__139__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__139__severity = 2U;
                                        __Vfunc_uvm_report_enabled__139__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__140__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__140__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__141__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__141__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__139__verbosity, (IData)(__Vfunc_uvm_report_enabled__139__severity), __Vfunc_uvm_report_enabled__139__id, __Vtask_uvm_report_enabled__142__Vfuncout);
                                        __Vfunc_uvm_report_enabled__139__Vfuncout 
                                            = __Vtask_uvm_report_enabled__142__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__139__Vfuncout))) {
                            __Vtask_uvm_report_error__143__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__143__context_name = ""s;
                            __Vtask_uvm_report_error__143__line = 0x00000389U;
                            __Vtask_uvm_report_error__143__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__143__verbosity = 0U;
                            __Vtask_uvm_report_error__143__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register "s, 
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__144__Vfuncout);
                                                    }(), __Vfunc_get_full_name__144__Vfuncout)), " does not have hdl path defined for abstraction '"s), kind), "'"s));
                            __Vtask_uvm_report_error__143__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__145__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__145__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__146__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__146__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__143__id, __Vtask_uvm_report_error__143__message, __Vtask_uvm_report_error__143__verbosity, __Vtask_uvm_report_error__143__filename, __Vtask_uvm_report_error__143__line, __Vtask_uvm_report_error__143__context_name, (IData)(__Vtask_uvm_report_error__143__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 910)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__148__Vfuncout);
                    unnamedblk303__DOT__hdl_paths = __Vtask_get__148__Vfuncout;
                    if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                        VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 914)
                                                        ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk303__DOT__parent_paths, kind, separator);
                    } else {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 916)
                                                        ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk303__DOT__parent_paths, kind, separator);
                    }
                    unnamedblk303__DOT__unnamedblk304__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk303__DOT__unnamedblk304__DOT__i, 
                                      ([&]() {
                                    VL_NULL_CHECK(unnamedblk303__DOT__hdl_paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 918)
                                       ->__VnoInFunc_size(vlSymsp, __Vtask_size__151__Vfuncout);
                                }(), __Vtask_size__151__Vfuncout))) {
                        VL_NULL_CHECK(unnamedblk303__DOT__hdl_paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 919)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk303__DOT__unnamedblk304__DOT__i, __Vtask_get__152__Vfuncout);
                        unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat 
                            = __Vtask_get__152__Vfuncout;
                        unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j = 0U;
                        while (VL_LTS_III(32, unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j, unnamedblk303__DOT__parent_paths.size())) {
                            unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__t 
                                = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                            unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k = 0U;
                            while (VL_LTS_III(32, unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k, VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 924)
                                              ->__PVT__slices.size())) {
                                if ((""s == VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 925)
                                     ->__PVT__slices.at(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k)
                                     .__PVT__path)) {
                                    VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__t, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 926)
                                                        ->__VnoInFunc_add_path(vlSymsp, 
                                                                               VL_CVT_PACK_STR_NN(unnamedblk303__DOT__parent_paths.at(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j)), 0xffffffffU, 0xffffffffU);
                                } else {
                                    VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__t, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 928)
                                                        ->__VnoInFunc_add_path(vlSymsp, 
                                                                               VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk303__DOT__parent_paths.at(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j), separator), VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 928)
                                                                                ->__PVT__slices.at(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k)
                                                                                .__PVT__path)), VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 929)
                                                                               ->__PVT__slices.at(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k)
                                                                               .__PVT__offset, VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 930)
                                                                               ->__PVT__slices.at(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k)
                                                                               .__PVT__size);
                                }
                                unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k 
                                    = ((IData)(1U) 
                                       + unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k);
                            }
                            paths.push_back(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__t);
                            unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j 
                                = ((IData)(1U) + unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j);
                        }
                        unnamedblk303__DOT__unnamedblk304__DOT__i 
                            = ((IData)(1U) + unnamedblk303__DOT__unnamedblk304__DOT__i);
                    }
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_offset(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_offset\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__156__Vfuncout;
                __Vfunc_uvm_report_enabled__156__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__156__verbosity;
                __Vfunc_uvm_report_enabled__156__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__156__severity;
                __Vfunc_uvm_report_enabled__156__severity = 0;
                std::string __Vfunc_uvm_report_enabled__156__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__157__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__158__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__159__Vfuncout;
                __Vtask_uvm_report_enabled__159__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__160__id;
                std::string __Vtask_uvm_report_error__160__message;
                IData/*31:0*/ __Vtask_uvm_report_error__160__verbosity;
                __Vtask_uvm_report_error__160__verbosity = 0;
                std::string __Vtask_uvm_report_error__160__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__160__line;
                __Vtask_uvm_report_error__160__line = 0;
                std::string __Vtask_uvm_report_error__160__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__160__report_enabled_checked;
                __Vtask_uvm_report_error__160__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__161__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__162__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__163__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__165__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> orig_map;
                {
                    orig_map = map;
                    if ((VL_LTS_III(32, 1U, this->__PVT__m_maps.size()) 
                         & (VlNull{} == map))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__156__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__156__severity = 2U;
                                        __Vfunc_uvm_report_enabled__156__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__157__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__157__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__158__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__158__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__156__verbosity, (IData)(__Vfunc_uvm_report_enabled__156__severity), __Vfunc_uvm_report_enabled__156__id, __Vtask_uvm_report_enabled__159__Vfuncout);
                                        __Vfunc_uvm_report_enabled__156__Vfuncout 
                                            = __Vtask_uvm_report_enabled__159__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__156__Vfuncout))) {
                            __Vtask_uvm_report_error__160__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__160__context_name = ""s;
                            __Vtask_uvm_report_error__160__line = 0x000003b5U;
                            __Vtask_uvm_report_error__160__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__160__verbosity = 0U;
                            __Vtask_uvm_report_error__160__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("set_offset requires a non-null map when register '"s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__161__Vfuncout);
                                            }(), __Vfunc_get_full_name__161__Vfuncout)), "' belongs to more than one map."s));
                            __Vtask_uvm_report_error__160__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__162__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__162__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__163__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__163__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__160__id, __Vtask_uvm_report_error__160__message, __Vtask_uvm_report_error__160__verbosity, __Vtask_uvm_report_error__160__filename, __Vtask_uvm_report_error__160__line, __Vtask_uvm_report_error__160__context_name, (IData)(__Vtask_uvm_report_error__160__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__165__Vfuncout);
                    map = __Vfunc_get_local_map__165__Vfuncout;
                    if ((VlNull{} == map)) {
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 958)
                                                        ->__VnoInFunc_m_set_reg_offset(vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this}, offset, (IData)(unmapped));
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_parent(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_file> regfile_parent) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_parent\n"); );
                // Body
                this->__PVT__m_parent = blk_parent;
                this->__PVT__m_regfile_parent = regfile_parent;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_parent(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_parent\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_block__167__Vfuncout;
                // Body
                this->__VnoInFunc_get_block(vlSymsp, __Vfunc_get_block__167__Vfuncout);
                get_parent__Vfuncrtn = __Vfunc_get_block__167__Vfuncout;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_regfile(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_regfile\n"); );
                // Body
                get_regfile__Vfuncrtn = this->__PVT__m_regfile_parent;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_name\n"); );
                // Locals
                std::string __Vtask_get_full_name__168__Vfuncout;
                std::string __Vfunc_get_name__169__Vfuncout;
                std::string __Vtask_get_full_name__170__Vfuncout;
                std::string __Vfunc_get_name__171__Vfuncout;
                std::string __Vfunc_get_name__172__Vfuncout;
                // Body
                {
                    if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                        get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(
                                                                                ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 993)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__168__Vfuncout);
                                    }(), __Vtask_get_full_name__168__Vfuncout), "."s), 
                                                                 ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__169__Vfuncout);
                                }(), __Vfunc_get_name__169__Vfuncout));
                        goto __Vlabel0;
                    }
                    if ((VlNull{} != this->__PVT__m_parent)) {
                        get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(
                                                                                ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 996)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__170__Vfuncout);
                                    }(), __Vtask_get_full_name__170__Vfuncout), "."s), 
                                                                 ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__171__Vfuncout);
                                }(), __Vfunc_get_name__171__Vfuncout));
                        goto __Vlabel0;
                    }
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__172__Vfuncout);
                    get_full_name__Vfuncrtn = __Vfunc_get_name__172__Vfuncout;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map\n"); );
                // Body
                this->__PVT__m_maps.at(map) = 1U;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_maps(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map>> &maps) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_maps\n"); );
                // Body
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk309__DOT__map;
                CData/*0:0*/ unnamedblk309__DOT__map__Vfirst;
                unnamedblk309__DOT__map__Vfirst = 0;
                if ((0U != this->__PVT__m_maps.first(unnamedblk309__DOT__map))) {
                    unnamedblk309__DOT__map__Vfirst = 1U;
                    while (((IData)(unnamedblk309__DOT__map__Vfirst) 
                            || (0U != this->__PVT__m_maps.next(unnamedblk309__DOT__map)))) {
                        unnamedblk309__DOT__map__Vfirst = 0U;
                        maps.push_back(unnamedblk309__DOT__map);
                    }
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_maps(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_maps\n"); );
                // Body
                get_n_maps__Vfuncrtn = this->__PVT__m_maps.size();
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_in_map(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_in_map\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__173__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__174__Vfuncout;
                // Body
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk310__DOT__l;
                CData/*0:0*/ unnamedblk310__DOT__l__Vfirst;
                unnamedblk310__DOT__l__Vfirst = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk310__DOT__unnamedblk311__DOT__local_map;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk310__DOT__unnamedblk311__DOT__parent_map;
                {
                    if (this->__PVT__m_maps.exists(map)) {
                        is_in_map__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    }
                    if ((0U != this->__PVT__m_maps.first(unnamedblk310__DOT__l))) {
                        unnamedblk310__DOT__l__Vfirst = 1U;
                        while (((IData)(unnamedblk310__DOT__l__Vfirst) 
                                || (0U != this->__PVT__m_maps.next(unnamedblk310__DOT__l)))) {
                            unnamedblk310__DOT__l__Vfirst = 0U;
                            unnamedblk310__DOT__unnamedblk311__DOT__local_map 
                                = unnamedblk310__DOT__l;
                            VL_NULL_CHECK(unnamedblk310__DOT__unnamedblk311__DOT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1031)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__173__Vfuncout);
                            unnamedblk310__DOT__unnamedblk311__DOT__parent_map 
                                = __Vtask_get_parent_map__173__Vfuncout;
                            while ((VlNull{} != unnamedblk310__DOT__unnamedblk311__DOT__parent_map)) {
                                if ((unnamedblk310__DOT__unnamedblk311__DOT__parent_map 
                                     == map)) {
                                    is_in_map__Vfuncrtn = 1U;
                                    goto __Vlabel0;
                                }
                                VL_NULL_CHECK(unnamedblk310__DOT__unnamedblk311__DOT__parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1036)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__174__Vfuncout);
                                unnamedblk310__DOT__unnamedblk311__DOT__parent_map 
                                    = __Vtask_get_parent_map__174__Vfuncout;
                            }
                        }
                    }
                    is_in_map__Vfuncrtn = 0U;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_local_map\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_default_map__175__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__176__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__177__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__178__Vfuncout;
                __Vfunc_uvm_report_enabled__178__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__178__verbosity;
                __Vfunc_uvm_report_enabled__178__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__178__severity;
                __Vfunc_uvm_report_enabled__178__severity = 0;
                std::string __Vfunc_uvm_report_enabled__178__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__179__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__180__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__181__Vfuncout;
                __Vtask_uvm_report_enabled__181__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__182__id;
                std::string __Vtask_uvm_report_warning__182__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__182__verbosity;
                __Vtask_uvm_report_warning__182__verbosity = 0;
                std::string __Vtask_uvm_report_warning__182__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__182__line;
                __Vtask_uvm_report_warning__182__line = 0;
                std::string __Vtask_uvm_report_warning__182__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__182__report_enabled_checked;
                __Vtask_uvm_report_warning__182__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__183__Vfuncout;
                std::string __Vtask_get_full_name__184__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__185__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__186__Vfuncout;
                // Body
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk312__DOT__l;
                CData/*0:0*/ unnamedblk312__DOT__l__Vfirst;
                unnamedblk312__DOT__l__Vfirst = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk312__DOT__unnamedblk313__DOT__local_map;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk312__DOT__unnamedblk313__DOT__parent_map;
                {
                    if ((VlNull{} == map)) {
                        this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __Vfunc_get_default_map__175__Vfuncout);
                        get_local_map__Vfuncrtn = __Vfunc_get_default_map__175__Vfuncout;
                        goto __Vlabel0;
                    }
                    if (this->__PVT__m_maps.exists(map)) {
                        get_local_map__Vfuncrtn = map;
                        goto __Vlabel0;
                    }
                    if ((0U != this->__PVT__m_maps.first(unnamedblk312__DOT__l))) {
                        unnamedblk312__DOT__l__Vfirst = 1U;
                        while (((IData)(unnamedblk312__DOT__l__Vfirst) 
                                || (0U != this->__PVT__m_maps.next(unnamedblk312__DOT__l)))) {
                            unnamedblk312__DOT__l__Vfirst = 0U;
                            unnamedblk312__DOT__unnamedblk313__DOT__local_map 
                                = unnamedblk312__DOT__l;
                            VL_NULL_CHECK(unnamedblk312__DOT__unnamedblk313__DOT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1053)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__176__Vfuncout);
                            unnamedblk312__DOT__unnamedblk313__DOT__parent_map 
                                = __Vtask_get_parent_map__176__Vfuncout;
                            while ((VlNull{} != unnamedblk312__DOT__unnamedblk313__DOT__parent_map)) {
                                if ((unnamedblk312__DOT__unnamedblk313__DOT__parent_map 
                                     == map)) {
                                    get_local_map__Vfuncrtn 
                                        = unnamedblk312__DOT__unnamedblk313__DOT__local_map;
                                    goto __Vlabel0;
                                }
                                VL_NULL_CHECK(unnamedblk312__DOT__unnamedblk313__DOT__parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1058)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__177__Vfuncout);
                                unnamedblk312__DOT__unnamedblk313__DOT__parent_map 
                                    = __Vtask_get_parent_map__177__Vfuncout;
                            }
                        }
                    }
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__178__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__178__severity = 1U;
                                    __Vfunc_uvm_report_enabled__178__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__179__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__179__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__180__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__180__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__178__verbosity, (IData)(__Vfunc_uvm_report_enabled__178__severity), __Vfunc_uvm_report_enabled__178__id, __Vtask_uvm_report_enabled__181__Vfuncout);
                                    __Vfunc_uvm_report_enabled__178__Vfuncout 
                                        = __Vtask_uvm_report_enabled__181__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__178__Vfuncout))) {
                        __Vtask_uvm_report_warning__182__report_enabled_checked = 1U;
                        __Vtask_uvm_report_warning__182__context_name = ""s;
                        __Vtask_uvm_report_warning__182__line = 0x00000426U;
                        __Vtask_uvm_report_warning__182__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_warning__182__verbosity = 0U;
                        __Vtask_uvm_report_warning__182__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__183__Vfuncout);
                                                }(), __Vfunc_get_full_name__183__Vfuncout)), "' is not contained within map '"s), 
                                                                               ([&]() {
                                            VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1062)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__184__Vfuncout);
                                        }(), __Vtask_get_full_name__184__Vfuncout)), "'"s));
                        __Vtask_uvm_report_warning__182__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__185__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__185__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__186__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__186__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__182__id, __Vtask_uvm_report_warning__182__message, __Vtask_uvm_report_warning__182__verbosity, __Vtask_uvm_report_warning__182__filename, __Vtask_uvm_report_warning__182__line, __Vtask_uvm_report_warning__182__context_name, (IData)(__Vtask_uvm_report_warning__182__report_enabled_checked));
                    }
                    get_local_map__Vfuncrtn = VlNull{};
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_default_map(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_default_map\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__188__Vfuncout;
                __Vfunc_uvm_report_enabled__188__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__188__verbosity;
                __Vfunc_uvm_report_enabled__188__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__188__severity;
                __Vfunc_uvm_report_enabled__188__severity = 0;
                std::string __Vfunc_uvm_report_enabled__188__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__189__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__190__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__191__Vfuncout;
                __Vtask_uvm_report_enabled__191__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__192__id;
                std::string __Vtask_uvm_report_warning__192__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__192__verbosity;
                __Vtask_uvm_report_warning__192__verbosity = 0;
                std::string __Vtask_uvm_report_warning__192__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__192__line;
                __Vtask_uvm_report_warning__192__line = 0;
                std::string __Vtask_uvm_report_warning__192__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__192__report_enabled_checked;
                __Vtask_uvm_report_warning__192__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__193__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__194__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__195__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_parent__197__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_default_map__198__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__199__Vfuncout;
                // Body
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk314__DOT__map;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk315__DOT__l;
                CData/*0:0*/ unnamedblk315__DOT__l__Vfirst;
                unnamedblk315__DOT__l__Vfirst = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk315__DOT__unnamedblk316__DOT__map;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> unnamedblk315__DOT__unnamedblk316__DOT__blk;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk315__DOT__unnamedblk316__DOT__default_map;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk315__DOT__unnamedblk316__DOT__unnamedblk317__DOT__local_map;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk318__DOT__map;
                {
                    if ((0U == this->__PVT__m_maps.size())) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__188__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__188__severity = 1U;
                                        __Vfunc_uvm_report_enabled__188__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__189__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__189__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__190__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__190__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__188__verbosity, (IData)(__Vfunc_uvm_report_enabled__188__severity), __Vfunc_uvm_report_enabled__188__id, __Vtask_uvm_report_enabled__191__Vfuncout);
                                        __Vfunc_uvm_report_enabled__188__Vfuncout 
                                            = __Vtask_uvm_report_enabled__191__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__188__Vfuncout))) {
                            __Vtask_uvm_report_warning__192__report_enabled_checked = 1U;
                            __Vtask_uvm_report_warning__192__context_name = ""s;
                            __Vtask_uvm_report_warning__192__line = 0x00000433U;
                            __Vtask_uvm_report_warning__192__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__192__verbosity = 0U;
                            __Vtask_uvm_report_warning__192__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__193__Vfuncout);
                                            }(), __Vfunc_get_full_name__193__Vfuncout)), "' is not registered with any map"s));
                            __Vtask_uvm_report_warning__192__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__194__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__194__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__195__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__195__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__192__id, __Vtask_uvm_report_warning__192__message, __Vtask_uvm_report_warning__192__verbosity, __Vtask_uvm_report_warning__192__filename, __Vtask_uvm_report_warning__192__line, __Vtask_uvm_report_warning__192__context_name, (IData)(__Vtask_uvm_report_warning__192__report_enabled_checked));
                        }
                        get_default_map__Vfuncrtn = VlNull{};
                        goto __Vlabel0;
                    }
                    if ((1U == this->__PVT__m_maps.size())) {
                        (void)this->__PVT__m_maps.first(unnamedblk314__DOT__map);
                        get_default_map__Vfuncrtn = unnamedblk314__DOT__map;
                        goto __Vlabel0;
                    }
                    if ((0U != this->__PVT__m_maps.first(unnamedblk315__DOT__l))) {
                        unnamedblk315__DOT__l__Vfirst = 1U;
                        while (((IData)(unnamedblk315__DOT__l__Vfirst) 
                                || (0U != this->__PVT__m_maps.next(unnamedblk315__DOT__l)))) {
                            unnamedblk315__DOT__l__Vfirst = 0U;
                            unnamedblk315__DOT__unnamedblk316__DOT__map 
                                = unnamedblk315__DOT__l;
                            VL_NULL_CHECK(unnamedblk315__DOT__unnamedblk316__DOT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1089)
                                                        ->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__197__Vfuncout);
                            unnamedblk315__DOT__unnamedblk316__DOT__blk 
                                = __Vtask_get_parent__197__Vfuncout;
                            VL_NULL_CHECK(unnamedblk315__DOT__unnamedblk316__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1090)
                                                        ->__VnoInFunc_get_default_map(vlSymsp, __Vtask_get_default_map__198__Vfuncout);
                            unnamedblk315__DOT__unnamedblk316__DOT__default_map 
                                = __Vtask_get_default_map__198__Vfuncout;
                            if ((VlNull{} != unnamedblk315__DOT__unnamedblk316__DOT__default_map)) {
                                this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, unnamedblk315__DOT__unnamedblk316__DOT__default_map, __Vfunc_get_local_map__199__Vfuncout);
                                unnamedblk315__DOT__unnamedblk316__DOT__unnamedblk317__DOT__local_map 
                                    = __Vfunc_get_local_map__199__Vfuncout;
                                if ((VlNull{} != unnamedblk315__DOT__unnamedblk316__DOT__unnamedblk317__DOT__local_map)) {
                                    get_default_map__Vfuncrtn 
                                        = unnamedblk315__DOT__unnamedblk316__DOT__unnamedblk317__DOT__local_map;
                                    goto __Vlabel0;
                                }
                            }
                        }
                    }
                    (void)this->__PVT__m_maps.first(unnamedblk318__DOT__map);
                    get_default_map__Vfuncrtn = unnamedblk318__DOT__map;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_rights(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_rights\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__200__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_reg_map_info__201__Vfuncout;
                // Body
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> info;
                {
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__200__Vfuncout);
                    map = __Vfunc_get_local_map__200__Vfuncout;
                    if ((VlNull{} == map)) {
                        get_rights__Vfuncrtn = "RW"s;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1120)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this}, 1U, __Vtask_get_reg_map_info__201__Vfuncout);
                    info = __Vtask_get_reg_map_info__201__Vfuncout;
                    get_rights__Vfuncrtn = VL_NULL_CHECK(info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1121)
                        ->__PVT__rights;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_block(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_block\n"); );
                // Body
                get_block__Vfuncrtn = this->__PVT__m_parent;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_offset(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_offset\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__202__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_reg_map_info__203__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__204__Vfuncout;
                __Vfunc_uvm_report_enabled__204__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__204__verbosity;
                __Vfunc_uvm_report_enabled__204__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__204__severity;
                __Vfunc_uvm_report_enabled__204__severity = 0;
                std::string __Vfunc_uvm_report_enabled__204__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__205__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__206__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__207__Vfuncout;
                __Vtask_uvm_report_enabled__207__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__208__id;
                std::string __Vtask_uvm_report_warning__208__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__208__verbosity;
                __Vtask_uvm_report_warning__208__verbosity = 0;
                std::string __Vtask_uvm_report_warning__208__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__208__line;
                __Vtask_uvm_report_warning__208__line = 0;
                std::string __Vtask_uvm_report_warning__208__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__208__report_enabled_checked;
                __Vtask_uvm_report_warning__208__report_enabled_checked = 0;
                std::string __Vfunc_get_name__209__Vfuncout;
                std::string __Vtask_get_full_name__210__Vfuncout;
                std::string __Vtask_get_full_name__211__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__212__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__213__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> orig_map;
                {
                    orig_map = map;
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__202__Vfuncout);
                    map = __Vfunc_get_local_map__202__Vfuncout;
                    if ((VlNull{} == map)) {
                        get_offset__Vfuncrtn = 0xffffffffffffffffULL;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1146)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this}, 1U, __Vtask_get_reg_map_info__203__Vfuncout);
                    map_info = __Vtask_get_reg_map_info__203__Vfuncout;
                    if (VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1148)
                        ->__PVT__unmapped) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__204__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__204__severity = 1U;
                                        __Vfunc_uvm_report_enabled__204__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__205__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__205__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__206__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__206__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__204__verbosity, (IData)(__Vfunc_uvm_report_enabled__204__severity), __Vfunc_uvm_report_enabled__204__id, __Vtask_uvm_report_enabled__207__Vfuncout);
                                        __Vfunc_uvm_report_enabled__204__Vfuncout 
                                            = __Vtask_uvm_report_enabled__207__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__204__Vfuncout))) {
                            __Vtask_uvm_report_warning__208__report_enabled_checked = 1U;
                            __Vtask_uvm_report_warning__208__context_name = ""s;
                            __Vtask_uvm_report_warning__208__line = 0x0000047fU;
                            __Vtask_uvm_report_warning__208__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__208__verbosity = 0U;
                            __Vtask_uvm_report_warning__208__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__209__Vfuncout);
                                                    }(), __Vfunc_get_name__209__Vfuncout)), "' is unmapped in map '"s), 
                                                                                ((VlNull{} 
                                                                                == orig_map)
                                                                                 ? 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1151)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__210__Vfuncout);
                                                }(), __Vtask_get_full_name__210__Vfuncout)
                                                                                 : 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(orig_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1151)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__211__Vfuncout);
                                                }(), __Vtask_get_full_name__211__Vfuncout))), "'"s));
                            __Vtask_uvm_report_warning__208__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__212__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__212__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__213__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__213__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__208__id, __Vtask_uvm_report_warning__208__message, __Vtask_uvm_report_warning__208__verbosity, __Vtask_uvm_report_warning__208__filename, __Vtask_uvm_report_warning__208__line, __Vtask_uvm_report_warning__208__context_name, (IData)(__Vtask_uvm_report_warning__208__report_enabled_checked));
                        }
                        get_offset__Vfuncrtn = 0xffffffffffffffffULL;
                        goto __Vlabel0;
                    }
                    get_offset__Vfuncrtn = VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1155)
                        ->__PVT__offset;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_addresses(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_addresses\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__215__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_reg_map_info__216__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__217__Vfuncout;
                __Vfunc_uvm_report_enabled__217__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__217__verbosity;
                __Vfunc_uvm_report_enabled__217__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__217__severity;
                __Vfunc_uvm_report_enabled__217__severity = 0;
                std::string __Vfunc_uvm_report_enabled__217__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__218__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__219__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__220__Vfuncout;
                __Vtask_uvm_report_enabled__220__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__221__id;
                std::string __Vtask_uvm_report_warning__221__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__221__verbosity;
                __Vtask_uvm_report_warning__221__verbosity = 0;
                std::string __Vtask_uvm_report_warning__221__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__221__line;
                __Vtask_uvm_report_warning__221__line = 0;
                std::string __Vtask_uvm_report_warning__221__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__221__report_enabled_checked;
                __Vtask_uvm_report_warning__221__report_enabled_checked = 0;
                std::string __Vfunc_get_name__222__Vfuncout;
                std::string __Vtask_get_full_name__223__Vfuncout;
                std::string __Vtask_get_full_name__224__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__225__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__226__Vfuncout;
                IData/*31:0*/ __Vtask_get_n_bytes__228__Vfuncout;
                __Vtask_get_n_bytes__228__Vfuncout = 0;
                // Body
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> orig_map;
                {
                    orig_map = map;
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__215__Vfuncout);
                    map = __Vfunc_get_local_map__215__Vfuncout;
                    if ((VlNull{} == map)) {
                        get_addresses__Vfuncrtn = 0xffffffffU;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1172)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this}, 1U, __Vtask_get_reg_map_info__216__Vfuncout);
                    map_info = __Vtask_get_reg_map_info__216__Vfuncout;
                    if (VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1174)
                        ->__PVT__unmapped) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__217__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__217__severity = 1U;
                                        __Vfunc_uvm_report_enabled__217__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__218__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__218__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__219__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__219__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__217__verbosity, (IData)(__Vfunc_uvm_report_enabled__217__severity), __Vfunc_uvm_report_enabled__217__id, __Vtask_uvm_report_enabled__220__Vfuncout);
                                        __Vfunc_uvm_report_enabled__217__Vfuncout 
                                            = __Vtask_uvm_report_enabled__220__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__217__Vfuncout))) {
                            __Vtask_uvm_report_warning__221__report_enabled_checked = 1U;
                            __Vtask_uvm_report_warning__221__context_name = ""s;
                            __Vtask_uvm_report_warning__221__line = 0x00000499U;
                            __Vtask_uvm_report_warning__221__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__221__verbosity = 0U;
                            __Vtask_uvm_report_warning__221__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__222__Vfuncout);
                                                    }(), __Vfunc_get_name__222__Vfuncout)), "' is unmapped in map '"s), 
                                                                                ((VlNull{} 
                                                                                == orig_map)
                                                                                 ? 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1177)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__223__Vfuncout);
                                                }(), __Vtask_get_full_name__223__Vfuncout)
                                                                                 : 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(orig_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1177)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__224__Vfuncout);
                                                }(), __Vtask_get_full_name__224__Vfuncout))), "'"s));
                            __Vtask_uvm_report_warning__221__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__225__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__225__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__226__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__226__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__221__id, __Vtask_uvm_report_warning__221__message, __Vtask_uvm_report_warning__221__verbosity, __Vtask_uvm_report_warning__221__filename, __Vtask_uvm_report_warning__221__line, __Vtask_uvm_report_warning__221__context_name, (IData)(__Vtask_uvm_report_warning__221__report_enabled_checked));
                        }
                        get_addresses__Vfuncrtn = 0xffffffffU;
                        goto __Vlabel0;
                    }
                    addr = VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1181)
                        ->__PVT__addr;
                    VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1182)
                                                        ->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__228__Vfuncout);
                    get_addresses__Vfuncrtn = __Vtask_get_n_bytes__228__Vfuncout;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_address(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_address\n"); );
                // Locals
                IData/*31:0*/ __Vtask_get_addresses__229__Vfuncout;
                __Vtask_get_addresses__229__Vfuncout = 0;
                // Body
                VlQueue<QData/*63:0*/> addr;
                addr.atDefault() = 0;
                this->__VnoInFunc_get_addresses(vlProcess, vlSymsp, map, addr, __Vtask_get_addresses__229__Vfuncout);
                get_address__Vfuncrtn = addr.at(0U);
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bits(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bits\n"); );
                // Body
                get_n_bits__Vfuncrtn = this->__PVT__m_n_bits;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bytes(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bytes\n"); );
                // Body
                get_n_bytes__Vfuncrtn = ((IData)(1U) 
                                         + VL_SHIFTR_III(32,32,32, 
                                                         (this->__PVT__m_n_bits 
                                                          - (IData)(1U)), 3U));
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_fields(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_field>> &fields) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_fields\n"); );
                // Body
                IData/*31:0*/ unnamedblk319__DOT__i;
                unnamedblk319__DOT__i = 0;
                unnamedblk319__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk319__DOT__i, this->__PVT__m_fields.size())) {
                    fields.push_back(this->__PVT__m_fields.at(unnamedblk319__DOT__i));
                    unnamedblk319__DOT__i = ((IData)(1U) 
                                             + unnamedblk319__DOT__i);
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_field_by_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_field_by_name\n"); );
                // Locals
                std::string __Vtask_get_name__230__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__231__Vfuncout;
                __Vfunc_uvm_report_enabled__231__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__231__verbosity;
                __Vfunc_uvm_report_enabled__231__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__231__severity;
                __Vfunc_uvm_report_enabled__231__severity = 0;
                std::string __Vfunc_uvm_report_enabled__231__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__232__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__233__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__234__Vfuncout;
                __Vtask_uvm_report_enabled__234__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__235__id;
                std::string __Vtask_uvm_report_warning__235__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__235__verbosity;
                __Vtask_uvm_report_warning__235__verbosity = 0;
                std::string __Vtask_uvm_report_warning__235__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__235__line;
                __Vtask_uvm_report_warning__235__line = 0;
                std::string __Vtask_uvm_report_warning__235__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__235__report_enabled_checked;
                __Vtask_uvm_report_warning__235__report_enabled_checked = 0;
                std::string __Vfunc_get_name__236__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__237__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__238__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ unnamedblk320__DOT__i;
                unnamedblk320__DOT__i = 0;
                {
                    unnamedblk320__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk320__DOT__i, this->__PVT__m_fields.size())) {
                        if ((([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk320__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1229)
                              ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__230__Vfuncout);
                                    }(), __Vtask_get_name__230__Vfuncout) 
                             == name)) {
                            get_field_by_name__Vfuncrtn 
                                = this->__PVT__m_fields.at(unnamedblk320__DOT__i);
                            goto __Vlabel0;
                        }
                        unnamedblk320__DOT__i = ((IData)(1U) 
                                                 + unnamedblk320__DOT__i);
                    }
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__231__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__231__severity = 1U;
                                    __Vfunc_uvm_report_enabled__231__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__232__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__232__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__233__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__233__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__231__verbosity, (IData)(__Vfunc_uvm_report_enabled__231__severity), __Vfunc_uvm_report_enabled__231__id, __Vtask_uvm_report_enabled__234__Vfuncout);
                                    __Vfunc_uvm_report_enabled__231__Vfuncout 
                                        = __Vtask_uvm_report_enabled__234__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__231__Vfuncout))) {
                        __Vtask_uvm_report_warning__235__report_enabled_checked = 1U;
                        __Vtask_uvm_report_warning__235__context_name = ""s;
                        __Vtask_uvm_report_warning__235__line = 0x000004d0U;
                        __Vtask_uvm_report_warning__235__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_warning__235__verbosity = 0U;
                        __Vtask_uvm_report_warning__235__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate field '"s, name), "' in register '"s), 
                                                                               ([&]() {
                                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__236__Vfuncout);
                                        }(), __Vfunc_get_name__236__Vfuncout)), "'"s));
                        __Vtask_uvm_report_warning__235__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__237__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__237__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__238__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__238__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__235__id, __Vtask_uvm_report_warning__235__message, __Vtask_uvm_report_warning__235__verbosity, __Vtask_uvm_report_warning__235__filename, __Vtask_uvm_report_warning__235__line, __Vtask_uvm_report_warning__235__context_name, (IData)(__Vtask_uvm_report_warning__235__report_enabled_checked));
                    }
                    get_field_by_name__Vfuncrtn = VlNull{};
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xget_fields_accessX(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, std::string &Xget_fields_accessX__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xget_fields_accessX\n"); );
                // Locals
                std::string __Vtask_get_access__240__Vfuncout;
                std::string __Vtask_get_access__241__Vfuncout;
                std::string __Vtask_get_access__242__Vfuncout;
                std::string __Vtask_get_access__243__Vfuncout;
                std::string __Vtask_get_access__244__Vfuncout;
                std::string __Vtask_get_access__245__Vfuncout;
                std::string __Vtask_get_access__246__Vfuncout;
                std::string __Vtask_get_access__247__Vfuncout;
                std::string __Vtask_get_access__248__Vfuncout;
                std::string __Vtask_get_access__249__Vfuncout;
                std::string __Vtask_get_access__250__Vfuncout;
                std::string __Vtask_get_access__251__Vfuncout;
                std::string __Vtask_get_access__252__Vfuncout;
                std::string __Vtask_get_access__253__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ unnamedblk321__DOT__i;
                unnamedblk321__DOT__i = 0;
                CData/*0:0*/ is_R;
                is_R = 0;
                CData/*0:0*/ is_W;
                is_W = 0;
                {
                    unnamedblk321__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk321__DOT__i, this->__PVT__m_fields.size())) {
                        if ((1U | (((("RO"s == ([&]() {
                                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                                ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__240__Vfuncout);
                                                    }(), __Vtask_get_access__240__Vfuncout)) 
                                     || ("RC"s == ([&]() {
                                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                                   ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__241__Vfuncout);
                                                    }(), __Vtask_get_access__241__Vfuncout))) 
                                    || ("RS"s == ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                                  ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__242__Vfuncout);
                                                }(), __Vtask_get_access__242__Vfuncout))) 
                                   | (((("WO"s == ([&]() {
                                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                                   ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__243__Vfuncout);
                                                        }(), __Vtask_get_access__243__Vfuncout)) 
                                        || ("WOC"s 
                                            == ([&]() {
                                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                                ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__244__Vfuncout);
                                                        }(), __Vtask_get_access__244__Vfuncout))) 
                                       || ("WOS"s == 
                                           ([&]() {
                                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                            ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__245__Vfuncout);
                                                    }(), __Vtask_get_access__245__Vfuncout))) 
                                      || ("WO1"s == 
                                          ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                           ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__246__Vfuncout);
                                                }(), __Vtask_get_access__246__Vfuncout)))))) {
                            if (((("RO"s == ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                             ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__247__Vfuncout);
                                                }(), __Vtask_get_access__247__Vfuncout)) 
                                  || ("RC"s == ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                                ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__248__Vfuncout);
                                                }(), __Vtask_get_access__248__Vfuncout))) 
                                 || ("RS"s == ([&]() {
                                                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                               ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__249__Vfuncout);
                                            }(), __Vtask_get_access__249__Vfuncout)))) {
                                is_R = 1U;
                            } else if ((((("WO"s == 
                                           ([&]() {
                                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                            ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__250__Vfuncout);
                                                    }(), __Vtask_get_access__250__Vfuncout)) 
                                          || ("WOC"s 
                                              == ([&]() {
                                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                                  ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__251__Vfuncout);
                                                    }(), __Vtask_get_access__251__Vfuncout))) 
                                         || ("WOS"s 
                                             == ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                                 ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__252__Vfuncout);
                                                }(), __Vtask_get_access__252__Vfuncout))) 
                                        || ("WO1"s 
                                            == ([&]() {
                                                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                                ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__253__Vfuncout);
                                            }(), __Vtask_get_access__253__Vfuncout)))) {
                                is_W = 1U;
                            } else {
                                Xget_fields_accessX__Vfuncrtn = "RW"s;
                                goto __Vlabel0;
                            }
                        }
                        if (((IData)(is_R) & (IData)(is_W))) {
                            Xget_fields_accessX__Vfuncrtn = "RW"s;
                            goto __Vlabel0;
                        }
                        unnamedblk321__DOT__i = ((IData)(1U) 
                                                 + unnamedblk321__DOT__i);
                    }
                    if ((1U == (((IData)(is_R) << 1U) 
                                | (IData)(is_W)))) {
                        Xget_fields_accessX__Vfuncrtn = "WO"s;
                        goto __Vlabel0;
                    } else if ((2U == (((IData)(is_R) 
                                        << 1U) | (IData)(is_W)))) {
                        Xget_fields_accessX__Vfuncrtn = "RO"s;
                        goto __Vlabel0;
                    }
                    Xget_fields_accessX__Vfuncrtn = "RW"s;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_build_coverage(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_build_coverage\n"); );
                // Locals
                CData/*0:0*/ __Vtask_read_by_name__254__Vfuncout;
                __Vtask_read_by_name__254__Vfuncout = 0;
                IData/*31:0*/ __Vtask_read_by_name__254__val;
                __Vtask_read_by_name__254__val = 0;
                std::string __Vfunc_get_full_name__255__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                build_coverage__Vfuncrtn = 0U;
                __Vtask_read_by_name__254__val = build_coverage__Vfuncrtn;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz175__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__255__Vfuncout);
                                }(), __Vfunc_get_full_name__255__Vfuncout))), "include_coverage"s, __Vtask_read_by_name__254__val, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this}, __Vtask_read_by_name__254__Vfuncout);
                build_coverage__Vfuncrtn = __Vtask_read_by_name__254__val;
                build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                            & models);
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_coverage(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_coverage\n"); );
                // Body
                this->__PVT__m_has_cover = (this->__PVT__m_has_cover 
                                            | models);
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_coverage(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_coverage\n"); );
                // Body
                has_coverage__Vfuncrtn = ((this->__PVT__m_has_cover 
                                           & models) 
                                          == models);
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_coverage(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_coverage\n"); );
                // Body
                {
                    if ((0U == is_on)) {
                        this->__PVT__m_cover_on = is_on;
                        set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
                        goto __Vlabel0;
                    }
                    this->__PVT__m_cover_on = (this->__PVT__m_has_cover 
                                               & is_on);
                    set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_coverage(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_coverage\n"); );
                // Locals
                CData/*0:0*/ __Vfunc_has_coverage__256__Vfuncout;
                __Vfunc_has_coverage__256__Vfuncout = 0;
                // Body
                {
                    if ((1U & (~ ([&]() {
                                        this->__VnoInFunc_has_coverage(vlSymsp, is_on, __Vfunc_has_coverage__256__Vfuncout);
                                    }(), (IData)(__Vfunc_has_coverage__256__Vfuncout))))) {
                        get_coverage__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                    get_coverage__Vfuncrtn = ((this->__PVT__m_cover_on 
                                               & is_on) 
                                              == is_on);
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set\n"); );
                // Locals
                IData/*31:0*/ __Vtask_get_lsb_pos__258__Vfuncout;
                __Vtask_get_lsb_pos__258__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__259__Vfuncout;
                __Vtask_get_n_bits__259__Vfuncout = 0;
                // Body
                IData/*31:0*/ unnamedblk322__DOT__i;
                unnamedblk322__DOT__i = 0;
                this->__PVT__m_fname = fname;
                this->__PVT__m_lineno = lineno;
                unnamedblk322__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk322__DOT__i, this->__PVT__m_fields.size())) {
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk322__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1355)
                                                        ->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                          (VL_SHIFTR_QQI(64,64,32, value, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk322__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1355)
                                                                                ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__258__Vfuncout);
                                    }(), __Vtask_get_lsb_pos__258__Vfuncout)) 
                                                                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk322__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1356)
                                                                                ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__259__Vfuncout);
                                        }(), __Vtask_get_n_bits__259__Vfuncout)) 
                                                                              - 1ULL)), ""s, 0U);
                    unnamedblk322__DOT__i = ((IData)(1U) 
                                             + unnamedblk322__DOT__i);
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_predict(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_predict\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw;
                rw = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1370)
                                                        ->__PVT__value.atWrite(0U) 
                    = value;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1371)
                                                        ->__PVT__path 
                    = path;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1372)
                                                        ->__PVT__map 
                    = map;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1373)
                                                        ->__PVT__fname 
                    = fname;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1374)
                                                        ->__PVT__lineno 
                    = lineno;
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
                predict__Vfuncrtn = ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1376)
                                      ->__PVT__status)
                                      ? 0U : 1U);
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__262__Vfuncout;
                __Vfunc_uvm_report_enabled__262__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__262__verbosity;
                __Vfunc_uvm_report_enabled__262__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__262__severity;
                __Vfunc_uvm_report_enabled__262__severity = 0;
                std::string __Vfunc_uvm_report_enabled__262__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__263__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__264__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__265__Vfuncout;
                __Vtask_uvm_report_enabled__265__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__266__id;
                std::string __Vtask_uvm_report_warning__266__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__266__verbosity;
                __Vtask_uvm_report_warning__266__verbosity = 0;
                std::string __Vtask_uvm_report_warning__266__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__266__line;
                __Vtask_uvm_report_warning__266__line = 0;
                std::string __Vtask_uvm_report_warning__266__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__266__report_enabled_checked;
                __Vtask_uvm_report_warning__266__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__267__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__268__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__269__Vfuncout;
                IData/*31:0*/ __Vtask_get_lsb_pos__271__Vfuncout;
                __Vtask_get_lsb_pos__271__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__272__Vfuncout;
                __Vtask_get_n_bits__272__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__274__Vfuncout;
                __Vtask_get_lsb_pos__274__Vfuncout = 0;
                // Body
                IData/*31:0*/ unnamedblk323__DOT__i;
                unnamedblk323__DOT__i = 0;
                QData/*63:0*/ reg_value;
                reg_value = 0;
                {
                    reg_value = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1386)
                        ->__PVT__value.at(0U);
                    this->__PVT__m_fname = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1387)
                        ->__PVT__fname;
                    this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1388)
                        ->__PVT__lineno;
                    if ((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1390)
                         ->__PVT__status)) {
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1391)
                                                        ->__PVT__status = 0U;
                    }
                    if (((IData)(this->__PVT__m_is_busy) 
                         & (0U == kind))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__262__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__262__severity = 1U;
                                        __Vfunc_uvm_report_enabled__262__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__263__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__263__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__264__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__264__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__262__verbosity, (IData)(__Vfunc_uvm_report_enabled__262__severity), __Vfunc_uvm_report_enabled__262__id, __Vtask_uvm_report_enabled__265__Vfuncout);
                                        __Vfunc_uvm_report_enabled__262__Vfuncout 
                                            = __Vtask_uvm_report_enabled__265__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__262__Vfuncout))) {
                            __Vtask_uvm_report_warning__266__report_enabled_checked = 1U;
                            __Vtask_uvm_report_warning__266__context_name = ""s;
                            __Vtask_uvm_report_warning__266__line = 0x00000573U;
                            __Vtask_uvm_report_warning__266__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__266__verbosity = 0U;
                            __Vtask_uvm_report_warning__266__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Trying to predict value of register '"s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__267__Vfuncout);
                                            }(), __Vfunc_get_full_name__267__Vfuncout)), "' while it is being accessed"s));
                            __Vtask_uvm_report_warning__266__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__268__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__268__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__269__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__269__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__266__id, __Vtask_uvm_report_warning__266__message, __Vtask_uvm_report_warning__266__verbosity, __Vtask_uvm_report_warning__266__filename, __Vtask_uvm_report_warning__266__line, __Vtask_uvm_report_warning__266__context_name, (IData)(__Vtask_uvm_report_warning__266__report_enabled_checked));
                        }
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1396)
                                                        ->__PVT__status = 1U;
                        goto __Vlabel0;
                    }
                    unnamedblk323__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk323__DOT__i, this->__PVT__m_fields.size())) {
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1401)
                                                        ->__PVT__value.atWrite(0U) 
                            = (VL_SHIFTR_QQI(64,64,32, reg_value, 
                                             ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk323__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1401)
                                              ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__271__Vfuncout);
                                    }(), __Vtask_get_lsb_pos__271__Vfuncout)) 
                               & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk323__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1402)
                                                 ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__272__Vfuncout);
                                        }(), __Vtask_get_n_bits__272__Vfuncout)) 
                                  - 1ULL));
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk323__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1403)
                                                        ->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, 
                                                                                (0x000000ffU 
                                                                                & VL_SHIFTR_III(8,8,32, (IData)(be), 
                                                                                VL_SHIFTR_III(32,32,32, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk323__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1403)
                                                                                ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__274__Vfuncout);
                                            }(), __Vtask_get_lsb_pos__274__Vfuncout), 3U))));
                        unnamedblk323__DOT__i = ((IData)(1U) 
                                                 + unnamedblk323__DOT__i);
                    }
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1406)
                                                        ->__PVT__value.atWrite(0U) 
                        = reg_value;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get\n"); );
                // Locals
                QData/*63:0*/ __Vtask_get__275__Vfuncout;
                __Vtask_get__275__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__276__Vfuncout;
                __Vtask_get_lsb_pos__276__Vfuncout = 0;
                // Body
                IData/*31:0*/ unnamedblk324__DOT__i;
                unnamedblk324__DOT__i = 0;
                this->__PVT__m_fname = fname;
                this->__PVT__m_lineno = lineno;
                get__Vfuncrtn = 0ULL;
                unnamedblk324__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk324__DOT__i, this->__PVT__m_fields.size())) {
                    get__Vfuncrtn = (get__Vfuncrtn 
                                     | VL_SHIFTL_QQI(64,64,32, 
                                                     ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk324__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1423)
                                                      ->__VnoInFunc_get(vlSymsp, ""s, 0U, __Vtask_get__275__Vfuncout);
                                }(), __Vtask_get__275__Vfuncout), 
                                                     ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk324__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1423)
                                                      ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__276__Vfuncout);
                                }(), __Vtask_get_lsb_pos__276__Vfuncout)));
                    unnamedblk324__DOT__i = ((IData)(1U) 
                                             + unnamedblk324__DOT__i);
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_mirrored_value(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_mirrored_value\n"); );
                // Locals
                QData/*63:0*/ __Vtask_get_mirrored_value__277__Vfuncout;
                __Vtask_get_mirrored_value__277__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__278__Vfuncout;
                __Vtask_get_lsb_pos__278__Vfuncout = 0;
                // Body
                IData/*31:0*/ unnamedblk325__DOT__i;
                unnamedblk325__DOT__i = 0;
                this->__PVT__m_fname = fname;
                this->__PVT__m_lineno = lineno;
                get_mirrored_value__Vfuncrtn = 0ULL;
                unnamedblk325__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk325__DOT__i, this->__PVT__m_fields.size())) {
                    get_mirrored_value__Vfuncrtn = 
                        (get_mirrored_value__Vfuncrtn 
                         | VL_SHIFTL_QQI(64,64,32, 
                                         ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk325__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1439)
                                          ->__VnoInFunc_get_mirrored_value(vlSymsp, ""s, 0U, __Vtask_get_mirrored_value__277__Vfuncout);
                                }(), __Vtask_get_mirrored_value__277__Vfuncout), 
                                         ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk325__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1439)
                                          ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__278__Vfuncout);
                                }(), __Vtask_get_lsb_pos__278__Vfuncout)));
                    unnamedblk325__DOT__i = ((IData)(1U) 
                                             + unnamedblk325__DOT__i);
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_reset(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_reset\n"); );
                // Locals
                IData/*31:0*/ __Vtask_try_get__280__Vfuncout;
                __Vtask_try_get__280__Vfuncout = 0;
                // Body
                IData/*31:0*/ unnamedblk326__DOT__i;
                unnamedblk326__DOT__i = 0;
                unnamedblk326__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk326__DOT__i, this->__PVT__m_fields.size())) {
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk326__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1447)
                                                        ->__VnoInFunc_reset(vlSymsp, kind);
                    unnamedblk326__DOT__i = ((IData)(1U) 
                                             + unnamedblk326__DOT__i);
                }
                VL_NULL_CHECK(this->__PVT__m_atomic, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1450)
                                                        ->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__280__Vfuncout);
                VL_NULL_CHECK(this->__PVT__m_atomic, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1451)
                                                        ->__VnoInFunc_put(vlSymsp, 1U);
                this->__PVT__m_process = VlNull{};
                this->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_reset(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_reset\n"); );
                // Locals
                QData/*63:0*/ __Vtask_get_reset__283__Vfuncout;
                __Vtask_get_reset__283__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__284__Vfuncout;
                __Vtask_get_lsb_pos__284__Vfuncout = 0;
                // Body
                IData/*31:0*/ unnamedblk327__DOT__i;
                unnamedblk327__DOT__i = 0;
                get_reset__Vfuncrtn = 0ULL;
                unnamedblk327__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk327__DOT__i, this->__PVT__m_fields.size())) {
                    get_reset__Vfuncrtn = (get_reset__Vfuncrtn 
                                           | VL_SHIFTL_QQI(64,64,32, 
                                                           ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1465)
                                                            ->__VnoInFunc_get_reset(vlSymsp, kind, __Vtask_get_reset__283__Vfuncout);
                                }(), __Vtask_get_reset__283__Vfuncout), 
                                                           ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1465)
                                                            ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__284__Vfuncout);
                                }(), __Vtask_get_lsb_pos__284__Vfuncout)));
                    unnamedblk327__DOT__i = ((IData)(1U) 
                                             + unnamedblk327__DOT__i);
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_reset(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_reset\n"); );
                // Locals
                CData/*0:0*/ __Vtask_has_reset__285__Vfuncout;
                __Vtask_has_reset__285__Vfuncout = 0;
                // Body
                IData/*31:0*/ unnamedblk328__DOT__i;
                unnamedblk328__DOT__i = 0;
                {
                    has_reset__Vfuncrtn = 0U;
                    unnamedblk328__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk328__DOT__i, this->__PVT__m_fields.size())) {
                        has_reset__Vfuncrtn = ((IData)(has_reset__Vfuncrtn) 
                                               | ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk328__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1476)
                                                  ->__VnoInFunc_has_reset(vlSymsp, kind, (IData)(__SYM__delete), __Vtask_has_reset__285__Vfuncout);
                                }(), (IData)(__Vtask_has_reset__285__Vfuncout)));
                        if (((~ (IData)(__SYM__delete)) 
                             & (IData)(has_reset__Vfuncrtn))) {
                            has_reset__Vfuncrtn = 1U;
                            goto __Vlabel0;
                        }
                        unnamedblk328__DOT__i = ((IData)(1U) 
                                                 + unnamedblk328__DOT__i);
                    }
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_reset(Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_reset\n"); );
                // Locals
                IData/*31:0*/ __Vtask_get_lsb_pos__287__Vfuncout;
                __Vtask_get_lsb_pos__287__Vfuncout = 0;
                // Body
                IData/*31:0*/ unnamedblk329__DOT__i;
                unnamedblk329__DOT__i = 0;
                unnamedblk329__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk329__DOT__i, this->__PVT__m_fields.size())) {
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk329__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1488)
                                                        ->__VnoInFunc_set_reset(vlSymsp, 
                                                                                VL_SHIFTR_QQI(64,64,32, value, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk329__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1488)
                                                                                ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__287__Vfuncout);
                                }(), __Vtask_get_lsb_pos__287__Vfuncout)), kind);
                    unnamedblk329__DOT__i = ((IData)(1U) 
                                             + unnamedblk329__DOT__i);
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_needs_update(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_needs_update\n"); );
                // Locals
                CData/*0:0*/ __Vtask_needs_update__288__Vfuncout;
                __Vtask_needs_update__288__Vfuncout = 0;
                // Body
                IData/*31:0*/ unnamedblk330__DOT__i;
                unnamedblk330__DOT__i = 0;
                {
                    needs_update__Vfuncrtn = 0U;
                    unnamedblk330__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk330__DOT__i, this->__PVT__m_fields.size())) {
                        if (([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk330__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1502)
                             ->__VnoInFunc_needs_update(vlSymsp, __Vtask_needs_update__288__Vfuncout);
                                }(), (IData)(__Vtask_needs_update__288__Vfuncout))) {
                            needs_update__Vfuncrtn = 1U;
                            goto __Vlabel0;
                        }
                        unnamedblk330__DOT__i = ((IData)(1U) 
                                                 + unnamedblk330__DOT__i);
                    }
                    __Vlabel0: ;
                }
            }

            VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_update(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_update\n"); );
                // Locals
                CData/*0:0*/ __Vfunc_needs_update__289__Vfuncout;
                __Vfunc_needs_update__289__Vfuncout = 0;
                QData/*63:0*/ __Vtask_XupdateX__290__Vfuncout;
                __Vtask_XupdateX__290__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__291__Vfuncout;
                __Vtask_get_lsb_pos__291__Vfuncout = 0;
                IData/*31:0*/ __Vtask_write__292__status;
                __Vtask_write__292__status = 0;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VL_KEEP_THIS;
                IData/*31:0*/ unnamedblk331__DOT__i;
                unnamedblk331__DOT__i = 0;
                QData/*63:0*/ upd;
                upd = 0;
                {
                    status = 0U;
                    if ((1U & (~ ([&]() {
                                        this->__VnoInFunc_needs_update(vlSymsp, __Vfunc_needs_update__289__Vfuncout);
                                    }(), (IData)(__Vfunc_needs_update__289__Vfuncout))))) {
                        goto __Vlabel0;
                    }
                    upd = 0ULL;
                    unnamedblk331__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk331__DOT__i, this->__PVT__m_fields.size())) {
                        upd = (upd | VL_SHIFTL_QQI(64,64,32, 
                                                   ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk331__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1529)
                                                    ->__VnoInFunc_XupdateX(vlSymsp, __Vtask_XupdateX__290__Vfuncout);
                                    }(), __Vtask_XupdateX__290__Vfuncout), 
                                                   ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk331__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1529)
                                                    ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__291__Vfuncout);
                                    }(), __Vtask_get_lsb_pos__291__Vfuncout)));
                        unnamedblk331__DOT__i = ((IData)(1U) 
                                                 + unnamedblk331__DOT__i);
                    }
                    co_await this->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__292__status, upd, path, map, parent, prior, extension, fname, lineno);
                    status = __Vtask_write__292__status;
                    __Vlabel0: ;
                }
            }

            VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_write(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_write\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__295__Vfuncout;
                std::string __Vfunc_get_full_name__296__Vfuncout;
                // Body
                VL_KEEP_THIS;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                this->__VnoInFunc_set(vlProcess, vlSymsp, value, ""s, 0U);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi109__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__296__Vfuncout);
                            }(), __Vfunc_get_full_name__296__Vfuncout)), __Vfunc_create__295__Vfuncout);
                rw = __Vfunc_create__295__Vfuncout;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1556)
                                                        ->__PVT__element 
                    = VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this};
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1557)
                                                        ->__PVT__element_kind = 0U;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1558)
                                                        ->__PVT__kind = 1U;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1559)
                                                        ->__PVT__value.atWrite(0U) 
                    = value;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1560)
                                                        ->__PVT__path 
                    = path;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1561)
                                                        ->__PVT__map 
                    = map;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1562)
                                                        ->__PVT__parent 
                    = parent;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1563)
                                                        ->__PVT__prior 
                    = prior;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1564)
                                                        ->__PVT__extension 
                    = extension;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1565)
                                                        ->__PVT__fname 
                    = fname;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1566)
                                                        ->__PVT__lineno 
                    = lineno;
                co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
                status = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1570)
                    ->__PVT__status;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            }

            VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_write(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_write\n"); );
                // Locals
                CData/*0:0*/ __Vfunc_Xcheck_accessX__300__Vfuncout;
                __Vfunc_Xcheck_accessX__300__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__300__map_info;
                IData/*31:0*/ __Vtask_get_lsb_pos__303__Vfuncout;
                __Vtask_get_lsb_pos__303__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__304__Vfuncout;
                __Vtask_get_n_bits__304__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__306__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__308__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__310__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__312__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__314__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_default_map__315__Vfuncout;
                IData/*31:0*/ __Vtask_get_lsb_pos__318__Vfuncout;
                __Vtask_get_lsb_pos__318__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__319__Vfuncout;
                __Vtask_get_n_bits__319__Vfuncout = 0;
                QData/*63:0*/ __Vtask_XpredictX__320__Vfuncout;
                __Vtask_XpredictX__320__Vfuncout = 0;
                std::string __Vfunc_get_rights__321__Vfuncout;
                std::string __Vfunc_get_rights__322__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__326__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__327__Vfuncout;
                CData/*0:0*/ __Vtask_get_auto_predict__330__Vfuncout;
                __Vtask_get_auto_predict__330__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__334__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__336__Vfuncout;
                IData/*31:0*/ __Vtask_get_lsb_pos__339__Vfuncout;
                __Vtask_get_lsb_pos__339__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__340__Vfuncout;
                __Vtask_get_n_bits__340__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__341__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__343__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__345__Vfuncout;
                __Vfunc_uvm_report_enabled__345__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__345__verbosity;
                __Vfunc_uvm_report_enabled__345__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__345__severity;
                __Vfunc_uvm_report_enabled__345__severity = 0;
                std::string __Vfunc_uvm_report_enabled__345__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__346__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__347__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__348__Vfuncout;
                __Vtask_uvm_report_enabled__348__Vfuncout = 0;
                std::string __Vtask_get_full_name__349__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__350__Vfuncout;
                std::string __Vtask_uvm_report_info__351__id;
                std::string __Vtask_uvm_report_info__351__message;
                IData/*31:0*/ __Vtask_uvm_report_info__351__verbosity;
                __Vtask_uvm_report_info__351__verbosity = 0;
                std::string __Vtask_uvm_report_info__351__filename;
                IData/*31:0*/ __Vtask_uvm_report_info__351__line;
                __Vtask_uvm_report_info__351__line = 0;
                std::string __Vtask_uvm_report_info__351__context_name;
                CData/*0:0*/ __Vtask_uvm_report_info__351__report_enabled_checked;
                __Vtask_uvm_report_info__351__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__352__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__353__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__354__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vtemp_2;
                CData/*31:0*/ __Vtemp_5;
                VlWide<4>/*127:0*/ __Vtemp_6;
                // Body
                VL_KEEP_THIS;
                QData/*63:0*/ pre_write_callbacks__DOT__msk;
                pre_write_callbacks__DOT__msk = 0;
                IData/*31:0*/ pre_write_callbacks__DOT__lsb;
                pre_write_callbacks__DOT__lsb = 0;
                IData/*31:0*/ pre_write_callbacks__DOT__unnamedblk332__DOT__i;
                pre_write_callbacks__DOT__unnamedblk332__DOT__i = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi92> pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__cbs;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_field> pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__f;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__unnamedblk334__DOT__cb;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk335__DOT__cb;
                QData/*63:0*/ unnamedblk336__DOT__final_val;
                unnamedblk336__DOT__final_val = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk336__DOT__bkdr;
                IData/*31:0*/ unnamedblk336__DOT__unnamedblk337__DOT__i;
                unnamedblk336__DOT__unnamedblk337__DOT__i = 0;
                QData/*63:0*/ unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__field_val;
                unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__field_val = 0;
                IData/*31:0*/ unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__lsb;
                unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__lsb = 0;
                IData/*31:0*/ unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__sz;
                unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__sz = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk339__DOT__system_map;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk339__DOT__unnamedblk340__DOT__fd;
                IData/*31:0*/ unnamedblk339__DOT__unnamedblk341__DOT__status;
                unnamedblk339__DOT__unnamedblk341__DOT__status = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk342__DOT__cb;
                IData/*31:0*/ unnamedblk343__DOT__i;
                unnamedblk343__DOT__i = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi92> unnamedblk343__DOT__unnamedblk344__DOT__cbs;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_field> unnamedblk343__DOT__unnamedblk344__DOT__f;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk343__DOT__unnamedblk344__DOT__unnamedblk345__DOT__cb;
                std::string unnamedblk346__DOT__path_s;
                std::string unnamedblk346__DOT__value_s;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi89> cbs;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                QData/*63:0*/ value;
                value = 0;
                {
                    cbs = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi89, vlSymsp, 
                                 VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this});
                    this->__PVT__m_fname = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1585)
                        ->__PVT__fname;
                    this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1586)
                        ->__PVT__lineno;
                    if ((1U & (~ ([&]() {
                                        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__300__map_info, __Vfunc_Xcheck_accessX__300__Vfuncout);
                                        map_info = __Vfunc_Xcheck_accessX__300__map_info;
                                    }(), (IData)(__Vfunc_Xcheck_accessX__300__Vfuncout))))) {
                        goto __Vlabel0;
                    }
                    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                    this->__PVT__m_write_in_progress = 1U;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1595)
                                                        ->__PVT__value.atWrite(0U) 
                        = (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1595)
                           ->__PVT__value.at(0U) & 
                           (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                            - 1ULL));
                    value = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1596)
                        ->__PVT__value.at(0U);
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1598)
                                                        ->__PVT__status = 0U;
                    pre_write_callbacks__DOT__unnamedblk332__DOT__i = 0U;
                    while (VL_LTS_III(32, pre_write_callbacks__DOT__unnamedblk332__DOT__i, this->__PVT__m_fields.size())) {
                        pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__cbs 
                            = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi92, vlSymsp, this->__PVT__m_fields.at(pre_write_callbacks__DOT__unnamedblk332__DOT__i));
                        pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__f 
                            = this->__PVT__m_fields.at(pre_write_callbacks__DOT__unnamedblk332__DOT__i);
                        VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1608)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__303__Vfuncout);
                        pre_write_callbacks__DOT__lsb 
                            = __Vtask_get_lsb_pos__303__Vfuncout;
                        pre_write_callbacks__DOT__msk 
                            = VL_SHIFTL_QQI(64,64,32, 
                                            (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                           ([&]() {
                                            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1609)
                                                            ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__304__Vfuncout);
                                        }(), __Vtask_get_n_bits__304__Vfuncout)) 
                                             - 1ULL), pre_write_callbacks__DOT__lsb);
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1610)
                                                        ->__PVT__value.atWrite(0U) 
                            = VL_SHIFTR_QQI(64,64,32, 
                                            (value 
                                             & pre_write_callbacks__DOT__msk), pre_write_callbacks__DOT__lsb);
                        VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1611)
                                                        ->__VnoInFunc_pre_write(vlSymsp, rw);
                        VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1612)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__306__Vfuncout);
                        pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__unnamedblk334__DOT__cb 
                            = __Vtask_first__306__Vfuncout;
                        while ((VlNull{} != pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__unnamedblk334__DOT__cb)) {
                            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1613)
                                                        ->__PVT__element 
                                = pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__f;
                            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1614)
                                                        ->__PVT__element_kind = 1U;
                            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__unnamedblk334__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1615)
                                                        ->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1612)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__308__Vfuncout);
                            pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__unnamedblk334__DOT__cb 
                                = __Vtask_next__308__Vfuncout;
                        }
                        value = ((value & (~ pre_write_callbacks__DOT__msk)) 
                                 | VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1618)
                                                 ->__PVT__value.at(0U), pre_write_callbacks__DOT__lsb));
                        pre_write_callbacks__DOT__unnamedblk332__DOT__i 
                            = ((IData)(1U) + pre_write_callbacks__DOT__unnamedblk332__DOT__i);
                    }
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1621)
                                                        ->__PVT__element 
                        = VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1622)
                                                        ->__PVT__element_kind = 0U;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1623)
                                                        ->__PVT__value.atWrite(0U) 
                        = value;
                    this->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                    VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1627)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__310__Vfuncout);
                    unnamedblk335__DOT__cb = __Vtask_first__310__Vfuncout;
                    while ((VlNull{} != unnamedblk335__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk335__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1628)
                                                        ->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                        VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1627)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__312__Vfuncout);
                        unnamedblk335__DOT__cb = __Vtask_next__312__Vfuncout;
                    }
                    if ((0U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1630)
                         ->__PVT__status)) {
                        this->__PVT__m_write_in_progress = 0U;
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                        goto __Vlabel0;
                    }
                    if ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1639)
                         ->__PVT__path)) {
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__314__Vfuncout);
                        unnamedblk336__DOT__bkdr = __Vfunc_get_backdoor__314__Vfuncout;
                        __Vtemp_2 = ((VlNull{} != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1646)
                                      ->__PVT__map)
                                      ? VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1647)
                                     ->__PVT__map : 
                                     ([&]() {
                                    this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __Vfunc_get_default_map__315__Vfuncout);
                                }(), __Vfunc_get_default_map__315__Vfuncout));
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1647)
                                                        ->__PVT__local_map 
                            = __Vtemp_2;
                        value = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1651)
                            ->__PVT__value.at(0U);
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1654)
                                                        ->__PVT__kind = 0U;
                        if ((VlNull{} != unnamedblk336__DOT__bkdr)) {
                            VL_NULL_CHECK(unnamedblk336__DOT__bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1656)
                                                        ->__VnoInFunc_read(vlProcess, vlSymsp, rw);
                        } else {
                            this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
                        }
                        if ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1660)
                             ->__PVT__status)) {
                            this->__PVT__m_write_in_progress = 0U;
                            goto __Vlabel0;
                        }
                        unnamedblk336__DOT__unnamedblk337__DOT__i = 0U;
                        while (VL_LTS_III(32, unnamedblk336__DOT__unnamedblk337__DOT__i, this->__PVT__m_fields.size())) {
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk336__DOT__unnamedblk337__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1668)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__318__Vfuncout);
                            unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__lsb 
                                = __Vtask_get_lsb_pos__318__Vfuncout;
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk336__DOT__unnamedblk337__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1669)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__319__Vfuncout);
                            unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__sz 
                                = __Vtask_get_n_bits__319__Vfuncout;
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk336__DOT__unnamedblk337__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1670)
                                                        ->__VnoInFunc_XpredictX(vlProcess, vlSymsp, 
                                                                                (VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1670)
                                                                                ->__PVT__value.at(0U), unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__lsb) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__sz) 
                                                                                - 1ULL)), 
                                                                                (VL_SHIFTR_QQI(64,64,32, value, unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__lsb) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__sz) 
                                                                                - 1ULL)), VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1672)
                                                                                ->__PVT__local_map, __Vtask_XpredictX__320__Vfuncout);
                            unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__field_val 
                                = __Vtask_XpredictX__320__Vfuncout;
                            unnamedblk336__DOT__final_val 
                                = (unnamedblk336__DOT__final_val 
                                   | VL_SHIFTL_QQI(64,64,32, unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__field_val, unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__lsb));
                            unnamedblk336__DOT__unnamedblk337__DOT__i 
                                = ((IData)(1U) + unnamedblk336__DOT__unnamedblk337__DOT__i);
                        }
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1676)
                                                        ->__PVT__kind = 1U;
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1677)
                                                        ->__PVT__value.atWrite(0U) 
                            = unnamedblk336__DOT__final_val;
                        if ((("RW"s == ([&]() {
                                            this->__VnoInFunc_get_rights(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1679)
                                                                         ->__PVT__local_map, __Vfunc_get_rights__321__Vfuncout);
                                        }(), __Vfunc_get_rights__321__Vfuncout)) 
                             || ("WO"s == ([&]() {
                                            this->__VnoInFunc_get_rights(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1679)
                                                                         ->__PVT__local_map, __Vfunc_get_rights__322__Vfuncout);
                                        }(), __Vfunc_get_rights__322__Vfuncout)))) {
                            if ((VlNull{} != unnamedblk336__DOT__bkdr)) {
                                VL_NULL_CHECK(unnamedblk336__DOT__bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1681)
                                                        ->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                            } else {
                                this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                            }
                            this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
                        } else {
                            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1688)
                                                        ->__PVT__status = 1U;
                        }
                    } else if ((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1639)
                                ->__PVT__path)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1696)
                                      ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1696)
                                                        ->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__326__Vfuncout);
                        unnamedblk339__DOT__system_map 
                            = __Vtask_get_root_map__326__Vfuncout;
                        this->__PVT__m_is_busy = 1U;
                        if ((VlNull{} != VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1701)
                             ->__PVT__frontdoor)) {
                            unnamedblk339__DOT__unnamedblk340__DOT__fd 
                                = VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1702)
                                ->__PVT__frontdoor;
                            VL_NULL_CHECK(unnamedblk339__DOT__unnamedblk340__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1703)
                                                        ->__PVT__rw_info 
                                = rw;
                            if ((VlNull{} == VL_NULL_CHECK(unnamedblk339__DOT__unnamedblk340__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1704)
                                 ->__PVT__sequencer)) {
                                VL_NULL_CHECK(unnamedblk339__DOT__system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1705)
                                                        ->__VnoInFunc_get_sequencer(vlSymsp, 1U, __Vtask_get_sequencer__327__Vfuncout);
                                VL_NULL_CHECK(unnamedblk339__DOT__unnamedblk340__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1705)
                                                        ->__PVT__sequencer 
                                    = __Vtask_get_sequencer__327__Vfuncout;
                            }
                            co_await VL_NULL_CHECK(unnamedblk339__DOT__unnamedblk340__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1706)
                                                        ->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk339__DOT__unnamedblk340__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1706)
                                                                            ->__PVT__sequencer, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1706)
                                                                            ->__PVT__parent, 0xffffffffU, 1U);
                        } else {
                            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1712)
                                                   ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1712)
                                                        ->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
                        }
                        this->__PVT__m_is_busy = 0U;
                        if (([&]() {
                                    VL_NULL_CHECK(unnamedblk339__DOT__system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1718)
                             ->__VnoInFunc_get_auto_predict(vlSymsp, __Vtask_get_auto_predict__330__Vfuncout);
                                }(), (IData)(__Vtask_get_auto_predict__330__Vfuncout))) {
                            if ((1U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1720)
                                 ->__PVT__status)) {
                                this->__VnoInFunc_sample(vlSymsp, value, 0xffffffffffffffffULL, 0U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1721)
                                                         ->__PVT__map);
                                VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1722)
                                                        ->__VnoInFunc_XsampleX(vlSymsp, VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1722)
                                                                               ->__PVT__offset, 0U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1722)
                                                                               ->__PVT__map);
                            }
                            unnamedblk339__DOT__unnamedblk341__DOT__status 
                                = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1725)
                                ->__PVT__status;
                            this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
                            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1727)
                                                        ->__PVT__status 
                                = unnamedblk339__DOT__unnamedblk341__DOT__status;
                        }
                    }
                    value = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1733)
                        ->__PVT__value.at(0U);
                    VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1736)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__334__Vfuncout);
                    unnamedblk342__DOT__cb = __Vtask_first__334__Vfuncout;
                    while ((VlNull{} != unnamedblk342__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk342__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1737)
                                                        ->__VnoInFunc_post_write(vlSymsp, rw);
                        VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1736)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__336__Vfuncout);
                        unnamedblk342__DOT__cb = __Vtask_next__336__Vfuncout;
                    }
                    this->__VnoInFunc_post_write(vlSymsp, rw);
                    unnamedblk343__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk343__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk343__DOT__unnamedblk344__DOT__cbs 
                            = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi92, vlSymsp, this->__PVT__m_fields.at(unnamedblk343__DOT__i));
                        unnamedblk343__DOT__unnamedblk344__DOT__f 
                            = this->__PVT__m_fields.at(unnamedblk343__DOT__i);
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1745)
                                                        ->__PVT__element 
                            = unnamedblk343__DOT__unnamedblk344__DOT__f;
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1746)
                                                        ->__PVT__element_kind = 1U;
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1747)
                                                        ->__PVT__value.atWrite(0U) 
                            = (VL_SHIFTR_QQI(64,64,32, value, 
                                             ([&]() {
                                        VL_NULL_CHECK(unnamedblk343__DOT__unnamedblk344__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1747)
                                              ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__339__Vfuncout);
                                    }(), __Vtask_get_lsb_pos__339__Vfuncout)) 
                               & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                ([&]() {
                                            VL_NULL_CHECK(unnamedblk343__DOT__unnamedblk344__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1747)
                                                 ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__340__Vfuncout);
                                        }(), __Vtask_get_n_bits__340__Vfuncout)) 
                                  - 1ULL));
                        VL_NULL_CHECK(unnamedblk343__DOT__unnamedblk344__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1749)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__341__Vfuncout);
                        unnamedblk343__DOT__unnamedblk344__DOT__unnamedblk345__DOT__cb 
                            = __Vtask_first__341__Vfuncout;
                        while ((VlNull{} != unnamedblk343__DOT__unnamedblk344__DOT__unnamedblk345__DOT__cb)) {
                            VL_NULL_CHECK(unnamedblk343__DOT__unnamedblk344__DOT__unnamedblk345__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1750)
                                                        ->__VnoInFunc_post_write(vlSymsp, rw);
                            VL_NULL_CHECK(unnamedblk343__DOT__unnamedblk344__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1749)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__343__Vfuncout);
                            unnamedblk343__DOT__unnamedblk344__DOT__unnamedblk345__DOT__cb 
                                = __Vtask_next__343__Vfuncout;
                        }
                        VL_NULL_CHECK(unnamedblk343__DOT__unnamedblk344__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1751)
                                                        ->__VnoInFunc_post_write(vlSymsp, rw);
                        unnamedblk343__DOT__i = ((IData)(1U) 
                                                 + unnamedblk343__DOT__i);
                    }
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1754)
                                                        ->__PVT__value.atWrite(0U) 
                        = value;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1755)
                                                        ->__PVT__element 
                        = VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1756)
                                                        ->__PVT__element_kind = 0U;
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__345__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__345__severity = 0U;
                                    __Vfunc_uvm_report_enabled__345__verbosity = 0x0000012cU;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__346__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__346__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__347__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__347__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__345__verbosity, (IData)(__Vfunc_uvm_report_enabled__345__severity), __Vfunc_uvm_report_enabled__345__id, __Vtask_uvm_report_enabled__348__Vfuncout);
                                    __Vfunc_uvm_report_enabled__345__Vfuncout 
                                        = __Vtask_uvm_report_enabled__348__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__345__Vfuncout))) {
                        __Vtemp_5 = (VlNull{} != ([&]() {
                                    this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__350__Vfuncout);
                                }(), __Vfunc_get_backdoor__350__Vfuncout));
                        __Vtemp_6[0U] = 0x646f6f72U;
                        __Vtemp_6[1U] = 0x6261636bU;
                        if (__Vtemp_5) {
                            __Vtemp_6[2U] = 0x73657220U;
                            __Vtemp_6[3U] = 0x00000075U;
                        } else {
                            __Vtemp_6[2U] = 0x44504920U;
                            __Vtemp_6[3U] = 0U;
                        }
                        unnamedblk346__DOT__path_s 
                            = ((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1761)
                                ->__PVT__path) ? ((VlNull{} 
                                                   != VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1762)
                                                   ->__PVT__frontdoor)
                                                   ? "user frontdoor"s
                                                   : 
                                                  VL_CONCATN_NNN("map "s, 
                                                                 ([&]() {
                                            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1763)
                                                          ->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1763)
                                                                  ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__349__Vfuncout);
                                        }(), __Vtask_get_full_name__349__Vfuncout)))
                                : VL_CVT_PACK_STR_NW(4, __Vtemp_6));
                        unnamedblk346__DOT__value_s 
                            = VL_SFORMATF_N_NX("=0x%0x",0,
                                               64,VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1767)
                                               ->__PVT__value.at(0U)) ;
                        __Vtask_uvm_report_info__351__report_enabled_checked = 0U;
                        __Vtask_uvm_report_info__351__context_name = ""s;
                        __Vtask_uvm_report_info__351__line = 0U;
                        __Vtask_uvm_report_info__351__filename = ""s;
                        __Vtask_uvm_report_info__351__verbosity = 0x0000012cU;
                        __Vtask_uvm_report_info__351__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Wrote register via "s, unnamedblk346__DOT__path_s), ": "s), 
                                                                               ([&]() {
                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__352__Vfuncout);
                                        }(), __Vfunc_get_full_name__352__Vfuncout)), unnamedblk346__DOT__value_s));
                        __Vtask_uvm_report_info__351__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__353__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__353__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__354__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__354__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__351__id, __Vtask_uvm_report_info__351__message, __Vtask_uvm_report_info__351__verbosity, __Vtask_uvm_report_info__351__filename, __Vtask_uvm_report_info__351__line, __Vtask_uvm_report_info__351__context_name, (IData)(__Vtask_uvm_report_info__351__report_enabled_checked));
                    }
                    this->__PVT__m_write_in_progress = 0U;
                    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                    __Vlabel0: ;
                }
            }

            VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read\n"); );
                // Locals
                IData/*31:0*/ __Vtask_XreadX__358__status;
                __Vtask_XreadX__358__status = 0;
                QData/*63:0*/ __Vtask_XreadX__358__value;
                __Vtask_XreadX__358__value = 0;
                // Body
                VL_KEEP_THIS;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                co_await this->__VnoInFunc_XreadX(vlProcess, vlSymsp, __Vtask_XreadX__358__status, __Vtask_XreadX__358__value, path, map, parent, prior, extension, fname, lineno);
                status = __Vtask_XreadX__358__status;
                value = __Vtask_XreadX__358__value;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            }

            VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XreadX(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XreadX\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__360__Vfuncout;
                std::string __Vfunc_get_full_name__361__Vfuncout;
                // Body
                VL_KEEP_THIS;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi109__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "read_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__361__Vfuncout);
                            }(), __Vfunc_get_full_name__361__Vfuncout)), __Vfunc_create__360__Vfuncout);
                rw = __Vfunc_create__360__Vfuncout;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1811)
                                                        ->__PVT__element 
                    = VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this};
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1812)
                                                        ->__PVT__element_kind = 0U;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1813)
                                                        ->__PVT__kind = 0U;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1814)
                                                        ->__PVT__value.atWrite(0U) = 0ULL;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1815)
                                                        ->__PVT__path 
                    = path;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1816)
                                                        ->__PVT__map 
                    = map;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1817)
                                                        ->__PVT__parent 
                    = parent;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1818)
                                                        ->__PVT__prior 
                    = prior;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1819)
                                                        ->__PVT__extension 
                    = extension;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1820)
                                                        ->__PVT__fname 
                    = fname;
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1821)
                                                        ->__PVT__lineno 
                    = lineno;
                co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
                status = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1825)
                    ->__PVT__status;
                value = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1826)
                    ->__PVT__value.at(0U);
            }

            VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_read(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_read\n"); );
                // Locals
                CData/*0:0*/ __Vfunc_Xcheck_accessX__364__Vfuncout;
                __Vfunc_Xcheck_accessX__364__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__364__map_info;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__367__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__369__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__371__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__373__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__374__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_default_map__375__Vfuncout;
                CData/*0:0*/ __Vtask_get_check_on_read__376__Vfuncout;
                __Vtask_get_check_on_read__376__Vfuncout = 0;
                QData/*63:0*/ __Vfunc_get__377__Vfuncout;
                __Vfunc_get__377__Vfuncout = 0;
                std::string __Vfunc_get_rights__378__Vfuncout;
                std::string __Vfunc_get_rights__379__Vfuncout;
                std::string __Vtask_get_access__382__Vfuncout;
                IData/*31:0*/ __Vtask_get_n_bits__383__Vfuncout;
                __Vtask_get_n_bits__383__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__384__Vfuncout;
                __Vtask_get_lsb_pos__384__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__385__Vfuncout;
                __Vtask_get_n_bits__385__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__386__Vfuncout;
                __Vtask_get_lsb_pos__386__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__387__Vfuncout;
                __Vtask_get_n_bits__387__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__388__Vfuncout;
                __Vtask_get_lsb_pos__388__Vfuncout = 0;
                std::string __Vfunc_get_rights__389__Vfuncout;
                std::string __Vfunc_get_rights__390__Vfuncout;
                CData/*0:0*/ __Vtask_get_check_on_read__393__Vfuncout;
                __Vtask_get_check_on_read__393__Vfuncout = 0;
                CData/*0:0*/ __Vtask_do_check__394__Vfuncout;
                __Vtask_do_check__394__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__396__Vfuncout;
                CData/*0:0*/ __Vtask_get_check_on_read__397__Vfuncout;
                __Vtask_get_check_on_read__397__Vfuncout = 0;
                QData/*63:0*/ __Vfunc_get__398__Vfuncout;
                __Vfunc_get__398__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__399__Vfuncout;
                CData/*0:0*/ __Vtask_get_auto_predict__402__Vfuncout;
                __Vtask_get_auto_predict__402__Vfuncout = 0;
                CData/*0:0*/ __Vtask_get_check_on_read__403__Vfuncout;
                __Vtask_get_check_on_read__403__Vfuncout = 0;
                CData/*0:0*/ __Vtask_do_check__404__Vfuncout;
                __Vtask_do_check__404__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__408__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__410__Vfuncout;
                IData/*31:0*/ __Vtask_get_lsb_pos__413__Vfuncout;
                __Vtask_get_lsb_pos__413__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__414__Vfuncout;
                __Vtask_get_n_bits__414__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__415__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__417__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__419__Vfuncout;
                __Vfunc_uvm_report_enabled__419__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__419__verbosity;
                __Vfunc_uvm_report_enabled__419__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__419__severity;
                __Vfunc_uvm_report_enabled__419__severity = 0;
                std::string __Vfunc_uvm_report_enabled__419__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__420__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__421__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__422__Vfuncout;
                __Vtask_uvm_report_enabled__422__Vfuncout = 0;
                std::string __Vtask_get_full_name__423__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__424__Vfuncout;
                std::string __Vtask_uvm_report_info__425__id;
                std::string __Vtask_uvm_report_info__425__message;
                IData/*31:0*/ __Vtask_uvm_report_info__425__verbosity;
                __Vtask_uvm_report_info__425__verbosity = 0;
                std::string __Vtask_uvm_report_info__425__filename;
                IData/*31:0*/ __Vtask_uvm_report_info__425__line;
                __Vtask_uvm_report_info__425__line = 0;
                std::string __Vtask_uvm_report_info__425__context_name;
                CData/*0:0*/ __Vtask_uvm_report_info__425__report_enabled_checked;
                __Vtask_uvm_report_info__425__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__426__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__427__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__428__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vtemp_1;
                CData/*31:0*/ __Vtemp_5;
                VlWide<4>/*127:0*/ __Vtemp_6;
                // Body
                VL_KEEP_THIS;
                IData/*31:0*/ unnamedblk347__DOT__i;
                unnamedblk347__DOT__i = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi92> unnamedblk347__DOT__unnamedblk348__DOT__cbs;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_field> unnamedblk347__DOT__unnamedblk348__DOT__f;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk347__DOT__unnamedblk348__DOT__unnamedblk349__DOT__cb;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk350__DOT__cb;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk351__DOT__bkdr;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk351__DOT__map;
                QData/*63:0*/ unnamedblk351__DOT__unnamedblk352__DOT__wo_mask;
                unnamedblk351__DOT__unnamedblk352__DOT__wo_mask = 0;
                IData/*31:0*/ unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i;
                unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i = 0;
                std::string unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc;
                QData/*63:0*/ unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk355__DOT__saved;
                unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk355__DOT__saved = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk356__DOT__system_map;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk356__DOT__unnamedblk357__DOT__fd;
                IData/*31:0*/ unnamedblk356__DOT__unnamedblk358__DOT__status;
                unnamedblk356__DOT__unnamedblk358__DOT__status = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk359__DOT__cb;
                IData/*31:0*/ unnamedblk360__DOT__i;
                unnamedblk360__DOT__i = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi92> unnamedblk360__DOT__unnamedblk361__DOT__cbs;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_field> unnamedblk360__DOT__unnamedblk361__DOT__f;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT__cb;
                std::string unnamedblk363__DOT__path_s;
                std::string unnamedblk363__DOT__value_s;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi89> cbs;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                QData/*63:0*/ value;
                value = 0;
                QData/*63:0*/ exp;
                exp = 0;
                {
                    cbs = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi89, vlSymsp, 
                                 VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this});
                    this->__PVT__m_fname = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1840)
                        ->__PVT__fname;
                    this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1841)
                        ->__PVT__lineno;
                    if ((1U & (~ ([&]() {
                                        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__364__map_info, __Vfunc_Xcheck_accessX__364__Vfuncout);
                                        map_info = __Vfunc_Xcheck_accessX__364__map_info;
                                    }(), (IData)(__Vfunc_Xcheck_accessX__364__Vfuncout))))) {
                        goto __Vlabel0;
                    }
                    this->__PVT__m_read_in_progress = 1U;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1848)
                                                        ->__PVT__status = 0U;
                    unnamedblk347__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk347__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk347__DOT__unnamedblk348__DOT__cbs 
                            = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi92, vlSymsp, this->__PVT__m_fields.at(unnamedblk347__DOT__i));
                        unnamedblk347__DOT__unnamedblk348__DOT__f 
                            = this->__PVT__m_fields.at(unnamedblk347__DOT__i);
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1854)
                                                        ->__PVT__element 
                            = unnamedblk347__DOT__unnamedblk348__DOT__f;
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1855)
                                                        ->__PVT__element_kind = 1U;
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk347__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1856)
                                                        ->__VnoInFunc_pre_read(vlSymsp, rw);
                        VL_NULL_CHECK(unnamedblk347__DOT__unnamedblk348__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1857)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__367__Vfuncout);
                        unnamedblk347__DOT__unnamedblk348__DOT__unnamedblk349__DOT__cb 
                            = __Vtask_first__367__Vfuncout;
                        while ((VlNull{} != unnamedblk347__DOT__unnamedblk348__DOT__unnamedblk349__DOT__cb)) {
                            VL_NULL_CHECK(unnamedblk347__DOT__unnamedblk348__DOT__unnamedblk349__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1858)
                                                        ->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                            VL_NULL_CHECK(unnamedblk347__DOT__unnamedblk348__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1857)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__369__Vfuncout);
                            unnamedblk347__DOT__unnamedblk348__DOT__unnamedblk349__DOT__cb 
                                = __Vtask_next__369__Vfuncout;
                        }
                        unnamedblk347__DOT__i = ((IData)(1U) 
                                                 + unnamedblk347__DOT__i);
                    }
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1861)
                                                        ->__PVT__element 
                        = VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1862)
                                                        ->__PVT__element_kind = 0U;
                    this->__VnoInFunc_pre_read(vlSymsp, rw);
                    VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1866)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__371__Vfuncout);
                    unnamedblk350__DOT__cb = __Vtask_first__371__Vfuncout;
                    while ((VlNull{} != unnamedblk350__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk350__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1867)
                                                        ->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                        VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1866)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__373__Vfuncout);
                        unnamedblk350__DOT__cb = __Vtask_next__373__Vfuncout;
                    }
                    if ((0U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1869)
                         ->__PVT__status)) {
                        this->__PVT__m_read_in_progress = 0U;
                        goto __Vlabel0;
                    }
                    if ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1876)
                         ->__PVT__path)) {
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__374__Vfuncout);
                        unnamedblk351__DOT__bkdr = __Vfunc_get_backdoor__374__Vfuncout;
                        __Vtemp_1 = ((VlNull{} != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1883)
                                      ->__PVT__map)
                                      ? VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1884)
                                     ->__PVT__map : 
                                     ([&]() {
                                    this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __Vfunc_get_default_map__375__Vfuncout);
                                }(), __Vfunc_get_default_map__375__Vfuncout));
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1884)
                                                        ->__PVT__local_map 
                            = __Vtemp_1;
                        unnamedblk351__DOT__map = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1888)
                            ->__PVT__local_map;
                        if (([&]() {
                                    VL_NULL_CHECK(unnamedblk351__DOT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1890)
                             ->__VnoInFunc_get_check_on_read(vlSymsp, __Vtask_get_check_on_read__376__Vfuncout);
                                }(), (IData)(__Vtask_get_check_on_read__376__Vfuncout))) {
                            this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vfunc_get__377__Vfuncout);
                            exp = __Vfunc_get__377__Vfuncout;
                        }
                        if ((("RW"s == ([&]() {
                                            this->__VnoInFunc_get_rights(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1892)
                                                                         ->__PVT__local_map, __Vfunc_get_rights__378__Vfuncout);
                                        }(), __Vfunc_get_rights__378__Vfuncout)) 
                             || ("RO"s == ([&]() {
                                            this->__VnoInFunc_get_rights(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1892)
                                                                         ->__PVT__local_map, __Vfunc_get_rights__379__Vfuncout);
                                        }(), __Vfunc_get_rights__379__Vfuncout)))) {
                            if ((VlNull{} != unnamedblk351__DOT__bkdr)) {
                                VL_NULL_CHECK(unnamedblk351__DOT__bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1894)
                                                        ->__VnoInFunc_read(vlProcess, vlSymsp, rw);
                            } else {
                                this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
                            }
                        } else {
                            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1899)
                                                        ->__PVT__status = 1U;
                        }
                        value = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1902)
                            ->__PVT__value.at(0U);
                        if ((1U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1905)
                             ->__PVT__status)) {
                            unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i = 0U;
                            while (VL_LTS_III(32, unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i, this->__PVT__m_fields.size())) {
                                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1911)
                                                        ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1911)
                                                                                ->__PVT__local_map, __Vtask_get_access__382__Vfuncout);
                                unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc 
                                    = __Vtask_get_access__382__Vfuncout;
                                if (((((("RC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc) 
                                        | ("WRC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                       | ("WSRC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                      | ("W1SRC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                     | ("W0SRC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) {
                                    value = (value 
                                             & (~ VL_SHIFTL_QQI(64,64,32, 
                                                                (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                                               ([&]() {
                                                                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1917)
                                                                                ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__383__Vfuncout);
                                                            }(), __Vtask_get_n_bits__383__Vfuncout)) 
                                                                 - 1ULL), 
                                                                ([&]() {
                                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1918)
                                                                 ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__384__Vfuncout);
                                                    }(), __Vtask_get_lsb_pos__384__Vfuncout))));
                                } else if (((((("RS"s 
                                                == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc) 
                                               | ("WRS"s 
                                                  == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                              | ("WCRS"s 
                                                 == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                             | ("W1CRS"s 
                                                == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                            | ("W0CRS"s 
                                               == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) {
                                    value = (value 
                                             | VL_SHIFTL_QQI(64,64,32, 
                                                             (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                                            ([&]() {
                                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1925)
                                                                             ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__385__Vfuncout);
                                                        }(), __Vtask_get_n_bits__385__Vfuncout)) 
                                                              - 1ULL), 
                                                             ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1926)
                                                              ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__386__Vfuncout);
                                                }(), __Vtask_get_lsb_pos__386__Vfuncout)));
                                } else if ((((("WO"s 
                                               == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc) 
                                              | ("WOC"s 
                                                 == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                             | ("WOS"s 
                                                == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                            | ("WO1"s 
                                               == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) {
                                    unnamedblk351__DOT__unnamedblk352__DOT__wo_mask 
                                        = (unnamedblk351__DOT__unnamedblk352__DOT__wo_mask 
                                           | VL_SHIFTL_QQI(64,64,32, 
                                                           (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                                          ([&]() {
                                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1932)
                                                                           ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__387__Vfuncout);
                                                        }(), __Vtask_get_n_bits__387__Vfuncout)) 
                                                            - 1ULL), 
                                                           ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1933)
                                                            ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__388__Vfuncout);
                                                }(), __Vtask_get_lsb_pos__388__Vfuncout)));
                                }
                                unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i 
                                    = ((IData)(1U) 
                                       + unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i);
                            }
                            if ((("RW"s == ([&]() {
                                                this->__VnoInFunc_get_rights(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1937)
                                                                             ->__PVT__local_map, __Vfunc_get_rights__389__Vfuncout);
                                            }(), __Vfunc_get_rights__389__Vfuncout)) 
                                 || ("RO"s == ([&]() {
                                                this->__VnoInFunc_get_rights(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1937)
                                                                             ->__PVT__local_map, __Vfunc_get_rights__390__Vfuncout);
                                            }(), __Vfunc_get_rights__390__Vfuncout)))) {
                                if ((value != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1939)
                                     ->__PVT__value.at(0U))) {
                                    unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk355__DOT__saved 
                                        = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1941)
                                        ->__PVT__value.at(0U);
                                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1942)
                                                        ->__PVT__value.atWrite(0U) 
                                        = value;
                                    if ((VlNull{} != unnamedblk351__DOT__bkdr)) {
                                        VL_NULL_CHECK(unnamedblk351__DOT__bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1944)
                                                        ->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                                    } else {
                                        this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                                    }
                                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1947)
                                                        ->__PVT__value.atWrite(0U) 
                                        = unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk355__DOT__saved;
                                }
                                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1950)
                                                        ->__PVT__value.atWrite(0U) 
                                    = (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1950)
                                       ->__PVT__value.at(0U) 
                                       & (~ unnamedblk351__DOT__unnamedblk352__DOT__wo_mask));
                                if ((([&]() {
                                                VL_NULL_CHECK(unnamedblk351__DOT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1952)
                                      ->__VnoInFunc_get_check_on_read(vlSymsp, __Vtask_get_check_on_read__393__Vfuncout);
                                            }(), (IData)(__Vtask_get_check_on_read__393__Vfuncout)) 
                                     && (1U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1953)
                                         ->__PVT__status))) {
                                    this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1954)
                                                               ->__PVT__value.at(0U), unnamedblk351__DOT__map, __Vtask_do_check__394__Vfuncout);
                                }
                                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                            } else {
                                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1960)
                                                        ->__PVT__status = 1U;
                            }
                        }
                    } else if ((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1876)
                                ->__PVT__path)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1969)
                                      ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1969)
                                                        ->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__396__Vfuncout);
                        unnamedblk356__DOT__system_map 
                            = __Vtask_get_root_map__396__Vfuncout;
                        this->__PVT__m_is_busy = 1U;
                        if (([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1973)
                                                  ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1973)
                             ->__VnoInFunc_get_check_on_read(vlSymsp, __Vtask_get_check_on_read__397__Vfuncout);
                                }(), (IData)(__Vtask_get_check_on_read__397__Vfuncout))) {
                            this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vfunc_get__398__Vfuncout);
                            exp = __Vfunc_get__398__Vfuncout;
                        }
                        if ((VlNull{} != VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1976)
                             ->__PVT__frontdoor)) {
                            unnamedblk356__DOT__unnamedblk357__DOT__fd 
                                = VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1977)
                                ->__PVT__frontdoor;
                            VL_NULL_CHECK(unnamedblk356__DOT__unnamedblk357__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1978)
                                                        ->__PVT__rw_info 
                                = rw;
                            if ((VlNull{} == VL_NULL_CHECK(unnamedblk356__DOT__unnamedblk357__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1979)
                                 ->__PVT__sequencer)) {
                                VL_NULL_CHECK(unnamedblk356__DOT__system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1980)
                                                        ->__VnoInFunc_get_sequencer(vlSymsp, 1U, __Vtask_get_sequencer__399__Vfuncout);
                                VL_NULL_CHECK(unnamedblk356__DOT__unnamedblk357__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1980)
                                                        ->__PVT__sequencer 
                                    = __Vtask_get_sequencer__399__Vfuncout;
                            }
                            co_await VL_NULL_CHECK(unnamedblk356__DOT__unnamedblk357__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1981)
                                                        ->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk356__DOT__unnamedblk357__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1981)
                                                                            ->__PVT__sequencer, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1981)
                                                                            ->__PVT__parent, 0xffffffffU, 1U);
                        } else {
                            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1986)
                                                   ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1986)
                                                        ->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
                        }
                        this->__PVT__m_is_busy = 0U;
                        if (([&]() {
                                    VL_NULL_CHECK(unnamedblk356__DOT__system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1991)
                             ->__VnoInFunc_get_auto_predict(vlSymsp, __Vtask_get_auto_predict__402__Vfuncout);
                                }(), (IData)(__Vtask_get_auto_predict__402__Vfuncout))) {
                            if ((([&]() {
                                            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1993)
                                                          ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1993)
                                  ->__VnoInFunc_get_check_on_read(vlSymsp, __Vtask_get_check_on_read__403__Vfuncout);
                                        }(), (IData)(__Vtask_get_check_on_read__403__Vfuncout)) 
                                 && (1U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1994)
                                     ->__PVT__status))) {
                                this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1995)
                                                           ->__PVT__value.at(0U), unnamedblk356__DOT__system_map, __Vtask_do_check__404__Vfuncout);
                            }
                            if ((1U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1998)
                                 ->__PVT__status)) {
                                this->__VnoInFunc_sample(vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1999)
                                                         ->__PVT__value.at(0U), 0xffffffffffffffffULL, 1U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1999)
                                                         ->__PVT__map);
                                VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2000)
                                                        ->__VnoInFunc_XsampleX(vlSymsp, VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2000)
                                                                               ->__PVT__offset, 1U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2000)
                                                                               ->__PVT__map);
                            }
                            unnamedblk356__DOT__unnamedblk358__DOT__status 
                                = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2003)
                                ->__PVT__status;
                            this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2005)
                                                        ->__PVT__status 
                                = unnamedblk356__DOT__unnamedblk358__DOT__status;
                        }
                    }
                    value = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2011)
                        ->__PVT__value.at(0U);
                    VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2014)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__408__Vfuncout);
                    unnamedblk359__DOT__cb = __Vtask_first__408__Vfuncout;
                    while ((VlNull{} != unnamedblk359__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk359__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2015)
                                                        ->__VnoInFunc_post_read(vlSymsp, rw);
                        VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2014)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__410__Vfuncout);
                        unnamedblk359__DOT__cb = __Vtask_next__410__Vfuncout;
                    }
                    this->__VnoInFunc_post_read(vlSymsp, rw);
                    unnamedblk360__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk360__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk360__DOT__unnamedblk361__DOT__cbs 
                            = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi92, vlSymsp, this->__PVT__m_fields.at(unnamedblk360__DOT__i));
                        unnamedblk360__DOT__unnamedblk361__DOT__f 
                            = this->__PVT__m_fields.at(unnamedblk360__DOT__i);
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2023)
                                                        ->__PVT__element 
                            = unnamedblk360__DOT__unnamedblk361__DOT__f;
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2024)
                                                        ->__PVT__element_kind = 1U;
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2025)
                                                        ->__PVT__value.atWrite(0U) 
                            = (VL_SHIFTR_QQI(64,64,32, value, 
                                             ([&]() {
                                        VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2025)
                                              ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__413__Vfuncout);
                                    }(), __Vtask_get_lsb_pos__413__Vfuncout)) 
                               & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                ([&]() {
                                            VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2025)
                                                 ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__414__Vfuncout);
                                        }(), __Vtask_get_n_bits__414__Vfuncout)) 
                                  - 1ULL));
                        VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2027)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__415__Vfuncout);
                        unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT__cb 
                            = __Vtask_first__415__Vfuncout;
                        while ((VlNull{} != unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT__cb)) {
                            VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2028)
                                                        ->__VnoInFunc_post_read(vlSymsp, rw);
                            VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2027)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__417__Vfuncout);
                            unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT__cb 
                                = __Vtask_next__417__Vfuncout;
                        }
                        VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2029)
                                                        ->__VnoInFunc_post_read(vlSymsp, rw);
                        unnamedblk360__DOT__i = ((IData)(1U) 
                                                 + unnamedblk360__DOT__i);
                    }
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2032)
                                                        ->__PVT__value.atWrite(0U) 
                        = value;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2033)
                                                        ->__PVT__element 
                        = VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2034)
                                                        ->__PVT__element_kind = 0U;
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__419__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__419__severity = 0U;
                                    __Vfunc_uvm_report_enabled__419__verbosity = 0x0000012cU;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__420__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__420__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__421__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__421__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__419__verbosity, (IData)(__Vfunc_uvm_report_enabled__419__severity), __Vfunc_uvm_report_enabled__419__id, __Vtask_uvm_report_enabled__422__Vfuncout);
                                    __Vfunc_uvm_report_enabled__419__Vfuncout 
                                        = __Vtask_uvm_report_enabled__422__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__419__Vfuncout))) {
                        __Vtemp_5 = (VlNull{} != ([&]() {
                                    this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__424__Vfuncout);
                                }(), __Vfunc_get_backdoor__424__Vfuncout));
                        __Vtemp_6[0U] = 0x646f6f72U;
                        __Vtemp_6[1U] = 0x6261636bU;
                        if (__Vtemp_5) {
                            __Vtemp_6[2U] = 0x73657220U;
                            __Vtemp_6[3U] = 0x00000075U;
                        } else {
                            __Vtemp_6[2U] = 0x44504920U;
                            __Vtemp_6[3U] = 0U;
                        }
                        unnamedblk363__DOT__path_s 
                            = ((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2039)
                                ->__PVT__path) ? ((VlNull{} 
                                                   != VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2040)
                                                   ->__PVT__frontdoor)
                                                   ? "user frontdoor"s
                                                   : 
                                                  VL_CONCATN_NNN("map "s, 
                                                                 ([&]() {
                                            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2041)
                                                          ->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2041)
                                                                  ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__423__Vfuncout);
                                        }(), __Vtask_get_full_name__423__Vfuncout)))
                                : VL_CVT_PACK_STR_NW(4, __Vtemp_6));
                        unnamedblk363__DOT__value_s 
                            = VL_SFORMATF_N_NX("=%0x",0,
                                               64,VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2045)
                                               ->__PVT__value.at(0U)) ;
                        __Vtask_uvm_report_info__425__report_enabled_checked = 0U;
                        __Vtask_uvm_report_info__425__context_name = ""s;
                        __Vtask_uvm_report_info__425__line = 0U;
                        __Vtask_uvm_report_info__425__filename = ""s;
                        __Vtask_uvm_report_info__425__verbosity = 0x0000012cU;
                        __Vtask_uvm_report_info__425__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Read  register via "s, unnamedblk363__DOT__path_s), ": "s), 
                                                                               ([&]() {
                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__426__Vfuncout);
                                        }(), __Vfunc_get_full_name__426__Vfuncout)), unnamedblk363__DOT__value_s));
                        __Vtask_uvm_report_info__425__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__427__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__427__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__428__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__428__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__425__id, __Vtask_uvm_report_info__425__message, __Vtask_uvm_report_info__425__verbosity, __Vtask_uvm_report_info__425__filename, __Vtask_uvm_report_info__425__line, __Vtask_uvm_report_info__425__context_name, (IData)(__Vtask_uvm_report_info__425__report_enabled_checked));
                    }
                    this->__PVT__m_read_in_progress = 0U;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xcheck_accessX\n"); );
                // Locals
                IData/*31:0*/ __Vtask_get_default_door__430__Vfuncout;
                __Vtask_get_default_door__430__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__431__Vfuncout;
                CData/*0:0*/ __Vfunc_has_hdl_path__432__Vfuncout;
                __Vfunc_has_hdl_path__432__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__433__Vfuncout;
                __Vfunc_uvm_report_enabled__433__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__433__verbosity;
                __Vfunc_uvm_report_enabled__433__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__433__severity;
                __Vfunc_uvm_report_enabled__433__severity = 0;
                std::string __Vfunc_uvm_report_enabled__433__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__434__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__435__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__436__Vfuncout;
                __Vtask_uvm_report_enabled__436__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__437__id;
                std::string __Vtask_uvm_report_warning__437__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__437__verbosity;
                __Vtask_uvm_report_warning__437__verbosity = 0;
                std::string __Vtask_uvm_report_warning__437__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__437__line;
                __Vtask_uvm_report_warning__437__line = 0;
                std::string __Vtask_uvm_report_warning__437__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__437__report_enabled_checked;
                __Vtask_uvm_report_warning__437__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__438__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__439__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__440__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_default_map__442__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_backdoor__443__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__444__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__445__Vfuncout;
                __Vfunc_uvm_report_enabled__445__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__445__verbosity;
                __Vfunc_uvm_report_enabled__445__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__445__severity;
                __Vfunc_uvm_report_enabled__445__severity = 0;
                std::string __Vfunc_uvm_report_enabled__445__id;
                std::string __Vfunc_get_type_name__446__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__447__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__448__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__449__Vfuncout;
                __Vtask_uvm_report_enabled__449__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__450__id;
                std::string __Vtask_uvm_report_error__450__message;
                IData/*31:0*/ __Vtask_uvm_report_error__450__verbosity;
                __Vtask_uvm_report_error__450__verbosity = 0;
                std::string __Vtask_uvm_report_error__450__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__450__line;
                __Vtask_uvm_report_error__450__line = 0;
                std::string __Vtask_uvm_report_error__450__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__450__report_enabled_checked;
                __Vtask_uvm_report_error__450__report_enabled_checked = 0;
                std::string __Vfunc_get_type_name__451__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__452__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__453__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__455__Vfuncout;
                __Vfunc_uvm_report_enabled__455__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__455__verbosity;
                __Vfunc_uvm_report_enabled__455__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__455__severity;
                __Vfunc_uvm_report_enabled__455__severity = 0;
                std::string __Vfunc_uvm_report_enabled__455__id;
                std::string __Vfunc_get_type_name__456__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__457__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__458__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__459__Vfuncout;
                __Vtask_uvm_report_enabled__459__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__460__id;
                std::string __Vtask_uvm_report_error__460__message;
                IData/*31:0*/ __Vtask_uvm_report_error__460__verbosity;
                __Vtask_uvm_report_error__460__verbosity = 0;
                std::string __Vtask_uvm_report_error__460__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__460__line;
                __Vtask_uvm_report_error__460__line = 0;
                std::string __Vtask_uvm_report_error__460__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__460__report_enabled_checked;
                __Vtask_uvm_report_error__460__report_enabled_checked = 0;
                std::string __Vtask_get_full_name__461__Vfuncout;
                std::string __Vfunc_get_type_name__462__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__463__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__464__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_reg_map_info__466__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__467__Vfuncout;
                __Vfunc_uvm_report_enabled__467__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__467__verbosity;
                __Vfunc_uvm_report_enabled__467__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__467__severity;
                __Vfunc_uvm_report_enabled__467__severity = 0;
                std::string __Vfunc_uvm_report_enabled__467__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__468__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__469__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__470__Vfuncout;
                __Vtask_uvm_report_enabled__470__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__471__id;
                std::string __Vtask_uvm_report_error__471__message;
                IData/*31:0*/ __Vtask_uvm_report_error__471__verbosity;
                __Vtask_uvm_report_error__471__verbosity = 0;
                std::string __Vtask_uvm_report_error__471__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__471__line;
                __Vtask_uvm_report_error__471__line = 0;
                std::string __Vtask_uvm_report_error__471__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__471__report_enabled_checked;
                __Vtask_uvm_report_error__471__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__472__Vfuncout;
                std::string __Vtask_get_full_name__473__Vfuncout;
                std::string __Vtask_get_full_name__474__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__475__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__476__Vfuncout;
                // Body
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk364__DOT__bkdr_map;
                {
                    if ((3U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2062)
                         ->__PVT__path)) {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2063)
                                                        ->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__430__Vfuncout);
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2063)
                                                        ->__PVT__path 
                            = __Vtask_get_default_door__430__Vfuncout;
                    }
                    if ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2065)
                         ->__PVT__path)) {
                        if (((VlNull{} == ([&]() {
                                            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__431__Vfuncout);
                                        }(), __Vfunc_get_backdoor__431__Vfuncout)) 
                             && (1U & (~ ([&]() {
                                                this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __Vfunc_has_hdl_path__432__Vfuncout);
                                            }(), (IData)(__Vfunc_has_hdl_path__432__Vfuncout)))))) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__433__id = "RegModel"s;
                                            __Vfunc_uvm_report_enabled__433__severity = 1U;
                                            __Vfunc_uvm_report_enabled__433__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__434__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__434__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__435__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__435__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__433__verbosity, (IData)(__Vfunc_uvm_report_enabled__433__severity), __Vfunc_uvm_report_enabled__433__id, __Vtask_uvm_report_enabled__436__Vfuncout);
                                            __Vfunc_uvm_report_enabled__433__Vfuncout 
                                                = __Vtask_uvm_report_enabled__436__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__433__Vfuncout))) {
                                __Vtask_uvm_report_warning__437__report_enabled_checked = 1U;
                                __Vtask_uvm_report_warning__437__context_name = ""s;
                                __Vtask_uvm_report_warning__437__line = 0x00000815U;
                                __Vtask_uvm_report_warning__437__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_warning__437__verbosity = 0U;
                                __Vtask_uvm_report_warning__437__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN("No backdoor access available for register '"s, 
                                                                                ([&]() {
                                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__438__Vfuncout);
                                                }(), __Vfunc_get_full_name__438__Vfuncout)), "' . Using frontdoor instead."s));
                                __Vtask_uvm_report_warning__437__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__439__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__439__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__440__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__440__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__437__id, __Vtask_uvm_report_warning__437__message, __Vtask_uvm_report_warning__437__verbosity, __Vtask_uvm_report_warning__437__filename, __Vtask_uvm_report_warning__437__line, __Vtask_uvm_report_warning__437__context_name, (IData)(__Vtask_uvm_report_warning__437__report_enabled_checked));
                            }
                            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2070)
                                                        ->__PVT__path = 0U;
                        } else if ((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2072)
                                    ->__PVT__map)) {
                            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __Vfunc_get_default_map__442__Vfuncout);
                            unnamedblk364__DOT__bkdr_map 
                                = __Vfunc_get_default_map__442__Vfuncout;
                            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2075)
                                                        ->__PVT__map 
                                = ((VlNull{} != unnamedblk364__DOT__bkdr_map)
                                    ? unnamedblk364__DOT__bkdr_map
                                    : ([&]() {
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __Vfunc_backdoor__443__Vfuncout);
                                    }(), __Vfunc_backdoor__443__Vfuncout));
                        }
                    }
                    if ((1U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2083)
                         ->__PVT__path)) {
                        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2085)
                                                        ->__PVT__map, __Vfunc_get_local_map__444__Vfuncout);
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2085)
                                                        ->__PVT__local_map 
                            = __Vfunc_get_local_map__444__Vfuncout;
                        if ((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2087)
                             ->__PVT__local_map)) {
                            if ((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2088)
                                 ->__PVT__map)) {
                                if ((0U != ([&]() {
                                                __Vfunc_uvm_report_enabled__445__id 
                                                    = 
                                                    VL_CVT_PACK_STR_NN(
                                                                       ([&]() {
                                                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__446__Vfuncout);
                                                        }(), __Vfunc_get_type_name__446__Vfuncout));
                                                __Vfunc_uvm_report_enabled__445__severity = 2U;
                                                __Vfunc_uvm_report_enabled__445__verbosity = 0U;
                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__447__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                    = __Vfunc_get__447__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__448__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                    = __Vtask_get_root__448__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__445__verbosity, (IData)(__Vfunc_uvm_report_enabled__445__severity), __Vfunc_uvm_report_enabled__445__id, __Vtask_uvm_report_enabled__449__Vfuncout);
                                                __Vfunc_uvm_report_enabled__445__Vfuncout 
                                                    = __Vtask_uvm_report_enabled__449__Vfuncout;
                                            }(), __Vfunc_uvm_report_enabled__445__Vfuncout))) {
                                    __Vtask_uvm_report_error__450__report_enabled_checked = 1U;
                                    __Vtask_uvm_report_error__450__context_name = ""s;
                                    __Vtask_uvm_report_error__450__line = 0x00000829U;
                                    __Vtask_uvm_report_error__450__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                    __Vtask_uvm_report_error__450__verbosity = 0U;
                                    __Vtask_uvm_report_error__450__message = "Unable to physically access register with null map"s;
                                    __Vtask_uvm_report_error__450__id 
                                        = VL_CVT_PACK_STR_NN(
                                                             ([&]() {
                                                this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__451__Vfuncout);
                                            }(), __Vfunc_get_type_name__451__Vfuncout));
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__452__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                        = __Vfunc_get__452__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__453__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                        = __Vtask_get_root__453__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__450__id, __Vtask_uvm_report_error__450__message, __Vtask_uvm_report_error__450__verbosity, __Vtask_uvm_report_error__450__filename, __Vtask_uvm_report_error__450__line, __Vtask_uvm_report_error__450__context_name, (IData)(__Vtask_uvm_report_error__450__report_enabled_checked));
                                }
                            } else if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__455__id 
                                                = VL_CVT_PACK_STR_NN(
                                                                     ([&]() {
                                                        this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__456__Vfuncout);
                                                    }(), __Vfunc_get_type_name__456__Vfuncout));
                                            __Vfunc_uvm_report_enabled__455__severity = 2U;
                                            __Vfunc_uvm_report_enabled__455__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__457__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__457__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                               ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__458__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__458__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                               ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__455__verbosity, (IData)(__Vfunc_uvm_report_enabled__455__severity), __Vfunc_uvm_report_enabled__455__id, __Vtask_uvm_report_enabled__459__Vfuncout);
                                            __Vfunc_uvm_report_enabled__455__Vfuncout 
                                                = __Vtask_uvm_report_enabled__459__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__455__Vfuncout))) {
                                __Vtask_uvm_report_error__460__report_enabled_checked = 1U;
                                __Vtask_uvm_report_error__460__context_name = ""s;
                                __Vtask_uvm_report_error__460__line = 0x0000082dU;
                                __Vtask_uvm_report_error__460__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__460__verbosity = 0U;
                                __Vtask_uvm_report_error__460__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN("No transactor available to physically access register on map '"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2093)
                                                                  ->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2093)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__461__Vfuncout);
                                                }(), __Vtask_get_full_name__461__Vfuncout)), "'"s));
                                __Vtask_uvm_report_error__460__id 
                                    = VL_CVT_PACK_STR_NN(
                                                         ([&]() {
                                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__462__Vfuncout);
                                        }(), __Vfunc_get_type_name__462__Vfuncout));
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__463__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__463__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__464__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__464__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__460__id, __Vtask_uvm_report_error__460__message, __Vtask_uvm_report_error__460__verbosity, __Vtask_uvm_report_error__460__filename, __Vtask_uvm_report_error__460__line, __Vtask_uvm_report_error__460__context_name, (IData)(__Vtask_uvm_report_error__460__report_enabled_checked));
                            }
                            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2094)
                                                        ->__PVT__status = 1U;
                            Xcheck_accessX__Vfuncrtn = 0U;
                            goto __Vlabel0;
                        }
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2098)
                                      ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2098)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this}, 1U, __Vtask_get_reg_map_info__466__Vfuncout);
                        map_info = __Vtask_get_reg_map_info__466__Vfuncout;
                        if (((VlNull{} == VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2100)
                              ->__PVT__frontdoor) && VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2100)
                             ->__PVT__unmapped)) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__467__id = "RegModel"s;
                                            __Vfunc_uvm_report_enabled__467__severity = 2U;
                                            __Vfunc_uvm_report_enabled__467__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__468__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__468__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__469__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__469__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__467__verbosity, (IData)(__Vfunc_uvm_report_enabled__467__severity), __Vfunc_uvm_report_enabled__467__id, __Vtask_uvm_report_enabled__470__Vfuncout);
                                            __Vfunc_uvm_report_enabled__467__Vfuncout 
                                                = __Vtask_uvm_report_enabled__470__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__467__Vfuncout))) {
                                __Vtask_uvm_report_error__471__report_enabled_checked = 1U;
                                __Vtask_uvm_report_error__471__context_name = ""s;
                                __Vtask_uvm_report_error__471__line = 0x00000838U;
                                __Vtask_uvm_report_error__471__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__471__verbosity = 0U;
                                __Vtask_uvm_report_error__471__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__472__Vfuncout);
                                                        }(), __Vfunc_get_full_name__472__Vfuncout)), "' unmapped in map '"s), 
                                                                                ((VlNull{} 
                                                                                == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2104)
                                                                                ->__PVT__map)
                                                                                 ? 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2104)
                                                                      ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2104)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__473__Vfuncout);
                                                    }(), __Vtask_get_full_name__473__Vfuncout)
                                                                                 : 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2104)
                                                                      ->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2104)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__474__Vfuncout);
                                                    }(), __Vtask_get_full_name__474__Vfuncout))), "' and does not have a user-defined frontdoor"s));
                                __Vtask_uvm_report_error__471__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__475__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__475__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__476__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__476__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__471__id, __Vtask_uvm_report_error__471__message, __Vtask_uvm_report_error__471__verbosity, __Vtask_uvm_report_error__471__filename, __Vtask_uvm_report_error__471__line, __Vtask_uvm_report_error__471__context_name, (IData)(__Vtask_uvm_report_error__471__report_enabled_checked));
                            }
                            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2105)
                                                        ->__PVT__status = 1U;
                            Xcheck_accessX__Vfuncrtn = 0U;
                            goto __Vlabel0;
                        }
                        if ((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2109)
                             ->__PVT__map)) {
                            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2110)
                                                        ->__PVT__map 
                                = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2110)
                                ->__PVT__local_map;
                        }
                    }
                    Xcheck_accessX__Vfuncrtn = 1U;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_busy(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_busy__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_busy\n"); );
                // Body
                is_busy__Vfuncrtn = this->__PVT__m_is_busy;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xset_busyX(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ busy) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xset_busyX\n"); );
                // Body
                this->__PVT__m_is_busy = busy;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xis_locked_by_fieldX(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &Xis_locked_by_fieldX__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xis_locked_by_fieldX\n"); );
                // Body
                Xis_locked_by_fieldX__Vfuncrtn = this->__PVT__m_is_locked_by_field;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_write\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__479__Vfuncout;
                __Vfunc_uvm_report_enabled__479__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__479__verbosity;
                __Vfunc_uvm_report_enabled__479__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__479__severity;
                __Vfunc_uvm_report_enabled__479__severity = 0;
                std::string __Vfunc_uvm_report_enabled__479__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__480__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__481__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__482__Vfuncout;
                __Vtask_uvm_report_enabled__482__Vfuncout = 0;
                std::string __Vtask_uvm_report_info__483__id;
                std::string __Vtask_uvm_report_info__483__message;
                IData/*31:0*/ __Vtask_uvm_report_info__483__verbosity;
                __Vtask_uvm_report_info__483__verbosity = 0;
                std::string __Vtask_uvm_report_info__483__filename;
                IData/*31:0*/ __Vtask_uvm_report_info__483__line;
                __Vtask_uvm_report_info__483__line = 0;
                std::string __Vtask_uvm_report_info__483__context_name;
                CData/*0:0*/ __Vtask_uvm_report_info__483__report_enabled_checked;
                __Vtask_uvm_report_info__483__report_enabled_checked = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__484__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__485__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_hdl_deposit__487__Vfuncout;
                __Vfunc_uvm_hdl_deposit__487__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_hdl_deposit__489__Vfuncout;
                __Vfunc_uvm_hdl_deposit__489__Vfuncout = 0;
                std::string __Vtemp_1;
                // Body
                IData/*31:0*/ unnamedblk365__DOT__i;
                unnamedblk365__DOT__i = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat;
                IData/*31:0*/ unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j;
                unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j = 0;
                QData/*63:0*/ unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__unnamedblk368__DOT__slice;
                unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__unnamedblk368__DOT__slice = 0;
                VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
                CData/*0:0*/ ok;
                ok = 0;
                ok = 1U;
                this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                                    VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2142)
                                                                       ->__PVT__bd_kind), "."s);
                unnamedblk365__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk365__DOT__i, paths.size())) {
                    unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat 
                        = paths.at(unnamedblk365__DOT__i);
                    unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j, VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2145)
                                      ->__PVT__slices.size())) {
                        {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__479__id = "RegMem"s;
                                            __Vfunc_uvm_report_enabled__479__severity = 0U;
                                            __Vfunc_uvm_report_enabled__479__verbosity = 0x000001f4U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__480__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__480__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__481__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__481__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__479__verbosity, (IData)(__Vfunc_uvm_report_enabled__479__severity), __Vfunc_uvm_report_enabled__479__id, __Vtask_uvm_report_enabled__482__Vfuncout);
                                            __Vfunc_uvm_report_enabled__479__Vfuncout 
                                                = __Vtask_uvm_report_enabled__482__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__479__Vfuncout))) {
                                __Vtask_uvm_report_info__483__report_enabled_checked = 1U;
                                __Vtask_uvm_report_info__483__context_name = ""s;
                                __Vtask_uvm_report_info__483__line = 0x00000863U;
                                __Vtask_uvm_report_info__483__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_info__483__verbosity = 0x000001f4U;
                                __Vtemp_1 = VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2147)
                                    ->__PVT__slices.at(unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j)
                                    .__PVT__path;
                                __Vtask_uvm_report_info__483__message 
                                    = VL_SFORMATF_N_NX("backdoor_write to %@",0,
                                                       -1,
                                                       &(__Vtemp_1)) ;
                                __Vtask_uvm_report_info__483__id = "RegMem"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__484__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                    = __Vfunc_get__484__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__485__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                    = __Vtask_get_root__485__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__483__id, __Vtask_uvm_report_info__483__message, __Vtask_uvm_report_info__483__verbosity, __Vtask_uvm_report_info__483__filename, __Vtask_uvm_report_info__483__line, __Vtask_uvm_report_info__483__context_name, (IData)(__Vtask_uvm_report_info__483__report_enabled_checked));
                            }
                            if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2149)
                                           ->__PVT__slices.at(unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j)
                                           .__PVT__offset)) {
                                ok = ((IData)(ok) & 
                                      ([&]() {
                                            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                            __Vfunc_uvm_hdl_deposit__487__Vfuncout = 0U;
                                        }(), __Vfunc_uvm_hdl_deposit__487__Vfuncout));
                                goto __Vlabel0;
                            }
                            unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__unnamedblk368__DOT__slice 
                                = VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2155)
                                                ->__PVT__value.at(0U), VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2155)
                                                ->__PVT__slices.at(unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j)
                                                .__PVT__offset);
                            unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__unnamedblk368__DOT__slice 
                                = (unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__unnamedblk368__DOT__slice 
                                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2156)
                                                    ->__PVT__slices.at(unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j)
                                                    .__PVT__size) 
                                      - 1ULL));
                            ok = ((IData)(ok) & ([&]() {
                                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                        __Vfunc_uvm_hdl_deposit__489__Vfuncout = 0U;
                                    }(), __Vfunc_uvm_hdl_deposit__489__Vfuncout));
                            __Vlabel0: ;
                        }
                        unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j 
                            = ((IData)(1U) + unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j);
                    }
                    unnamedblk365__DOT__i = ((IData)(1U) 
                                             + unnamedblk365__DOT__i);
                }
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2161)
                                                        ->__PVT__status 
                    = ((IData)(ok) ? 0U : 1U);
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_backdoor_read_func__491__Vfuncout;
                __Vfunc_backdoor_read_func__491__Vfuncout = 0;
                // Body
                this->__VnoInFunc_backdoor_read_func(vlProcess, vlSymsp, rw, __Vfunc_backdoor_read_func__491__Vfuncout);
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2168)
                                                        ->__PVT__status 
                    = __Vfunc_backdoor_read_func__491__Vfuncout;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read_func\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__493__Vfuncout;
                __Vfunc_uvm_report_enabled__493__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__493__verbosity;
                __Vfunc_uvm_report_enabled__493__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__493__severity;
                __Vfunc_uvm_report_enabled__493__severity = 0;
                std::string __Vfunc_uvm_report_enabled__493__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__494__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__495__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__496__Vfuncout;
                __Vtask_uvm_report_enabled__496__Vfuncout = 0;
                std::string __Vtask_uvm_report_info__497__id;
                std::string __Vtask_uvm_report_info__497__message;
                IData/*31:0*/ __Vtask_uvm_report_info__497__verbosity;
                __Vtask_uvm_report_info__497__verbosity = 0;
                std::string __Vtask_uvm_report_info__497__filename;
                IData/*31:0*/ __Vtask_uvm_report_info__497__line;
                __Vtask_uvm_report_info__497__line = 0;
                std::string __Vtask_uvm_report_info__497__context_name;
                CData/*0:0*/ __Vtask_uvm_report_info__497__report_enabled_checked;
                __Vtask_uvm_report_info__497__report_enabled_checked = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__498__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__499__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_hdl_read__501__Vfuncout;
                __Vfunc_uvm_hdl_read__501__Vfuncout = 0;
                VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__501__value;
                VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__501__value);
                IData/*31:0*/ __Vfunc_uvm_hdl_read__503__Vfuncout;
                __Vfunc_uvm_hdl_read__503__Vfuncout = 0;
                VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__503__value;
                VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__503__value);
                IData/*31:0*/ __Vfunc_uvm_report_enabled__505__Vfuncout;
                __Vfunc_uvm_report_enabled__505__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__505__verbosity;
                __Vfunc_uvm_report_enabled__505__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__505__severity;
                __Vfunc_uvm_report_enabled__505__severity = 0;
                std::string __Vfunc_uvm_report_enabled__505__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__506__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__507__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__508__Vfuncout;
                __Vtask_uvm_report_enabled__508__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__509__id;
                std::string __Vtask_uvm_report_error__509__message;
                IData/*31:0*/ __Vtask_uvm_report_error__509__verbosity;
                __Vtask_uvm_report_error__509__verbosity = 0;
                std::string __Vtask_uvm_report_error__509__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__509__line;
                __Vtask_uvm_report_error__509__line = 0;
                std::string __Vtask_uvm_report_error__509__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__509__report_enabled_checked;
                __Vtask_uvm_report_error__509__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__510__Vfuncout;
                std::string __Vfunc_uvm_hdl_concat2string__511__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__511__concat;
                IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__i;
                __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__i = 0;
                Vclass_hierarchy_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__unnamedblk267__DOT__slice;
                __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__offset = 0;
                __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__size = 0;
                std::string __Vfunc_uvm_hdl_concat2string__511__image;
                std::string __Vfunc_uvm_hdl_concat2string__512__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__512__concat;
                IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__i;
                __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__i = 0;
                Vclass_hierarchy_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__unnamedblk267__DOT__slice;
                __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__offset = 0;
                __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__size = 0;
                std::string __Vfunc_uvm_hdl_concat2string__512__image;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__513__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__514__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__516__Vfuncout;
                __Vfunc_uvm_report_enabled__516__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__516__verbosity;
                __Vfunc_uvm_report_enabled__516__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__516__severity;
                __Vfunc_uvm_report_enabled__516__severity = 0;
                std::string __Vfunc_uvm_report_enabled__516__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__517__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__518__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__519__Vfuncout;
                __Vtask_uvm_report_enabled__519__Vfuncout = 0;
                std::string __Vtask_uvm_report_info__520__id;
                std::string __Vtask_uvm_report_info__520__message;
                IData/*31:0*/ __Vtask_uvm_report_info__520__verbosity;
                __Vtask_uvm_report_info__520__verbosity = 0;
                std::string __Vtask_uvm_report_info__520__filename;
                IData/*31:0*/ __Vtask_uvm_report_info__520__line;
                __Vtask_uvm_report_info__520__line = 0;
                std::string __Vtask_uvm_report_info__520__context_name;
                CData/*0:0*/ __Vtask_uvm_report_info__520__report_enabled_checked;
                __Vtask_uvm_report_info__520__report_enabled_checked = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__521__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__522__Vfuncout;
                std::string __Vtemp_1;
                std::string __Vtemp_2;
                std::string __Vtemp_3;
                std::string __Vtemp_4;
                // Body
                IData/*31:0*/ unnamedblk369__DOT__i;
                unnamedblk369__DOT__i = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat;
                IData/*31:0*/ unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j;
                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j = 0;
                QData/*63:0*/ unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice;
                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice = 0;
                IData/*31:0*/ unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__k;
                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__k = 0;
                IData/*31:0*/ unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__unnamedblk1_1__DOT____Vrepeat0;
                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
                IData/*31:0*/ __Vincrement1;
                __Vincrement1 = 0;
                VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
                QData/*63:0*/ val;
                val = 0;
                CData/*0:0*/ ok;
                ok = 0;
                {
                    ok = 1U;
                    this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2178)
                                                                           ->__PVT__bd_kind), "."s);
                    unnamedblk369__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk369__DOT__i, paths.size())) {
                        unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat 
                            = paths.at(unnamedblk369__DOT__i);
                        val = 0ULL;
                        unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j = 0U;
                        while (VL_LTS_III(32, unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j, VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2182)
                                          ->__PVT__slices.size())) {
                            {
                                if ((0U != ([&]() {
                                                __Vfunc_uvm_report_enabled__493__id = "RegMem"s;
                                                __Vfunc_uvm_report_enabled__493__severity = 0U;
                                                __Vfunc_uvm_report_enabled__493__verbosity = 0x000001f4U;
                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__494__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                    = __Vfunc_get__494__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__495__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                    = __Vtask_get_root__495__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__493__verbosity, (IData)(__Vfunc_uvm_report_enabled__493__severity), __Vfunc_uvm_report_enabled__493__id, __Vtask_uvm_report_enabled__496__Vfuncout);
                                                __Vfunc_uvm_report_enabled__493__Vfuncout 
                                                    = __Vtask_uvm_report_enabled__496__Vfuncout;
                                            }(), __Vfunc_uvm_report_enabled__493__Vfuncout))) {
                                    __Vtask_uvm_report_info__497__report_enabled_checked = 1U;
                                    __Vtask_uvm_report_info__497__context_name = ""s;
                                    __Vtask_uvm_report_info__497__line = 0x00000888U;
                                    __Vtask_uvm_report_info__497__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                    __Vtask_uvm_report_info__497__verbosity = 0x000001f4U;
                                    __Vtemp_1 = VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2184)
                                        ->__PVT__slices.at(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j)
                                        .__PVT__path;
                                    __Vtask_uvm_report_info__497__message 
                                        = VL_SFORMATF_N_NX("backdoor_read from %@ ",0,
                                                           -1,
                                                           &(__Vtemp_1)) ;
                                    __Vtask_uvm_report_info__497__id = "RegMem"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__498__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                        = __Vfunc_get__498__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__499__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                        = __Vtask_get_root__499__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__497__id, __Vtask_uvm_report_info__497__message, __Vtask_uvm_report_info__497__verbosity, __Vtask_uvm_report_info__497__filename, __Vtask_uvm_report_info__497__line, __Vtask_uvm_report_info__497__context_name, (IData)(__Vtask_uvm_report_info__497__report_enabled_checked));
                                }
                                if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2186)
                                               ->__PVT__slices.at(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j)
                                               .__PVT__offset)) {
                                    ok = ((IData)(ok) 
                                          & ([&]() {
                                                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                                __Vfunc_uvm_hdl_read__501__Vfuncout = 0U;
                                                val 
                                                    = 
                                                    (((QData)((IData)(
                                                                      __Vfunc_uvm_hdl_read__501__value[1U])) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(
                                                                       __Vfunc_uvm_hdl_read__501__value[0U])));
                                            }(), __Vfunc_uvm_hdl_read__501__Vfuncout));
                                    goto __Vlabel1;
                                }
                                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__k 
                                    = VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2192)
                                    ->__PVT__slices.at(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j)
                                    .__PVT__offset;
                                ok = ((IData)(ok) & 
                                      ([&]() {
                                            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                            __Vfunc_uvm_hdl_read__503__Vfuncout = 0U;
                                            unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice 
                                                = (
                                                   ((QData)((IData)(
                                                                    __Vfunc_uvm_hdl_read__503__value[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     __Vfunc_uvm_hdl_read__503__value[0U])));
                                        }(), __Vfunc_uvm_hdl_read__503__Vfuncout));
                                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                    = VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2196)
                                    ->__PVT__slices.at(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j)
                                    .__PVT__size;
                                while (VL_LTS_III(32, 0U, unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                                    __Vincrement1 = unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__k;
                                    unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__k 
                                        = ((IData)(1U) 
                                           + unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__k);
                                    val = (((~ (1ULL 
                                                << 
                                                (0x0000003fU 
                                                 & __Vincrement1))) 
                                            & val) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice)))) 
                                              << (0x0000003fU 
                                                  & __Vincrement1)));
                                    unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice 
                                        = VL_SHIFTR_QQI(64,64,32, unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice, 1U);
                                    unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                        = (unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                           - (IData)(1U));
                                }
                                __Vlabel1: ;
                            }
                            unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j 
                                = ((IData)(1U) + unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j);
                        }
                        val = (val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                                      - 1ULL));
                        if ((0U == unnamedblk369__DOT__i)) {
                            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2206)
                                                        ->__PVT__value.atWrite(0U) 
                                = val;
                        }
                        if ((val != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2208)
                             ->__PVT__value.at(0U))) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__505__id = "RegModel"s;
                                            __Vfunc_uvm_report_enabled__505__severity = 2U;
                                            __Vfunc_uvm_report_enabled__505__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__506__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__506__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__507__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__507__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__505__verbosity, (IData)(__Vfunc_uvm_report_enabled__505__severity), __Vfunc_uvm_report_enabled__505__id, __Vtask_uvm_report_enabled__508__Vfuncout);
                                            __Vfunc_uvm_report_enabled__505__Vfuncout 
                                                = __Vtask_uvm_report_enabled__508__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__505__Vfuncout))) {
                                __Vtask_uvm_report_error__509__report_enabled_checked = 1U;
                                __Vtask_uvm_report_error__509__context_name = ""s;
                                __Vtask_uvm_report_error__509__line = 0x000008a4U;
                                __Vtask_uvm_report_error__509__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__509__verbosity = 0U;
                                __Vtemp_2 = ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__510__Vfuncout);
                                    }(), __Vfunc_get_full_name__510__Vfuncout);
                                __Vtemp_3 = ([&]() {
                                        __Vfunc_uvm_hdl_concat2string__511__concat 
                                            = paths.at(0U);
                                        __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__i = 0;
                                        __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__path.clear();
                                        __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__offset = 0;
                                        __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__size = 0;
                                        __Vfunc_uvm_hdl_concat2string__511__image.clear();
                                        {
                                            __Vfunc_uvm_hdl_concat2string__511__image = "{"s;
                                            if ((((1U 
                                                   == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__511__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 399)
                                                   ->__PVT__slices.size()) 
                                                  && (0xffffffffU 
                                                      == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__511__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 400)
                                                      ->__PVT__slices.at(0U)
                                                      .__PVT__offset)) 
                                                 && (0xffffffffU 
                                                     == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__511__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 401)
                                                     ->__PVT__slices.at(0U)
                                                     .__PVT__size))) {
                                                __Vfunc_uvm_hdl_concat2string__511__Vfuncout 
                                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__511__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 402)
                                                    ->__PVT__slices.at(0U)
                                                    .__PVT__path;
                                                goto __Vlabel2;
                                            }
                                            __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__i = 0U;
                                            while (
                                                   VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__511__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 404)
                                                              ->__PVT__slices.size())) {
                                                __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__unnamedblk267__DOT__slice 
                                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__511__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 405)
                                                    ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__i);
                                                __Vfunc_uvm_hdl_concat2string__511__image 
                                                    = 
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__511__image, 
                                                                                VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                   .__PVT__path);
                                                if (
                                                    VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                .__PVT__offset)) {
                                                    __Vfunc_uvm_hdl_concat2string__511__image 
                                                        = 
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__511__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",0,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__offset,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__size) );
                                                }
                                                __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__i 
                                                    = 
                                                    ((IData)(1U) 
                                                     + __Vfunc_uvm_hdl_concat2string__511__unnamedblk266__DOT__i);
                                            }
                                            __Vfunc_uvm_hdl_concat2string__511__image 
                                                = VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__511__image, "}"s);
                                            __Vfunc_uvm_hdl_concat2string__511__Vfuncout 
                                                = __Vfunc_uvm_hdl_concat2string__511__image;
                                            __Vlabel2: ;
                                        }
                                    }(), __Vfunc_uvm_hdl_concat2string__511__Vfuncout);
                                __Vtemp_4 = ([&]() {
                                        __Vfunc_uvm_hdl_concat2string__512__concat 
                                            = paths.at(unnamedblk369__DOT__i);
                                        __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__i = 0;
                                        __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__path.clear();
                                        __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__offset = 0;
                                        __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__size = 0;
                                        __Vfunc_uvm_hdl_concat2string__512__image.clear();
                                        {
                                            __Vfunc_uvm_hdl_concat2string__512__image = "{"s;
                                            if ((((1U 
                                                   == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__512__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 399)
                                                   ->__PVT__slices.size()) 
                                                  && (0xffffffffU 
                                                      == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__512__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 400)
                                                      ->__PVT__slices.at(0U)
                                                      .__PVT__offset)) 
                                                 && (0xffffffffU 
                                                     == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__512__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 401)
                                                     ->__PVT__slices.at(0U)
                                                     .__PVT__size))) {
                                                __Vfunc_uvm_hdl_concat2string__512__Vfuncout 
                                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__512__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 402)
                                                    ->__PVT__slices.at(0U)
                                                    .__PVT__path;
                                                goto __Vlabel3;
                                            }
                                            __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__i = 0U;
                                            while (
                                                   VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__512__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 404)
                                                              ->__PVT__slices.size())) {
                                                __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__unnamedblk267__DOT__slice 
                                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__512__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 405)
                                                    ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__i);
                                                __Vfunc_uvm_hdl_concat2string__512__image 
                                                    = 
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__512__image, 
                                                                                VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                   .__PVT__path);
                                                if (
                                                    VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                .__PVT__offset)) {
                                                    __Vfunc_uvm_hdl_concat2string__512__image 
                                                        = 
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__512__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",0,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__offset,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__size) );
                                                }
                                                __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__i 
                                                    = 
                                                    ((IData)(1U) 
                                                     + __Vfunc_uvm_hdl_concat2string__512__unnamedblk266__DOT__i);
                                            }
                                            __Vfunc_uvm_hdl_concat2string__512__image 
                                                = VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__512__image, "}"s);
                                            __Vfunc_uvm_hdl_concat2string__512__Vfuncout 
                                                = __Vfunc_uvm_hdl_concat2string__512__image;
                                            __Vlabel3: ;
                                        }
                                    }(), __Vfunc_uvm_hdl_concat2string__512__Vfuncout);
                                __Vtask_uvm_report_error__509__message 
                                    = VL_SFORMATF_N_NX("Backdoor read of register %@ with multiple HDL copies: values are not the same: %0x at path '%@', and %0x at path '%@'. Returning first value.",0,
                                                       -1,
                                                       &(__Vtemp_2),
                                                       64,
                                                       VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2212)
                                                       ->__PVT__value.at(0U),
                                                       -1,
                                                       &(__Vtemp_3),
                                                       64,
                                                       val,
                                                       -1,
                                                       &(__Vtemp_4)) ;
                                __Vtask_uvm_report_error__509__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__513__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__513__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__514__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__514__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__509__id, __Vtask_uvm_report_error__509__message, __Vtask_uvm_report_error__509__verbosity, __Vtask_uvm_report_error__509__filename, __Vtask_uvm_report_error__509__line, __Vtask_uvm_report_error__509__context_name, (IData)(__Vtask_uvm_report_error__509__report_enabled_checked));
                            }
                            backdoor_read_func__Vfuncrtn = 1U;
                            goto __Vlabel0;
                        }
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__516__id = "RegMem"s;
                                        __Vfunc_uvm_report_enabled__516__severity = 0U;
                                        __Vfunc_uvm_report_enabled__516__verbosity = 0x000001f4U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__517__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__517__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__518__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__518__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__516__verbosity, (IData)(__Vfunc_uvm_report_enabled__516__severity), __Vfunc_uvm_report_enabled__516__id, __Vtask_uvm_report_enabled__519__Vfuncout);
                                        __Vfunc_uvm_report_enabled__516__Vfuncout 
                                            = __Vtask_uvm_report_enabled__519__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__516__Vfuncout))) {
                            __Vtask_uvm_report_info__520__report_enabled_checked = 1U;
                            __Vtask_uvm_report_info__520__context_name = ""s;
                            __Vtask_uvm_report_info__520__line = 0x000008a8U;
                            __Vtask_uvm_report_info__520__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_info__520__verbosity = 0x000001f4U;
                            __Vtask_uvm_report_info__520__message 
                                = VL_SFORMATF_N_NX("returned backdoor value 0x%0x",0,
                                                   64,
                                                   VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2216)
                                                   ->__PVT__value.at(0U)) ;
                            __Vtask_uvm_report_info__520__id = "RegMem"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__521__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__521__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__522__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__522__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__520__id, __Vtask_uvm_report_info__520__message, __Vtask_uvm_report_info__520__verbosity, __Vtask_uvm_report_info__520__filename, __Vtask_uvm_report_info__520__line, __Vtask_uvm_report_info__520__context_name, (IData)(__Vtask_uvm_report_info__520__report_enabled_checked));
                        }
                        unnamedblk369__DOT__i = ((IData)(1U) 
                                                 + unnamedblk369__DOT__i);
                    }
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2220)
                                                        ->__PVT__status 
                        = ((IData)(ok) ? 0U : 1U);
                    backdoor_read_func__Vfuncrtn = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2221)
                        ->__PVT__status;
                    __Vlabel0: ;
                }
            }

            VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_poke(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_poke\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__524__Vfuncout;
                CData/*0:0*/ __Vfunc_has_hdl_path__525__Vfuncout;
                __Vfunc_has_hdl_path__525__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__526__Vfuncout;
                __Vfunc_uvm_report_enabled__526__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__526__verbosity;
                __Vfunc_uvm_report_enabled__526__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__526__severity;
                __Vfunc_uvm_report_enabled__526__severity = 0;
                std::string __Vfunc_uvm_report_enabled__526__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__527__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__528__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__529__Vfuncout;
                __Vtask_uvm_report_enabled__529__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__530__id;
                std::string __Vtask_uvm_report_error__530__message;
                IData/*31:0*/ __Vtask_uvm_report_error__530__verbosity;
                __Vtask_uvm_report_error__530__verbosity = 0;
                std::string __Vtask_uvm_report_error__530__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__530__line;
                __Vtask_uvm_report_error__530__line = 0;
                std::string __Vtask_uvm_report_error__530__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__530__report_enabled_checked;
                __Vtask_uvm_report_error__530__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__531__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__532__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__533__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__536__Vfuncout;
                std::string __Vfunc_get_full_name__537__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__540__Vfuncout;
                __Vfunc_uvm_report_enabled__540__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__540__verbosity;
                __Vfunc_uvm_report_enabled__540__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__540__severity;
                __Vfunc_uvm_report_enabled__540__severity = 0;
                std::string __Vfunc_uvm_report_enabled__540__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__541__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__542__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__543__Vfuncout;
                __Vtask_uvm_report_enabled__543__Vfuncout = 0;
                std::string __Vtask_uvm_report_info__544__id;
                std::string __Vtask_uvm_report_info__544__message;
                IData/*31:0*/ __Vtask_uvm_report_info__544__verbosity;
                __Vtask_uvm_report_info__544__verbosity = 0;
                std::string __Vtask_uvm_report_info__544__filename;
                IData/*31:0*/ __Vtask_uvm_report_info__544__line;
                __Vtask_uvm_report_info__544__line = 0;
                std::string __Vtask_uvm_report_info__544__context_name;
                CData/*0:0*/ __Vtask_uvm_report_info__544__report_enabled_checked;
                __Vtask_uvm_report_info__544__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__545__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__546__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__547__Vfuncout;
                std::string __Vtemp_1;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VL_KEEP_THIS;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw;
                {
                    this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__524__Vfuncout);
                    bkdr = __Vfunc_get_backdoor__524__Vfuncout;
                    this->__PVT__m_fname = fname;
                    this->__PVT__m_lineno = lineno;
                    if (((VlNull{} == bkdr) && (1U 
                                                & (~ 
                                                   ([&]() {
                                            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__525__Vfuncout);
                                        }(), (IData)(__Vfunc_has_hdl_path__525__Vfuncout)))))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__526__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__526__severity = 2U;
                                        __Vfunc_uvm_report_enabled__526__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__527__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__527__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__528__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__528__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__526__verbosity, (IData)(__Vfunc_uvm_report_enabled__526__severity), __Vfunc_uvm_report_enabled__526__id, __Vtask_uvm_report_enabled__529__Vfuncout);
                                        __Vfunc_uvm_report_enabled__526__Vfuncout 
                                            = __Vtask_uvm_report_enabled__529__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__526__Vfuncout))) {
                            __Vtask_uvm_report_error__530__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__530__context_name = ""s;
                            __Vtask_uvm_report_error__530__line = 0x000008c4U;
                            __Vtask_uvm_report_error__530__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__530__verbosity = 0U;
                            __Vtask_uvm_report_error__530__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("No backdoor access available to poke register '"s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__531__Vfuncout);
                                            }(), __Vfunc_get_full_name__531__Vfuncout)), "'"s));
                            __Vtask_uvm_report_error__530__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__532__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__532__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__533__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__533__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__530__id, __Vtask_uvm_report_error__530__message, __Vtask_uvm_report_error__530__verbosity, __Vtask_uvm_report_error__530__filename, __Vtask_uvm_report_error__530__line, __Vtask_uvm_report_error__530__context_name, (IData)(__Vtask_uvm_report_error__530__report_enabled_checked));
                        }
                        status = 1U;
                        goto __Vlabel0;
                    }
                    if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                    }
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi109__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_poke_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__537__Vfuncout);
                                }(), __Vfunc_get_full_name__537__Vfuncout)), __Vfunc_create__536__Vfuncout);
                    rw = __Vfunc_create__536__Vfuncout;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2254)
                                                        ->__PVT__element 
                        = VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2255)
                                                        ->__PVT__path = 1U;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2256)
                                                        ->__PVT__element_kind = 0U;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2257)
                                                        ->__PVT__kind = 1U;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2258)
                                                        ->__PVT__bd_kind 
                        = kind;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2259)
                                                        ->__PVT__value.atWrite(0U) 
                        = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                                    - 1ULL));
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2260)
                                                        ->__PVT__parent 
                        = parent;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2261)
                                                        ->__PVT__extension 
                        = extension;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2262)
                                                        ->__PVT__fname 
                        = fname;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2263)
                                                        ->__PVT__lineno 
                        = lineno;
                    if ((VlNull{} != bkdr)) {
                        VL_NULL_CHECK(bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2266)
                                                        ->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                    } else {
                        this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                    }
                    status = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2270)
                        ->__PVT__status;
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__540__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__540__severity = 0U;
                                    __Vfunc_uvm_report_enabled__540__verbosity = 0x0000012cU;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__541__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__541__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__542__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__542__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__540__verbosity, (IData)(__Vfunc_uvm_report_enabled__540__severity), __Vfunc_uvm_report_enabled__540__id, __Vtask_uvm_report_enabled__543__Vfuncout);
                                    __Vfunc_uvm_report_enabled__540__Vfuncout 
                                        = __Vtask_uvm_report_enabled__543__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__540__Vfuncout))) {
                        __Vtask_uvm_report_info__544__report_enabled_checked = 1U;
                        __Vtask_uvm_report_info__544__context_name = ""s;
                        __Vtask_uvm_report_info__544__line = 0x000008e1U;
                        __Vtask_uvm_report_info__544__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_info__544__verbosity = 0x0000012cU;
                        __Vtemp_1 = ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__545__Vfuncout);
                            }(), __Vfunc_get_full_name__545__Vfuncout);
                        __Vtask_uvm_report_info__544__message 
                            = VL_SFORMATF_N_NX("Poked register \"%@\": 'h%x",0,
                                               -1,&(__Vtemp_1),
                                               64,value) ;
                        __Vtask_uvm_report_info__544__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__546__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__546__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__547__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__547__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__544__id, __Vtask_uvm_report_info__544__message, __Vtask_uvm_report_info__544__verbosity, __Vtask_uvm_report_info__544__filename, __Vtask_uvm_report_info__544__line, __Vtask_uvm_report_info__544__context_name, (IData)(__Vtask_uvm_report_info__544__report_enabled_checked));
                    }
                    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
                    if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                    }
                    __Vlabel0: ;
                }
            }

            VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_peek\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__551__Vfuncout;
                CData/*0:0*/ __Vfunc_has_hdl_path__552__Vfuncout;
                __Vfunc_has_hdl_path__552__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__553__Vfuncout;
                __Vfunc_uvm_report_enabled__553__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__553__verbosity;
                __Vfunc_uvm_report_enabled__553__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__553__severity;
                __Vfunc_uvm_report_enabled__553__severity = 0;
                std::string __Vfunc_uvm_report_enabled__553__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__554__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__555__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__556__Vfuncout;
                __Vtask_uvm_report_enabled__556__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__557__id;
                std::string __Vtask_uvm_report_error__557__message;
                IData/*31:0*/ __Vtask_uvm_report_error__557__verbosity;
                __Vtask_uvm_report_error__557__verbosity = 0;
                std::string __Vtask_uvm_report_error__557__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__557__line;
                __Vtask_uvm_report_error__557__line = 0;
                std::string __Vtask_uvm_report_error__557__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__557__report_enabled_checked;
                __Vtask_uvm_report_error__557__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__558__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__559__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__560__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__563__Vfuncout;
                std::string __Vfunc_get_full_name__564__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__567__Vfuncout;
                __Vfunc_uvm_report_enabled__567__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__567__verbosity;
                __Vfunc_uvm_report_enabled__567__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__567__severity;
                __Vfunc_uvm_report_enabled__567__severity = 0;
                std::string __Vfunc_uvm_report_enabled__567__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__568__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__569__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__570__Vfuncout;
                __Vtask_uvm_report_enabled__570__Vfuncout = 0;
                std::string __Vtask_uvm_report_info__571__id;
                std::string __Vtask_uvm_report_info__571__message;
                IData/*31:0*/ __Vtask_uvm_report_info__571__verbosity;
                __Vtask_uvm_report_info__571__verbosity = 0;
                std::string __Vtask_uvm_report_info__571__filename;
                IData/*31:0*/ __Vtask_uvm_report_info__571__line;
                __Vtask_uvm_report_info__571__line = 0;
                std::string __Vtask_uvm_report_info__571__context_name;
                CData/*0:0*/ __Vtask_uvm_report_info__571__report_enabled_checked;
                __Vtask_uvm_report_info__571__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__572__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__573__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__574__Vfuncout;
                std::string __Vtemp_1;
                std::string __Vtemp_2;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VL_KEEP_THIS;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw;
                {
                    this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__551__Vfuncout);
                    bkdr = __Vfunc_get_backdoor__551__Vfuncout;
                    this->__PVT__m_fname = fname;
                    this->__PVT__m_lineno = lineno;
                    if (((VlNull{} == bkdr) && (1U 
                                                & (~ 
                                                   ([&]() {
                                            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__552__Vfuncout);
                                        }(), (IData)(__Vfunc_has_hdl_path__552__Vfuncout)))))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__553__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__553__severity = 2U;
                                        __Vfunc_uvm_report_enabled__553__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__554__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__554__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__555__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__555__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__553__verbosity, (IData)(__Vfunc_uvm_report_enabled__553__severity), __Vfunc_uvm_report_enabled__553__id, __Vtask_uvm_report_enabled__556__Vfuncout);
                                        __Vfunc_uvm_report_enabled__553__Vfuncout 
                                            = __Vtask_uvm_report_enabled__556__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__553__Vfuncout))) {
                            __Vtask_uvm_report_error__557__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__557__context_name = ""s;
                            __Vtask_uvm_report_error__557__line = 0x000008fdU;
                            __Vtask_uvm_report_error__557__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__557__verbosity = 0U;
                            __Vtemp_1 = ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__558__Vfuncout);
                                }(), __Vfunc_get_full_name__558__Vfuncout);
                            __Vtask_uvm_report_error__557__message 
                                = VL_SFORMATF_N_NX("No backdoor access available to peek register \"%@\"",0,
                                                   -1,
                                                   &(__Vtemp_1)) ;
                            __Vtask_uvm_report_error__557__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__559__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__559__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__560__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__560__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__557__id, __Vtask_uvm_report_error__557__message, __Vtask_uvm_report_error__557__verbosity, __Vtask_uvm_report_error__557__filename, __Vtask_uvm_report_error__557__line, __Vtask_uvm_report_error__557__context_name, (IData)(__Vtask_uvm_report_error__557__report_enabled_checked));
                        }
                        status = 1U;
                        goto __Vlabel0;
                    }
                    if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                    }
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi109__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_peek_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__564__Vfuncout);
                                }(), __Vfunc_get_full_name__564__Vfuncout)), __Vfunc_create__563__Vfuncout);
                    rw = __Vfunc_create__563__Vfuncout;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2311)
                                                        ->__PVT__element 
                        = VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2312)
                                                        ->__PVT__path = 1U;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2313)
                                                        ->__PVT__element_kind = 0U;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2314)
                                                        ->__PVT__kind = 0U;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2315)
                                                        ->__PVT__bd_kind 
                        = kind;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2316)
                                                        ->__PVT__parent 
                        = parent;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2317)
                                                        ->__PVT__extension 
                        = extension;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2318)
                                                        ->__PVT__fname 
                        = fname;
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2319)
                                                        ->__PVT__lineno 
                        = lineno;
                    if ((VlNull{} != bkdr)) {
                        VL_NULL_CHECK(bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2322)
                                                        ->__VnoInFunc_read(vlProcess, vlSymsp, rw);
                    } else {
                        this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
                    }
                    status = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2326)
                        ->__PVT__status;
                    value = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2327)
                        ->__PVT__value.at(0U);
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__567__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__567__severity = 0U;
                                    __Vfunc_uvm_report_enabled__567__verbosity = 0x0000012cU;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__568__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__568__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__569__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__569__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__567__verbosity, (IData)(__Vfunc_uvm_report_enabled__567__severity), __Vfunc_uvm_report_enabled__567__id, __Vtask_uvm_report_enabled__570__Vfuncout);
                                    __Vfunc_uvm_report_enabled__567__Vfuncout 
                                        = __Vtask_uvm_report_enabled__570__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__567__Vfuncout))) {
                        __Vtask_uvm_report_info__571__report_enabled_checked = 1U;
                        __Vtask_uvm_report_info__571__context_name = ""s;
                        __Vtask_uvm_report_info__571__line = 0x0000091aU;
                        __Vtask_uvm_report_info__571__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_info__571__verbosity = 0x0000012cU;
                        __Vtemp_2 = ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__572__Vfuncout);
                            }(), __Vfunc_get_full_name__572__Vfuncout);
                        __Vtask_uvm_report_info__571__message 
                            = VL_SFORMATF_N_NX("Peeked register \"%@\": 'h%x",0,
                                               -1,&(__Vtemp_2),
                                               64,value) ;
                        __Vtask_uvm_report_info__571__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__573__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__573__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__574__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__574__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__571__id, __Vtask_uvm_report_info__571__message, __Vtask_uvm_report_info__571__verbosity, __Vtask_uvm_report_info__571__filename, __Vtask_uvm_report_info__571__line, __Vtask_uvm_report_info__571__context_name, (IData)(__Vtask_uvm_report_info__571__report_enabled_checked));
                    }
                    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                    if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                    }
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_check(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, QData/*63:0*/ expected, QData/*63:0*/ actual, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &do_check__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_check\n"); );
                // Locals
                std::string __Vtask_get_access__578__Vfuncout;
                IData/*31:0*/ __Vtask_get_compare__579__Vfuncout;
                __Vtask_get_compare__579__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__580__Vfuncout;
                __Vtask_get_n_bits__580__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__581__Vfuncout;
                __Vtask_get_lsb_pos__581__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__582__Vfuncout;
                __Vfunc_uvm_report_enabled__582__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__582__verbosity;
                __Vfunc_uvm_report_enabled__582__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__582__severity;
                __Vfunc_uvm_report_enabled__582__severity = 0;
                std::string __Vfunc_uvm_report_enabled__582__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__583__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__584__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__585__Vfuncout;
                __Vtask_uvm_report_enabled__585__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__586__id;
                std::string __Vtask_uvm_report_error__586__message;
                IData/*31:0*/ __Vtask_uvm_report_error__586__verbosity;
                __Vtask_uvm_report_error__586__verbosity = 0;
                std::string __Vtask_uvm_report_error__586__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__586__line;
                __Vtask_uvm_report_error__586__line = 0;
                std::string __Vtask_uvm_report_error__586__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__586__report_enabled_checked;
                __Vtask_uvm_report_error__586__report_enabled_checked = 0;
                std::string __Vfunc_get_full_name__587__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__588__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__589__Vfuncout;
                std::string __Vtask_get_access__591__Vfuncout;
                IData/*31:0*/ __Vtask_get_compare__592__Vfuncout;
                __Vtask_get_compare__592__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__593__Vfuncout;
                __Vtask_get_n_bits__593__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__594__Vfuncout;
                __Vtask_get_lsb_pos__594__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__595__Vfuncout;
                __Vtask_get_lsb_pos__595__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__596__Vfuncout;
                __Vfunc_uvm_report_enabled__596__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__596__verbosity;
                __Vfunc_uvm_report_enabled__596__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__596__severity;
                __Vfunc_uvm_report_enabled__596__severity = 0;
                std::string __Vfunc_uvm_report_enabled__596__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__597__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__598__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__599__Vfuncout;
                __Vtask_uvm_report_enabled__599__Vfuncout = 0;
                std::string __Vtask_uvm_report_info__600__id;
                std::string __Vtask_uvm_report_info__600__message;
                IData/*31:0*/ __Vtask_uvm_report_info__600__verbosity;
                __Vtask_uvm_report_info__600__verbosity = 0;
                std::string __Vtask_uvm_report_info__600__filename;
                IData/*31:0*/ __Vtask_uvm_report_info__600__line;
                __Vtask_uvm_report_info__600__line = 0;
                std::string __Vtask_uvm_report_info__600__context_name;
                CData/*0:0*/ __Vtask_uvm_report_info__600__report_enabled_checked;
                __Vtask_uvm_report_info__600__report_enabled_checked = 0;
                std::string __Vtask_get_name__601__Vfuncout;
                std::string __Vfunc_get_full_name__602__Vfuncout;
                IData/*31:0*/ __Vtask_get_lsb_pos__603__Vfuncout;
                __Vtask_get_lsb_pos__603__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__604__Vfuncout;
                __Vtask_get_n_bits__604__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__605__Vfuncout;
                __Vtask_get_lsb_pos__605__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__606__Vfuncout;
                __Vtask_get_n_bits__606__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__607__Vfuncout;
                __Vtask_get_n_bits__607__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__608__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__609__Vfuncout;
                std::string __Vtemp_1;
                std::string __Vtemp_2;
                std::string __Vtemp_3;
                // Body
                IData/*31:0*/ unnamedblk373__DOT__i;
                unnamedblk373__DOT__i = 0;
                std::string unnamedblk373__DOT__unnamedblk374__DOT__acc;
                IData/*31:0*/ unnamedblk375__DOT__i;
                unnamedblk375__DOT__i = 0;
                std::string unnamedblk375__DOT__unnamedblk376__DOT__acc;
                QData/*63:0*/ unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__mask;
                unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__mask = 0;
                QData/*63:0*/ unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__val;
                unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__val = 0;
                QData/*63:0*/ unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__exp;
                unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__exp = 0;
                QData/*63:0*/ valid_bits_mask;
                valid_bits_mask = 0;
                {
                    valid_bits_mask = 0ULL;
                    unnamedblk373__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk373__DOT__i, this->__PVT__m_fields.size())) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk373__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2347)
                                                        ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__578__Vfuncout);
                        unnamedblk373__DOT__unnamedblk374__DOT__acc 
                            = __Vtask_get_access__578__Vfuncout;
                        unnamedblk373__DOT__unnamedblk374__DOT__acc 
                            = VL_SUBSTR_N(unnamedblk373__DOT__unnamedblk374__DOT__acc,0U,1U);
                        if ((1U & (~ ((0U == ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk373__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2349)
                                              ->__VnoInFunc_get_compare(vlSymsp, __Vtask_get_compare__579__Vfuncout);
                                                }(), __Vtask_get_compare__579__Vfuncout)) 
                                      || ("WO"s == unnamedblk373__DOT__unnamedblk374__DOT__acc))))) {
                            valid_bits_mask = (valid_bits_mask 
                                               | VL_SHIFTL_QQI(64,64,32, 
                                                               (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                                              ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk373__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2350)
                                                                               ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__580__Vfuncout);
                                                }(), __Vtask_get_n_bits__580__Vfuncout)) 
                                                                - 1ULL), 
                                                               ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk373__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2350)
                                                                ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__581__Vfuncout);
                                        }(), __Vtask_get_lsb_pos__581__Vfuncout)));
                        }
                        unnamedblk373__DOT__i = ((IData)(1U) 
                                                 + unnamedblk373__DOT__i);
                    }
                    if (((actual & valid_bits_mask) 
                         == (expected & valid_bits_mask))) {
                        do_check__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    }
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__582__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__582__severity = 2U;
                                    __Vfunc_uvm_report_enabled__582__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__583__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__583__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__584__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__584__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__582__verbosity, (IData)(__Vfunc_uvm_report_enabled__582__severity), __Vfunc_uvm_report_enabled__582__id, __Vtask_uvm_report_enabled__585__Vfuncout);
                                    __Vfunc_uvm_report_enabled__582__Vfuncout 
                                        = __Vtask_uvm_report_enabled__585__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__582__Vfuncout))) {
                        __Vtask_uvm_report_error__586__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__586__context_name = ""s;
                        __Vtask_uvm_report_error__586__line = 0x00000935U;
                        __Vtask_uvm_report_error__586__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_error__586__verbosity = 0U;
                        __Vtemp_1 = ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__587__Vfuncout);
                            }(), __Vfunc_get_full_name__587__Vfuncout);
                        __Vtask_uvm_report_error__586__message 
                            = VL_SFORMATF_N_NX("Register \"%@\" value read from DUT (0x%x) does not match mirrored value (0x%x) (valid bit mask = 0x%x)",0,
                                               -1,&(__Vtemp_1),
                                               64,actual,
                                               64,expected,
                                               64,valid_bits_mask) ;
                        __Vtask_uvm_report_error__586__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__588__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__588__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__589__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__589__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__586__id, __Vtask_uvm_report_error__586__message, __Vtask_uvm_report_error__586__verbosity, __Vtask_uvm_report_error__586__filename, __Vtask_uvm_report_error__586__line, __Vtask_uvm_report_error__586__context_name, (IData)(__Vtask_uvm_report_error__586__report_enabled_checked));
                    }
                    unnamedblk375__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk375__DOT__i, this->__PVT__m_fields.size())) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2360)
                                                        ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__591__Vfuncout);
                        unnamedblk375__DOT__unnamedblk376__DOT__acc 
                            = __Vtask_get_access__591__Vfuncout;
                        unnamedblk375__DOT__unnamedblk376__DOT__acc 
                            = VL_SUBSTR_N(unnamedblk375__DOT__unnamedblk376__DOT__acc,0U,1U);
                        if ((1U & (~ ((0U == ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2362)
                                              ->__VnoInFunc_get_compare(vlSymsp, __Vtask_get_compare__592__Vfuncout);
                                                }(), __Vtask_get_compare__592__Vfuncout)) 
                                      || ("WO"s == unnamedblk375__DOT__unnamedblk376__DOT__acc))))) {
                            unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__mask 
                                = (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                 ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2364)
                                                  ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__593__Vfuncout);
                                        }(), __Vtask_get_n_bits__593__Vfuncout)) 
                                   - 1ULL);
                            unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__val 
                                = (VL_SHIFTR_QQI(64,64,32, actual, 
                                                 ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2365)
                                                  ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__594__Vfuncout);
                                        }(), __Vtask_get_lsb_pos__594__Vfuncout)) 
                                   & unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__mask);
                            unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__exp 
                                = (VL_SHIFTR_QQI(64,64,32, expected, 
                                                 ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2366)
                                                  ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__595__Vfuncout);
                                        }(), __Vtask_get_lsb_pos__595__Vfuncout)) 
                                   & unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__mask);
                            if ((unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__val 
                                 != unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__exp)) {
                                if ((0U != ([&]() {
                                                __Vfunc_uvm_report_enabled__596__id = "RegModel"s;
                                                __Vfunc_uvm_report_enabled__596__severity = 0U;
                                                __Vfunc_uvm_report_enabled__596__verbosity = 0U;
                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__597__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                    = __Vfunc_get__597__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__598__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                    = __Vtask_get_root__598__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__596__verbosity, (IData)(__Vfunc_uvm_report_enabled__596__severity), __Vfunc_uvm_report_enabled__596__id, __Vtask_uvm_report_enabled__599__Vfuncout);
                                                __Vfunc_uvm_report_enabled__596__Vfuncout 
                                                    = __Vtask_uvm_report_enabled__599__Vfuncout;
                                            }(), __Vfunc_uvm_report_enabled__596__Vfuncout))) {
                                    __Vtask_uvm_report_info__600__report_enabled_checked = 1U;
                                    __Vtask_uvm_report_info__600__context_name = ""s;
                                    __Vtask_uvm_report_info__600__line = 0x00000948U;
                                    __Vtask_uvm_report_info__600__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                    __Vtask_uvm_report_info__600__verbosity = 0U;
                                    __Vtemp_2 = ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2376)
                                                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__601__Vfuncout);
                                        }(), __Vtask_get_name__601__Vfuncout);
                                    __Vtemp_3 = ([&]() {
                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__602__Vfuncout);
                                        }(), __Vfunc_get_full_name__602__Vfuncout);
                                    __Vtask_uvm_report_info__600__message 
                                        = VL_SFORMATF_N_NX("Field %@ (%@[%0#:%0#]) mismatch read=%0#'h%0x mirrored=%0#'h%0x ",0,
                                                           -1,
                                                           &(__Vtemp_2),
                                                           -1,
                                                           &(__Vtemp_3),
                                                           32,
                                                           ((([&]() {
                                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2376)
                                                              ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__603__Vfuncout);
                                                        }(), __Vtask_get_lsb_pos__603__Vfuncout) 
                                                             + 
                                                             ([&]() {
                                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2376)
                                                              ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__604__Vfuncout);
                                                        }(), __Vtask_get_n_bits__604__Vfuncout)) 
                                                            - (IData)(1U)),
                                                           32,
                                                           ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2376)
                                                            ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__605__Vfuncout);
                                                }(), __Vtask_get_lsb_pos__605__Vfuncout),
                                                           32,
                                                           ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2376)
                                                            ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__606__Vfuncout);
                                                }(), __Vtask_get_n_bits__606__Vfuncout),
                                                           64,
                                                           unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__val,
                                                           32,
                                                           ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2376)
                                                            ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__607__Vfuncout);
                                                }(), __Vtask_get_n_bits__607__Vfuncout),
                                                           64,
                                                           unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__exp) ;
                                    __Vtask_uvm_report_info__600__id = "RegModel"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__608__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                        = __Vfunc_get__608__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__609__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                        = __Vtask_get_root__609__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__600__id, __Vtask_uvm_report_info__600__message, __Vtask_uvm_report_info__600__verbosity, __Vtask_uvm_report_info__600__filename, __Vtask_uvm_report_info__600__line, __Vtask_uvm_report_info__600__context_name, (IData)(__Vtask_uvm_report_info__600__report_enabled_checked));
                                }
                            }
                        }
                        unnamedblk375__DOT__i = ((IData)(1U) 
                                                 + unnamedblk375__DOT__i);
                    }
                    do_check__Vfuncrtn = 0U;
                    __Vlabel0: ;
                }
            }

            VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_mirror(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_mirror\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__611__Vfuncout;
                IData/*31:0*/ __Vtask_get_default_door__613__Vfuncout;
                __Vtask_get_default_door__613__Vfuncout = 0;
                CData/*0:0*/ __Vfunc_has_hdl_path__614__Vfuncout;
                __Vfunc_has_hdl_path__614__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_backdoor__615__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__616__Vfuncout;
                QData/*63:0*/ __Vfunc_get_mirrored_value__617__Vfuncout;
                __Vfunc_get_mirrored_value__617__Vfuncout = 0;
                IData/*31:0*/ __Vtask_XreadX__618__status;
                __Vtask_XreadX__618__status = 0;
                QData/*63:0*/ __Vtask_XreadX__618__value;
                __Vtask_XreadX__618__value = 0;
                CData/*0:0*/ __Vtask_do_check__620__Vfuncout;
                __Vtask_do_check__620__Vfuncout = 0;
                // Body
                VL_KEEP_THIS;
                QData/*63:0*/ v;
                v = 0;
                QData/*63:0*/ exp;
                exp = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
                {
                    this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__611__Vfuncout);
                    bkdr = __Vfunc_get_backdoor__611__Vfuncout;
                    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                    this->__PVT__m_fname = fname;
                    this->__PVT__m_lineno = lineno;
                    if ((3U == path)) {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2406)
                                                        ->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__613__Vfuncout);
                        path = __Vtask_get_default_door__613__Vfuncout;
                    }
                    map = (((1U == path) && ((VlNull{} 
                                              != bkdr) 
                                             || ([&]() {
                                        this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __Vfunc_has_hdl_path__614__Vfuncout);
                                    }(), (IData)(__Vfunc_has_hdl_path__614__Vfuncout))))
                            ? ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __Vfunc_backdoor__615__Vfuncout);
                            }(), __Vfunc_backdoor__615__Vfuncout)
                            : ([&]() {
                                this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__616__Vfuncout);
                            }(), __Vfunc_get_local_map__616__Vfuncout));
                    if ((VlNull{} == map)) {
                        goto __Vlabel0;
                    }
                    if ((1U == check)) {
                        this->__VnoInFunc_get_mirrored_value(vlSymsp, ""s, 0U, __Vfunc_get_mirrored_value__617__Vfuncout);
                        exp = __Vfunc_get_mirrored_value__617__Vfuncout;
                    }
                    co_await this->__VnoInFunc_XreadX(vlProcess, vlSymsp, __Vtask_XreadX__618__status, __Vtask_XreadX__618__value, path, map, parent, prior, extension, fname, lineno);
                    status = __Vtask_XreadX__618__status;
                    v = __Vtask_XreadX__618__value;
                    if ((1U == status)) {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                        goto __Vlabel0;
                    }
                    if ((1U == check)) {
                        this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, v, map, __Vtask_do_check__620__Vfuncout);
                    }
                    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                    __Vlabel0: ;
                }
            }

            VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XatomicX(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XatomicX\n"); );
                // Locals
                VlClassRef<Vclass_hierarchy_std__03a__03aprocess> __Vfunc_self__622__Vfuncout;
                IData/*31:0*/ __Vtask_try_get__624__Vfuncout;
                __Vtask_try_get__624__Vfuncout = 0;
                // Body
                VL_KEEP_THIS;
                VlClassRef<Vclass_hierarchy_std__03a__03aprocess> m_reg_process;
                {
                    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__622__Vfuncout);
                    m_reg_process = __Vfunc_self__622__Vfuncout;
                    if (on) {
                        if ((m_reg_process == this->__PVT__m_process)) {
                            goto __Vlabel0;
                        }
                        co_await VL_NULL_CHECK(this->__PVT__m_atomic, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2442)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, 1U);
                        this->__PVT__m_process = m_reg_process;
                    } else {
                        VL_NULL_CHECK(this->__PVT__m_atomic, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2447)
                                                        ->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__624__Vfuncout);
                        VL_NULL_CHECK(this->__PVT__m_atomic, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2448)
                                                        ->__VnoInFunc_put(vlSymsp, 1U);
                        this->__PVT__m_process = VlNull{};
                    }
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_convert2string\n"); );
                // Locals
                std::string __Vfunc_get_full_name__626__Vfuncout;
                IData/*31:0*/ __Vfunc_get_n_bytes__627__Vfuncout;
                __Vfunc_get_n_bytes__627__Vfuncout = 0;
                QData/*63:0*/ __Vfunc_get__628__Vfuncout;
                __Vfunc_get__628__Vfuncout = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__629__Vfuncout;
                QData/*63:0*/ __Vtask_get_base_addr__630__Vfuncout;
                __Vtask_get_base_addr__630__Vfuncout = 0;
                QData/*63:0*/ __Vtask_get_submap_offset__631__Vfuncout;
                __Vtask_get_submap_offset__631__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_endian__632__Vfuncout;
                __Vtask_get_endian__632__Vfuncout = 0;
                std::string __Vtask_get_full_name__633__Vfuncout;
                IData/*31:0*/ __Vtask_get_n_bytes__634__Vfuncout;
                __Vtask_get_n_bytes__634__Vfuncout = 0;
                std::string __Vtask_convert2string__635__Vfuncout;
                std::string __Vtemp_1;
                std::string __Vtemp_2;
                std::string __Vtemp_3;
                std::string __Vtemp_4;
                // Body
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk378__DOT__map;
                CData/*0:0*/ unnamedblk378__DOT__map__Vfirst;
                unnamedblk378__DOT__map__Vfirst = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk378__DOT__unnamedblk379__DOT__parent_map;
                IData/*31:0*/ unnamedblk378__DOT__unnamedblk379__DOT__offset;
                unnamedblk378__DOT__unnamedblk379__DOT__offset = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_map> unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map;
                IData/*31:0*/ unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__e;
                unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__e = 0;
                IData/*31:0*/ unnamedblk382__DOT__i;
                unnamedblk382__DOT__i = 0;
                std::string res_str;
                std::string t_str;
                CData/*0:0*/ with_debug_info;
                with_debug_info = 0;
                std::string prefix;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__626__Vfuncout);
                    }(), __Vfunc_get_full_name__626__Vfuncout);
                VL_SFORMAT_NX(64,convert2string__Vfuncrtn
                              ,"Register %@ -- %0# bytes, mirror value:'h%x",0,
                              -1,&(__Vtemp_1),32,([&]() {
                                this->__VnoInFunc_get_n_bytes(vlSymsp, __Vfunc_get_n_bytes__627__Vfuncout);
                            }(), __Vfunc_get_n_bytes__627__Vfuncout),
                              64,([&]() {
                                this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vfunc_get__628__Vfuncout);
                            }(), __Vfunc_get__628__Vfuncout));
                convert2string__Vfuncrtn = ((0U == this->__PVT__m_maps.size())
                                             ? VL_CONCATN_NNN(convert2string__Vfuncrtn, "  (unmapped)\n"s)
                                             : VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s));
                if ((0U != this->__PVT__m_maps.first(unnamedblk378__DOT__map))) {
                    unnamedblk378__DOT__map__Vfirst = 1U;
                    while (((IData)(unnamedblk378__DOT__map__Vfirst) 
                            || (0U != this->__PVT__m_maps.next(unnamedblk378__DOT__map)))) {
                        unnamedblk378__DOT__map__Vfirst = 0U;
                        unnamedblk378__DOT__unnamedblk379__DOT__parent_map 
                            = unnamedblk378__DOT__map;
                        while ((VlNull{} != unnamedblk378__DOT__unnamedblk379__DOT__parent_map)) {
                            unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map 
                                = unnamedblk378__DOT__unnamedblk379__DOT__parent_map;
                            VL_NULL_CHECK(unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2479)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__629__Vfuncout);
                            unnamedblk378__DOT__unnamedblk379__DOT__parent_map 
                                = __Vtask_get_parent_map__629__Vfuncout;
                            unnamedblk378__DOT__unnamedblk379__DOT__offset 
                                = (IData)(((VlNull{} 
                                            == unnamedblk378__DOT__unnamedblk379__DOT__parent_map)
                                            ? ([&]() {
                                            VL_NULL_CHECK(unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2480)
                                               ->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __Vtask_get_base_addr__630__Vfuncout);
                                        }(), __Vtask_get_base_addr__630__Vfuncout)
                                            : ([&]() {
                                            VL_NULL_CHECK(unnamedblk378__DOT__unnamedblk379__DOT__parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2481)
                                               ->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map, __Vtask_get_submap_offset__631__Vfuncout);
                                        }(), __Vtask_get_submap_offset__631__Vfuncout)));
                            prefix = VL_CONCATN_NNN(prefix, "  "s);
                            VL_NULL_CHECK(unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2484)
                                                        ->__VnoInFunc_get_endian(vlSymsp, 1U, __Vtask_get_endian__632__Vfuncout);
                            unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__e 
                                = __Vtask_get_endian__632__Vfuncout;
                            __Vtemp_2 = ([&]() {
                                    VL_NULL_CHECK(unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2487)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__633__Vfuncout);
                                }(), __Vtask_get_full_name__633__Vfuncout);
                            __Vtemp_3 = Vclass_hierarchy___024unit::__Venumtab_enum_name77
                                [(7U & unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__e)];
                            VL_SFORMAT_NX(64,convert2string__Vfuncrtn
                                          ,"%@Mapped in '%@' -- %10# bytes, %@, offset 'h%0x\n",0,
                                          -1,&(prefix),
                                          -1,&(__Vtemp_2),
                                          32,([&]() {
                                            VL_NULL_CHECK(unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2487)
                                              ->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__634__Vfuncout);
                                        }(), __Vtask_get_n_bytes__634__Vfuncout),
                                          -1,&(__Vtemp_3),
                                          32,unnamedblk378__DOT__unnamedblk379__DOT__offset);
                        }
                    }
                }
                prefix = "  "s;
                unnamedblk382__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk382__DOT__i, this->__PVT__m_fields.size())) {
                    __Vtemp_4 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk382__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2495)
                                 ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__635__Vfuncout);
                        }(), __Vtask_convert2string__635__Vfuncout);
                    VL_SFORMAT_NX(64,convert2string__Vfuncrtn
                                  ,"%@\n%@",0,-1,&(convert2string__Vfuncrtn),
                                  -1,&(__Vtemp_4));
                    unnamedblk382__DOT__i = ((IData)(1U) 
                                             + unnamedblk382__DOT__i);
                }
                if (this->__PVT__m_read_in_progress) {
                    if (((""s != this->__PVT__m_fname) 
                         & (0U != this->__PVT__m_lineno))) {
                        VL_SFORMAT_NX(64,res_str,"%@:%0d ",0,
                                      -1,&(this->__PVT__m_fname),
                                      32,this->__PVT__m_lineno);
                    }
                    convert2string__Vfuncrtn = VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing read method"s);
                }
                if (this->__PVT__m_write_in_progress) {
                    if (((""s != this->__PVT__m_fname) 
                         & (0U != this->__PVT__m_lineno))) {
                        VL_SFORMAT_NX(64,res_str,"%@:%0d ",0,
                                      -1,&(this->__PVT__m_fname),
                                      32,this->__PVT__m_lineno);
                    }
                    convert2string__Vfuncrtn = VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing write method"s);
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_print(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer> printer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_print\n"); );
                // Locals
                std::string __Vtask_get_name__639__Vfuncout;
                std::string __Vtask_get_type_name__640__Vfuncout;
                std::string __Vtask_convert2string__641__Vfuncout;
                // Body
                IData/*31:0*/ unnamedblk383__DOT__i;
                unnamedblk383__DOT__i = 0;
                VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_field>> f;
                Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
                this->__VnoInFunc_get_fields(vlSymsp, f);
                unnamedblk383__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk383__DOT__i, f.size())) {
                    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2520)
                                                        ->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                    VL_NULL_CHECK(f.at(unnamedblk383__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2520)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__639__Vfuncout);
                                }(), __Vtask_get_name__639__Vfuncout)), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                    VL_NULL_CHECK(f.at(unnamedblk383__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2520)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__640__Vfuncout);
                                }(), __Vtask_get_type_name__640__Vfuncout)), 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                    VL_NULL_CHECK(f.at(unnamedblk383__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2520)
                                                                                ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__641__Vfuncout);
                                }(), __Vtask_convert2string__641__Vfuncout)), 0x2eU);
                    unnamedblk383__DOT__i = ((IData)(1U) 
                                             + unnamedblk383__DOT__i);
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clone(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clone\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__642__Vfuncout;
                __Vfunc_uvm_report_enabled__642__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__642__verbosity;
                __Vfunc_uvm_report_enabled__642__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__642__severity;
                __Vfunc_uvm_report_enabled__642__severity = 0;
                std::string __Vfunc_uvm_report_enabled__642__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__643__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__644__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__645__Vfuncout;
                __Vtask_uvm_report_enabled__645__Vfuncout = 0;
                // Body
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__642__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__642__severity = 3U;
                                __Vfunc_uvm_report_enabled__642__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__643__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__643__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__644__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__644__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__642__verbosity, (IData)(__Vfunc_uvm_report_enabled__642__severity), __Vfunc_uvm_report_enabled__642__id, __Vtask_uvm_report_enabled__645__Vfuncout);
                                __Vfunc_uvm_report_enabled__642__Vfuncout 
                                    = __Vtask_uvm_report_enabled__645__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__642__Vfuncout))) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel registers cannot be cloned"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s, 0x000009e0U, ""s, 1U);
                }
                clone__Vfuncrtn = VlNull{};
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> rhs) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_copy\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__647__Vfuncout;
                __Vfunc_uvm_report_enabled__647__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__647__verbosity;
                __Vfunc_uvm_report_enabled__647__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__647__severity;
                __Vfunc_uvm_report_enabled__647__severity = 0;
                std::string __Vfunc_uvm_report_enabled__647__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__648__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__649__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__650__Vfuncout;
                __Vtask_uvm_report_enabled__650__Vfuncout = 0;
                // Body
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__647__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__647__severity = 3U;
                                __Vfunc_uvm_report_enabled__647__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__648__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__648__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__649__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__649__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__647__verbosity, (IData)(__Vfunc_uvm_report_enabled__647__severity), __Vfunc_uvm_report_enabled__647__id, __Vtask_uvm_report_enabled__650__Vfuncout);
                                __Vfunc_uvm_report_enabled__647__Vfuncout 
                                    = __Vtask_uvm_report_enabled__650__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__647__Vfuncout))) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel registers cannot be copied"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s, 0x000009e7U, ""s, 1U);
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_compare(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_compare\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__652__Vfuncout;
                __Vfunc_uvm_report_enabled__652__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__652__verbosity;
                __Vfunc_uvm_report_enabled__652__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__652__severity;
                __Vfunc_uvm_report_enabled__652__severity = 0;
                std::string __Vfunc_uvm_report_enabled__652__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__653__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__654__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__655__Vfuncout;
                __Vtask_uvm_report_enabled__655__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__656__id;
                std::string __Vtask_uvm_report_warning__656__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__656__verbosity;
                __Vtask_uvm_report_warning__656__verbosity = 0;
                std::string __Vtask_uvm_report_warning__656__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__656__line;
                __Vtask_uvm_report_warning__656__line = 0;
                std::string __Vtask_uvm_report_warning__656__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__656__report_enabled_checked;
                __Vtask_uvm_report_warning__656__report_enabled_checked = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__657__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__658__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__652__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__652__severity = 1U;
                                __Vfunc_uvm_report_enabled__652__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__653__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__653__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__654__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__654__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__652__verbosity, (IData)(__Vfunc_uvm_report_enabled__652__severity), __Vfunc_uvm_report_enabled__652__id, __Vtask_uvm_report_enabled__655__Vfuncout);
                                __Vfunc_uvm_report_enabled__652__Vfuncout 
                                    = __Vtask_uvm_report_enabled__655__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__652__Vfuncout))) {
                    __Vtask_uvm_report_warning__656__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__656__context_name = ""s;
                    __Vtask_uvm_report_warning__656__line = 0x000009efU;
                    __Vtask_uvm_report_warning__656__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_warning__656__verbosity = 0U;
                    __Vtask_uvm_report_warning__656__message = "RegModel registers cannot be compared"s;
                    __Vtask_uvm_report_warning__656__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__657__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__657__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__658__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__658__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__656__id, __Vtask_uvm_report_warning__656__message, __Vtask_uvm_report_warning__656__verbosity, __Vtask_uvm_report_warning__656__filename, __Vtask_uvm_report_warning__656__line, __Vtask_uvm_report_warning__656__context_name, (IData)(__Vtask_uvm_report_warning__656__report_enabled_checked));
                }
                do_compare__Vfuncrtn = 0U;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_pack(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_pack\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__660__Vfuncout;
                __Vfunc_uvm_report_enabled__660__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__660__verbosity;
                __Vfunc_uvm_report_enabled__660__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__660__severity;
                __Vfunc_uvm_report_enabled__660__severity = 0;
                std::string __Vfunc_uvm_report_enabled__660__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__661__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__662__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__663__Vfuncout;
                __Vtask_uvm_report_enabled__663__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__664__id;
                std::string __Vtask_uvm_report_warning__664__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__664__verbosity;
                __Vtask_uvm_report_warning__664__verbosity = 0;
                std::string __Vtask_uvm_report_warning__664__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__664__line;
                __Vtask_uvm_report_warning__664__line = 0;
                std::string __Vtask_uvm_report_warning__664__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__664__report_enabled_checked;
                __Vtask_uvm_report_warning__664__report_enabled_checked = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__665__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__666__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__660__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__660__severity = 1U;
                                __Vfunc_uvm_report_enabled__660__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__661__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__661__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__662__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__662__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__660__verbosity, (IData)(__Vfunc_uvm_report_enabled__660__severity), __Vfunc_uvm_report_enabled__660__id, __Vtask_uvm_report_enabled__663__Vfuncout);
                                __Vfunc_uvm_report_enabled__660__Vfuncout 
                                    = __Vtask_uvm_report_enabled__663__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__660__Vfuncout))) {
                    __Vtask_uvm_report_warning__664__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__664__context_name = ""s;
                    __Vtask_uvm_report_warning__664__line = 0x000009f7U;
                    __Vtask_uvm_report_warning__664__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_warning__664__verbosity = 0U;
                    __Vtask_uvm_report_warning__664__message = "RegModel registers cannot be packed"s;
                    __Vtask_uvm_report_warning__664__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__665__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__665__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__666__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__666__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__664__id, __Vtask_uvm_report_warning__664__message, __Vtask_uvm_report_warning__664__verbosity, __Vtask_uvm_report_warning__664__filename, __Vtask_uvm_report_warning__664__line, __Vtask_uvm_report_warning__664__context_name, (IData)(__Vtask_uvm_report_warning__664__report_enabled_checked));
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_unpack(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_unpack\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__668__Vfuncout;
                __Vfunc_uvm_report_enabled__668__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__668__verbosity;
                __Vfunc_uvm_report_enabled__668__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__668__severity;
                __Vfunc_uvm_report_enabled__668__severity = 0;
                std::string __Vfunc_uvm_report_enabled__668__id;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__669__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__670__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__671__Vfuncout;
                __Vtask_uvm_report_enabled__671__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__672__id;
                std::string __Vtask_uvm_report_warning__672__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__672__verbosity;
                __Vtask_uvm_report_warning__672__verbosity = 0;
                std::string __Vtask_uvm_report_warning__672__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__672__line;
                __Vtask_uvm_report_warning__672__line = 0;
                std::string __Vtask_uvm_report_warning__672__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__672__report_enabled_checked;
                __Vtask_uvm_report_warning__672__report_enabled_checked = 0;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__673__Vfuncout;
                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__674__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__668__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__668__severity = 1U;
                                __Vfunc_uvm_report_enabled__668__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__669__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__669__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__670__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__670__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__668__verbosity, (IData)(__Vfunc_uvm_report_enabled__668__severity), __Vfunc_uvm_report_enabled__668__id, __Vtask_uvm_report_enabled__671__Vfuncout);
                                __Vfunc_uvm_report_enabled__668__Vfuncout 
                                    = __Vtask_uvm_report_enabled__671__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__668__Vfuncout))) {
                    __Vtask_uvm_report_warning__672__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__672__context_name = ""s;
                    __Vtask_uvm_report_warning__672__line = 0x000009feU;
                    __Vtask_uvm_report_warning__672__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_warning__672__verbosity = 0U;
                    __Vtask_uvm_report_warning__672__message = "RegModel registers cannot be unpacked"s;
                    __Vtask_uvm_report_warning__672__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__673__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__673__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__674__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__674__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__672__id, __Vtask_uvm_report_warning__672__message, __Vtask_uvm_report_warning__672__verbosity, __Vtask_uvm_report_warning__672__filename, __Vtask_uvm_report_warning__672__line, __Vtask_uvm_report_warning__672__context_name, (IData)(__Vtask_uvm_report_warning__672__report_enabled_checked));
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc_randomize\n"); );
                // Locals
                IData/*31:0*/ __Vfunc___Vbasic_randomize__677__Vfuncout;
                __Vfunc___Vbasic_randomize__677__Vfuncout = 0;
                // Body
                Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
                this->__VnoInFunc___Vsetup_constraints(vlSymsp);
                randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
                randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                       & ([&]() {
                            this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__677__Vfuncout);
                        }(), __Vfunc___Vbasic_randomize__677__Vfuncout));
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc___Vbasic_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::__VnoInFunc___Vbasic_randomize\n"); );
                // Body
                __Vbasic_randomize__Vfuncrtn = 1U;
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::_ctor_var_reset\n"); );
                // Body
                (void)vlSymsp;  // Prevent unused variable warning
                __PVT__m_locked = 0;
                __PVT__m_n_bits = 0;
                __PVT__m_n_used_bits = 0;
                __PVT__m_maps.atDefault() = 0;
                __PVT__m_has_cover = 0;
                __PVT__m_cover_on = 0;
                __PVT__m_lineno = 0;
                __PVT__m_read_in_progress = 0;
                __PVT__m_write_in_progress = 0;
                __PVT__m_update_in_progress = 0;
                __PVT__m_is_busy = 0;
                __PVT__m_is_locked_by_field = 0;
            }

            std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>& obj) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::VL_TO_STRING\n"); );
                // Body
                return (obj ? obj->to_string() : "null");
            }

            std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::to_string() const {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::to_string\n"); );
                // Body
                return ("'{"s + to_string_middle() + "}");
            }

            std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::to_string_middle() const {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg::to_string_middle\n"); );
                // Body
                std::string out;
                out += "m_locked:" + VL_TO_STRING(__PVT__m_locked);
                out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
                out += ", m_regfile_parent:" + VL_TO_STRING(__PVT__m_regfile_parent);
                out += ", m_n_bits:" + VL_TO_STRING(__PVT__m_n_bits);
                out += ", m_n_used_bits:" + VL_TO_STRING(__PVT__m_n_used_bits);
                out += ", m_maps:" + VL_TO_STRING(__PVT__m_maps);
                out += ", m_fields:" + VL_TO_STRING(__PVT__m_fields);
                out += ", m_has_cover:" + VL_TO_STRING(__PVT__m_has_cover);
                out += ", m_cover_on:" + VL_TO_STRING(__PVT__m_cover_on);
                out += ", m_atomic:" + VL_TO_STRING(__PVT__m_atomic);
                out += ", m_process:" + VL_TO_STRING(__PVT__m_process);
                out += ", m_fname:" + VL_TO_STRING(__PVT__m_fname);
                out += ", m_lineno:" + VL_TO_STRING(__PVT__m_lineno);
                out += ", m_read_in_progress:" + VL_TO_STRING(__PVT__m_read_in_progress);
                out += ", m_write_in_progress:" + VL_TO_STRING(__PVT__m_write_in_progress);
                out += ", m_update_in_progress:" + VL_TO_STRING(__PVT__m_update_in_progress);
                out += ", m_is_busy:" + VL_TO_STRING(__PVT__m_is_busy);
                out += ", m_is_locked_by_field:" + VL_TO_STRING(__PVT__m_is_locked_by_field);
                out += ", m_backdoor:" + VL_TO_STRING(__PVT__m_backdoor);
                out += ", m_hdl_paths_pool:" + VL_TO_STRING(__PVT__m_hdl_paths_pool);
                out += ", "+ Vclass_hierarchy_uvm_pkg__03a__03auvm_object::to_string_middle();
                return (out);
            }
