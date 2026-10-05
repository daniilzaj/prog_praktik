#include <stdio.h>
#include <float.h>
#define R(N, T, D, M, F) printf(N ": size=%zu, digits=%d, max=" F "\n", sizeof(T), D, M)

int main() {
    R("FLOAT",   float,       FLT_DIG,  FLT_MAX,  "%e");
    R("DOUBLE",  double,      DBL_DIG,  DBL_MAX,  "%e");
    R("LDOUBLE", long double, LDBL_DIG, LDBL_MAX, "%Le");
}
