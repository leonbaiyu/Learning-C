// Writing a program to convert Fahrenheit to Celsius using a function

#include <stdio.h>

// Defining the function to convert Fahrenheit to Celsius
float convert(float fahr);

int main() {
    float lower, upper, step;
    float fahr, Celsius;

    lower = 0;
    upper = 300;
    step = 20;

    for (float fahr = lower; fahr <= upper; fahr = fahr + step) {
        Celsius = convert(fahr);
        printf("%3.0f %6.2f\n", fahr, Celsius);
    }


}

float convert(float fahr) {
    float Celsius;

    Celsius = (5.0/9.0) * (fahr-32.0);

    return Celsius;
} 