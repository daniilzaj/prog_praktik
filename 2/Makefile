CC = gcc
CFLAGS = -Wall -Wextra
PROGRAMS = 1 2 3 4 5 6 7 8 9 10

all: $(PROGRAMS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(PROGRAMS)
