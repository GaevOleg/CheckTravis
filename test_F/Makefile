Execute: Build
	./test

Build: main.o ctest.o sq.o
	gcc main.o ctest.o sq.o -o test -lm

main.o: main.c
	gcc -c main.c

ctest.o:
	gcc -c ctest.c

sq.o:
	gcc -c sq.c

.PHONY: clean
clean:
	rm -f test *.o
