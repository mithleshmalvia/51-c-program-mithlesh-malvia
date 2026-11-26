#include <stdio.h>

/*
 * Lab 14 - Program 1 (Set 2 - Q.7 / Experiment 27)
 * Check whether an integer is even or odd using the ternary operator.
 */
int main(void) {
    int number;
    const char *parity;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    /* Ternary operator selects "even" or "odd" based on remainder mod 2 */
    parity = (number % 2 == 0) ? "even" : "odd";
    printf("%d is an %s number.\n", number, parity);

    return 0;
}
