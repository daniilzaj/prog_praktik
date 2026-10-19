#include <stdio.h>

int main(void) {
    int n, i = 0;
    double a1, an, res = 0;

    scanf("%d %lf %lf", &n, &a1, &an);
    while (i < n) {
        if (n == 1) {
            res += a1;
        } else {
            res += a1 + (an - a1) * i / (n - 1);
        }
        i++;
    }
    printf("RESULT: %.6f\n", res);

    return 0;
}
