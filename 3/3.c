#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];
    int width;

    scanf("%99s", name);
    width = strlen(name) + 5;
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"\n", width, name);

    return 0;
}
