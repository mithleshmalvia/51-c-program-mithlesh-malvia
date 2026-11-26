#include <stdio.h>

/*
 * Lab 17 - Program 2 (Set 2 - Q.14 / Experiment 34)
 * Find the factorial of a given non-negative integer using an iterative loop.
 */
int main(void) {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer (0 to 20): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    /* 21! overflows 64-bit unsigned long long */
    if (n > 20) {
        printf("Input too large (%d! overflows 64-bit unsigned integer). Enter 0 to 20.\n", n);
        return 1;
    }

    /* For n = 0, the loop does not run and factorial stays 1 (0! = 1) */
    for (i = 1; i <= n; i++) {
        factorial *= (unsigned long long)i;
    }

    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}
