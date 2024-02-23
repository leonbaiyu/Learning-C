#include <stdio.h>

#define TAB_WIDTH 8 // Number of spaces per tab

int main() {
    int c, pos;

    pos = 0; // Current position in the line

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            // Calculate the number of spaces needed to reach the next tab stop
            int spaces = TAB_WIDTH - (pos % TAB_WIDTH);

            // Print the spaces
            for (int i = 0; i < spaces; i++) {
                putchar(' ');
                pos++;
            }
        } else if (c == '\n') {
            putchar(c);
            pos = 0; // Reset position to the beginning of the line
        } else {
            putchar(c);
            pos++;
        }
    }

    return 0;
}
