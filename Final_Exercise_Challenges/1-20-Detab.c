// Writing a program detab, that replaces tabs in the input with the proper number of blanks to space to the next tab stop.
// Assume a fixed step of tab stops, say every n columns.
#include <stdio.h>

#define COLWIDTH 12 /* The width of each tab column

/* We will replace tabs with blanks such that different length words will align themselves to the left hand side of the column*/

void main()

{
    int c, pos;

    pos = 0;

    while ((c=getchar()) != EOF) {


        if (c == '\t') {
            int no_blanks = COLWIDTH - (pos % COLWIDTH);

            for (int i=0; i < no_blanks; ++i) {
                printf(" ");
                ++pos;
            }
        }
        else if (c == '\n') {
            printf("\n");
            pos = 0;
        }
        else {
            printf("%c", c);
            ++pos;

        }

        
    }

}
