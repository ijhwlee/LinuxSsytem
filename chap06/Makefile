CC = gcc
CFLAGS = 
DEPS =
LIBS = -lm
BINS = ch06_01 ch06_02 ch06_05 ch06_06 ch06_08

all: $(BINS)

$(BINS): $(BIN=$(.TARGET))

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(BIN): $(BIN).o
	$(CC) -o $(.TARGET) $< $(LIBS)

.PHONY: clean

clean:
	rm -f *.o core
