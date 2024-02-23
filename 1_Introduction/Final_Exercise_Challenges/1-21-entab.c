//  This program will replace string of blanks with the minimum number of spaces and tabs.
// Simultaneously, we are still aligning the tabbed words with the tabstops/columns
#include <stdio.h>

#define TABWIDTH 4 /* Number of spaces in a tab*/
#define COLWIDTH 12

void main() {
    int c, pos;

    pos = 0;

    while ((c=getchar()) != EOF) {


        if (c == '\t') {
            int no_blanks = COLWIDTH - (pos % COLWIDTH);
            int ns, nt;

            ns = no_blanks % TABWIDTH;
            nt = (no_blanks - ns) /TABWIDTH;

            for (int i=0; i < ns; ++i) {
                printf(" ");
                ++pos;
            }
            for (int i=0; i < nt; ++i) {
                printf("\t");
                pos = pos + TABWIDTH;
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