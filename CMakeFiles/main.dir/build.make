# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/src/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/main.cpp.o: src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kanit/convnet/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/main.cpp.o -c /home/kanit/convnet/src/main.cpp

CMakeFiles/main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kanit/convnet/src/main.cpp > CMakeFiles/main.dir/src/main.cpp.i

CMakeFiles/main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kanit/convnet/src/main.cpp -o CMakeFiles/main.dir/src/main.cpp.s

CMakeFiles/main.dir/src/main.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/src/main.cpp.o.requires

CMakeFiles/main.dir/src/main.cpp.o.provides: CMakeFiles/main.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/src/main.cpp.o.provides

CMakeFiles/main.dir/src/main.cpp.o.provides.build: CMakeFiles/main.dir/src/main.cpp.o

CMakeFiles/main.dir/src/proto/data.pb.cc.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/proto/data.pb.cc.o: src/proto/data.pb.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kanit/convnet/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/src/proto/data.pb.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/proto/data.pb.cc.o -c /home/kanit/convnet/src/proto/data.pb.cc

CMakeFiles/main.dir/src/proto/data.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/proto/data.pb.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kanit/convnet/src/proto/data.pb.cc > CMakeFiles/main.dir/src/proto/data.pb.cc.i

CMakeFiles/main.dir/src/proto/data.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/proto/data.pb.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kanit/convnet/src/proto/data.pb.cc -o CMakeFiles/main.dir/src/proto/data.pb.cc.s

CMakeFiles/main.dir/src/proto/data.pb.cc.o.requires:
.PHONY : CMakeFiles/main.dir/src/proto/data.pb.cc.o.requires

CMakeFiles/main.dir/src/proto/data.pb.cc.o.provides: CMakeFiles/main.dir/src/proto/data.pb.cc.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/proto/data.pb.cc.o.provides.build
.PHONY : CMakeFiles/main.dir/src/proto/data.pb.cc.o.provides

CMakeFiles/main.dir/src/proto/data.pb.cc.o.provides.build: CMakeFiles/main.dir/src/proto/data.pb.cc.o

CMakeFiles/main.dir/src/utils.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/utils.cpp.o: src/utils.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kanit/convnet/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/src/utils.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/utils.cpp.o -c /home/kanit/convnet/src/utils.cpp

CMakeFiles/main.dir/src/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/utils.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kanit/convnet/src/utils.cpp > CMakeFiles/main.dir/src/utils.cpp.i

CMakeFiles/main.dir/src/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/utils.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kanit/convnet/src/utils.cpp -o CMakeFiles/main.dir/src/utils.cpp.s

CMakeFiles/main.dir/src/utils.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/src/utils.cpp.o.requires

CMakeFiles/main.dir/src/utils.cpp.o.provides: CMakeFiles/main.dir/src/utils.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/utils.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/src/utils.cpp.o.provides

CMakeFiles/main.dir/src/utils.cpp.o.provides.build: CMakeFiles/main.dir/src/utils.cpp.o

CMakeFiles/main.dir/src/Db.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Db.cpp.o: src/Db.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/kanit/convnet/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/src/Db.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/Db.cpp.o -c /home/kanit/convnet/src/Db.cpp

CMakeFiles/main.dir/src/Db.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Db.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/kanit/convnet/src/Db.cpp > CMakeFiles/main.dir/src/Db.cpp.i

CMakeFiles/main.dir/src/Db.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Db.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/kanit/convnet/src/Db.cpp -o CMakeFiles/main.dir/src/Db.cpp.s

CMakeFiles/main.dir/src/Db.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/src/Db.cpp.o.requires

CMakeFiles/main.dir/src/Db.cpp.o.provides: CMakeFiles/main.dir/src/Db.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/src/Db.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/src/Db.cpp.o.provides

