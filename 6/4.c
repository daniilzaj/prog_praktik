#include <stdio.h>

int main(void) {
    double көлем, бағасы;

    scanf("%lf", &көлем);
    if (көлем <= 10) {
        бағасы = көлем;
    } else if (көлем <= 30) {
        бағасы = 10 + (көлем - 10) * 2;
    } else {
        бағасы = 50 + (көлем - 30) * 3;
    }
    printf("СУ: %.2f\n", көлем);
    printf("БАҒА: %.2f\n", бағасы);

    return 0;
}
