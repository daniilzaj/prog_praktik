#include "myarr.h"

int last_neg(const int *a, int n) {
    int i;

    for (i = n - 1; i >= 0; i--) {
        if (a[i] < 0) {
            return i;
        }
    }
    return -1;
}

long long sum_range(const int *a, int n, int l, int r) {
    int i, t;
    long long s = 0;

    if (l > r) {
        t = l;
        l = r;
        r = t;
    }
    for (i = 0; i < n; i++) {
        if (a[i] >= l && a[i] <= r) {
            s += a[i];
        }
    }
    return s;
}

int cnt_below_avg(const int *a, int n) {
    int i, c = 0;
    long long s = 0;

    for (i = 0; i < n; i++) {
        s += a[i];
    }
    for (i = 0; i < n; i++) {
        if ((long long)a[i] * n < s) {
            c++;
        }
    }
    return c;
}
