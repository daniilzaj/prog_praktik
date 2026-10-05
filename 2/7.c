#include <stdio.h>
#define P printf
int main() {
    long double l;
    scanf("%Lf", &l);
    double d = l;
    float f = l;
    P("FLOAT: %.6f\n", f);
    P("DOUBLE: %.6f\n", d);
    P("LDOUBLE: %.6Lf\n", l);
    P("FLOAT+1: %.6f\n", f + 1);
    P("DOUBLE+1: %.6f\n", d + 1);
    P("LDOUBLE+1: %.6Lf\n", l + 1);
}