/*
    celstofahrtable.c
    Author: Brendan Gasparin
    Date: 21 April 2024
    Prints a table of Celcius to Fahrenheit values.
*/

#include <stdio.h>

float celstofahr(float cels);
void printbanner();

int main()
{
    float celsius;
    int lower, upper, step;

    lower = 0;      // lower bound of Celsius in table
    upper = 300;    // upper bound of Celsius in table
    step = 20;      // Celsius value increment
    celsius = (float) lower;

    // print banner
    printbanner();

    while (celsius <= upper) {
        printf("%7.0f %13.0f\n", celsius, celstofahr(celsius));
        celsius += step;
    }

    return 0;
}

// converts float cels parameter and returns fahrenheit value
float celstofahr(float cels)
{
    return cels * 9.0 / 5.0 + 32.0;
}

void printbanner()
{
    printf("***************************\n");
    printf("CELSIUS TO FAHRENHEIT TABLE\n");
    printf("***************************\n");
}