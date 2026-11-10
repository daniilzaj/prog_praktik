#include <stdio.h>

void f(double *a, double *b, double *c) {
    double mx = *a, mn = *a, s = *a + *b + *c;

    if (*b > mx) {
        mx = *b;
    }
    if (*c > mx) {
        mx = *c;
    }
    if (*b < mn) {
        mn = *b;
    }
    if (*c < mn) {
        mn = *c;
    }
    *a = mx;
    *b = mn;
    *c = s / 3;
}

int main(void) {
    double a, b, c;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        return 0;
    }
    printf("BEFORE: %.2f %.2f %.2f\n", a, b, c);
    f(&a, &b, &c);
    printf("AFTER: %.2f %.2f %.2f\n", a, b, c);

    return 0;
}
