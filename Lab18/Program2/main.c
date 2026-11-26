#include <stdio.h>

/*
 * Lab 18 - Program 2 (Set 2 - Q.16 / Experiment 36)
 * Find the GCD (Greatest Common Divisor) of two integers using the
 * Euclidean algorithm, handling negative numbers and zero cases safely.
 */
int main(void) {
    int num1, num2;
    long long a, b, temp;

    printf("Enter first integer: ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input for the first integer.\n");
        return 1;
    }

    printf("Enter second integer: ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input for the second integer.\n");
        return 1;
    }

    /* Use positive magnitudes in long long to handle negative inputs safely */
    a = (num1 < 0) ? -(long long)num1 : (long long)num1;
    b = (num2 < 0) ? -(long long)num2 : (long long)num2;

    if (a == 0 && b == 0) {
        printf("GCD of 0 and 0 is undefined.\n");
        return 0;
    }

    /* Euclidean algorithm */
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD of %d and %d = %lld\n", num1, num2, a);

    return 0;
}
