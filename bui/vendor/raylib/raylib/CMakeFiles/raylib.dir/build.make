# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.27.6/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.27.6/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui

# Include any dependencies generated for this target.
include vendor/raylib/raylib/CMakeFiles/raylib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include vendor/raylib/raylib/CMakeFiles/raylib.dir/compiler_depend.make

# Include the progress variables for this target.
include vendor/raylib/raylib/CMakeFiles/raylib.dir/progress.make

# Include the compile flags for this target's objects.
include vendor/raylib/raylib/CMakeFiles/raylib.dir/flags.make

vendor/raylib/raylib/CMakeFiles/raylib.dir/rcore.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/flags.make
vendor/raylib/raylib/CMakeFiles/raylib.dir/rcore.c.o: /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rcore.c
vendor/raylib/raylib/CMakeFiles/raylib.dir/rcore.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object vendor/raylib/raylib/CMakeFiles/raylib.dir/rcore.c.o"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT vendor/raylib/raylib/CMakeFiles/raylib.dir/rcore.c.o -MF CMakeFiles/raylib.dir/rcore.c.o.d -o CMakeFiles/raylib.dir/rcore.c.o -c /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rcore.c

vendor/raylib/raylib/CMakeFiles/raylib.dir/rcore.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/raylib.dir/rcore.c.i"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rcore.c > CMakeFiles/raylib.dir/rcore.c.i

vendor/raylib/raylib/CMakeFiles/raylib.dir/rcore.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/raylib.dir/rcore.c.s"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rcore.c -o CMakeFiles/raylib.dir/rcore.c.s

vendor/raylib/raylib/CMakeFiles/raylib.dir/rmodels.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/flags.make
vendor/raylib/raylib/CMakeFiles/raylib.dir/rmodels.c.o: /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rmodels.c
vendor/raylib/raylib/CMakeFiles/raylib.dir/rmodels.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object vendor/raylib/raylib/CMakeFiles/raylib.dir/rmodels.c.o"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT vendor/raylib/raylib/CMakeFiles/raylib.dir/rmodels.c.o -MF CMakeFiles/raylib.dir/rmodels.c.o.d -o CMakeFiles/raylib.dir/rmodels.c.o -c /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rmodels.c

vendor/raylib/raylib/CMakeFiles/raylib.dir/rmodels.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/raylib.dir/rmodels.c.i"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rmodels.c > CMakeFiles/raylib.dir/rmodels.c.i

vendor/raylib/raylib/CMakeFiles/raylib.dir/rmodels.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/raylib.dir/rmodels.c.s"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rmodels.c -o CMakeFiles/raylib.dir/rmodels.c.s

vendor/raylib/raylib/CMakeFiles/raylib.dir/rshapes.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/flags.make
vendor/raylib/raylib/CMakeFiles/raylib.dir/rshapes.c.o: /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rshapes.c
vendor/raylib/raylib/CMakeFiles/raylib.dir/rshapes.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object vendor/raylib/raylib/CMakeFiles/raylib.dir/rshapes.c.o"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT vendor/raylib/raylib/CMakeFiles/raylib.dir/rshapes.c.o -MF CMakeFiles/raylib.dir/rshapes.c.o.d -o CMakeFiles/raylib.dir/rshapes.c.o -c /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rshapes.c

vendor/raylib/raylib/CMakeFiles/raylib.dir/rshapes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/raylib.dir/rshapes.c.i"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rshapes.c > CMakeFiles/raylib.dir/rshapes.c.i

vendor/raylib/raylib/CMakeFiles/raylib.dir/rshapes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/raylib.dir/rshapes.c.s"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rshapes.c -o CMakeFiles/raylib.dir/rshapes.c.s

vendor/raylib/raylib/CMakeFiles/raylib.dir/rtext.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/flags.make
vendor/raylib/raylib/CMakeFiles/raylib.dir/rtext.c.o: /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rtext.c
vendor/raylib/raylib/CMakeFiles/raylib.dir/rtext.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object vendor/raylib/raylib/CMakeFiles/raylib.dir/rtext.c.o"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT vendor/raylib/raylib/CMakeFiles/raylib.dir/rtext.c.o -MF CMakeFiles/raylib.dir/rtext.c.o.d -o CMakeFiles/raylib.dir/rtext.c.o -c /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rtext.c

vendor/raylib/raylib/CMakeFiles/raylib.dir/rtext.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/raylib.dir/rtext.c.i"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rtext.c > CMakeFiles/raylib.dir/rtext.c.i

vendor/raylib/raylib/CMakeFiles/raylib.dir/rtext.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/raylib.dir/rtext.c.s"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rtext.c -o CMakeFiles/raylib.dir/rtext.c.s

vendor/raylib/raylib/CMakeFiles/raylib.dir/rtextures.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/flags.make
vendor/raylib/raylib/CMakeFiles/raylib.dir/rtextures.c.o: /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rtextures.c
vendor/raylib/raylib/CMakeFiles/raylib.dir/rtextures.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object vendor/raylib/raylib/CMakeFiles/raylib.dir/rtextures.c.o"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT vendor/raylib/raylib/CMakeFiles/raylib.dir/rtextures.c.o -MF CMakeFiles/raylib.dir/rtextures.c.o.d -o CMakeFiles/raylib.dir/rtextures.c.o -c /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rtextures.c

