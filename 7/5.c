#include <stdio.h>

long long rec(long long n, long long d) {
    long long s;

    if (d > n / d) {
        return 0;
    }
    s = rec(n, d + 1);
    if (n % d != 0) {
        return s;
    }
    if (d == 1) {
        return 1 + s;
    }
    if (d == n / d) {
        return d + s;
    }
    return d + n / d + s;
}

long long itr(long long n) {
    long long i, s = 0;

    for (i = 1; i <= n / i; i++) {
        if (n % i == 0) {
            if (i == 1) {
                s++;
            } else if (i == n / i) {
                s += i;
            } else {
                s += i + n / i;
            }
        }
    }
    return s;
}

int main(void) {
    long long n, a, b;

    if (scanf("%lld", &n) != 1 || n < 2 || n > 1000000000LL) {
        return 0;
    }
    a = rec(n, 1);
    b = itr(n);
    printf("RECURSIVE_SUM: %lld\n", a);
    printf("ITERATIVE_SUM: %lld\n", b);
    if (a == n && b == n) {
        printf("PERFECT: YES\n");
    } else {
        printf("PERFECT: NO\n");
    }

    return 0;
}
