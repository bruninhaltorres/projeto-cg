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
CMAKE_SOURCE_DIR = C:\projeto-cg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\projeto-cg\build

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
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\projeto-cg\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/projeto.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/projeto.dir/main.c.obj -MF CMakeFiles\projeto.dir\main.c.obj.d -o CMakeFiles\projeto.dir\main.c.obj -c C:\projeto-cg\main.c

CMakeFiles/projeto.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\projeto-cg\main.c > CMakeFiles\projeto.dir\main.c.i

CMakeFiles/projeto.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\projeto-cg\main.c -o CMakeFiles\projeto.dir\main.c.s

CMakeFiles/projeto.dir/sources/draw_objects.c.obj: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/sources/draw_objects.c.obj: CMakeFiles/projeto.dir/includes_C.rsp
CMakeFiles/projeto.dir/sources/draw_objects.c.obj: ../sources/draw_objects.c
CMakeFiles/projeto.dir/sources/draw_objects.c.obj: CMakeFiles/projeto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\projeto-cg\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/projeto.dir/sources/draw_objects.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/projeto.dir/sources/draw_objects.c.obj -MF CMakeFiles\projeto.dir\sources\draw_objects.c.obj.d -o CMakeFiles\projeto.dir\sources\draw_objects.c.obj -c C:\projeto-cg\sources\draw_objects.c

CMakeFiles/projeto.dir/sources/draw_objects.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/sources/draw_objects.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\projeto-cg\sources\draw_objects.c > CMakeFiles\projeto.dir\sources\draw_objects.c.i

CMakeFiles/projeto.dir/sources/draw_objects.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/sources/draw_objects.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\projeto-cg\sources\draw_objects.c -o CMakeFiles\projeto.dir\sources\draw_objects.c.s

CMakeFiles/projeto.dir/sources/camera.c.obj: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/sources/camera.c.obj: CMakeFiles/projeto.dir/includes_C.rsp
CMakeFiles/projeto.dir/sources/camera.c.obj: ../sources/camera.c
CMakeFiles/projeto.dir/sources/camera.c.obj: CMakeFiles/projeto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\projeto-cg\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/projeto.dir/sources/camera.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/projeto.dir/sources/camera.c.obj -MF CMakeFiles\projeto.dir\sources\camera.c.obj.d -o CMakeFiles\projeto.dir\sources\camera.c.obj -c C:\projeto-cg\sources\camera.c

CMakeFiles/projeto.dir/sources/camera.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/sources/camera.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\projeto-cg\sources\camera.c > CMakeFiles\projeto.dir\sources\camera.c.i

CMakeFiles/projeto.dir/sources/camera.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/sources/camera.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\projeto-cg\sources\camera.c -o CMakeFiles\projeto.dir\sources\camera.c.s

CMakeFiles/projeto.dir/sources/obj_import.c.obj: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/sources/obj_import.c.obj: CMakeFiles/projeto.dir/includes_C.rsp
CMakeFiles/projeto.dir/sources/obj_import.c.obj: ../sources/obj_import.c
CMakeFiles/projeto.dir/sources/obj_import.c.obj: CMakeFiles/projeto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\projeto-cg\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/projeto.dir/sources/obj_import.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/projeto.dir/sources/obj_import.c.obj -MF CMakeFiles\projeto.dir\sources\obj_import.c.obj.d -o CMakeFiles\projeto.dir\sources\obj_import.c.obj -c C:\projeto-cg\sources\obj_import.c

CMakeFiles/projeto.dir/sources/obj_import.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/sources/obj_import.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\projeto-cg\sources\obj_import.c > CMakeFiles\projeto.dir\sources\obj_import.c.i

CMakeFiles/projeto.dir/sources/obj_import.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/sources/obj_import.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\projeto-cg\sources\obj_import.c -o CMakeFiles\projeto.dir\sources\obj_import.c.s

