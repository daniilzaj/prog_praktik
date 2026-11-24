#ifndef MATRIXFUNC_H
#define MATRIXFUNC_H

#include <stddef.h>

void row_sums(const int *m, size_t r, size_t c, long long *out);
int count_above(const int *m, size_t r, size_t c, int k);
int last_negative(const int *m, size_t r, size_t c, int *out);

#endif
