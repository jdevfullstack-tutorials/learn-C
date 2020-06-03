CC=gcc
CFLAGS=-Wall

VPATH = 001_hello_world \
003_flow_control \
004_loops \
005_pointers \
006_functions \
007_structures \
008_pass_command_line_options \
009_dynamically_allocated_arrays \
010_file_IO \
002_variable_types

all: hello_world \
flow_control \
loops \
pointers \
functions \
structures \
pass_command_line_options \
dynamically_allocated_arrays \
file_IO \
variable_types

hello_world: hello_world.c
	$(CC) -o $@ $< $(CFLAGS)

flow_control: flow_control.c
	$(CC) -o $@ $< $(CFLAGS)

loops: loops.c
	$(CC) -o $@ $< $(CFLAGS)

pointers: pointers.c
	$(CC) -o $@ $< $(CFLAGS)

functions: functions.c
	$(CC) -o $@ $< $(CFLAGS)

structures: structures.c
	$(CC) -o $@ $< $(CFLAGS)

pass_command_line_options: pass_command_line_options.c
	$(CC) -o $@ $< $(CFLAGS)

dynamically_allocated_arrays: dynamically_allocated_arrays.c
	$(CC) -o $@ $< $(CFLAGS)

file_IO: file_IO.c
	$(CC) -o $@ $< $(CFLAGS)

variable_types: variable_types.c
	$(CC) -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
#	uncomment this for Linux/UNIX   
#	rm hello_world
#	rm variable_types
#	rm pass_command_line_options
#	rm loops
#	rm functions
#	rm flow_control
#	rm pointers
#	rm structures
#	rm dynamically_allocated_arrays
#	rm file_IO

#	delete this for Linux/UNIX
#	this is for Windows OS only
	del /Q /S *.exe
	del output_file.txt
