#include <stdio.h>

// Writing a program to read an input, then print each word on a new line. Thus identifying each word in the input.
// 1.  The program will read the input character by character.
// 2.  The program will record whether the state of the system is inside or outside a word.
// 3.  If the character is non-alphabetical,
//      3a. if the state is OUT then the program will ignore the character.
//      3b. if the state is IN then the program will print a new line and change the state to OUT.
// 4.  If the character is alphabetical,
//      4a. if the state is OUT then the program will print the character and change the state to IN.
//      4b. if the state is IN then the program will print the character.
// 5.  The program will continue until EOF is reached.

int main()

// Defining symbolic constants for whether the state of the system is inside or outside a word
#define IN 1
#define OUT 0


{
    int c, state;

    // Request an input
    printf("Give me an input: ");
    state = OUT;

    // Reading inputs through getchar() until EOF is reached
    while ((c = getchar()) != EOF) {
        // Check if the character is alphabetical
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == OUT) {
                // Ignore the character
            }
            else { 
                printf("\n"); 
                state = OUT; 
            }
        }
        else { // if the character is alphabetical
            printf("%c", c);

            if (state == OUT) {
                state = IN;
            }

        }
        }
}