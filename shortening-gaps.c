#include <stdio.h>

int main()

{
    int c, c_prev;

    printf("Give me an input: ");
    c_prev = getchar();
    printf("%c",c_prev);

    /* Receive the input:*/
    while ((c = getchar()) != EOF) {
        // if one of c_prev or c are not spaces, then print c
        if (c_prev != ' ' || c != ' ') {
            printf("%c", c);
        }
        
        c_prev = c;
    }
}

