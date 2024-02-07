#include <stdio.h>

int main()

// Writing a program to copy its input to output but replace tabs with \t, backspaces with \b, and backslashes with \\.
{
    int c;
    // Request an input
    printf("Give me an input: ");
    // Reading inputs through getchar() until EOF is reached
    while ((c = getchar()) != EOF) {
        // Checking individually for tabs spaces or backslashes
        if (c == '\t') {
            printf("\\t");
        }
        else if (c == '\b') {
            printf("\\b");
        }
        else if (c == '\\') {
            printf("\\\\");
        }
        else {
            printf("%c", c);
        }
    }
}