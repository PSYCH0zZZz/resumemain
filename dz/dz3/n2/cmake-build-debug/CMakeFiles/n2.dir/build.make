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
CMAKE_SOURCE_DIR = C:\Users\ASUS\CLionProjects\dz3\n2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ASUS\CLionProjects\dz3\n2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/n2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/n2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/n2.dir/flags.make

CMakeFiles/n2.dir/main.cpp.obj: CMakeFiles/n2.dir/flags.make
CMakeFiles/n2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\dz3\n2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/n2.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\n2.dir\main.cpp.obj -c C:\Users\ASUS\CLionProjects\dz3\n2\main.cpp

CMakeFiles/n2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/n2.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\dz3\n2\main.cpp > CMakeFiles\n2.dir\main.cpp.i

CMakeFiles/n2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/n2.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ASUS\CLionProjects\dz3\n2\main.cpp -o CMakeFiles\n2.dir\main.cpp.s

# Object files for target n2
n2_OBJECTS = \
"CMakeFiles/n2.dir/main.cpp.obj"

# External object files for target n2
n2_EXTERNAL_OBJECTS =

n2.exe: CMakeFiles/n2.dir/main.cpp.obj
n2.exe: CMakeFiles/n2.dir/build.make
n2.exe: CMakeFiles/n2.dir/linklibs.rsp
n2.exe: CMakeFiles/n2.dir/objects1.rsp
n2.exe: CMakeFiles/n2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ASUS\CLionProjects\dz3\n2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable n2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\n2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/n2.dir/build: n2.exe

.PHONY : CMakeFiles/n2.dir/build

CMakeFiles/n2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\n2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/n2.dir/clean

CMakeFiles/n2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ASUS\CLionProjects\dz3\n2 C:\Users\ASUS\CLionProjects\dz3\n2 C:\Users\ASUS\CLionProjects\dz3\n2\cmake-build-debug C:\Users\ASUS\CLionProjects\dz3\n2\cmake-build-debug C:\Users\ASUS\CLionProjects\dz3\n2\cmake-build-debug\CMakeFiles\n2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/n2.dir/depend

