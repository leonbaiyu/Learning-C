#include <stdio.h>

int main()

{
<<<<<<< HEAD
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
=======
    int c;
    printf("Give me an string of characters including repeated blanks and I will remove them (not including tabs and new lines): ");

    /* Receive the input:*/
    while (( (c = getchar()) != EOF) ) {
        /* Check if character is a blank space: ' ' 
        If character is a blank space, then get next character,
        repeating the check until the next character is not a blank.
        Once a non-blank has been detected, output a single blank followed by the detected non-blank*/
        if (c == ' ') {
            while (c == ' ') {
                c = getchar();
            }
            printf(" ");
        }
        printf("%c",c);
>>>>>>> 539fe1b1423690e21ccf13427896bebde7a07360
    }
        /* Output the same character*/
    
}

