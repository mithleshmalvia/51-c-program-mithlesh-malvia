#include <stdio.h>

/*
 * Lab 15 - Program 1 (Set 2 - Q.9 / Experiment 29)
 * Convert temperature from Fahrenheit to Celsius using:
 *   Celsius = (Fahrenheit - 32) * 5 / 9
 */
int main(void) {
    double fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &fahrenheit) != 1) {
        printf("Invalid input. Please enter a numeric temperature.\n");
        return 1;
    }

    /* Perform floating-point multiplication before division (avoid 5 / 9 integer division) */
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    printf("%.2lf F = %.2lf C\n", fahrenheit, celsius);

    return 0;
}
