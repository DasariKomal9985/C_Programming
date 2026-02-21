# -----------------------------
# Compiler to use
# -----------------------------
CC = gcc
# CC stores the compiler name.
# Instead of writing gcc everywhere, we use $(CC).
# If you want to change compiler later, modify only this line.


# -----------------------------
# Compiler flags
# -----------------------------
CFLAGS = -Wall -Wextra -g
# -Wall   → enable common warnings
# -Wextra → enable additional warnings
# -g      → include debugging information
# These flags are used during compilation stage.


# -----------------------------
# Final executable name
# -----------------------------
TARGET = final.exe
# This is the name of the output executable.
# On Windows it must be .exe


# -----------------------------
# Object files
# -----------------------------
OBJ = main.o hello.o add.o
# These are the object files generated
# after compiling each .c file.
# They are used in the linking stage.


# -----------------------------
# Default target
# -----------------------------
all: $(TARGET)
# When you run:
#    mingw32-make
# make builds the first target.
# Here the first target is "all".
# "all" depends on $(TARGET),
# so make tries to build final.exe.


# -----------------------------
# Linking stage
# -----------------------------
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)
# To build final.exe, we need:
# main.o hello.o add.o
#
# If they do not exist or are outdated,
# make will rebuild them first.
#
# This command links all object files
# into one executable.


# -----------------------------
# Compilation rules
# -----------------------------
main.o: main.c header.h
	$(CC) $(CFLAGS) -c main.c
# To create main.o:
# - It depends on main.c and header.h
# - If either file changes, main.o rebuilds
# - -c means compile only (no linking)


hello.o: hello.c header.h
	$(CC) $(CFLAGS) -c hello.c
# Same logic:
# If hello.c or header.h changes,
# hello.o is recompiled.


add.o: add.c header.h
	$(CC) $(CFLAGS) -c add.c
# If add.c or header.h changes,
# add.o is recompiled.


# -----------------------------
# Clean rule (Windows)
# -----------------------------
clean:
	del /Q *.o $(TARGET)
# When you run:
#    mingw32-make clean
#
# It deletes:
# - all object files
# - the final executable
#
# /Q means quiet (no confirmation).


# -----------------------------
# Phony targets
# -----------------------------
.PHONY: all clean
# Tells make that "all" and "clean"
# are not actual files.
# Prevents conflicts if files with
# these names exist in directory.