CMakeFiles/projeto.dir/sources/cam_movement.c.obj: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/sources/cam_movement.c.obj: CMakeFiles/projeto.dir/includes_C.rsp
CMakeFiles/projeto.dir/sources/cam_movement.c.obj: ../sources/cam_movement.c
CMakeFiles/projeto.dir/sources/cam_movement.c.obj: CMakeFiles/projeto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\projeto-cg\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/projeto.dir/sources/cam_movement.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/projeto.dir/sources/cam_movement.c.obj -MF CMakeFiles\projeto.dir\sources\cam_movement.c.obj.d -o CMakeFiles\projeto.dir\sources\cam_movement.c.obj -c C:\projeto-cg\sources\cam_movement.c

CMakeFiles/projeto.dir/sources/cam_movement.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/sources/cam_movement.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\projeto-cg\sources\cam_movement.c > CMakeFiles\projeto.dir\sources\cam_movement.c.i

CMakeFiles/projeto.dir/sources/cam_movement.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/sources/cam_movement.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\projeto-cg\sources\cam_movement.c -o CMakeFiles\projeto.dir\sources\cam_movement.c.s

CMakeFiles/projeto.dir/stb_image.c.obj: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/stb_image.c.obj: CMakeFiles/projeto.dir/includes_C.rsp
CMakeFiles/projeto.dir/stb_image.c.obj: ../stb_image.c
CMakeFiles/projeto.dir/stb_image.c.obj: CMakeFiles/projeto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\projeto-cg\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/projeto.dir/stb_image.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/projeto.dir/stb_image.c.obj -MF CMakeFiles\projeto.dir\stb_image.c.obj.d -o CMakeFiles\projeto.dir\stb_image.c.obj -c C:\projeto-cg\stb_image.c

CMakeFiles/projeto.dir/stb_image.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/stb_image.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\projeto-cg\stb_image.c > CMakeFiles\projeto.dir\stb_image.c.i

CMakeFiles/projeto.dir/stb_image.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/stb_image.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\projeto-cg\stb_image.c -o CMakeFiles\projeto.dir\stb_image.c.s

# Object files for target projeto
projeto_OBJECTS = \
"CMakeFiles/projeto.dir/main.c.obj" \
"CMakeFiles/projeto.dir/sources/draw_objects.c.obj" \
"CMakeFiles/projeto.dir/sources/camera.c.obj" \
"CMakeFiles/projeto.dir/sources/obj_import.c.obj" \
"CMakeFiles/projeto.dir/sources/cam_movement.c.obj" \
"CMakeFiles/projeto.dir/stb_image.c.obj"

# External object files for target projeto
projeto_EXTERNAL_OBJECTS =

projeto.exe: CMakeFiles/projeto.dir/main.c.obj
projeto.exe: CMakeFiles/projeto.dir/sources/draw_objects.c.obj
projeto.exe: CMakeFiles/projeto.dir/sources/camera.c.obj
projeto.exe: CMakeFiles/projeto.dir/sources/obj_import.c.obj
projeto.exe: CMakeFiles/projeto.dir/sources/cam_movement.c.obj
projeto.exe: CMakeFiles/projeto.dir/stb_image.c.obj
projeto.exe: CMakeFiles/projeto.dir/build.make
projeto.exe: CMakeFiles/projeto.dir/linklibs.rsp
projeto.exe: CMakeFiles/projeto.dir/objects1.rsp
projeto.exe: CMakeFiles/projeto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\projeto-cg\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable projeto.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\projeto.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/projeto.dir/build: projeto.exe
.PHONY : CMakeFiles/projeto.dir/build

CMakeFiles/projeto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\projeto.dir\cmake_clean.cmake
.PHONY : CMakeFiles/projeto.dir/clean

CMakeFiles/projeto.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\projeto-cg C:\projeto-cg C:\projeto-cg\build C:\projeto-cg\build C:\projeto-cg\build\CMakeFiles\projeto.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/projeto.dir/depend

