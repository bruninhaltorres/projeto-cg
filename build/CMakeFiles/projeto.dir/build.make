# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\CG

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\CG\build

# Include any dependencies generated for this target.
include CMakeFiles/projeto.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/projeto.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/projeto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/projeto.dir/flags.make

CMakeFiles/projeto.dir/main.c.obj: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/main.c.obj: CMakeFiles/projeto.dir/includes_C.rsp
CMakeFiles/projeto.dir/main.c.obj: ../main.c
CMakeFiles/projeto.dir/main.c.obj: CMakeFiles/projeto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CG\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/projeto.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/projeto.dir/main.c.obj -MF CMakeFiles\projeto.dir\main.c.obj.d -o CMakeFiles\projeto.dir\main.c.obj -c C:\CG\main.c

CMakeFiles/projeto.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\CG\main.c > CMakeFiles\projeto.dir\main.c.i

CMakeFiles/projeto.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\CG\main.c -o CMakeFiles\projeto.dir\main.c.s

CMakeFiles/projeto.dir/drawObj.c.obj: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/drawObj.c.obj: CMakeFiles/projeto.dir/includes_C.rsp
CMakeFiles/projeto.dir/drawObj.c.obj: ../drawObj.c
CMakeFiles/projeto.dir/drawObj.c.obj: CMakeFiles/projeto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CG\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/projeto.dir/drawObj.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/projeto.dir/drawObj.c.obj -MF CMakeFiles\projeto.dir\drawObj.c.obj.d -o CMakeFiles\projeto.dir\drawObj.c.obj -c C:\CG\drawObj.c

CMakeFiles/projeto.dir/drawObj.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/drawObj.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\CG\drawObj.c > CMakeFiles\projeto.dir\drawObj.c.i

CMakeFiles/projeto.dir/drawObj.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/drawObj.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\CG\drawObj.c -o CMakeFiles\projeto.dir\drawObj.c.s

# Object files for target projeto
projeto_OBJECTS = \
"CMakeFiles/projeto.dir/main.c.obj" \
"CMakeFiles/projeto.dir/drawObj.c.obj"

# External object files for target projeto
projeto_EXTERNAL_OBJECTS =

projeto.exe: CMakeFiles/projeto.dir/main.c.obj
projeto.exe: CMakeFiles/projeto.dir/drawObj.c.obj
projeto.exe: CMakeFiles/projeto.dir/build.make
projeto.exe: CMakeFiles/projeto.dir/linklibs.rsp
projeto.exe: CMakeFiles/projeto.dir/objects1.rsp
projeto.exe: CMakeFiles/projeto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CG\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable projeto.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\projeto.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/projeto.dir/build: projeto.exe
.PHONY : CMakeFiles/projeto.dir/build

CMakeFiles/projeto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\projeto.dir\cmake_clean.cmake
.PHONY : CMakeFiles/projeto.dir/clean

CMakeFiles/projeto.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CG C:\CG C:\CG\build C:\CG\build C:\CG\build\CMakeFiles\projeto.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/projeto.dir/depend

