// Function any takes in two strings s1, s2, which identifies the position where the first of any of s2's characters appear in s1

#include <stdio.h>

int any(char s1[], char s2[]);
int firstOccurence(char s[], int c);

void main() {
    char inputString1[] = "The quick brown fox jumped over the lazy dog!";
    char inputString2[] = "cat?";

    any(inputString1,inputString2);
}

int any(char s1[], char s2[]) {
    /*Same process as squeeze but once the first occurrence of a character is detected
    the position is stored in an int variable. You repeat this cycle through all characters in s2 
    This is similar how a min or max is identified from a list of numbers.
    */
    int minPos, pos;

    int i;
    minPos = firstOccurence(s1,s2[0]);

    for (i=1; s2[i] != '\0' ; i++){
        pos = firstOccurence(s1,s2[i]);
        if ((pos >= 0) && (pos <= minPos)) {
            minPos = pos;}
    }

    if (minPos != -1) {
    printf("The earliest occurrence of a s2 character in s1 was %d",minPos);
    }
    else {
        printf("No characters from s2 were found in s1");
    }


   
}

/* squueze: delete all c from s */
int firstOccurence(char s[], int c)
{
    int i;

    for (i = 0; s[i] != '\0';i++){
        if (s[i] == c){
            printf("character %c found at position %d in s1\n", c,i);
            return i;
        }
    }

    return -1;
}
