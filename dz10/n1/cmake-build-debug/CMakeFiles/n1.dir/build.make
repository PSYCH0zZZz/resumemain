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
CMAKE_SOURCE_DIR = C:\Users\ASUS\CLionProjects\dz10\n1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ASUS\CLionProjects\dz10\n1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/n1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/n1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/n1.dir/flags.make

CMakeFiles/n1.dir/main.cpp.obj: CMakeFiles/n1.dir/flags.make
CMakeFiles/n1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\dz10\n1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/n1.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\n1.dir\main.cpp.obj -c C:\Users\ASUS\CLionProjects\dz10\n1\main.cpp

CMakeFiles/n1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/n1.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\dz10\n1\main.cpp > CMakeFiles\n1.dir\main.cpp.i

CMakeFiles/n1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/n1.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ASUS\CLionProjects\dz10\n1\main.cpp -o CMakeFiles\n1.dir\main.cpp.s

# Object files for target n1
n1_OBJECTS = \
"CMakeFiles/n1.dir/main.cpp.obj"

# External object files for target n1
n1_EXTERNAL_OBJECTS =

n1.exe: CMakeFiles/n1.dir/main.cpp.obj
n1.exe: CMakeFiles/n1.dir/build.make
n1.exe: CMakeFiles/n1.dir/linklibs.rsp
n1.exe: CMakeFiles/n1.dir/objects1.rsp
n1.exe: CMakeFiles/n1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ASUS\CLionProjects\dz10\n1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable n1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\n1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/n1.dir/build: n1.exe

.PHONY : CMakeFiles/n1.dir/build

CMakeFiles/n1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\n1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/n1.dir/clean

CMakeFiles/n1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ASUS\CLionProjects\dz10\n1 C:\Users\ASUS\CLionProjects\dz10\n1 C:\Users\ASUS\CLionProjects\dz10\n1\cmake-build-debug C:\Users\ASUS\CLionProjects\dz10\n1\cmake-build-debug C:\Users\ASUS\CLionProjects\dz10\n1\cmake-build-debug\CMakeFiles\n1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/n1.dir/depend