CMakeFiles/main.dir/src/Db.cpp.o.provides.build: CMakeFiles/main.dir/src/Db.cpp.o

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/main.cpp.o" \
"CMakeFiles/main.dir/src/proto/data.pb.cc.o" \
"CMakeFiles/main.dir/src/utils.cpp.o" \
"CMakeFiles/main.dir/src/Db.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/src/main.cpp.o
main: CMakeFiles/main.dir/src/proto/data.pb.cc.o
main: CMakeFiles/main.dir/src/utils.cpp.o
main: CMakeFiles/main.dir/src/Db.cpp.o
main: CMakeFiles/main.dir/build.make
main: /usr/lib/x86_64-linux-gnu/liblmdb.so
main: /home/kanit/build/boost_1_59_0/stage/lib/libboost_system.so
main: /home/kanit/build/boost_1_59_0/stage/lib/libboost_filesystem.so
main: /usr/local/lib/libopencv_videostab.so.3.1.0
main: /usr/local/lib/libopencv_videoio.so.3.1.0
main: /usr/local/lib/libopencv_video.so.3.1.0
main: /usr/local/lib/libopencv_superres.so.3.1.0
main: /usr/local/lib/libopencv_stitching.so.3.1.0
main: /usr/local/lib/libopencv_shape.so.3.1.0
main: /usr/local/lib/libopencv_photo.so.3.1.0
main: /usr/local/lib/libopencv_objdetect.so.3.1.0
main: /usr/local/lib/libopencv_ml.so.3.1.0
main: /usr/local/lib/libopencv_imgproc.so.3.1.0
main: /usr/local/lib/libopencv_imgcodecs.so.3.1.0
main: /usr/local/lib/libopencv_highgui.so.3.1.0
main: /usr/local/lib/libopencv_flann.so.3.1.0
main: /usr/local/lib/libopencv_features2d.so.3.1.0
main: /usr/local/lib/libopencv_cudev.so.3.1.0
main: /usr/local/lib/libopencv_cudawarping.so.3.1.0
main: /usr/local/lib/libopencv_cudastereo.so.3.1.0
main: /usr/local/lib/libopencv_cudaoptflow.so.3.1.0
main: /usr/local/lib/libopencv_cudaobjdetect.so.3.1.0
main: /usr/local/lib/libopencv_cudalegacy.so.3.1.0
main: /usr/local/lib/libopencv_cudaimgproc.so.3.1.0
main: /usr/local/lib/libopencv_cudafilters.so.3.1.0
main: /usr/local/lib/libopencv_cudafeatures2d.so.3.1.0
main: /usr/local/lib/libopencv_cudacodec.so.3.1.0
main: /usr/local/lib/libopencv_cudabgsegm.so.3.1.0
main: /usr/local/lib/libopencv_cudaarithm.so.3.1.0
main: /usr/local/lib/libopencv_core.so.3.1.0
main: /usr/local/lib/libopencv_calib3d.so.3.1.0
main: /usr/local/lib/libprotobuf.so
main: /usr/local/lib/libopencv_cudawarping.so.3.1.0
main: /usr/local/lib/libopencv_objdetect.so.3.1.0
main: /usr/local/lib/libopencv_cudafilters.so.3.1.0
main: /usr/local/lib/libopencv_cudaarithm.so.3.1.0
main: /usr/local/lib/libopencv_features2d.so.3.1.0
main: /usr/local/lib/libopencv_ml.so.3.1.0
main: /usr/local/lib/libopencv_highgui.so.3.1.0
main: /usr/local/lib/libopencv_videoio.so.3.1.0
main: /usr/local/lib/libopencv_imgcodecs.so.3.1.0
main: /usr/local/lib/libopencv_flann.so.3.1.0
main: /usr/local/lib/libopencv_video.so.3.1.0
main: /usr/local/lib/libopencv_imgproc.so.3.1.0
main: /usr/local/lib/libopencv_core.so.3.1.0
main: /usr/local/lib/libopencv_cudev.so.3.1.0
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/main.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/proto/data.pb.cc.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/utils.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/src/Db.cpp.o.requires
.PHONY : CMakeFiles/main.dir/requires

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/kanit/convnet && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kanit/convnet /home/kanit/convnet /home/kanit/convnet /home/kanit/convnet /home/kanit/convnet/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

