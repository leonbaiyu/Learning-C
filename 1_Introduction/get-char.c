// #include <stdio.h>

// /* copying input to ouptput*/

// int main()

// {
//     int c, result;

//     // while ((c = getchar()) != EOF) {
//     //     putchar(c);
//     // }

//     result = getchar() != EOF;

//     printf("result = %d",result);
// }

// #include <stdio.h>

// int main () {
//    char c;
 
//    printf("Enter character: ");
//    c = getchar();

//    printf("Character entered: ");
//    while 
//    putchar(c);

//    return(0);
// }
#include <stdio.h>

int main(void) {
    int character;

    printf("Enter a string (press Enter to end):\n");

    // Read characters until newline or EOF is encountered
    while ((character = getchar()) != '\n' && character != EOF) {
        // Process the character (example: print it)
        printf("You entered: %c\n", character);
    }

    printf("End of input\n");

    return 0;
}
