#include <stdio.h>
#include <math.h>

double f(double a, double b) {
    return tan(a * b);
}

int main(void) {
    double a, b, r;

    while (scanf("%lf %lf", &a, &b) == 2) {
        if (!isfinite(a) || !isfinite(b)) {
            printf("ERROR\n");
            continue;
        }
        r = f(a, b);
        if (isfinite(r)) {
            printf("RESULT: %.4f\n", r);
        } else {
            printf("ERROR\n");
        }
    }

    return 0;
}
