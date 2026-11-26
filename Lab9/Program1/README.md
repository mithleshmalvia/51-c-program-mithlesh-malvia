# Lab 9 - Program 1

## 1. Experiment Number
**Experiment 17** (Lab 9 — Program 1 / Question 17)

## 2. Original Question
Write a C program to swap two numbers using pointers and display their values before and after swapping.

## 3. Aim
To write a C program that swaps two integer variables using pointer variables and displays their values before and after the swap.

## 4. Theory
A **pointer** is a variable that stores the memory address of another variable.
- The address-of operator (`&`) obtains the memory address of a variable (e.g., `ptr1 = &num1`).
- The dereference operator (`*`) accesses or modifies the value stored at that memory address (`*ptr1` reads or updates `num1`).

Swapping through pointers exchanges the contents stored at `&num1` and `&num2` using a temporary variable `temp`.

## 5. Algorithm
1. Start the program.
2. Declare integers `num1`, `num2`, `temp`, and pointers `ptr1 = &num1`, `ptr2 = &num2`.
3. Read values into `num1` and `num2` via `scanf("%d", ptr1)` and `scanf("%d", ptr2)` with validation.
4. Print `num1` and `num2` before swapping.
5. Perform swap via dereferencing:
   - `temp = *ptr1;`
   - `*ptr1 = *ptr2;`
   - `*ptr2 = temp;`
6. Print `num1` and `num2` after swapping.
7. Stop the program.

## 6. Source Code
```c
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
```

## 7. Sample Input
```text
Enter first number: 15
Enter second number: 42
```

## 8. Sample Output
```text
Before Swapping:
num1 = 15, num2 = 42

After Swapping:
num1 = 42, num2 = 15
```

## 9. Explanation of the Program
- `ptr1` holds the address of `num1`, and `ptr2` holds the address of `num2`, so `scanf("%d", ptr1)` reads directly into `num1`.
- `*ptr1` and `*ptr2` access the integer values at those addresses; exchanging them via `temp` updates `num1` and `num2` directly in memory.

## 10. Result
The program successfully swaps two numbers using pointers and displays their values before and after swapping.
