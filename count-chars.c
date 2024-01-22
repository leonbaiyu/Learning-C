#include <stdio.h>

/* Count characters in input; 2nd version */
int main(void) {
    double nc;

    for (nc = 0; getchar() != EOF; ++nc) {
        ; // Empty statement
    }

    printf("%.0f\n", nc);

    return 0; // Indicate successful completion
}
