GCC = gcc -g

all: main.o
	$(GCC) main.o -o dirinfo

main.o: main.c
	$(GCC) -c main.c

clean:
	rm *.o
	rm *~

run: all
	./dirinfo
