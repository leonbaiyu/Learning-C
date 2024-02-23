/* Writing a program to determine the ranges of char, short, int,a nd long variables, both signed and unsigned. 
This will be done using standard headers */
#include <stdio.h>
#include <limits.h>
#include <float.h>


void main() {
    int baseSigned;
    int baseUnsigned = 0;
    printf("Below are the ranges of variable types based upon standard headers:\n");

    printf("signed char : %d to %d \n", SCHAR_MIN,SCHAR_MAX);

    printf("unsigned char : %d to %d \n", baseUnsigned,UCHAR_MAX);

    printf("signed short : %d to %d \n", SHRT_MIN, SHRT_MAX  );

    printf("unsigned short : %d to %d \n", baseUnsigned, USHRT_MAX );

    printf("signed long : %lu to %lu \n", LONG_MIN, LONG_MAX);

    printf("unsigned long : %lu to %lu \n", baseUnsigned,ULONG_MAX);

    printf("signed int : %d to %d \n", INT_MIN, INT_MAX  );

    printf("unsigned int : %u to %u \n", baseUnsigned, UINT_MAX );



}