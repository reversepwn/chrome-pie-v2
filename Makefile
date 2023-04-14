CFLAGS := -Wall -std=c99
COMPILE := @$(CC) $(CFLAGS)
BUILD_DIR := build
SRC_DIR := src

PIE_OUT := $(BUILD_DIR)/pie

all: $(BUILD_DIR) $(PIE_OUT)
	@echo "Succesfully compiled and build pie, now install it (make install)"

$(BUILD_DIR):
	mkdir $(BUILD_DIR) || true

$(PIE_OUT): $(SRC_DIR)/main.c
	@echo cc -o $@ $<
	$(COMPILE) -o $@ $<

.PHONY:
install:
	install $(PIE_OUT) /usr/local/bin/
	echo "0.1" > /usr/local/bin/.piever

.PHONY:
update:
	git pull
	make uninstall
	make install
	make clean

# ^ i really don't think version tracking should be done this way, but i'm
# just translating install.sh verbatim.

.PHONY:
uninstall:
	rm -f build/*
	rmdir build
	rm -f /usr/local/bin/pie
	rm -f /usr/local/bin/.piever

.PHONY:
clean:
	rm -rf $(BUILD_DIR)
