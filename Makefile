# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kanit/convnet

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kanit/convnet

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/kanit/convnet/CMakeFiles /home/kanit/convnet/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/kanit/convnet/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named create_lmdb

# Build rule for target.
create_lmdb: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 create_lmdb
.PHONY : create_lmdb

# fast build rule for target.
create_lmdb/fast:
	$(MAKE) -f CMakeFiles/create_lmdb.dir/build.make CMakeFiles/create_lmdb.dir/build
.PHONY : create_lmdb/fast

#=============================================================================
# Target rules for targets named main

# Build rule for target.
main: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 main
.PHONY : main

# fast build rule for target.
main/fast:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/build
.PHONY : main/fast

src/Data.o: src/Data.cpp.o
.PHONY : src/Data.o

# target to build an object file
src/Data.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Data.cpp.o
.PHONY : src/Data.cpp.o

src/Data.i: src/Data.cpp.i
.PHONY : src/Data.i

# target to preprocess a source file
src/Data.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Data.cpp.i
.PHONY : src/Data.cpp.i

src/Data.s: src/Data.cpp.s
.PHONY : src/Data.s

# target to generate assembly for a file
src/Data.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Data.cpp.s
.PHONY : src/Data.cpp.s

src/Datum.o: src/Datum.cpp.o
.PHONY : src/Datum.o

# target to build an object file
src/Datum.cpp.o:
	$(MAKE) -f CMakeFiles/create_lmdb.dir/build.make CMakeFiles/create_lmdb.dir/src/Datum.cpp.o
.PHONY : src/Datum.cpp.o

src/Datum.i: src/Datum.cpp.i
.PHONY : src/Datum.i

# target to preprocess a source file
src/Datum.cpp.i:
	$(MAKE) -f CMakeFiles/create_lmdb.dir/build.make CMakeFiles/create_lmdb.dir/src/Datum.cpp.i
.PHONY : src/Datum.cpp.i

src/Datum.s: src/Datum.cpp.s
.PHONY : src/Datum.s

# target to generate assembly for a file
src/Datum.cpp.s:
	$(MAKE) -f CMakeFiles/create_lmdb.dir/build.make CMakeFiles/create_lmdb.dir/src/Datum.cpp.s
.PHONY : src/Datum.cpp.s

src/create_lmdb.o: src/create_lmdb.cpp.o
.PHONY : src/create_lmdb.o

# target to build an object file
src/create_lmdb.cpp.o:
	$(MAKE) -f CMakeFiles/create_lmdb.dir/build.make CMakeFiles/create_lmdb.dir/src/create_lmdb.cpp.o
.PHONY : src/create_lmdb.cpp.o

src/create_lmdb.i: src/create_lmdb.cpp.i
.PHONY : src/create_lmdb.i

# target to preprocess a source file
src/create_lmdb.cpp.i:
	$(MAKE) -f CMakeFiles/create_lmdb.dir/build.make CMakeFiles/create_lmdb.dir/src/create_lmdb.cpp.i
.PHONY : src/create_lmdb.cpp.i

src/create_lmdb.s: src/create_lmdb.cpp.s
.PHONY : src/create_lmdb.s

# target to generate assembly for a file
src/create_lmdb.cpp.s:
	$(MAKE) -f CMakeFiles/create_lmdb.dir/build.make CMakeFiles/create_lmdb.dir/src/create_lmdb.cpp.s
.PHONY : src/create_lmdb.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/utils.o: src/utils.cpp.o
.PHONY : src/utils.o

# target to build an object file
src/utils.cpp.o:
	$(MAKE) -f CMakeFiles/create_lmdb.dir/build.make CMakeFiles/create_lmdb.dir/src/utils.cpp.o
.PHONY : src/utils.cpp.o

src/utils.i: src/utils.cpp.i
.PHONY : src/utils.i

# target to preprocess a source file
src/utils.cpp.i:
	$(MAKE) -f CMakeFiles/create_lmdb.dir/build.make CMakeFiles/create_lmdb.dir/src/utils.cpp.i
.PHONY : src/utils.cpp.i

src/utils.s: src/utils.cpp.s
.PHONY : src/utils.s

# target to generate assembly for a file
src/utils.cpp.s:
	$(MAKE) -f CMakeFiles/create_lmdb.dir/build.make CMakeFiles/create_lmdb.dir/src/utils.cpp.s
.PHONY : src/utils.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... create_lmdb"
	@echo "... edit_cache"
	@echo "... main"
	@echo "... rebuild_cache"
	@echo "... src/Data.o"
	@echo "... src/Data.i"
	@echo "... src/Data.s"
	@echo "... src/Datum.o"
	@echo "... src/Datum.i"
	@echo "... src/Datum.s"
	@echo "... src/create_lmdb.o"
	@echo "... src/create_lmdb.i"
	@echo "... src/create_lmdb.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/utils.o"
	@echo "... src/utils.i"
	@echo "... src/utils.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

