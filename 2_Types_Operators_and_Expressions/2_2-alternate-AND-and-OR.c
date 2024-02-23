#include <stdio.h>

void main() {
    int c;
    int endLoop = 0;
    int i = 1;
    int lim = 100;

    // We want to recreate the following for loop with using && and ||
    // for (int i = 1; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) {

    // }

    printf("Input something: \n");

    while (!endLoop) {
        if (i >= lim - 1) {
            endLoop = 1;
        }
        else if ((c=getchar()) == '\n') {
            endLoop = 1;
        }
        else if (c == EOF) {
            endLoop = 1;
        }
        else{
            printf("%c",c);
        }


    }
}