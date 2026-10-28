CC = gcc
CFLAGS = -Wall -Wextra
LDLIBS = -lm
PROGRAMS = 1 2 3 4 5 variants

all: $(PROGRAMS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

clean:
	rm -f $(PROGRAMS)
