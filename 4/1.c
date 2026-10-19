#include <stdio.h>

#define K 1000

int main(void) {
    int p;

    while (scanf("%d", &p) == 1 && p > 0) {
        printf("%d kJ %d J\n", p / K, p % K);
    }

    return 0;
}
