#include <stdio.h>

/*
 * Lab 13 - Program 2 (Set 2 - Q.6 / Experiment 26)
 * Compute the quotient and remainder of two integers,
 * safely handling division by zero.
 */
int main(void) {
    int dividend, divisor;
    int quotient, remainder;

    printf("Enter dividend (integer): ");
    if (scanf("%d", &dividend) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter divisor (non-zero integer): ");
    if (scanf("%d", &divisor) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("\nQuotient  (%d / %d) = %d\n", dividend, divisor, quotient);
    printf("Remainder (%d %% %d) = %d\n", dividend, divisor, remainder);

    return 0;
}
