/*
    celstofahrtable.c
    Author: Brendan Gasparin
    Date: 14 April 2024
    Prints a table of Celcius to Fahrenheit values.
*/

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int lower, upper, step;

    lower = 0;      // lower bound of Celsius in table
    upper = 300;    // upper bound of Celsius in table
    step = 20;      // Celsius value increment
    celsius = (float) lower;

    // print banner
    printf("***************************\n");
    printf("CELSIUS TO FAHRENHEIT TABLE\n");
    printf("***************************\n\n");

    while (celsius <= upper) {
        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        printf("%3.0f %17.0f\n", celsius, fahrenheit);
        celsius += step;
    }
}
