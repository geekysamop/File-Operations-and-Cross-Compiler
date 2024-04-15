CC=gcc  
CFLAGS=-Wall

all: converter

converter: source.c
	$(CC) $(CFLAGS) source.c -o converter

clean:
	rm -f converter