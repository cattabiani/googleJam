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
CMAKE_SOURCE_DIR = /home/katta/workspace/googleJam/slides

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/katta/workspace/googleJam/slides/build

# Include any dependencies generated for this target.
include CMakeFiles/slides.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/slides.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/slides.dir/flags.make

CMakeFiles/slides.dir/main.cpp.o: CMakeFiles/slides.dir/flags.make
CMakeFiles/slides.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/katta/workspace/googleJam/slides/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/slides.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/slides.dir/main.cpp.o -c /home/katta/workspace/googleJam/slides/main.cpp

CMakeFiles/slides.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/slides.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/katta/workspace/googleJam/slides/main.cpp > CMakeFiles/slides.dir/main.cpp.i

CMakeFiles/slides.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/slides.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/katta/workspace/googleJam/slides/main.cpp -o CMakeFiles/slides.dir/main.cpp.s

CMakeFiles/slides.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/slides.dir/main.cpp.o.requires

CMakeFiles/slides.dir/main.cpp.o.provides: CMakeFiles/slides.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/slides.dir/build.make CMakeFiles/slides.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/slides.dir/main.cpp.o.provides

CMakeFiles/slides.dir/main.cpp.o.provides.build: CMakeFiles/slides.dir/main.cpp.o


# Object files for target slides
slides_OBJECTS = \
"CMakeFiles/slides.dir/main.cpp.o"

# External object files for target slides
slides_EXTERNAL_OBJECTS =

slides: CMakeFiles/slides.dir/main.cpp.o
slides: CMakeFiles/slides.dir/build.make
slides: CMakeFiles/slides.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/katta/workspace/googleJam/slides/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable slides"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/slides.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/slides.dir/build: slides

.PHONY : CMakeFiles/slides.dir/build

CMakeFiles/slides.dir/requires: CMakeFiles/slides.dir/main.cpp.o.requires

.PHONY : CMakeFiles/slides.dir/requires

CMakeFiles/slides.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/slides.dir/cmake_clean.cmake
.PHONY : CMakeFiles/slides.dir/clean

CMakeFiles/slides.dir/depend:
	cd /home/katta/workspace/googleJam/slides/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/katta/workspace/googleJam/slides /home/katta/workspace/googleJam/slides /home/katta/workspace/googleJam/slides/build /home/katta/workspace/googleJam/slides/build /home/katta/workspace/googleJam/slides/build/CMakeFiles/slides.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/slides.dir/depend

