#include <stdio.h>
#include <limits.h>
#define P printf

int main() {
    P("INT_MIN: %d\nINT_MAX: %d\nUINT_MAX: %u\n", INT_MIN, INT_MAX, UINT_MAX);
    P("RANGE_OK: %d\n", (unsigned int)INT_MAX * 2u + 1u == UINT_MAX);
}
