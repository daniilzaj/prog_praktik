#include <stdio.h>
#include "matrixfunc.h"

#define MAXR 100
#define MAXC 100
#define MAX (MAXR * MAXC)

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
    printf("d row sums\n");
    printf("e count above k\n");
    printf("f last negative\n");
    printf("g exit\n");
}

int main(void) {
    int a[MAX], ready = 0, x, k, v;
    int rr = 0, cc = 0;
    size_t r, c, i, j;
    long long s[MAXR];
    char op;

    menu();
    while (1) {
        printf("OP: ");
        if (scanf(" %c", &op) != 1) {
            break;
        }
        if (op == 'a') {
            printf("ROWS COLS: ");
            if (!read_int(&rr) || !read_int(&cc)) {
                break;
            }
            if (rr < 1 || rr > MAXR || cc < 1 || cc > MAXC) {
                rr = 0;
                cc = 0;
                ready = 0;
                printf("SIZE_ERROR\n");
            } else {
                ready = 0;
            }
        } else if (op == 'b') {
            if (rr == 0 || cc == 0) {
                printf("SET_SIZE\n");
                continue;
            }
            r = (size_t)rr;
            c = (size_t)cc;
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    printf("M[%zu][%zu]: ", i, j);
                    if (!read_int(&x)) {
                        return 0;
                    }
                    *(a + i * c + j) = x;
                }
            }
            ready = 1;
        } else if (op == 'c') {
            if (!ready) {
                printf("FILL_MATRIX\n");
                continue;
            }
            r = (size_t)rr;
            c = (size_t)cc;
            for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                    printf("M[%zu][%zu]=%d,%p\n", i, j, *(a + i * c + j), (void *)(a + i * c + j));
                }
            }
        } else if (op == 'd') {
            if (!ready) {
                printf("FILL_MATRIX\n");
                continue;
            }
            r = (size_t)rr;
            c = (size_t)cc;
            row_sums(a, r, c, s);
            for (i = 0; i < r; i++) {
                printf("SUM[%zu]: %lld\n", i, *(s + i));
            }
        } else if (op == 'e') {
            if (!ready) {
                printf("FILL_MATRIX\n");
                continue;
            }
            printf("K: ");
            if (!read_int(&k)) {
                break;
            }
            printf("COUNT: %d\n", count_above(a, (size_t)rr, (size_t)cc, k));
        } else if (op == 'f') {
            if (!ready) {
                printf("FILL_MATRIX\n");
                continue;
            }
            if (last_negative(a, (size_t)rr, (size_t)cc, &v)) {
                printf("LAST_NEGATIVE: %d\n", v);
            } else {
                printf("NOT_FOUND\n");
            }
        } else if (op == 'g') {
            break;
        } else {
            printf("OP_ERROR\n");
        }
    }

    return 0;
}
