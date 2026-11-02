#include <stdio.h>

int main(void) {
    int таңдау;
    double бір, екі;

    while (1) {
        printf("1 тығыздық 2 масса 3 көлем 4 арнайыкөлем 5 шығу\n");
        if (scanf("%d", &таңдау) != 1) {
            break;
        }
        switch (таңдау) {
            case 1:
                scanf("%lf %lf", &бір, &екі);
                printf("ТЫҒЫЗДЫҚ: %.4f\n", бір / екі);
                break;
            case 2:
                scanf("%lf %lf", &бір, &екі);
                printf("МАССА: %.4f\n", бір * екі);
                break;
            case 3:
                scanf("%lf %lf", &бір, &екі);
                printf("КӨЛЕМ: %.4f\n", бір / екі);
                break;
            case 4:
                scanf("%lf %lf", &бір, &екі);
                printf("АРНАЙЫ_КӨЛЕМ: %.4f\n", бір / екі);
                break;
            case 5:
                return 0;
            default:
                printf("ҚАТЕ\n");
        }
    }

    return 0;
}
