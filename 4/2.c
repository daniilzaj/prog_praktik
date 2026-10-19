#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint16_t f, d;
    float res;

    scanf("%hu %hu", &f, &d);
    res = (float)f * d;
    printf("RESULT: %.2f\n", res);
    printf("SIZE_F: %llu\n", (unsigned long long)sizeof(f));
    printf("SIZE_D: %llu\n", (unsigned long long)sizeof(d));
    printf("SIZE_RESULT: %llu\n", (unsigned long long)sizeof(res));

    return 0;
}
