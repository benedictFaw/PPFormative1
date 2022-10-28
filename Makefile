all: perimeter.o main.c
	gcc -o program main.c perimeter.o

perimeter.o: perimeter.c perimeter.h
	gcc -c perimeter.c


