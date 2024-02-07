// This program will open a .c file. 
// Then read and print the code whilst removing the comments
// Comments can be found like this
/* Or like this */

// We must first be able to identify the start of a comment indicated by a "//"

// Alternatively, if we se a /*, then we know that a multi-line comment has begun

#include <stdio.h>

void rcomment(int c);
void stdcomment();
void quotecomment();

void main() {
    int c;

    while ((c=getchar()) != EOF){
        if (c == '/') { 
            rcomment(c);
        }
        else {
            printf("%c",c);
        }
    }
}
void rcomment(int c) {
    int d;

    if ((d=getchar()) != EOF) {
        if (d == '/') {
            stdcomment();
        }
        else if (d== '*') {
            quotecomment();
        }
        else {
            printf("%c%c",c,d);
        }
    }
}

void stdcomment() {
    int c;

    while (((c=getchar()) != EOF) && (c != '\n')) {
        /* Do nothing*/
    }

}

void quotecomment() {
    int c,d;

    while ((c=getchar() != EOF)) {
        if (c == '*') {
           if ((d = getchar()) != EOF) {
            if (d == '/'){
                continue;
            }
           }


        }
    }
}
