#include "matrixfunc.h"

void row_sums(const int *m, size_t r, size_t c, long long *out) {
    size_t i, j;
    long long s;

    for (i = 0; i < r; i++) {
        s = 0;
        for (j = 0; j < c; j++) {
            s += *(m + i * c + j);
        }
        *(out + i) = s;
    }
}

int count_above(const int *m, size_t r, size_t c, int k) {
    size_t i, j;
    int ans = 0;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (*(m + i * c + j) > k) {
                ans++;
            }
        }
    }
    return ans;
}

int last_negative(const int *m, size_t r, size_t c, int *out) {
    size_t i, j;

    for (i = r; i > 0; i--) {
        for (j = c; j > 0; j--) {
            if (*(m + (i - 1) * c + j - 1) < 0) {
                *out = *(m + (i - 1) * c + j - 1);
                return 1;
            }
        }
    }
    return 0;
}
