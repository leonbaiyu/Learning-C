// This program will fold long input lines into 2 or more smaller lines after the last alphabetical character after n characters
// It will also account for the scenario where there are no blanks near the nth character

#include <stdio.h>

#define FOLDNUM 50 /* Length of line after which the line is folded*/

void main() {
    int c, pos;

// Request line input
    printf("Input a line of length greater than 50 characters: \n");
    pos = 0;

    while ((c=getchar()) != EOF) {
        if (((pos >= FOLDNUM-10) && (pos < FOLDNUM)) && ((c == ' ') || (c == '\t'))) {
            
            printf("\n"); /* continue on the following line*/
            pos = 0; /* Reset position to 0*/

            }

        
        else if (pos == FOLDNUM) { /* If no blank is found, then truncate the word with dashes*/
            printf("-\n-");
            pos = 1;
        }
        else {
            
            if (c=='\t') {
                printf("    ");
                pos = pos + 4;
            }
            else{
            printf("%c",c);
            ++pos;
            }
        }

    }
}