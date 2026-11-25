#include <stdio.h>

/* Function prototype: accepts two integers and returns their sum */
int calculateSum(int a, int b);

/*
 * Lab 7 - Program 1 (Q.13)
 * Calculate the sum of two numbers using a function with arguments
 * and a return value.
 */
int main(void) {
    int num1, num2, sum;

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

    sum = calculateSum(num1, num2);
    printf("Sum of %d and %d = %d\n", num1, num2, sum);

    return 0;
}

/* Function definition */
int calculateSum(int a, int b) {
    return a + b;
}
