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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/schnorr/dev/akypuera/librastro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/schnorr/dev/akypuera/librastro/b

# Include any dependencies generated for this target.
include CMakeFiles/rastro_generate.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rastro_generate.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rastro_generate.dir/flags.make

CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o: CMakeFiles/rastro_generate.dir/flags.make
CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o: ../src/generate/rst_generate.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/schnorr/dev/akypuera/librastro/b/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o   -c /home/schnorr/dev/akypuera/librastro/src/generate/rst_generate.c

CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.i"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/schnorr/dev/akypuera/librastro/src/generate/rst_generate.c > CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.i

CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.s"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/schnorr/dev/akypuera/librastro/src/generate/rst_generate.c -o CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.s

CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o.requires:
.PHONY : CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o.requires

CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o.provides: CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o.requires
	$(MAKE) -f CMakeFiles/rastro_generate.dir/build.make CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o.provides.build
.PHONY : CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o.provides

CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o.provides.build: CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o

# Object files for target rastro_generate
rastro_generate_OBJECTS = \
"CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o"

# External object files for target rastro_generate
rastro_generate_EXTERNAL_OBJECTS =

rastro_generate: CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o
rastro_generate: librastro.so
rastro_generate: CMakeFiles/rastro_generate.dir/build.make
rastro_generate: CMakeFiles/rastro_generate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable rastro_generate"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rastro_generate.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rastro_generate.dir/build: rastro_generate
.PHONY : CMakeFiles/rastro_generate.dir/build

CMakeFiles/rastro_generate.dir/requires: CMakeFiles/rastro_generate.dir/src/generate/rst_generate.c.o.requires
.PHONY : CMakeFiles/rastro_generate.dir/requires

CMakeFiles/rastro_generate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rastro_generate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rastro_generate.dir/clean

CMakeFiles/rastro_generate.dir/depend:
	cd /home/schnorr/dev/akypuera/librastro/b && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/schnorr/dev/akypuera/librastro /home/schnorr/dev/akypuera/librastro /home/schnorr/dev/akypuera/librastro/b /home/schnorr/dev/akypuera/librastro/b /home/schnorr/dev/akypuera/librastro/b/CMakeFiles/rastro_generate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rastro_generate.dir/depend

