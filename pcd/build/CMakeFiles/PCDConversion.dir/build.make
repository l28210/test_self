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
CMAKE_SOURCE_DIR = /home/l/test_self/pcd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/l/test_self/pcd/build

# Include any dependencies generated for this target.
include CMakeFiles/PCDConversion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PCDConversion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PCDConversion.dir/flags.make

CMakeFiles/PCDConversion.dir/pcd.cpp.o: CMakeFiles/PCDConversion.dir/flags.make
CMakeFiles/PCDConversion.dir/pcd.cpp.o: ../pcd.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/l/test_self/pcd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PCDConversion.dir/pcd.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PCDConversion.dir/pcd.cpp.o -c /home/l/test_self/pcd/pcd.cpp

CMakeFiles/PCDConversion.dir/pcd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PCDConversion.dir/pcd.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/l/test_self/pcd/pcd.cpp > CMakeFiles/PCDConversion.dir/pcd.cpp.i

CMakeFiles/PCDConversion.dir/pcd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PCDConversion.dir/pcd.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/l/test_self/pcd/pcd.cpp -o CMakeFiles/PCDConversion.dir/pcd.cpp.s

# Object files for target PCDConversion
PCDConversion_OBJECTS = \
"CMakeFiles/PCDConversion.dir/pcd.cpp.o"

# External object files for target PCDConversion
PCDConversion_EXTERNAL_OBJECTS =

PCDConversion: CMakeFiles/PCDConversion.dir/pcd.cpp.o
PCDConversion: CMakeFiles/PCDConversion.dir/build.make
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_apps.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_outofcore.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_people.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libboost_system.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libboost_regex.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libqhull.so
PCDConversion: /usr/lib/libOpenNI.so
PCDConversion: /usr/lib/libOpenNI2.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkChartsCore-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkInfovisCore-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libfreetype.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libz.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libjpeg.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpng.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libtiff.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libexpat.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkIOGeometry-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkIOLegacy-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkIOPLY-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkRenderingLOD-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkViewsContext2D-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkViewsCore-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkRenderingContextOpenGL2-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkRenderingOpenGL2-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libflann_cpp.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_surface.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_keypoints.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_tracking.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_recognition.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_registration.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_stereo.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_segmentation.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_features.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_filters.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_sample_consensus.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_ml.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_visualization.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_search.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_kdtree.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_io.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_octree.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libpcl_common.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkInteractionWidgets-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkFiltersModeling-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkInteractionStyle-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkFiltersExtraction-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkFiltersStatistics-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkImagingFourier-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkalglib-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkFiltersHybrid-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkImagingGeneral-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkImagingSources-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkImagingHybrid-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkRenderingAnnotation-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkImagingColor-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkRenderingVolume-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkIOXML-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkIOXMLParser-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkIOCore-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkRenderingContext2D-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkRenderingFreeType-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libfreetype.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkImagingCore-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkRenderingCore-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkCommonColor-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeometry-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkFiltersSources-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeneral-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkCommonComputationalGeometry-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkFiltersCore-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkIOImage-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkCommonExecutionModel-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkCommonDataModel-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkCommonTransforms-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkCommonMisc-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkCommonMath-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkCommonSystem-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkCommonCore-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtksys-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkDICOMParser-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libvtkmetaio-7.1.so.7.1p.1
PCDConversion: /usr/lib/x86_64-linux-gnu/libz.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libGLEW.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libSM.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libICE.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libX11.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libXext.so
PCDConversion: /usr/lib/x86_64-linux-gnu/libXt.so
PCDConversion: CMakeFiles/PCDConversion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/l/test_self/pcd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PCDConversion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PCDConversion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PCDConversion.dir/build: PCDConversion

.PHONY : CMakeFiles/PCDConversion.dir/build

CMakeFiles/PCDConversion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PCDConversion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PCDConversion.dir/clean

CMakeFiles/PCDConversion.dir/depend:
	cd /home/l/test_self/pcd/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/l/test_self/pcd /home/l/test_self/pcd /home/l/test_self/pcd/build /home/l/test_self/pcd/build /home/l/test_self/pcd/build/CMakeFiles/PCDConversion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PCDConversion.dir/depend

