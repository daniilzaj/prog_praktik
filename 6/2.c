#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    wint_t таңба, ең_аз = WEOF;

    setlocale(LC_ALL, "");
    while ((таңба = getwchar()) != L'#' && таңба != WEOF) {
        if (ең_аз == WEOF || таңба < ең_аз) {
            ең_аз = таңба;
        }
    }
    if (ең_аз != WEOF) {
        wprintf(L"ЕҢ_АЗ_КОД: %u\n", (unsigned)ең_аз);
    }

    return 0;
}
