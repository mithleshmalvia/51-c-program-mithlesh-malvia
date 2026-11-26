#include <stdio.h>

/*
 * Lab 13 - Program 1 (Set 2 - Q.5 / Experiment 25)
 * Check whether a given number is positive, negative, or zero.
 */
int main(void) {
    double number;

    printf("Enter a number: ");
    if (scanf("%lf", &number) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (number > 0.0) {
        printf("%.2lf is a positive number.\n", number);
    } else if (number < 0.0) {
        printf("%.2lf is a negative number.\n", number);
    } else {
        printf("The entered number is zero.\n");
    }

    return 0;
}
