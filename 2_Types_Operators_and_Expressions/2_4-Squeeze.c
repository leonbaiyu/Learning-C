#include <stdio.h>

void squeeze(char s[], int c);
void squeezeString(char s1[], char s2[]);


void main() {
    char inputString1[] = "The quick brown fox jumped over the lazy dog!";
    char inputString2[] = "nana";

    squeezeString(inputString1,inputString2);
}


/* squueze: delete all c from s */
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0';i++){
        if (s[i] != c){
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

/*squeeze but it deletes any character in s2 from s1 */

void squeezeString(char s1[], char s2[]) {
    // Identify all unique characters in s2.
    // Loop through each character (from s2) and delete each occurrence of that character from s1

    // Next steps would be to store the already seen characters in an array that will be checked for each new character in s2
    int i;
    for (i=0; s2[i] != '\0' ; i++){
        squeeze(s1,s2[i]);
    }

    printf("Remaining string:\n %s", s1);
}


