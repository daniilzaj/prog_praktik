#include <stdio.h>

int main(void) {
    int n, i = 0;
    unsigned long long a = 0, b = 1, c;

    scanf("%d", &n);
    while (i < n) {
        printf("%llu", a);
        if (i < n - 1) {
            printf(" ");
        }
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    printf("\n");

    return 0;
}
