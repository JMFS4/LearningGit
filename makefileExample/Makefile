all: calculadora

calculadora: calculadora.c soma.o
	gcc calculadora.c soma.o -o calculadora

soma.o: soma.c soma.h
	gcc -c soma.calculadora

clean:
	rm -f .o calculadora

doc: Doxyfile
	doxygen