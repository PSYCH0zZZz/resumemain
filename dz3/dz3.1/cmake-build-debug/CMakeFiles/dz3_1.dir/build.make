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
CMAKE_SOURCE_DIR = C:\Users\ASUS\CLionProjects\dz3\dz3.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ASUS\CLionProjects\dz3\dz3.1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/dz3_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dz3_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dz3_1.dir/flags.make

CMakeFiles/dz3_1.dir/main.cpp.obj: CMakeFiles/dz3_1.dir/flags.make
CMakeFiles/dz3_1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\dz3\dz3.1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dz3_1.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dz3_1.dir\main.cpp.obj -c C:\Users\ASUS\CLionProjects\dz3\dz3.1\main.cpp

CMakeFiles/dz3_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dz3_1.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\dz3\dz3.1\main.cpp > CMakeFiles\dz3_1.dir\main.cpp.i

CMakeFiles/dz3_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dz3_1.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ASUS\CLionProjects\dz3\dz3.1\main.cpp -o CMakeFiles\dz3_1.dir\main.cpp.s

# Object files for target dz3_1
dz3_1_OBJECTS = \
"CMakeFiles/dz3_1.dir/main.cpp.obj"

# External object files for target dz3_1
dz3_1_EXTERNAL_OBJECTS =

dz3_1.exe: CMakeFiles/dz3_1.dir/main.cpp.obj
dz3_1.exe: CMakeFiles/dz3_1.dir/build.make
dz3_1.exe: CMakeFiles/dz3_1.dir/linklibs.rsp
dz3_1.exe: CMakeFiles/dz3_1.dir/objects1.rsp
dz3_1.exe: CMakeFiles/dz3_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ASUS\CLionProjects\dz3\dz3.1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dz3_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dz3_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dz3_1.dir/build: dz3_1.exe

.PHONY : CMakeFiles/dz3_1.dir/build

CMakeFiles/dz3_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dz3_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dz3_1.dir/clean

CMakeFiles/dz3_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ASUS\CLionProjects\dz3\dz3.1 C:\Users\ASUS\CLionProjects\dz3\dz3.1 C:\Users\ASUS\CLionProjects\dz3\dz3.1\cmake-build-debug C:\Users\ASUS\CLionProjects\dz3\dz3.1\cmake-build-debug C:\Users\ASUS\CLionProjects\dz3\dz3.1\cmake-build-debug\CMakeFiles\dz3_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dz3_1.dir/depend

