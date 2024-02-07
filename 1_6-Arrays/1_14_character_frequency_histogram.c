// Writing a program to count the frequency of characters in an input then print their frequency in a histogram

// 1. The program will read the input character by character.
// 2. The program will store the frequency of each character in an array of size 256 for ASCII characters.
// 3. Once EOF is reached, the program will print a histogram of the frequency of each character.

#include <stdio.h>

int main()

{
    int c;
    int character_frequency[256];

    // Request an input
    printf("Give me an input: ");

    // Predefining our variables
    for (int i = 0; i < 256; i++) {
        character_frequency[i] = 0;
    }

    // Reading inputs through getchar() until EOF is reached
    while ((c = getchar()) != EOF ) {
        character_frequency[c]++;
    }


    // Print a horizontal histogram of character frequency

    for (int i = 0; i < 256; i++) {
        if (character_frequency[i] > 0) {
            printf("%c: ", i);
            for (int j = 0; j < character_frequency[i]; j++) {
                printf(" | ");
            }
            printf("\n");
        }
    }
}