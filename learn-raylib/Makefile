CC = gcc
CFLAGS = -Iinclude
LDFLAGS = -Llib -lraylib -lraygui -lgdi32 -lwinmm 

SRC_DIR = src
BUILD_DIR = build

# Sources and output
SRC = $(SRC_DIR)/main.c
OBJ = $(BUILD_DIR)/main.o
OUT = $(BUILD_DIR)/learn-raylib.exe

# Default target
all: $(OUT)

# Link the object files into the final executable
$(OUT): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $(OUT)

# Compile the source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -rf $(BUILD_DIR)
