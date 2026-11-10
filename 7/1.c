#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c < 32) {
            c = ' ';
        }
        putchar(c);
    }

    return 0;
}
