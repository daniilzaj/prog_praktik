#include <stdio.h>
#define ll long long
#define P printf
int main() {
    int a;
    unsigned b, c;
    scanf("%d %x %o", &a, &b, &c);
    P("UNIT_ID: %d\n", a);
    P("UNIT_VERSION: %u\n", b);
    P("UNIT_STATUS: %u\n", c);
    P("SUM: %lld\n", a + (ll)b + c);
}