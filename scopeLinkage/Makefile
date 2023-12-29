CFLAGS = -g -Wall

all: scope

asciiCodes: asciiCodes.o
	cc $(CFLAGS) scope.o -o scope

asciiCodes.o: asciiCodes.c
	cc $(CFLAGS) -c scope.c -o scope.o

clean:
	rm -f *.o

clobber: clean
	rm -f scope