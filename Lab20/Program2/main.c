#include <stdio.h>

/*
 * Lab 20 - Program 2 (Set 2 - Q.20 / Experiment 40)
 * Check whether a given integer is an Armstrong (narcissistic) number
 * for ANY number of digits (not only 3-digit numbers).
 */
int main(void) {
    int number, temp;
    int digits = 0;
    int digit, i;
    unsigned long long sum = 0;
    unsigned long long power;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (number < 0) {
        printf("%d is not an Armstrong number (negative numbers are not Armstrong numbers).\n", number);
        return 0;
    }

    /* Step 1: Count total number of digits */
    if (number == 0) {
        digits = 1;
    } else {
        temp = number;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }

    /* Step 2: Sum each digit raised to the power of total digits using integer math */
    temp = number;
    while (temp > 0) {
        digit = temp % 10;
        power = 1;
        for (i = 0; i < digits; i++) {
            power *= (unsigned long long)digit;
        }
        sum += power;
        temp /= 10;
    }

    if (sum == (unsigned long long)number) {
        printf("%d is an Armstrong number (%d-digit).\n", number, digits);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
