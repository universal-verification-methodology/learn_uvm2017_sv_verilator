// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vinterface_example__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vinterface_example::Vinterface_example(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vinterface_example__Syms(contextp(), _vcname__, this)}
    , __PVT__interface_example__DOT__bus{vlSymsp->TOP.__PVT__interface_example__DOT__bus}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vinterface_example::Vinterface_example(const char* _vcname__)
    : Vinterface_example(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vinterface_example::~Vinterface_example() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vinterface_example___024root___eval_debug_assertions(Vinterface_example___024root* vlSelf);
#endif  // VL_DEBUG
void Vinterface_example___024root___eval_static(Vinterface_example___024root* vlSelf);
void Vinterface_example___024root___eval_initial(Vinterface_example___024root* vlSelf);
void Vinterface_example___024root___eval_settle(Vinterface_example___024root* vlSelf);
void Vinterface_example___024root___eval(Vinterface_example___024root* vlSelf);

void Vinterface_example::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vinterface_example::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vinterface_example___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vinterface_example___024root___eval_static(&(vlSymsp->TOP));
        Vinterface_example___024root___eval_initial(&(vlSymsp->TOP));
        Vinterface_example___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vinterface_example___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vinterface_example::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vinterface_example::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vinterface_example::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vinterface_example___024root___eval_final(Vinterface_example___024root* vlSelf);

VL_ATTR_COLD void Vinterface_example::final() {
    Vinterface_example___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vinterface_example::hierName() const { return vlSymsp->name(); }
const char* Vinterface_example::modelName() const { return "Vinterface_example"; }
unsigned Vinterface_example::threads() const { return 1; }
void Vinterface_example::prepareClone() const { contextp()->prepareClone(); }
void Vinterface_example::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vinterface_example::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vinterface_example___024root__trace_decl_types(VerilatedVcd* tracep);

void Vinterface_example___024root__trace_init_top(Vinterface_example___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vinterface_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinterface_example___024root*>(voidSelf);
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vinterface_example___024root__trace_decl_types(tracep);
    Vinterface_example___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vinterface_example___024root__trace_register(Vinterface_example___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vinterface_example::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vinterface_example::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vinterface_example___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
