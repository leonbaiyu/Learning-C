#include <stdio.h>

// Function prototypes
void rcomment(void);
void stdcomment(void);
void quotecomment(void);

int main(void) {
    int c;

    // Open the file for reading
    // Add error handling for file opening
    FILE *filePointer = fopen("example.c", "r");
    if (filePointer == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        return 1;
    }

    // Read and process each character in the file
    while ((c = fgetc(filePointer)) != EOF) {
        if (c == '/') {
            rcomment();
        } else {
            printf("%c", c);
        }
    }

    // Close the file
    fclose(filePointer);

    return 0;
}

void rcomment(void) {
    int d;

    // Check for the end of a single-line comment
    if ((d = fgetc(stdin)) != EOF) {
        if (d == '/') {
            stdcomment();
        } else if (d == '*') {
            quotecomment();
        } else {
            printf("/%c", d);
        }
    }
}

void stdcomment(void) {
    int c;

    // Skip characters until the end of the line
    while (((c = fgetc(stdin)) != EOF) && (c != '\n')) {
        // Do nothing
    }
}

void quotecomment(void) {
    int c, d;

    // Skip characters until the end of the multi-line comment
    while ((c = fgetc(stdin)) != EOF) {
        if (c == '*') {
            if ((d = fgetc(stdin)) != EOF) {
                if (d == '/') {
                    return; // exit the loop for the end of the multi-line comment
                }
            } else {
                return; // exit the loop if EOF is encountered
            }
        }
    }
}
