#include <stdio.h>

int main(void)

{
    int endoffield, result;

    endoffield = EOF;

    printf("EOF = %d\n",endoffield);

    printf('Enter a character?');

    printf("standard char = %d", (getchar() != EOF));
}