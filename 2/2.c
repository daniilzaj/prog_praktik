#include <stdio.h>
#include <stdbool.h>
#define P printf

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    bool a = x, b = y;
    P("MODULE_READY: %d\n", a);
    P("FAULT_STATE: %d\n", b);
    P("BOOL_SIZE: %zu\n", sizeof(bool));
    P("FLAGS_SUM: %d\n", a + b);
}