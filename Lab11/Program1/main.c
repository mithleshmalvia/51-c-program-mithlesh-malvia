#include <stdio.h>

/*
 * Lab 11 - Program 1 (Set 2 - Q.1 / Experiment 21)
 * Accept two numbers from the user console and display their sum.
 */
int main(void) {
    double num1, num2, sum;

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    sum = num1 + num2;
    printf("Sum of %.2lf and %.2lf = %.2lf\n", num1, num2, sum);

    return 0;
}
