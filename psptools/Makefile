CC=gcc
CFLAGS=-Wall -O2 -D_FILE_OFFSET_BITS=64 -D_LARGEFILE64_SOURCE
CXXFLAGS=$(CFLAGS)
INCLUDES=
LDFLAGS=-lz

PROGRAMS=ciso pbp-pack pbp-unpack popstrip
SOURCES=ciso.c pbp-pack.c pbp-unpack.c popstrip.c

RM=rm -f

all:	$(PROGRAMS)

ciso:	ciso.c
	$(CC) $(CFLAGS) -m32 -o $@ $< $(LDFLAGS)

pbp-pack:	pbp-pack.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

pbp-unpack:	pbp-unpack.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

popstrip:	popstrip.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	$(RM) $(PROGRAMS)
