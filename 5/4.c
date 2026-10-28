#include <stdio.h>

int main(void) {
    double a[8], mn;
    int i;

    for (i = 0; i < 8; i++) {
        a[i] = i + 1.0;
        printf("%.2f%c", a[i], i == 7 ? '\n' : ' ');
    }

    mn = a[0];
    for (i = 1; i < 8; i++) {
        if (a[i] < mn) {
            mn = a[i];
        }
    }
    printf("MIN: %.2f\n", mn);

    return 0;
}
