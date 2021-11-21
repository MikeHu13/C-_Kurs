DEBUG_FLAGS = -g3 -O0
RELEASE_FLAGS = -DNDEBUG -O3

FLAGS = $(DEBUG_FLAGS)

preprocess:
	g++ $(FLAGS) -E Functions.cc > Temp.cc

#erzeugt Assembler code
assemble:
	g++ $(FLAGS) -S Functions.cc

compile:
	g++ $(FLAGS) -c Functions.cc -o Functions.o

#Linker
build:
	g++ $(FLAGS) Functions.o -o Functions

print_exe:
	objdump -CS Functions
