# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /opt/clion-2020.1.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2020.1.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/The_C_Programming_language_2e.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/The_C_Programming_language_2e.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/The_C_Programming_language_2e.dir/flags.make

CMakeFiles/The_C_Programming_language_2e.dir/chapter_2/bitcount.c.o: CMakeFiles/The_C_Programming_language_2e.dir/flags.make
CMakeFiles/The_C_Programming_language_2e.dir/chapter_2/bitcount.c.o: ../chapter_2/bitcount.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/The_C_Programming_language_2e.dir/chapter_2/bitcount.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/The_C_Programming_language_2e.dir/chapter_2/bitcount.c.o   -c /home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e/chapter_2/bitcount.c

CMakeFiles/The_C_Programming_language_2e.dir/chapter_2/bitcount.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/The_C_Programming_language_2e.dir/chapter_2/bitcount.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e/chapter_2/bitcount.c > CMakeFiles/The_C_Programming_language_2e.dir/chapter_2/bitcount.c.i

CMakeFiles/The_C_Programming_language_2e.dir/chapter_2/bitcount.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/The_C_Programming_language_2e.dir/chapter_2/bitcount.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e/chapter_2/bitcount.c -o CMakeFiles/The_C_Programming_language_2e.dir/chapter_2/bitcount.c.s

# Object files for target The_C_Programming_language_2e
The_C_Programming_language_2e_OBJECTS = \
"CMakeFiles/The_C_Programming_language_2e.dir/chapter_2/bitcount.c.o"

# External object files for target The_C_Programming_language_2e
The_C_Programming_language_2e_EXTERNAL_OBJECTS =

The_C_Programming_language_2e: CMakeFiles/The_C_Programming_language_2e.dir/chapter_2/bitcount.c.o
The_C_Programming_language_2e: CMakeFiles/The_C_Programming_language_2e.dir/build.make
The_C_Programming_language_2e: CMakeFiles/The_C_Programming_language_2e.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable The_C_Programming_language_2e"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/The_C_Programming_language_2e.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/The_C_Programming_language_2e.dir/build: The_C_Programming_language_2e

.PHONY : CMakeFiles/The_C_Programming_language_2e.dir/build

CMakeFiles/The_C_Programming_language_2e.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/The_C_Programming_language_2e.dir/cmake_clean.cmake
.PHONY : CMakeFiles/The_C_Programming_language_2e.dir/clean

CMakeFiles/The_C_Programming_language_2e.dir/depend:
	cd /home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e /home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e /home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e/cmake-build-debug /home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e/cmake-build-debug /home/sappy-joy/CLionProjects/Learn_C/The_C_Programming_language_2e/cmake-build-debug/CMakeFiles/The_C_Programming_language_2e.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/The_C_Programming_language_2e.dir/depend

