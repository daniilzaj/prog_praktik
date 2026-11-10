#include <stdio.h>

int isp(int x) {
    int i;

    if (x < 2) {
        return 0;
    }
    for (i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int c, n = 0, all = 0;

    while ((c = getchar()) != EOF) {
        all++;
        if (isp(c)) {
            n++;
        }
    }
    printf("PRIME_CODES: %d\n", n);
    printf("TOTAL: %d\n", all);

    return 0;
}
