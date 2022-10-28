DEPS = perimeter.h

all: perimeter.o main.c
	gcc -o perimeter main.c perimeter.o

%.o: %.c $(DEPS)
	gcc -c -o $@ $<

test: 
	gcc tests/test.c -I. perimeter.c -o test
	./test

clean:
	rm *.o perimeter
