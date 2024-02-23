#include <stdio.h>

/* This program converts Fahrenheit temperatures into Celcius using the formula (5/9)* (Fahrenheit Temperature - 32)*/

main()

{
    float fahr, cel; /*Initialising the variables as floats*/
    float lower, upper, step; /*Note that this will invoke floats operations which can lead to inaccurate calculations*/

    lower = 0; /* lower limit of Fahrenheit values */
    upper = 300; /* upper limit of Fahrenheit values */
    step = 20; /* step increment in Fahrenheit values*/
    
    printf("Fahr\tCel\n"); /* Top of the table*/

    fahr = lower; /* Starting the loop at the lower limit for Fahrenheit*/
    while (fahr <= upper) {
        cel = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, cel);
        // printf("%3d\t%6d\n", fahr, cel);  /* Notice that if you use the above line, you will get garbage results.*/
        /* This is because when the printf function tries to interpret the binary representation of the float as an integer.*/
        /* The result is garbage and can't be explained easily*/ 
        fahr = fahr + step;
    }

}