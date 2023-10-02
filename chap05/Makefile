CC = gcc
CFLAGS = 
DEPS =
LIBS = -lm
BINS = ch05_01 ch05_02 ch05_03 ch05_04 ch05_05

all: $(BINS)

$(BINS): $(BIN=$(.TARGET))

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(BIN): $(BIN).o
	$(CC) -o $(.TARGET) $< $(LIBS)

.PHONY: clean

clean:
	rm -f *.o core
