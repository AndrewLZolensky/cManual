CFLAGS = -g -Wall

all: asciiCodes

asciiCodes: asciiCodes.o
	cc $(CFLAGS) asciiCodes.o -o asciiCodes

asciiCodes.o: asciiCodes.c
	cc $(CFLAGS) -c asciiCodes.c -o asciiCodes.o

clean:
	rm -f *.o

clobber: clean
	rm -f asciiCodes