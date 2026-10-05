#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    wchar_t module1[100], module2[100], module3[100];

    setlocale(LC_ALL, "");
    wscanf(L"%99ls %99ls %99ls", module1, module2, module3);
    wprintf(L"%-15ls|%20ls|%.5ls\n", module1, module2, module3);

    return 0;
}
