#include <stdio.h>

int main(void) {
    int result;

    printf("Enter characters (press Ctrl+Z and Enter to end on Windows, Ctrl+D on Unix-like systems):\n");

    // result = (getchar() != EOF);
    // printf("result: %d\n", result);
    while ((result = getchar()) != EOF) {
        printf("Result: %d\n", (getchar() != EOF) );
    }

    return 0;
}
