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
CMAKE_SOURCE_DIR = /home/katta/workspace/googleJam/minesweeperMaster

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/katta/workspace/googleJam/minesweeperMaster/build

# Include any dependencies generated for this target.
include CMakeFiles/minesweepermaster.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/minesweepermaster.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/minesweepermaster.dir/flags.make

CMakeFiles/minesweepermaster.dir/main.cpp.o: CMakeFiles/minesweepermaster.dir/flags.make
CMakeFiles/minesweepermaster.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/katta/workspace/googleJam/minesweeperMaster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/minesweepermaster.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/minesweepermaster.dir/main.cpp.o -c /home/katta/workspace/googleJam/minesweeperMaster/main.cpp

CMakeFiles/minesweepermaster.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/minesweepermaster.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/katta/workspace/googleJam/minesweeperMaster/main.cpp > CMakeFiles/minesweepermaster.dir/main.cpp.i

CMakeFiles/minesweepermaster.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/minesweepermaster.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/katta/workspace/googleJam/minesweeperMaster/main.cpp -o CMakeFiles/minesweepermaster.dir/main.cpp.s

CMakeFiles/minesweepermaster.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/minesweepermaster.dir/main.cpp.o.requires

CMakeFiles/minesweepermaster.dir/main.cpp.o.provides: CMakeFiles/minesweepermaster.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/minesweepermaster.dir/build.make CMakeFiles/minesweepermaster.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/minesweepermaster.dir/main.cpp.o.provides

CMakeFiles/minesweepermaster.dir/main.cpp.o.provides.build: CMakeFiles/minesweepermaster.dir/main.cpp.o


# Object files for target minesweepermaster
minesweepermaster_OBJECTS = \
"CMakeFiles/minesweepermaster.dir/main.cpp.o"

# External object files for target minesweepermaster
minesweepermaster_EXTERNAL_OBJECTS =

minesweepermaster: CMakeFiles/minesweepermaster.dir/main.cpp.o
minesweepermaster: CMakeFiles/minesweepermaster.dir/build.make
minesweepermaster: CMakeFiles/minesweepermaster.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/katta/workspace/googleJam/minesweeperMaster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable minesweepermaster"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/minesweepermaster.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/minesweepermaster.dir/build: minesweepermaster

.PHONY : CMakeFiles/minesweepermaster.dir/build

CMakeFiles/minesweepermaster.dir/requires: CMakeFiles/minesweepermaster.dir/main.cpp.o.requires

.PHONY : CMakeFiles/minesweepermaster.dir/requires

CMakeFiles/minesweepermaster.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/minesweepermaster.dir/cmake_clean.cmake
.PHONY : CMakeFiles/minesweepermaster.dir/clean

CMakeFiles/minesweepermaster.dir/depend:
	cd /home/katta/workspace/googleJam/minesweeperMaster/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/katta/workspace/googleJam/minesweeperMaster /home/katta/workspace/googleJam/minesweeperMaster /home/katta/workspace/googleJam/minesweeperMaster/build /home/katta/workspace/googleJam/minesweeperMaster/build /home/katta/workspace/googleJam/minesweeperMaster/build/CMakeFiles/minesweepermaster.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/minesweepermaster.dir/depend

