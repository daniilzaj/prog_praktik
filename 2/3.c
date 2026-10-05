#include <stdio.h>
#define P printf
#define S(x) sizeof(x)

int main() {
    int d = 10, o = 010, h = 0x10;
    char c = 'A';

    P("DEC_10: %d\nOCT_10: %d\nHEX_10: %d\n", d, o, h);
    P("INT_SUFFIX: %zu %zu %zu %zu\n", S(10), S(10u), S(10LL), S(10ULL));
    P("FLOAT_SUFFIX: %zu %zu %zu\n", S(0.1f), S(0.1), S(0.1L));
    P("FLOAT_EQ: %d\n", 0.1f == 0.1);
    P("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    P("CHAR_LIT_VAR_STR: %zu %zu %zu\n", S('A'), S(c), S("A"));
}