vendor/raylib/raylib/CMakeFiles/raylib.dir/rtextures.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/raylib.dir/rtextures.c.i"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rtextures.c > CMakeFiles/raylib.dir/rtextures.c.i

vendor/raylib/raylib/CMakeFiles/raylib.dir/rtextures.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/raylib.dir/rtextures.c.s"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/rtextures.c -o CMakeFiles/raylib.dir/rtextures.c.s

vendor/raylib/raylib/CMakeFiles/raylib.dir/utils.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/flags.make
vendor/raylib/raylib/CMakeFiles/raylib.dir/utils.c.o: /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/utils.c
vendor/raylib/raylib/CMakeFiles/raylib.dir/utils.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object vendor/raylib/raylib/CMakeFiles/raylib.dir/utils.c.o"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT vendor/raylib/raylib/CMakeFiles/raylib.dir/utils.c.o -MF CMakeFiles/raylib.dir/utils.c.o.d -o CMakeFiles/raylib.dir/utils.c.o -c /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/utils.c

vendor/raylib/raylib/CMakeFiles/raylib.dir/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/raylib.dir/utils.c.i"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/utils.c > CMakeFiles/raylib.dir/utils.c.i

vendor/raylib/raylib/CMakeFiles/raylib.dir/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/raylib.dir/utils.c.s"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/utils.c -o CMakeFiles/raylib.dir/utils.c.s

vendor/raylib/raylib/CMakeFiles/raylib.dir/raudio.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/flags.make
vendor/raylib/raylib/CMakeFiles/raylib.dir/raudio.c.o: /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/raudio.c
vendor/raylib/raylib/CMakeFiles/raylib.dir/raudio.c.o: vendor/raylib/raylib/CMakeFiles/raylib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object vendor/raylib/raylib/CMakeFiles/raylib.dir/raudio.c.o"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT vendor/raylib/raylib/CMakeFiles/raylib.dir/raudio.c.o -MF CMakeFiles/raylib.dir/raudio.c.o.d -o CMakeFiles/raylib.dir/raudio.c.o -c /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/raudio.c

vendor/raylib/raylib/CMakeFiles/raylib.dir/raudio.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/raylib.dir/raudio.c.i"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/raudio.c > CMakeFiles/raylib.dir/raudio.c.i

vendor/raylib/raylib/CMakeFiles/raylib.dir/raudio.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/raylib.dir/raudio.c.s"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src/raudio.c -o CMakeFiles/raylib.dir/raudio.c.s

# Object files for target raylib
raylib_OBJECTS = \
"CMakeFiles/raylib.dir/rcore.c.o" \
"CMakeFiles/raylib.dir/rmodels.c.o" \
"CMakeFiles/raylib.dir/rshapes.c.o" \
"CMakeFiles/raylib.dir/rtext.c.o" \
"CMakeFiles/raylib.dir/rtextures.c.o" \
"CMakeFiles/raylib.dir/utils.c.o" \
"CMakeFiles/raylib.dir/raudio.c.o"

# External object files for target raylib
raylib_EXTERNAL_OBJECTS = \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/context.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/init.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/input.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/monitor.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/platform.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/vulkan.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/window.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/egl_context.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/osmesa_context.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/null_init.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/null_monitor.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/null_window.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/null_joystick.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/cocoa_time.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/posix_module.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/posix_thread.c.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/cocoa_init.m.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/cocoa_joystick.m.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/cocoa_monitor.m.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/cocoa_window.m.o" \
"/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/nsgl_context.m.o"

vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/CMakeFiles/raylib.dir/rcore.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/CMakeFiles/raylib.dir/rmodels.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/CMakeFiles/raylib.dir/rshapes.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/CMakeFiles/raylib.dir/rtext.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/CMakeFiles/raylib.dir/rtextures.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/CMakeFiles/raylib.dir/utils.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/CMakeFiles/raylib.dir/raudio.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/context.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/init.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/input.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/monitor.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/platform.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/vulkan.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/window.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/egl_context.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/osmesa_context.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/null_init.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/null_monitor.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/null_window.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/null_joystick.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/cocoa_time.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/posix_module.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/posix_thread.c.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/cocoa_init.m.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/cocoa_joystick.m.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/cocoa_monitor.m.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/cocoa_window.m.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/external/glfw/src/CMakeFiles/glfw.dir/nsgl_context.m.o
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/CMakeFiles/raylib.dir/build.make
vendor/raylib/raylib/libraylib.a: vendor/raylib/raylib/CMakeFiles/raylib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C static library libraylib.a"
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && $(CMAKE_COMMAND) -P CMakeFiles/raylib.dir/cmake_clean_target.cmake
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/raylib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
vendor/raylib/raylib/CMakeFiles/raylib.dir/build: vendor/raylib/raylib/libraylib.a
.PHONY : vendor/raylib/raylib/CMakeFiles/raylib.dir/build

vendor/raylib/raylib/CMakeFiles/raylib.dir/clean:
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib && $(CMAKE_COMMAND) -P CMakeFiles/raylib.dir/cmake_clean.cmake
.PHONY : vendor/raylib/raylib/CMakeFiles/raylib.dir/clean

vendor/raylib/raylib/CMakeFiles/raylib.dir/depend:
	cd /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023 /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/vendor/raylib/src /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib /Users/riddhi/uni/COMPSCI_1102/OOPproject-2023/bui/vendor/raylib/raylib/CMakeFiles/raylib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : vendor/raylib/raylib/CMakeFiles/raylib.dir/depend
