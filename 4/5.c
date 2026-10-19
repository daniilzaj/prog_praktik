#include <stdio.h>

double bit_to_byte(double x) {
    const double K = 8;

    return x / K;
}

int main(void) {
    double x;

    while (scanf("%lf", &x) == 1) {
        printf("BYTES: %.2f\n", bit_to_byte(x));
    }

    return 0;
}
