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
CMAKE_SOURCE_DIR = /home/l/test_self/hello_universe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/l/test_self/hello_universe/build

# Include any dependencies generated for this target.
include CMakeFiles/HelloUniverse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HelloUniverse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HelloUniverse.dir/flags.make

CMakeFiles/HelloUniverse.dir/main.cpp.o: CMakeFiles/HelloUniverse.dir/flags.make
CMakeFiles/HelloUniverse.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/l/test_self/hello_universe/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HelloUniverse.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HelloUniverse.dir/main.cpp.o -c /home/l/test_self/hello_universe/main.cpp

CMakeFiles/HelloUniverse.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HelloUniverse.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/l/test_self/hello_universe/main.cpp > CMakeFiles/HelloUniverse.dir/main.cpp.i

CMakeFiles/HelloUniverse.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HelloUniverse.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/l/test_self/hello_universe/main.cpp -o CMakeFiles/HelloUniverse.dir/main.cpp.s

# Object files for target HelloUniverse
HelloUniverse_OBJECTS = \
"CMakeFiles/HelloUniverse.dir/main.cpp.o"

# External object files for target HelloUniverse
HelloUniverse_EXTERNAL_OBJECTS =

HelloUniverse: CMakeFiles/HelloUniverse.dir/main.cpp.o
HelloUniverse: CMakeFiles/HelloUniverse.dir/build.make
HelloUniverse: elements/lib/libelements.a
HelloUniverse: /usr/lib/x86_64-linux-gnu/libfontconfig.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libfreetype.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libgtk-3.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libgdk-3.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libpangocairo-1.0.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libpango-1.0.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libharfbuzz.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libatk-1.0.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libcairo-gobject.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libcairo.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libgdk_pixbuf-2.0.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libgio-2.0.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libgobject-2.0.so
HelloUniverse: /usr/lib/x86_64-linux-gnu/libglib-2.0.so
HelloUniverse: CMakeFiles/HelloUniverse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/l/test_self/hello_universe/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HelloUniverse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HelloUniverse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HelloUniverse.dir/build: HelloUniverse

.PHONY : CMakeFiles/HelloUniverse.dir/build

CMakeFiles/HelloUniverse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HelloUniverse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HelloUniverse.dir/clean

CMakeFiles/HelloUniverse.dir/depend:
	cd /home/l/test_self/hello_universe/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/l/test_self/hello_universe /home/l/test_self/hello_universe /home/l/test_self/hello_universe/build /home/l/test_self/hello_universe/build /home/l/test_self/hello_universe/build/CMakeFiles/HelloUniverse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HelloUniverse.dir/depend

