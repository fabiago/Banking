# Compiler and flags
CXX      := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -g3 -Og -fno-omit-frame-pointer
INCLUDES := -Iinclude

# Directories
SRC_DIR  := src
OBJ_DIR  := obj

# Files
SRCS     := $(wildcard $(SRC_DIR)/*.cpp)
OBJS     := $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))
TARGET   := banking_app

# Default target
all: $(OBJ_DIR) $(TARGET)

# Create obj directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Link
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Compile each .cpp to .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Clean build artifacts
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

# Rebuild from scratch
rebuild: clean all

.PHONY: all clean rebuild