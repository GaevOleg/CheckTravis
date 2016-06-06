Build: main.o sq.o
	gcc sq.o main.o -o main -lm

main.o:
	gcc -c main.c

sq.o:
	gcc -c sq.c

.PHONY: clean
clean:
	rm -f *.o main
