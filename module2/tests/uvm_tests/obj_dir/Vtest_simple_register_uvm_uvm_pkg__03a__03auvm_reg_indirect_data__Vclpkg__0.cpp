// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_cover)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg(vlProcess, vlSymsp, name, n_bits, has_cover) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_build(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_build\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_configure(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg> idx, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg>> reg_a, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_file> regfile_parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_configure\n"); );
    // Locals
    std::string __Vfunc_get_full_name__3__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk1__DOT__map;
    CData/*0:0*/ unnamedblk1__DOT__map__Vfirst;
    unnamedblk1__DOT__map__Vfirst = 0;
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_configure(vlSymsp, blk_parent, regfile_parent, ""s);
    this->__PVT__m_idx = idx;
    this->__PVT__m_tbl = reg_a;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__3__Vfuncout);
                    }(), __Vfunc_get_full_name__3__Vfuncout))), "NO_REG_TESTS"s, 1U, VlNull{});
    if ((0U != Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg::__PVT__m_maps.first(unnamedblk1__DOT__map))) {
        unnamedblk1__DOT__map__Vfirst = 1U;
        while (((IData)(unnamedblk1__DOT__map__Vfirst) 
                || (0U != Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg::__PVT__m_maps.next(unnamedblk1__DOT__map)))) {
            unnamedblk1__DOT__map__Vfirst = 0U;
            this->__VnoInFunc_add_frontdoors(vlSymsp, unnamedblk1__DOT__map);
        }
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_map(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_map\n"); );
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map(vlSymsp, map);
    this->__VnoInFunc_add_frontdoors(vlSymsp, map);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_frontdoors(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_frontdoors\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__Vfuncout;
    __Vfunc_uvm_report_enabled__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vfunc_get_full_name__8__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__11__Vfuncout;
    __Vtask_uvm_report_enabled__11__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__12__id;
    std::string __Vtask_uvm_report_error__12__message;
    IData/*31:0*/ __Vtask_uvm_report_error__12__verbosity;
    __Vtask_uvm_report_error__12__verbosity = 0;
    std::string __Vtask_uvm_report_error__12__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__12__line;
    __Vtask_uvm_report_error__12__line = 0;
    std::string __Vtask_uvm_report_error__12__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__12__report_enabled_checked;
    __Vtask_uvm_report_error__12__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__13__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    CData/*0:0*/ __Vtask_is_in_map__18__Vfuncout;
    __Vtask_is_in_map__18__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq> unnamedblk2__DOT__unnamedblk3__DOT__fd;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_tbl.size())) {
        {
            if ((VlNull{} == this->__PVT__m_tbl.at(unnamedblk2__DOT__i))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__7__id 
                                    = VL_CVT_PACK_STR_NN(
                                                         ([&]() {
                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__8__Vfuncout);
                                        }(), __Vfunc_get_full_name__8__Vfuncout));
                                __Vfunc_uvm_report_enabled__7__severity = 2U;
                                __Vfunc_uvm_report_enabled__7__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__9__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__10__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), __Vfunc_uvm_report_enabled__7__id, __Vtask_uvm_report_enabled__11__Vfuncout);
                                __Vfunc_uvm_report_enabled__7__Vfuncout 
                                    = __Vtask_uvm_report_enabled__11__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__7__Vfuncout))) {
                    __Vtask_uvm_report_error__12__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__12__context_name = ""s;
                    __Vtask_uvm_report_error__12__line = 0x0000005aU;
                    __Vtask_uvm_report_error__12__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
                    __Vtask_uvm_report_error__12__verbosity = 0U;
                    __Vtask_uvm_report_error__12__message 
                        = VL_SFORMATF_N_NX("Indirect register #%0d is NULL",0,
                                           32,unnamedblk2__DOT__i) ;
                    __Vtask_uvm_report_error__12__id 
                        = VL_CVT_PACK_STR_NN(([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__13__Vfuncout);
                            }(), __Vfunc_get_full_name__13__Vfuncout));
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__14__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__15__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__12__id, __Vtask_uvm_report_error__12__message, __Vtask_uvm_report_error__12__verbosity, __Vtask_uvm_report_error__12__filename, __Vtask_uvm_report_error__12__line, __Vtask_uvm_report_error__12__context_name, (IData)(__Vtask_uvm_report_error__12__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            unnamedblk2__DOT__unnamedblk3__DOT__fd 
                = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq, vlProcess, vlSymsp, this->__PVT__m_idx, unnamedblk2__DOT__i, 
                         VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data>{this});
            if (([&]() {
                        VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk2__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 94)
                 ->__VnoInFunc_is_in_map(vlSymsp, map, __Vtask_is_in_map__18__Vfuncout);
                    }(), (IData)(__Vtask_is_in_map__18__Vfuncout))) {
                VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk2__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 95)->__VnoInFunc_set_frontdoor(vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__fd, map, ""s, 0U);
            } else {
                VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 97)->__VnoInFunc_add_reg(vlSymsp, this->__PVT__m_tbl.at(unnamedblk2__DOT__i), 0xffffffffffffffffULL, "RW"s, 1U, unnamedblk2__DOT__unnamedblk3__DOT__fd);
            }
            __Vlabel0: ;
        }
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_do_predict\n"); );
    // Locals
    QData/*63:0*/ __Vtask_get__21__Vfuncout;
    __Vtask_get__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__Vfuncout;
    __Vfunc_uvm_report_enabled__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__verbosity;
    __Vfunc_uvm_report_enabled__22__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__22__severity;
    __Vfunc_uvm_report_enabled__22__severity = 0;
    std::string __Vfunc_uvm_report_enabled__22__id;
    std::string __Vfunc_get_full_name__23__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__26__Vfuncout;
    __Vtask_uvm_report_enabled__26__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__27__id;
    std::string __Vtask_uvm_report_error__27__message;
    IData/*31:0*/ __Vtask_uvm_report_error__27__verbosity;
    __Vtask_uvm_report_error__27__verbosity = 0;
    std::string __Vtask_uvm_report_error__27__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__27__line;
    __Vtask_uvm_report_error__27__line = 0;
    std::string __Vtask_uvm_report_error__27__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__27__report_enabled_checked;
    __Vtask_uvm_report_error__27__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__28__Vfuncout;
    QData/*63:0*/ __Vtask_get__29__Vfuncout;
    __Vtask_get__29__Vfuncout = 0;
    std::string __Vfunc_get_full_name__30__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    QData/*63:0*/ __Vtask_get__34__Vfuncout;
    __Vtask_get__34__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    IData/*31:0*/ unnamedblk4__DOT__idx;
    unnamedblk4__DOT__idx = 0;
    {
        if ((([&]() {
                        VL_NULL_CHECK(this->__PVT__m_idx, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 104)
              ->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vtask_get__21__Vfuncout);
                    }(), __Vtask_get__21__Vfuncout) 
             >= (QData)((IData)(this->__PVT__m_tbl.size())))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__22__id 
                                = VL_CVT_PACK_STR_NN(
                                                     ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__23__Vfuncout);
                                    }(), __Vfunc_get_full_name__23__Vfuncout));
                            __Vfunc_uvm_report_enabled__22__severity = 2U;
                            __Vfunc_uvm_report_enabled__22__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__24__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__25__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__25__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__22__verbosity, (IData)(__Vfunc_uvm_report_enabled__22__severity), __Vfunc_uvm_report_enabled__22__id, __Vtask_uvm_report_enabled__26__Vfuncout);
                            __Vfunc_uvm_report_enabled__22__Vfuncout 
                                = __Vtask_uvm_report_enabled__26__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__22__Vfuncout))) {
                __Vtask_uvm_report_error__27__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__27__context_name = ""s;
                __Vtask_uvm_report_error__27__line = 0x00000069U;
                __Vtask_uvm_report_error__27__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
                __Vtask_uvm_report_error__27__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_idx, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 105)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__28__Vfuncout);
                    }(), __Vtask_get_full_name__28__Vfuncout);
                __Vtask_uvm_report_error__27__message 
                    = VL_SFORMATF_N_NX("Address register %@ has a value (%0#) greater than the maximum indirect register array size (%0d)",0,
                                       -1,&(__Vtemp_1),
                                       64,([&]() {
                                VL_NULL_CHECK(this->__PVT__m_idx, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 105)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vtask_get__29__Vfuncout);
                            }(), __Vtask_get__29__Vfuncout),
                                       32,this->__PVT__m_tbl.size()) ;
                __Vtask_uvm_report_error__27__id = 
                    VL_CVT_PACK_STR_NN(([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__30__Vfuncout);
                        }(), __Vfunc_get_full_name__30__Vfuncout));
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__27__id, __Vtask_uvm_report_error__27__message, __Vtask_uvm_report_error__27__verbosity, __Vtask_uvm_report_error__27__filename, __Vtask_uvm_report_error__27__line, __Vtask_uvm_report_error__27__context_name, (IData)(__Vtask_uvm_report_error__27__report_enabled_checked));
            }
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 106)->__PVT__status = 1U;
            goto __Vlabel0;
        }
        unnamedblk4__DOT__idx = (IData)(([&]() {
                    VL_NULL_CHECK(this->__PVT__m_idx, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 112)
                                         ->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vtask_get__34__Vfuncout);
                }(), __Vtask_get__34__Vfuncout));
        VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk4__DOT__idx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 113)->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_local_map\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_local_map__36__Vfuncout;
    // Body
    VL_NULL_CHECK(this->__PVT__m_idx, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 119)->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vtask_get_local_map__36__Vfuncout);
    get_local_map__Vfuncrtn = __Vtask_get_local_map__36__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_field(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field> field) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_field\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__37__Vfuncout;
    __Vfunc_uvm_report_enabled__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__37__verbosity;
    __Vfunc_uvm_report_enabled__37__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__37__severity;
    __Vfunc_uvm_report_enabled__37__severity = 0;
    std::string __Vfunc_uvm_report_enabled__37__id;
    std::string __Vfunc_get_full_name__38__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__41__Vfuncout;
    __Vtask_uvm_report_enabled__41__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__42__id;
    std::string __Vtask_uvm_report_error__42__message;
    IData/*31:0*/ __Vtask_uvm_report_error__42__verbosity;
    __Vtask_uvm_report_error__42__verbosity = 0;
    std::string __Vtask_uvm_report_error__42__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__42__line;
    __Vtask_uvm_report_error__42__line = 0;
    std::string __Vtask_uvm_report_error__42__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__42__report_enabled_checked;
    __Vtask_uvm_report_error__42__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__43__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__37__id 
                        = VL_CVT_PACK_STR_NN(([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__38__Vfuncout);
                            }(), __Vfunc_get_full_name__38__Vfuncout));
                    __Vfunc_uvm_report_enabled__37__severity = 2U;
                    __Vfunc_uvm_report_enabled__37__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__39__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__40__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__37__verbosity, (IData)(__Vfunc_uvm_report_enabled__37__severity), __Vfunc_uvm_report_enabled__37__id, __Vtask_uvm_report_enabled__41__Vfuncout);
                    __Vfunc_uvm_report_enabled__37__Vfuncout 
                        = __Vtask_uvm_report_enabled__41__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__37__Vfuncout))) {
        __Vtask_uvm_report_error__42__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__42__context_name = ""s;
        __Vtask_uvm_report_error__42__line = 0x0000007eU;
        __Vtask_uvm_report_error__42__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__42__verbosity = 0U;
        __Vtask_uvm_report_error__42__message = "Cannot add field to an indirect data access register"s;
        __Vtask_uvm_report_error__42__id = VL_CVT_PACK_STR_NN(
                                                              ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__43__Vfuncout);
                }(), __Vfunc_get_full_name__43__Vfuncout));
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__44__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__45__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__42__id, __Vtask_uvm_report_error__42__message, __Vtask_uvm_report_error__42__verbosity, __Vtask_uvm_report_error__42__filename, __Vtask_uvm_report_error__42__line, __Vtask_uvm_report_error__42__context_name, (IData)(__Vtask_uvm_report_error__42__report_enabled_checked));
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_set(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__47__Vfuncout;
    __Vfunc_uvm_report_enabled__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__47__verbosity;
    __Vfunc_uvm_report_enabled__47__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__47__severity;
    __Vfunc_uvm_report_enabled__47__severity = 0;
    std::string __Vfunc_uvm_report_enabled__47__id;
    std::string __Vfunc_get_full_name__48__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__49__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__50__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__51__Vfuncout;
    __Vtask_uvm_report_enabled__51__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__52__id;
    std::string __Vtask_uvm_report_error__52__message;
    IData/*31:0*/ __Vtask_uvm_report_error__52__verbosity;
    __Vtask_uvm_report_error__52__verbosity = 0;
    std::string __Vtask_uvm_report_error__52__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__52__line;
    __Vtask_uvm_report_error__52__line = 0;
    std::string __Vtask_uvm_report_error__52__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__52__report_enabled_checked;
    __Vtask_uvm_report_error__52__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__53__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__54__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__55__Vfuncout;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__47__id 
                        = VL_CVT_PACK_STR_NN(([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__48__Vfuncout);
                            }(), __Vfunc_get_full_name__48__Vfuncout));
                    __Vfunc_uvm_report_enabled__47__severity = 2U;
                    __Vfunc_uvm_report_enabled__47__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__49__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__49__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__50__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__50__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__47__verbosity, (IData)(__Vfunc_uvm_report_enabled__47__severity), __Vfunc_uvm_report_enabled__47__id, __Vtask_uvm_report_enabled__51__Vfuncout);
                    __Vfunc_uvm_report_enabled__47__Vfuncout 
                        = __Vtask_uvm_report_enabled__51__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__47__Vfuncout))) {
        __Vtask_uvm_report_error__52__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__52__context_name = ""s;
        __Vtask_uvm_report_error__52__line = 0x00000084U;
        __Vtask_uvm_report_error__52__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__52__verbosity = 0U;
        __Vtask_uvm_report_error__52__message = "Cannot set() an indirect data access register"s;
        __Vtask_uvm_report_error__52__id = VL_CVT_PACK_STR_NN(
                                                              ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__53__Vfuncout);
                }(), __Vfunc_get_full_name__53__Vfuncout));
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__54__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__54__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__55__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__55__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__52__id, __Vtask_uvm_report_error__52__message, __Vtask_uvm_report_error__52__verbosity, __Vtask_uvm_report_error__52__filename, __Vtask_uvm_report_error__52__line, __Vtask_uvm_report_error__52__context_name, (IData)(__Vtask_uvm_report_error__52__report_enabled_checked));
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__57__Vfuncout;
    __Vfunc_uvm_report_enabled__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__57__verbosity;
    __Vfunc_uvm_report_enabled__57__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__57__severity;
    __Vfunc_uvm_report_enabled__57__severity = 0;
    std::string __Vfunc_uvm_report_enabled__57__id;
    std::string __Vfunc_get_full_name__58__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__59__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__60__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__61__Vfuncout;
    __Vtask_uvm_report_enabled__61__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__62__id;
    std::string __Vtask_uvm_report_error__62__message;
    IData/*31:0*/ __Vtask_uvm_report_error__62__verbosity;
    __Vtask_uvm_report_error__62__verbosity = 0;
    std::string __Vtask_uvm_report_error__62__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__62__line;
    __Vtask_uvm_report_error__62__line = 0;
    std::string __Vtask_uvm_report_error__62__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__62__report_enabled_checked;
    __Vtask_uvm_report_error__62__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__63__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__57__id 
                        = VL_CVT_PACK_STR_NN(([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__58__Vfuncout);
                            }(), __Vfunc_get_full_name__58__Vfuncout));
                    __Vfunc_uvm_report_enabled__57__severity = 2U;
                    __Vfunc_uvm_report_enabled__57__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__59__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__59__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__60__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__60__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__57__verbosity, (IData)(__Vfunc_uvm_report_enabled__57__severity), __Vfunc_uvm_report_enabled__57__id, __Vtask_uvm_report_enabled__61__Vfuncout);
                    __Vfunc_uvm_report_enabled__57__Vfuncout 
                        = __Vtask_uvm_report_enabled__61__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__57__Vfuncout))) {
        __Vtask_uvm_report_error__62__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__62__context_name = ""s;
        __Vtask_uvm_report_error__62__line = 0x00000089U;
        __Vtask_uvm_report_error__62__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__62__verbosity = 0U;
        __Vtask_uvm_report_error__62__message = "Cannot get() an indirect data access register"s;
        __Vtask_uvm_report_error__62__id = VL_CVT_PACK_STR_NN(
                                                              ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__63__Vfuncout);
                }(), __Vfunc_get_full_name__63__Vfuncout));
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__64__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__64__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__65__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__62__id, __Vtask_uvm_report_error__62__message, __Vtask_uvm_report_error__62__verbosity, __Vtask_uvm_report_error__62__filename, __Vtask_uvm_report_error__62__line, __Vtask_uvm_report_error__62__context_name, (IData)(__Vtask_uvm_report_error__62__report_enabled_checked));
    }
    get__Vfuncrtn = 0ULL;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_indirect_reg(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg> &get_indirect_reg__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_indirect_reg\n"); );
    // Locals
    QData/*63:0*/ __Vtask_get_mirrored_value__67__Vfuncout;
    __Vtask_get_mirrored_value__67__Vfuncout = 0;
    // Body
    IData/*31:0*/ idx;
    idx = 0;
    idx = (IData)(([&]() {
                VL_NULL_CHECK(this->__PVT__m_idx, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 143)
                   ->__VnoInFunc_get_mirrored_value(vlSymsp, ""s, 0U, __Vtask_get_mirrored_value__67__Vfuncout);
            }(), __Vtask_get_mirrored_value__67__Vfuncout));
    get_indirect_reg__Vfuncrtn = this->__PVT__m_tbl.at(idx);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_needs_update(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_needs_update\n"); );
    // Body
    needs_update__Vfuncrtn = 0U;
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_write(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_write\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_parent__68__Vfuncout;
    IData/*31:0*/ __Vtask_get_default_door__69__Vfuncout;
    __Vtask_get_default_door__69__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__70__Vfuncout;
    __Vfunc_uvm_report_enabled__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__70__verbosity;
    __Vfunc_uvm_report_enabled__70__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__70__severity;
    __Vfunc_uvm_report_enabled__70__severity = 0;
    std::string __Vfunc_uvm_report_enabled__70__id;
    std::string __Vfunc_get_full_name__71__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__72__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__73__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__74__Vfuncout;
    __Vtask_uvm_report_enabled__74__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__75__id;
    std::string __Vtask_uvm_report_warning__75__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__75__verbosity;
    __Vtask_uvm_report_warning__75__verbosity = 0;
    std::string __Vtask_uvm_report_warning__75__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__75__line;
    __Vtask_uvm_report_warning__75__line = 0;
    std::string __Vtask_uvm_report_warning__75__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__75__report_enabled_checked;
    __Vtask_uvm_report_warning__75__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__76__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__77__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__78__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__81__Vfuncout;
    std::string __Vfunc_get_full_name__82__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> unnamedblk5__DOT__blk;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> unnamedblk6__DOT__rw;
    if ((3U == path)) {
        this->__VnoInFunc_get_parent(vlSymsp, __Vfunc_get_parent__68__Vfuncout);
        unnamedblk5__DOT__blk = __Vfunc_get_parent__68__Vfuncout;
        VL_NULL_CHECK(unnamedblk5__DOT__blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 163)->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__69__Vfuncout);
        path = __Vtask_get_default_door__69__Vfuncout;
    }
    if ((1U == path)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__70__id 
                            = VL_CVT_PACK_STR_NN(([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__71__Vfuncout);
                                }(), __Vfunc_get_full_name__71__Vfuncout));
                        __Vfunc_uvm_report_enabled__70__severity = 1U;
                        __Vfunc_uvm_report_enabled__70__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__72__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__72__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__73__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__73__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__70__verbosity, (IData)(__Vfunc_uvm_report_enabled__70__severity), __Vfunc_uvm_report_enabled__70__id, __Vtask_uvm_report_enabled__74__Vfuncout);
                        __Vfunc_uvm_report_enabled__70__Vfuncout 
                            = __Vtask_uvm_report_enabled__74__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__70__Vfuncout))) {
            __Vtask_uvm_report_warning__75__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__75__context_name = ""s;
            __Vtask_uvm_report_warning__75__line = 0x000000a7U;
            __Vtask_uvm_report_warning__75__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
            __Vtask_uvm_report_warning__75__verbosity = 0U;
            __Vtask_uvm_report_warning__75__message = "Cannot backdoor-write an indirect data access register. Switching to frontdoor."s;
            __Vtask_uvm_report_warning__75__id = VL_CVT_PACK_STR_NN(
                                                                    ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__76__Vfuncout);
                    }(), __Vfunc_get_full_name__76__Vfuncout));
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__77__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__77__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__78__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__78__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__75__id, __Vtask_uvm_report_warning__75__message, __Vtask_uvm_report_warning__75__verbosity, __Vtask_uvm_report_warning__75__filename, __Vtask_uvm_report_warning__75__line, __Vtask_uvm_report_warning__75__context_name, (IData)(__Vtask_uvm_report_warning__75__report_enabled_checked));
        }
        path = 0U;
    }
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__82__Vfuncout);
                }(), __Vfunc_get_full_name__82__Vfuncout)), __Vfunc_create__81__Vfuncout);
    unnamedblk6__DOT__rw = __Vfunc_create__81__Vfuncout;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 178)->__PVT__element 
        = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data>{this};
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 179)->__PVT__element_kind = 0U;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 180)->__PVT__kind = 1U;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 181)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 182)->__PVT__path 
        = path;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 183)->__PVT__map 
        = map;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 184)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 185)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 186)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 187)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 188)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, unnamedblk6__DOT__rw);
    status = VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 192)
        ->__PVT__status;
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_read(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_read\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_parent__85__Vfuncout;
    IData/*31:0*/ __Vtask_get_default_door__86__Vfuncout;
    __Vtask_get_default_door__86__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__87__Vfuncout;
    __Vfunc_uvm_report_enabled__87__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__87__verbosity;
    __Vfunc_uvm_report_enabled__87__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__87__severity;
    __Vfunc_uvm_report_enabled__87__severity = 0;
    std::string __Vfunc_uvm_report_enabled__87__id;
    std::string __Vfunc_get_full_name__88__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__89__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__90__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__91__Vfuncout;
    __Vtask_uvm_report_enabled__91__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__92__id;
    std::string __Vtask_uvm_report_warning__92__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__92__verbosity;
    __Vtask_uvm_report_warning__92__verbosity = 0;
    std::string __Vtask_uvm_report_warning__92__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__92__line;
    __Vtask_uvm_report_warning__92__line = 0;
    std::string __Vtask_uvm_report_warning__92__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__92__report_enabled_checked;
    __Vtask_uvm_report_warning__92__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__93__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__94__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__95__Vfuncout;
    IData/*31:0*/ __Vtask_read__97__status;
    __Vtask_read__97__status = 0;
    QData/*63:0*/ __Vtask_read__97__value;
    __Vtask_read__97__value = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> unnamedblk7__DOT__blk;
    if ((3U == path)) {
        this->__VnoInFunc_get_parent(vlSymsp, __Vfunc_get_parent__85__Vfuncout);
        unnamedblk7__DOT__blk = __Vfunc_get_parent__85__Vfuncout;
        VL_NULL_CHECK(unnamedblk7__DOT__blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 210)->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__86__Vfuncout);
        path = __Vtask_get_default_door__86__Vfuncout;
    }
    if ((1U == path)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__87__id 
                            = VL_CVT_PACK_STR_NN(([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__88__Vfuncout);
                                }(), __Vfunc_get_full_name__88__Vfuncout));
                        __Vfunc_uvm_report_enabled__87__severity = 1U;
                        __Vfunc_uvm_report_enabled__87__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__89__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__89__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__90__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__90__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__87__verbosity, (IData)(__Vfunc_uvm_report_enabled__87__severity), __Vfunc_uvm_report_enabled__87__id, __Vtask_uvm_report_enabled__91__Vfuncout);
                        __Vfunc_uvm_report_enabled__87__Vfuncout 
                            = __Vtask_uvm_report_enabled__91__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__87__Vfuncout))) {
            __Vtask_uvm_report_warning__92__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__92__context_name = ""s;
            __Vtask_uvm_report_warning__92__line = 0x000000d6U;
            __Vtask_uvm_report_warning__92__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
            __Vtask_uvm_report_warning__92__verbosity = 0U;
            __Vtask_uvm_report_warning__92__message = "Cannot backdoor-read an indirect data access register. Switching to frontdoor."s;
            __Vtask_uvm_report_warning__92__id = VL_CVT_PACK_STR_NN(
                                                                    ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__93__Vfuncout);
                    }(), __Vfunc_get_full_name__93__Vfuncout));
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__94__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__94__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__95__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__95__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__92__id, __Vtask_uvm_report_warning__92__message, __Vtask_uvm_report_warning__92__verbosity, __Vtask_uvm_report_warning__92__filename, __Vtask_uvm_report_warning__92__line, __Vtask_uvm_report_warning__92__context_name, (IData)(__Vtask_uvm_report_warning__92__report_enabled_checked));
        }
        path = 0U;
    }
    co_await Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__97__status, __Vtask_read__97__value, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_read__97__status;
    value = __Vtask_read__97__value;
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_poke(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98__Vfuncout;
    __Vfunc_uvm_report_enabled__98__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98__verbosity;
    __Vfunc_uvm_report_enabled__98__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__98__severity;
    __Vfunc_uvm_report_enabled__98__severity = 0;
    std::string __Vfunc_uvm_report_enabled__98__id;
    std::string __Vfunc_get_full_name__99__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__100__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__101__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__102__Vfuncout;
    __Vtask_uvm_report_enabled__102__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__103__id;
    std::string __Vtask_uvm_report_error__103__message;
    IData/*31:0*/ __Vtask_uvm_report_error__103__verbosity;
    __Vtask_uvm_report_error__103__verbosity = 0;
    std::string __Vtask_uvm_report_error__103__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__103__line;
    __Vtask_uvm_report_error__103__line = 0;
    std::string __Vtask_uvm_report_error__103__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__103__report_enabled_checked;
    __Vtask_uvm_report_error__103__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__104__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__98__id 
                        = VL_CVT_PACK_STR_NN(([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__99__Vfuncout);
                            }(), __Vfunc_get_full_name__99__Vfuncout));
                    __Vfunc_uvm_report_enabled__98__severity = 2U;
                    __Vfunc_uvm_report_enabled__98__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__100__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__100__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__101__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__101__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__98__verbosity, (IData)(__Vfunc_uvm_report_enabled__98__severity), __Vfunc_uvm_report_enabled__98__id, __Vtask_uvm_report_enabled__102__Vfuncout);
                    __Vfunc_uvm_report_enabled__98__Vfuncout 
                        = __Vtask_uvm_report_enabled__102__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__98__Vfuncout))) {
        __Vtask_uvm_report_error__103__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__103__context_name = ""s;
        __Vtask_uvm_report_error__103__line = 0x000000e4U;
        __Vtask_uvm_report_error__103__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__103__verbosity = 0U;
        __Vtask_uvm_report_error__103__message = "Cannot poke() an indirect data access register"s;
        __Vtask_uvm_report_error__103__id = VL_CVT_PACK_STR_NN(
                                                               ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__104__Vfuncout);
                }(), __Vfunc_get_full_name__104__Vfuncout));
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__105__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__105__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__106__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__103__id, __Vtask_uvm_report_error__103__message, __Vtask_uvm_report_error__103__verbosity, __Vtask_uvm_report_error__103__filename, __Vtask_uvm_report_error__103__line, __Vtask_uvm_report_error__103__context_name, (IData)(__Vtask_uvm_report_error__103__report_enabled_checked));
    }
    status = 1U;
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_peek(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__108__Vfuncout;
    __Vfunc_uvm_report_enabled__108__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__108__verbosity;
    __Vfunc_uvm_report_enabled__108__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__108__severity;
    __Vfunc_uvm_report_enabled__108__severity = 0;
    std::string __Vfunc_uvm_report_enabled__108__id;
    std::string __Vfunc_get_full_name__109__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__112__Vfuncout;
    __Vtask_uvm_report_enabled__112__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__113__id;
    std::string __Vtask_uvm_report_error__113__message;
    IData/*31:0*/ __Vtask_uvm_report_error__113__verbosity;
    __Vtask_uvm_report_error__113__verbosity = 0;
    std::string __Vtask_uvm_report_error__113__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__113__line;
    __Vtask_uvm_report_error__113__line = 0;
    std::string __Vtask_uvm_report_error__113__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__113__report_enabled_checked;
    __Vtask_uvm_report_error__113__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__114__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__115__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__116__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__108__id 
                        = VL_CVT_PACK_STR_NN(([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__109__Vfuncout);
                            }(), __Vfunc_get_full_name__109__Vfuncout));
                    __Vfunc_uvm_report_enabled__108__severity = 2U;
                    __Vfunc_uvm_report_enabled__108__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__110__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__110__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__111__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__108__verbosity, (IData)(__Vfunc_uvm_report_enabled__108__severity), __Vfunc_uvm_report_enabled__108__id, __Vtask_uvm_report_enabled__112__Vfuncout);
                    __Vfunc_uvm_report_enabled__108__Vfuncout 
                        = __Vtask_uvm_report_enabled__112__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__108__Vfuncout))) {
        __Vtask_uvm_report_error__113__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__113__context_name = ""s;
        __Vtask_uvm_report_error__113__line = 0x000000efU;
        __Vtask_uvm_report_error__113__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__113__verbosity = 0U;
        __Vtask_uvm_report_error__113__message = "Cannot peek() an indirect data access register"s;
        __Vtask_uvm_report_error__113__id = VL_CVT_PACK_STR_NN(
                                                               ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__114__Vfuncout);
                }(), __Vfunc_get_full_name__114__Vfuncout));
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__115__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__115__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__116__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__116__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__113__id, __Vtask_uvm_report_error__113__message, __Vtask_uvm_report_error__113__verbosity, __Vtask_uvm_report_error__113__filename, __Vtask_uvm_report_error__113__line, __Vtask_uvm_report_error__113__context_name, (IData)(__Vtask_uvm_report_error__113__report_enabled_checked));
    }
    status = 1U;
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_update(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_update\n"); );
    // Body
    VL_KEEP_THIS;
    status = 0U;
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_mirror(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_mirror\n"); );
    // Body
    VL_KEEP_THIS;
    status = 0U;
    co_return;}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__119__Vfuncout;
    __Vfunc___VBasicRand__119__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__119__Vfuncout);
            }(), __Vfunc___VBasicRand__119__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_indirect_data::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_idx:" + VL_TO_STRING(__PVT__m_idx);
    out += ", m_tbl:" + VL_TO_STRING(__PVT__m_tbl);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg::to_string_middle();
    return (out);
}
