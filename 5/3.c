#include <stdio.h>

int main(void) {
    int n, i;
    double s;

    while (scanf("%d", &n) == 1 && n > 0) {
        s = 0.0;
        for (i = 1; i <= n; i++) {
            s += 1.0 / (i * i);
        }
        printf("SUM: %.6f\n", s);
    }

    return 0;
}
