# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion 2020.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\GitHubProjects\PSTCoreContests\GettinganA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\GitHubProjects\PSTCoreContests\GettinganA\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GettinganA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GettinganA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GettinganA.dir/flags.make

CMakeFiles/GettinganA.dir/main.cpp.obj: CMakeFiles/GettinganA.dir/flags.make
CMakeFiles/GettinganA.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\GitHubProjects\PSTCoreContests\GettinganA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GettinganA.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GettinganA.dir\main.cpp.obj -c D:\GitHubProjects\PSTCoreContests\GettinganA\main.cpp

CMakeFiles/GettinganA.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GettinganA.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\GitHubProjects\PSTCoreContests\GettinganA\main.cpp > CMakeFiles\GettinganA.dir\main.cpp.i

CMakeFiles/GettinganA.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GettinganA.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\GitHubProjects\PSTCoreContests\GettinganA\main.cpp -o CMakeFiles\GettinganA.dir\main.cpp.s

# Object files for target GettinganA
GettinganA_OBJECTS = \
"CMakeFiles/GettinganA.dir/main.cpp.obj"

# External object files for target GettinganA
GettinganA_EXTERNAL_OBJECTS =

GettinganA.exe: CMakeFiles/GettinganA.dir/main.cpp.obj
GettinganA.exe: CMakeFiles/GettinganA.dir/build.make
GettinganA.exe: CMakeFiles/GettinganA.dir/linklibs.rsp
GettinganA.exe: CMakeFiles/GettinganA.dir/objects1.rsp
GettinganA.exe: CMakeFiles/GettinganA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\GitHubProjects\PSTCoreContests\GettinganA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GettinganA.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GettinganA.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GettinganA.dir/build: GettinganA.exe

.PHONY : CMakeFiles/GettinganA.dir/build

CMakeFiles/GettinganA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GettinganA.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GettinganA.dir/clean

CMakeFiles/GettinganA.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\GitHubProjects\PSTCoreContests\GettinganA D:\GitHubProjects\PSTCoreContests\GettinganA D:\GitHubProjects\PSTCoreContests\GettinganA\cmake-build-debug D:\GitHubProjects\PSTCoreContests\GettinganA\cmake-build-debug D:\GitHubProjects\PSTCoreContests\GettinganA\cmake-build-debug\CMakeFiles\GettinganA.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GettinganA.dir/depend

