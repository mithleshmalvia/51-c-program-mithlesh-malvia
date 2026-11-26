#include <stdio.h>

unsigned long long factorial(int n);

/*
 * Lab 8 - Program 1 (Q.15)
 * Find the factorial of a non-negative integer using recursion.
 */
int main(void) {
    int n;

    printf("Enter a non-negative integer (0 to 20): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    /* 21! exceeds the 64-bit unsigned long long maximum */
    if (n > 20) {
        printf("Input too large (%d! overflows 64-bit unsigned integer). Enter 0 to 20.\n", n);
        return 1;
    }

    printf("Factorial of %d = %llu\n", n, factorial(n));

    return 0;
}

/* Recursive function to compute n! */
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return (unsigned long long)n * factorial(n - 1);
}
