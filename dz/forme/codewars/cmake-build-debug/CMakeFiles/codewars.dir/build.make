# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ASUS\CLionProjects\forme\codewars

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ASUS\CLionProjects\forme\codewars\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/codewars.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/codewars.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/codewars.dir/flags.make

CMakeFiles/codewars.dir/main.cpp.obj: CMakeFiles/codewars.dir/flags.make
CMakeFiles/codewars.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\forme\codewars\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/codewars.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\codewars.dir\main.cpp.obj -c C:\Users\ASUS\CLionProjects\forme\codewars\main.cpp

CMakeFiles/codewars.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/codewars.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\forme\codewars\main.cpp > CMakeFiles\codewars.dir\main.cpp.i

CMakeFiles/codewars.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/codewars.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ASUS\CLionProjects\forme\codewars\main.cpp -o CMakeFiles\codewars.dir\main.cpp.s

# Object files for target codewars
codewars_OBJECTS = \
"CMakeFiles/codewars.dir/main.cpp.obj"

# External object files for target codewars
codewars_EXTERNAL_OBJECTS =

codewars.exe: CMakeFiles/codewars.dir/main.cpp.obj
codewars.exe: CMakeFiles/codewars.dir/build.make
codewars.exe: CMakeFiles/codewars.dir/linklibs.rsp
codewars.exe: CMakeFiles/codewars.dir/objects1.rsp
codewars.exe: CMakeFiles/codewars.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ASUS\CLionProjects\forme\codewars\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable codewars.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\codewars.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/codewars.dir/build: codewars.exe

.PHONY : CMakeFiles/codewars.dir/build

CMakeFiles/codewars.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\codewars.dir\cmake_clean.cmake
.PHONY : CMakeFiles/codewars.dir/clean

CMakeFiles/codewars.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ASUS\CLionProjects\forme\codewars C:\Users\ASUS\CLionProjects\forme\codewars C:\Users\ASUS\CLionProjects\forme\codewars\cmake-build-debug C:\Users\ASUS\CLionProjects\forme\codewars\cmake-build-debug C:\Users\ASUS\CLionProjects\forme\codewars\cmake-build-debug\CMakeFiles\codewars.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/codewars.dir/depend

