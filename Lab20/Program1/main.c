#include <stdio.h>

/*
 * Lab 20 - Program 1 (Set 2 - Q.19 / Experiment 39)
 * Check whether an integer is a palindrome number or not,
 * handling negative numbers appropriately.
 */
int main(void) {
    int number, temp;
    long long reversed = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (number < 0) {
        printf("%d is not a palindrome number (negative numbers are not palindromes).\n", number);
        return 0;
    }

    temp = number;
    while (temp > 0) {
        reversed = (reversed * 10) + (temp % 10);
        temp /= 10;
    }

    if ((long long)number == reversed) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}
