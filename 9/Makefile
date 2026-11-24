CC = gcc
CFLAGS = -Wall -Wextra
PROGRAM = 9
SOURCES = main.c matrixfunc.c

all: $(PROGRAM)

$(PROGRAM): $(SOURCES) matrixfunc.h
	$(CC) $(CFLAGS) $(SOURCES) -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)
