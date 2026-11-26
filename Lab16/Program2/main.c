#include <stdio.h>

/*
 * Lab 16 - Program 2 (Set 2 - Q.12 / Experiment 32)
 * Swap two integers without using a third variable.
 *
 * Uses bitwise XOR instead of addition/subtraction (a = a + b) to avoid
 * signed integer overflow risks on large inputs.
 */
int main(void) {
    int num1, num2;

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

    printf("\nBefore Swapping: num1 = %d, num2 = %d\n", num1, num2);

    /* Bitwise XOR swap works safely for all integer values (including equals & negatives) */
    if (num1 != num2) {
        num1 = num1 ^ num2;
        num2 = num1 ^ num2;
        num1 = num1 ^ num2;
    }

    printf("After Swapping : num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
