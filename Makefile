#
# Makefile #

CC = gcc
LIBS = -lm

calcul: calculate.o main.o
	gcc calculate.o main.o -o calcul $(LIBS)
calculate.o: calculate.c calculate.h
	gcc -c calculate.c
main.o: main.c calculate.h
	gcc -c main.c
clean:
	rm -f calcul *.o *~

# End Makefile
