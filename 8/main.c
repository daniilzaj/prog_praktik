#include <stdio.h>
#include "myarr.h"

#define MAX 1000

int read_int(int *x) {
    int c, ok;

    while ((ok = scanf("%d", x)) != 1) {
        if (ok == EOF) {
            return 0;
        }
        while ((c = getchar()) != '\n' && c != EOF) {
        }
        printf("INPUT_ERROR\n");
    }
    return 1;
}

void menu(void) {
    printf("a size\n");
    printf("b fill\n");
    printf("c show\n");
    printf("d last negative\n");
    printf("e sum in range\n");
    printf("f below average\n");
    printf("g exit\n");
}

int main(void) {
    int a[MAX], n = 0, ready = 0, i, l, r, p;
    char op;

    while (1) {
        menu();
        printf("OP: ");
        if (scanf(" %c", &op) != 1) {
            break;
        }
        if (op == 'a') {
            printf("N: ");
            if (!read_int(&n)) {
                break;
            }
            if (n < 1 || n > MAX) {
                n = 0;
                printf("SIZE_ERROR\n");
            } else {
                ready = 0;
            }
        } else if (op == 'b') {
            if (n == 0) {
                printf("SET_SIZE\n");
                continue;
            }
            for (i = 0; i < n; i++) {
                printf("A[%d]: ", i);
                if (!read_int(&a[i])) {
                    return 0;
                }
            }
            ready = 1;
        } else if (op == 'c') {
            if (!ready) {
                printf("FILL_ARRAY\n");
                continue;
            }
            for (i = 0; i < n; i++) {
                printf("A[%d] = %d, %p\n", i, a[i], (void *)&a[i]);
            }
        } else if (op == 'd') {
            if (!ready) {
                printf("FILL_ARRAY\n");
                continue;
            }
            p = last_neg(a, n);
            if (p == -1) {
                printf("NOT_FOUND\n");
            } else {
                printf("INDEX: %d\n", p);
            }
        } else if (op == 'e') {
            if (!ready) {
                printf("FILL_ARRAY\n");
                continue;
            }
            printf("L R: ");
            if (!read_int(&l) || !read_int(&r)) {
                break;
            }
            printf("SUM: %lld\n", sum_range(a, n, l, r));
        } else if (op == 'f') {
            if (!ready) {
                printf("FILL_ARRAY\n");
                continue;
            }
            printf("COUNT: %d\n", cnt_below_avg(a, n));
        } else if (op == 'g') {
            break;
        } else {
            printf("OP_ERROR\n");
        }
    }

    return 0;
}
