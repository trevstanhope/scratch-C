IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR) -std=c11
ODIR=obj
LDIR =../lib
LIBS=-lm
_DEPS = hello.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
_OBJ = hello.o checksum.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
hello: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)
.PHONY: clean
clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
