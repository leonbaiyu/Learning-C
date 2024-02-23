// Writin a program to convert a hexadecimal string into the decimal integer equivalent
// A heexadecimal number will look something like this: B3ad
//
// The equivalent a decimal number will look something like this: 11 * 16^3 + 3 * 16^2 + 10*16^1 + 13 * 16^0
// The following program works using the assumption that alphabetical characters are stored in alphabetical order as integers.
// Such that one can subtract the number of character 'a' to get the alphabetical index of the character.

#include <stdio.h>
#include <math.h>

#define MAXLINE 100

int htoi(char s[]);
int hextodec(char hex_val);

void main() {
    char line[MAXLINE];
    int lim = MAXLINE;
    int c, i;
    int dec_val;

    printf("Input a hexadecimal string to convert it into a decimal integer (Max len 100):\n");
    
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }

    printf("The string you entered was: %s of length: %d\n", line, i);

    dec_val = htoi(line);
    
    printf("Decimal value %d",dec_val);

}

/* Converting a hexadecimal string into a decimal integer*/

int htoi(char s[]) {
    // We need a cursor and to move the cursor to the RHS of the string so that we can begin interpretting the hexadecimal.
    int dec_val = 0;
    int j = 0; // Cursor

    
    while (s[j] != '\0') {++j;} // Finding the end of the string


    printf("string was of length %d\n",j);

    --j; // Backing off of the EOF to the first digit

    // Begin interpretation of hexadecimal moving cursor left with each step
    int i = 0;
    for (j;j >= 0; --j) {
        printf("%d : %c -> %d * 16^ %d = %d * %d\n",j,s[j],hextodec(s[j]),i,hextodec(s[j]),(int)pow(16, i));
        // printf("hexademical %c , decimal %d \n", s[j], hextodec(s[j])*pow(16,i));

        dec_val += hextodec(s[j])*(int)pow(16,i);
        ++i;
    }

    return dec_val;
}

int hextodec(char hex_val) {

    if (hex_val >= 'a' && hex_val <= 'f') {
        return hex_val - 'a' + 10;
    }
    else if (hex_val >= 'A' && hex_val <= 'F') {
        return hex_val - 'A' + 10;
    }
    else if (hex_val >= '0' && hex_val <= '9') {
        return hex_val - '0';
    }
    else {
        printf("Invalid input!\n");
    }

    return 0;
}