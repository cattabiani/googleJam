# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/katta/workspace/googleJam/stableNeighbors

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/katta/workspace/googleJam/stableNeighbors/build

# Include any dependencies generated for this target.
include CMakeFiles/stableneighbors.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stableneighbors.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stableneighbors.dir/flags.make

CMakeFiles/stableneighbors.dir/main.cpp.o: CMakeFiles/stableneighbors.dir/flags.make
CMakeFiles/stableneighbors.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/katta/workspace/googleJam/stableNeighbors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stableneighbors.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stableneighbors.dir/main.cpp.o -c /home/katta/workspace/googleJam/stableNeighbors/main.cpp

CMakeFiles/stableneighbors.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stableneighbors.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/katta/workspace/googleJam/stableNeighbors/main.cpp > CMakeFiles/stableneighbors.dir/main.cpp.i

CMakeFiles/stableneighbors.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stableneighbors.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/katta/workspace/googleJam/stableNeighbors/main.cpp -o CMakeFiles/stableneighbors.dir/main.cpp.s

CMakeFiles/stableneighbors.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/stableneighbors.dir/main.cpp.o.requires

CMakeFiles/stableneighbors.dir/main.cpp.o.provides: CMakeFiles/stableneighbors.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/stableneighbors.dir/build.make CMakeFiles/stableneighbors.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/stableneighbors.dir/main.cpp.o.provides

CMakeFiles/stableneighbors.dir/main.cpp.o.provides.build: CMakeFiles/stableneighbors.dir/main.cpp.o


# Object files for target stableneighbors
stableneighbors_OBJECTS = \
"CMakeFiles/stableneighbors.dir/main.cpp.o"

# External object files for target stableneighbors
stableneighbors_EXTERNAL_OBJECTS =

stableneighbors: CMakeFiles/stableneighbors.dir/main.cpp.o
stableneighbors: CMakeFiles/stableneighbors.dir/build.make
stableneighbors: CMakeFiles/stableneighbors.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/katta/workspace/googleJam/stableNeighbors/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stableneighbors"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stableneighbors.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stableneighbors.dir/build: stableneighbors

.PHONY : CMakeFiles/stableneighbors.dir/build

CMakeFiles/stableneighbors.dir/requires: CMakeFiles/stableneighbors.dir/main.cpp.o.requires

.PHONY : CMakeFiles/stableneighbors.dir/requires

CMakeFiles/stableneighbors.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stableneighbors.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stableneighbors.dir/clean

CMakeFiles/stableneighbors.dir/depend:
	cd /home/katta/workspace/googleJam/stableNeighbors/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/katta/workspace/googleJam/stableNeighbors /home/katta/workspace/googleJam/stableNeighbors /home/katta/workspace/googleJam/stableNeighbors/build /home/katta/workspace/googleJam/stableNeighbors/build /home/katta/workspace/googleJam/stableNeighbors/build/CMakeFiles/stableneighbors.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stableneighbors.dir/depend

