#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint16_t d1, d2;
    float res;

    scanf("%hu %hu", &d1, &d2);
    res = (float)d1 * d2 / 2;
    printf("RESULT: %.2f\n", res);
    printf("SIZE_D1: %llu\n", (unsigned long long)sizeof(d1));
    printf("SIZE_D2: %llu\n", (unsigned long long)sizeof(d2));
    printf("SIZE_RESULT: %llu\n", (unsigned long long)sizeof(res));

    return 0;
}
