#include <stdio.h>

int main(void) {
    int n, i = 0;
    unsigned long long v = 1;

    scanf("%d", &n);
    while (i < n) {
        printf("%llu", v);
        if (i < n - 1) {
            printf(" ");
        }
        v *= 1000;
        i++;
    }
    printf("\n");

    return 0;
}
