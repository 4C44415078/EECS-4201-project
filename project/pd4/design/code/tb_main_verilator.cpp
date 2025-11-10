#include "verilated.h"
#include "verilated_vcd_c.h"

// Made with generative AI.
// Replace with the correct top-level module name passed during build
#define STRINGIFY(x) #x
#define INCLUDE_FILE(x) STRINGIFY(x.h)
#include INCLUDE_FILE(VL_TOP)

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);


    VL_TOP* tb = new VL_TOP;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    tb->trace(tfp, 99);
    tfp->open(argv[1] ? argv[1] : "wave.vcd");

    while (!Verilated::gotFinish()) {
        tb->eval();
        tfp->dump(Verilated::time());
        Verilated::timeInc(1);  // Simulated time steps
    }

    tfp->close();
    delete tb;
    return 0;
}