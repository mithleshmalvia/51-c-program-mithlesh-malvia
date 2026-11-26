#include <stdio.h>

/*
 * Lab 19 - Program 2 (Set 2 - Q.18 / Experiment 38)
 * Calculate the sum of natural numbers from 1 up to N.
 */
int main(void) {
    int n, i;
    unsigned long long sum = 0;

    printf("Enter a positive integer N: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer (N >= 1).\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        sum += (unsigned long long)i;
    }

    printf("Sum of natural numbers from 1 to %d = %llu\n", n, sum);

    return 0;
}
