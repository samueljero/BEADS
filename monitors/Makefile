include Makefile.in

TARGETS = procmon

all: $(BUILD_DIR) $(TARGETS)

debug: G++ += -g -D_DEBUG
debug: clean all

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

procmon: $(BUILD_DIR)/procmon.o
	$(G++) $(OPT_FLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(SRC_DIR)/%.h
	$(G++) $(OPT_FLAGS) -o $@ -c $<

clean:
	rm -rfv $(TARGETS) $(BUILD_DIR)/
