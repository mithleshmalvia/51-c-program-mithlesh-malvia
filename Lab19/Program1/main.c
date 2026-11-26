#include <stdio.h>

/*
 * Lab 19 - Program 1 (Set 2 - Q.17 / Experiment 37)
 * Find the LCM (Least Common Multiple) of two numbers using GCD,
 * handling zero and negative inputs safely.
 */
int main(void) {
    int num1, num2;
    long long a, b, x, y, temp;
    unsigned long long lcm;

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

    /* LCM with 0 is defined as 0; avoids division by zero when both are 0 */
    if (num1 == 0 || num2 == 0) {
        printf("LCM of %d and %d = 0\n", num1, num2);
        return 0;
    }

    a = (num1 < 0) ? -(long long)num1 : (long long)num1;
    b = (num2 < 0) ? -(long long)num2 : (long long)num2;

    x = a;
    y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    /* x now holds gcd(|num1|, |num2|); divide before multiplying to prevent overflow */
    lcm = ((unsigned long long)a / (unsigned long long)x) * (unsigned long long)b;

    printf("GCD of %d and %d = %lld\n", num1, num2, x);
    printf("LCM of %d and %d = %llu\n", num1, num2, lcm);

    return 0;
}
