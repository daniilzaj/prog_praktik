CC = gcc
CFLAGS = -Wall -Wextra
PROGRAMS = 1 2 3 4 5

all: $(PROGRAMS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(PROGRAMS)
