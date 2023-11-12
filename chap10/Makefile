CC = gcc
CFLAGS = 
DEPS =
LIBS = -lm
BINS = ch10_01 ch10_04

all: $(BINS)

$(BINS): $(BIN=$(.TARGET))

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(BIN): $(BIN).o
	$(CC) -o $(.TARGET) $< $(LIBS)

.PHONY: clean

clean:
	rm -f *.o core
