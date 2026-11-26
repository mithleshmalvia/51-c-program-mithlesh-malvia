#include <stdio.h>

void swapByValue(int a, int b);
void swapByReference(int *a, int *b);

/*
 * Lab 7 - Program 2 (Q.14)
 * Demonstrate call by value and call by reference by swapping two numbers.
 *
 * Note: C natively passes all arguments by value. To achieve reference-like
 * behaviour (modifying caller variables), C passes memory addresses using pointers.
 */
int main(void) {
    int x, y;

    printf("Enter first integer (x): ");
    if (scanf("%d", &x) != 1) {
        printf("Invalid input for x.\n");
        return 1;
    }

    printf("Enter second integer (y): ");
    if (scanf("%d", &y) != 1) {
        printf("Invalid input for y.\n");
        return 1;
    }

    printf("\nInitial values in main(): x = %d, y = %d\n", x, y);

    /* 1. Call by Value */
    swapByValue(x, y);
    printf("After swapByValue() in main(): x = %d, y = %d (unchanged)\n", x, y);

    /* 2. Call by Reference (passing addresses via pointers) */
    swapByReference(&x, &y);
    printf("After swapByReference() in main(): x = %d, y = %d (swapped)\n", x, y);

    return 0;
}

/* Swaps local copies only; original variables in main() are unaffected */
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue(): a = %d, b = %d\n", a, b);
}

/* Swaps values at the caller's memory addresses using pointers */
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference(): *a = %d, *b = %d\n", *a, *b);
}
