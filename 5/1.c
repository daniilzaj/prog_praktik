#include <stdio.h>

int main(void) {
    double x;
    int i = 1;

    for (x = -2.0; x <= 2.25; x += 0.5) {
        printf("%d %.4f %.4f\n", i++, x, x * x * x - x);
    }

    return 0;
}
