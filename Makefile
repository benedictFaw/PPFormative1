all: perimeter.o main.c
	gcc -o perimeter main.c perimeter.o

perimeter.o: perimeter.c perimeter.h
	gcc -c perimeter.c

test: 
	gcc tests/test.c -I. perimeter.c -o test
	./test

clean:
	rm %.o
