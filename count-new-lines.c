#include <stdio.h>

int main()

{
    int nl, nt, ns, c;

    nl = 0;
    nt = 0;
    ns = 0;

    printf("Enter a string: ");
    /*Counting new lines*/
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        } else if (c == '\t') {
            ++nt;
        } else if (c == ' ') {
            ++ns;
        }
    }

    printf("Number of new lines %d\n",nl);
    printf("Number of tabs %d\n",nt);
    printf("Number of spaces %d\n",ns);

    



}