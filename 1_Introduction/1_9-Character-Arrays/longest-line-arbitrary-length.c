// Adapting longest line program to read in an arbitrarily long line and store as much of it as possible
// More specifically, if a line is greater than the length of the limit, we can store the line length up to that limit but we cannot store the entire line.
// However, we can continue to read the line and count the total length of the line. 

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size*/

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main() {
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        printf("Length %d, %s"  , len, line);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) { /* there was a line */
        printf("The longest line was %s", longest);
    }
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim) {
    int c, i, j;

    // Introduce additional variable to record the number of characters copied to the string
    j = 0;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim-2) { /* Allow 2 characters in string for newline and null character for termination*/
            s[j] = c; /* We use j as the index as we need to be able to return the jth element to append the newline and null */
            ++j;
        }
    
    }
    if (c == '\n') {
        s[j] = c;
        ++i;
        ++j;
    }
    s[j] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}