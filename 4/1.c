#include <stdio.h>

#define K 1000

int main(void) {
    int p;

    while (scanf("%d", &p) == 1 && p > 0) {
        printf("%d MW %d kW\n", p / K, p % K);
    }

    return 0;
}
