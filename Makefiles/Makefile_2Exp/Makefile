# Compiler
CC = gcc

# Flags
CFLAGS = -Wall -Wextra -g

# Output
TARGET = calc.exe

# Source files
SRC = main.c calculator.c operations.c

# Object files
OBJ = $(SRC:.c=.o)

# Default target
all: $(TARGET)

# Link stage
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Compile rule
%.o: %.c calculator.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	del /Q *.o $(TARGET)

.PHONY: all clean