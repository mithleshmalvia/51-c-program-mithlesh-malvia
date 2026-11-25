#include <stdio.h>

/*
 * Lab 1 - Program 1 (Q.1)
 * Check whether a given integer is a prime number or not.
 */
int main(void) {
    int number;
    int i;
    int isPrime = 1;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    /* Numbers less than or equal to 1 are not prime */
    if (number <= 1) {
        isPrime = 0;
    } else {
        /* Check divisibility from 2 up to sqrt(number) safely using number / i */
        for (i = 2; i <= number / i; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
