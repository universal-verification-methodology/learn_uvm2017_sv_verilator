// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vapb_slave__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vapb_slave::Vapb_slave(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vapb_slave__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , psel{vlSymsp->TOP.psel}
    , penable{vlSymsp->TOP.penable}
    , pwrite{vlSymsp->TOP.pwrite}
    , pready{vlSymsp->TOP.pready}
    , paddr{vlSymsp->TOP.paddr}
    , pwdata{vlSymsp->TOP.pwdata}
    , prdata{vlSymsp->TOP.prdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vapb_slave::Vapb_slave(const char* _vcname__)
    : Vapb_slave(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vapb_slave::~Vapb_slave() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vapb_slave___024root___eval_debug_assertions(Vapb_slave___024root* vlSelf);
#endif  // VL_DEBUG
void Vapb_slave___024root___eval_static(Vapb_slave___024root* vlSelf);
void Vapb_slave___024root___eval_initial(Vapb_slave___024root* vlSelf);
void Vapb_slave___024root___eval_settle(Vapb_slave___024root* vlSelf);
void Vapb_slave___024root___eval(Vapb_slave___024root* vlSelf);

void Vapb_slave::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb_slave::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vapb_slave___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vapb_slave___024root___eval_static(&(vlSymsp->TOP));
        Vapb_slave___024root___eval_initial(&(vlSymsp->TOP));
        Vapb_slave___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vapb_slave___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vapb_slave::eventsPending() { return false; }

uint64_t Vapb_slave::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vapb_slave::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vapb_slave___024root___eval_final(Vapb_slave___024root* vlSelf);

VL_ATTR_COLD void Vapb_slave::final() {
    Vapb_slave___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vapb_slave::hierName() const { return vlSymsp->name(); }
const char* Vapb_slave::modelName() const { return "Vapb_slave"; }
unsigned Vapb_slave::threads() const { return 1; }
void Vapb_slave::prepareClone() const { contextp()->prepareClone(); }
void Vapb_slave::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vapb_slave::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vapb_slave___024root__trace_decl_types(VerilatedVcd* tracep);

void Vapb_slave___024root__trace_init_top(Vapb_slave___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vapb_slave___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_slave___024root*>(voidSelf);
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vapb_slave___024root__trace_decl_types(tracep);
    Vapb_slave___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vapb_slave___024root__trace_register(Vapb_slave___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vapb_slave::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vapb_slave::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vapb_slave___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
