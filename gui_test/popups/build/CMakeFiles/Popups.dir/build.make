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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/l/test_self/popups

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/l/test_self/popups/build

# Include any dependencies generated for this target.
include CMakeFiles/Popups.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Popups.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Popups.dir/flags.make

CMakeFiles/Popups.dir/main.cpp.o: CMakeFiles/Popups.dir/flags.make
CMakeFiles/Popups.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/l/test_self/popups/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Popups.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Popups.dir/main.cpp.o -c /home/l/test_self/popups/main.cpp

CMakeFiles/Popups.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Popups.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/l/test_self/popups/main.cpp > CMakeFiles/Popups.dir/main.cpp.i

CMakeFiles/Popups.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Popups.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/l/test_self/popups/main.cpp -o CMakeFiles/Popups.dir/main.cpp.s

# Object files for target Popups
Popups_OBJECTS = \
"CMakeFiles/Popups.dir/main.cpp.o"

# External object files for target Popups
Popups_EXTERNAL_OBJECTS =

Popups: CMakeFiles/Popups.dir/main.cpp.o
Popups: CMakeFiles/Popups.dir/build.make
Popups: elements/lib/libelements.a
Popups: /usr/lib/x86_64-linux-gnu/libfontconfig.so
Popups: /usr/lib/x86_64-linux-gnu/libfreetype.so
Popups: /usr/lib/x86_64-linux-gnu/libgtk-3.so
Popups: /usr/lib/x86_64-linux-gnu/libgdk-3.so
Popups: /usr/lib/x86_64-linux-gnu/libpangocairo-1.0.so
Popups: /usr/lib/x86_64-linux-gnu/libpango-1.0.so
Popups: /usr/lib/x86_64-linux-gnu/libharfbuzz.so
Popups: /usr/lib/x86_64-linux-gnu/libatk-1.0.so
Popups: /usr/lib/x86_64-linux-gnu/libcairo-gobject.so
Popups: /usr/lib/x86_64-linux-gnu/libcairo.so
Popups: /usr/lib/x86_64-linux-gnu/libgdk_pixbuf-2.0.so
Popups: /usr/lib/x86_64-linux-gnu/libgio-2.0.so
Popups: /usr/lib/x86_64-linux-gnu/libgobject-2.0.so
Popups: /usr/lib/x86_64-linux-gnu/libglib-2.0.so
Popups: CMakeFiles/Popups.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/l/test_self/popups/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Popups"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Popups.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Popups.dir/build: Popups

.PHONY : CMakeFiles/Popups.dir/build

CMakeFiles/Popups.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Popups.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Popups.dir/clean

CMakeFiles/Popups.dir/depend:
	cd /home/l/test_self/popups/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/l/test_self/popups /home/l/test_self/popups /home/l/test_self/popups/build /home/l/test_self/popups/build /home/l/test_self/popups/build/CMakeFiles/Popups.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Popups.dir/depend

