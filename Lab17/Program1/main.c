#include <stdio.h>

/*
 * Lab 17 - Program 1 (Set 2 - Q.13 / Experiment 33)
 * Swap two numbers using a temporary third variable.
 */
int main(void) {
    double num1, num2, temp;

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input for the first number.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input for the second number.\n");
        return 1;
    }

    printf("\nBefore Swapping: num1 = %.2lf, num2 = %.2lf\n", num1, num2);

    /* Three-step swap using temporary third variable */
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After Swapping : num1 = %.2lf, num2 = %.2lf\n", num1, num2);

    return 0;
}
