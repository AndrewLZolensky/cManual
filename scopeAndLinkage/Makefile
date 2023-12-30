CFLAGS = -g -Wall

all: scope

scope: scope.o
	cc $(CFLAGS) scope.o -o scope

scope.o: scope.c
	cc $(CFLAGS) -c scope.c -o scope.o

clean:
	rm -f *.o

clobber: clean
	rm -f scope