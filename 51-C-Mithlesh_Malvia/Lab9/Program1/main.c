#include <stdio.h>

/*
 * Lab 9 - Program 1 (Q.17)
 * Swap two numbers using pointers and display their values before and after swapping.
 */
int main(void) {
    int num1, num2, temp;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("Enter first number: ");
    if (scanf("%d", ptr1) != 1) {
        printf("Invalid input for the first number.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%d", ptr2) != 1) {
        printf("Invalid input for the second number.\n");
        return 1;
    }

    printf("\nBefore Swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    /* Swap values via pointer dereferencing */
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\nAfter Swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
