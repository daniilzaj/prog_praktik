#include <stdio.h>


int main(void) {
    int таңба, сан = 0;

    while ((таңба = getchar()) != '#' && таңба != EOF) {
        if (таңба == '0' || таңба == '1') {
            сан++;
        }
    }
    printf("ЕКІЛІК: %d\n", сан);

    return 0;
}
