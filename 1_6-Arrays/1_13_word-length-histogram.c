#include <stdio.h>

// Writing a program to read a string, parse it into words, and print a histogram of the length of the words.

// 1. The program will read the input character by character.
// 2. The program will record whether the state of the system is inside or outside a word.
// 3. The program will record the length of the word. The ending of which is marked by a non-alphabetical character.
// 4. The program will record the length of the word and store it in an array.
// 5. Once EOF is reached, the program will print a histogram of the length of the words.

// Defining symbolic constants for whether the state of the system is inside or outside a word
#define IN 1
#define OUT 0


int main()

{
    int c, state, word_length;
    int word_lengths[20];

    // Request an input
    printf("Give me an input: ");

    // Predefining our variables
    state = OUT;
    for (int i = 0; i < 20; i++) {
        word_lengths[i] = 0;
    }

    // Reading inputs through getchar() until EOF is reached
    while ((c = getchar()) != EOF ) {
        // Check if the character is alphabetical
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == OUT) {
                // Ignore the character
            }
            else {
                state = OUT;
                word_lengths[word_length]++;
            }
        }
        else { // if the character is alphabetical
            if (state == OUT) {
                state = IN;
                word_length = 0;
            }
            word_length++;
        }
    } 

    // As a test, print out the word_lengths array, indicating number of words of each length
    // for (int i = 0; i < 20; i++) {
    //     printf("There were %d words with length %d \n", word_lengths[i], i);
    // }

    // Print a horizontal histogram of word lengths

    for (int i = 0; i < 20; i++) {
        printf("%d: ", i);
        for (int j = 0; j < word_lengths[i]; j++) {
            printf(" | ");
        }
        printf("\n");
    }

    printf("\n");

    // Printing a vertical histogram of word lengths
    // 1. Find the maximum value in the word_lengths array
    int max = 0;
    for (int i = 0; i < 20; i++) {
        if (word_lengths[i] > max) {
            max = word_lengths[i];
        }
    }
    max++;

    // 2. Create 2D array for the histogram
    int histogram[max][20];

    // 3. Fill the histogram with spaces
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < max; j++) {
            histogram[j][i] = ' ';
        }
    }

    // 4. Fill the histogram with the word lengths
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < word_lengths[i]; j++) {
            histogram[j][i] = '|';
        }
    }

    // 5. Print the histogram
    for (int i = max - 1; i >= 0; i--) {
        for (int j = 0; j < 20; j++) {
            printf("%c ", histogram[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 20; i++) {
        printf("%d ", i);
    }
    

}