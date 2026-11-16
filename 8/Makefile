CC = gcc
CFLAGS = -Wall -Wextra
PROGRAM = 8
SOURCES = main.c myarr.c

all: $(PROGRAM)

$(PROGRAM): $(SOURCES) myarr.h
	$(CC) $(CFLAGS) $(SOURCES) -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)
