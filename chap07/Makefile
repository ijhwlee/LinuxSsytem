CC = gcc
CFLAGS = 
DEPS =
LIBS = -lm
BINS = ch07_01 ch07_02 ch07_03 ch07_05 ch07_08 ch07_09

all: $(BINS)

$(BINS): $(BIN=$(.TARGET))

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(BIN): $(BIN).o
	$(CC) -o $(.TARGET) $< $(LIBS)

.PHONY: clean

clean:
	rm -f *.o core
