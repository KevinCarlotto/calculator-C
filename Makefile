CC=gcc
SRC=src/calculator.c
OUT=calculator
CFLAGS=-Wall -Wextra -pedantic
LDFLAGS=-lm

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT) $(LDFLAGS)

run:
	./$(OUT)

clean:
	rm -f $(OUT)
