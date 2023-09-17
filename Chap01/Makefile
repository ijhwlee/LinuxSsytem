# Makefile

CC=gcc
CFLAGS=
OBJS=ch01_3.o ch01_addnum.o
LIBS=
all : ch01_3

ch01_3 : $(OBJS)
    $(CC) $(CFLGAS) -o ch01_3 $(OBJS) $(LIBS)

ch01_3.o : ch01_3.c
    $(CC) $(CFLAGS) -c ch01_3.c
ch01_addnum.o : ch01_addnum.c
    $(CC) $(CFLAGS) -c ch01_addnum.c

clean:
    rm -f $(OBJS) ch01_3 *.o core
