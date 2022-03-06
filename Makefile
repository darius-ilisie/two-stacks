ARGS = ""

all:
	gcc -O3 main.c -o two-stacks
	./two-stacks $(ARGS)