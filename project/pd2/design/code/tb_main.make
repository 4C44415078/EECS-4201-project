// Made with generative AI.

# Top-level Makefile

VERILATOR = verilator
CPP_FILE = tb_main_verilator.cpp
TRACE_FLAGS = --trace --timing

# Automatically find all *_tb.sv files (testbenches)
TESTBENCH_SV_FILES := $(wildcard *_tb.sv)
# Strip .sv and get just the base names (e.g., igen_tb)
TESTBENCH_NAMES := $(basename $(TESTBENCH_SV_FILES))
# Object directory
OBJ_DIR = obj_dir

# Rule to build all testbenches
.PHONY: all
all: $(TESTBENCH_NAMES)

# Generic rule for building each testbench
$(TESTBENCH_NAMES):
	@echo "Building testbench: $@"
	$(VERILATOR) -sv --cc $@.sv igen.sv control.sv decode.sv --exe $(CPP_FILE) \
		--top-module $@ \
		-CFLAGS "-DVL_TOP=V$@" \
		--build $(TRACE_FLAGS)
	@echo "Built ./$(OBJ_DIR)/V$@"

# Optional: run a simulation and generate waveform
run-%: %
	@echo "Running testbench: $*"
	./$(OBJ_DIR)/V$* $*.vcd

# Clean build artifacts
.PHONY: clean
clean:
	rm -rf $(OBJ_DIR) *.vcd

