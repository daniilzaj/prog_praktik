#include <stdio.h>
#include <stdint.h>

int main() {
    unsigned t;
    scanf("%u", &t);
    uint8_t x = t, a, m, s;
    a = x + 10;
    m = x * 2;
    s = x * x;
    printf("ADD: %u\n", (unsigned)a);
    printf("MUL2: %u\n", (unsigned)m);
    printf("SQR: %u\n", (unsigned)s);
}