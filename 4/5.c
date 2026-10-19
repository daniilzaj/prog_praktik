#include <stdio.h>

double km_to_mi(double x) {
    const double K = 1.609;

    return x / K;
}

int main(void) {
    double x;

    while (scanf("%lf", &x) == 1) {
        printf("MILES: %.2f\n", km_to_mi(x));
    }

    return 0;
}
