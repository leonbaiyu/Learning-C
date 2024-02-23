// Adapting longest line program to print lines of length greater than 80 characters.

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size*/

void reverse(char line[]);
int remove_trail(char line[]);
int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main() {
    char line[MAXLINE]; /* current input line */

    while (getline(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s",line);
    
    }
    return 0;
}

/* Reverse the order of a character string*/
void reverse(char line[]) {
    /* Using an empty character array to store the reversed string then returning that string*/
    int j, i;
    char temp;

    j = i = 0;

    while (line[i] != '\n') {
        ++i;
    }
    --i; /* Back off of the newline*/
    
    while (j < i ) {
        temp = line[i];
        line[i] = line[j];
        line[j] = temp;
        ++j;
        --i;
    }
}

/* Removing trailing blanks and tabs from character string*/
int remove_trail(char line[]) {
    int i;

    i=0; /* index acts as cursor*/

    /* Scrolls the end of the line*/
    while (line[i] != '\n') {
        ++i;
    }

    --i; /* back off from the end of the line*/

    /* Scroll backwards through the line, until the first non trailing blank*/

    while ( i >= 0 && (line[i] == ' ' || line[i] == '\t')) {
        --i;
    }

    if (i >= 0) {
        line[i+1] = '\n';
        line[i+2] = '\0';
    }

    return i;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
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