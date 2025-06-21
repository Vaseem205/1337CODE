all: compile run

compile: 5.c
	gcc 5.c -o 5

run:
	./5

clean:
	del /f 5.exe

