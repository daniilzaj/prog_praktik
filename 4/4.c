#include <stdio.h>

int main(void) {
    int n, i = 1;
    unsigned long long res = 1;

    scanf("%d", &n);
    while (i < n) {
        res *= 1000;
        i++;
    }
    printf("RESULT: %llu\n", res);

    return 0;
}
