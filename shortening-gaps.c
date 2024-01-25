#include <stdio.h>

main()

{
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
    }
        /* Output the same character*/
    
}

