#include <stdio.h>

#define N 111260119
#define K 0

int main(void) {
    printf("5.1: %d\n", N % 30 + 1);
    printf("5.2: %d\n", (N + K + 6) % 30 + 1);
    printf("5.3: %d\n", (N + K + 12) % 30 + 1);
    printf("5.4: %d\n", (N + K + 18) % 30 + 1);
    printf("5.5: %d\n", (N + K + 22) % 30 + 1);

    return 0;
}
