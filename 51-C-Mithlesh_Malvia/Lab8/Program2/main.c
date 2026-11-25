#include <stdio.h>
#include <stdlib.h>

void validateDivisor(double divisor);

/*
 * Lab 8 - Program 2 (Q.16)
 * Demonstrate the use of the exit() function with a suitable condition
 * (terminating immediately if a user enters zero or non-numeric divisor).
 */
int main(void) {
    double dividend, divisor, quotient;

    printf("Enter dividend: ");
    if (scanf("%lf", &dividend) != 1) {
        printf("Invalid input for dividend. Exiting program.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter divisor (must be non-zero): ");
    if (scanf("%lf", &divisor) != 1) {
        printf("Invalid input for divisor. Exiting program.\n");
        exit(EXIT_FAILURE);
    }

    /* Helper calls exit() directly if divisor == 0 */
    validateDivisor(divisor);

    /* This code only executes if exit() was NOT called */
    quotient = dividend / divisor;
    printf("%.2lf / %.2lf = %.2lf\n", dividend, divisor, quotient);
    printf("Program completed normally.\n");

    return 0;
}

void validateDivisor(double divisor) {
    if (divisor == 0.0) {
        printf("Critical Error: Divisor cannot be zero. Terminating immediately using exit().\n");
        exit(EXIT_FAILURE);
    }
}
