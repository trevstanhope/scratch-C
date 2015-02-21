TARGET = hello
CC = gcc
CFLAGS = -I.
OBJ = hello.o some_function.o other_function.o
IDIR = ../include
_DEPS = hello.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
	
.PHONY: clean

clean:
	rm -f *.o *~
