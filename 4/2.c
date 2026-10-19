#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint16_t d1, d2;
    float res;

    scanf("%hu %hu", &d1, &d2);
    res = (float)d1 * d2 / 2;
    printf("RESULT: %.2f\n", res);
    printf("SIZE_UINT16: %llu\n", (unsigned long long)sizeof(uint16_t));
    printf("SIZE_FLOAT: %llu\n", (unsigned long long)sizeof(float));

    return 0;
}
