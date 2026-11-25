# Lab 7 - Program 2

## 1. Experiment Number
**Experiment 14** (Lab 7 — Program 2 / Question 14)

## 2. Original Question
Write a C program to demonstrate call by value and call by reference by swapping two numbers.

## 3. Aim
To demonstrate the difference between call by value and pointer-based call by reference in C by attempting to swap two integers using both mechanisms.

## 4. Theory
- **Call by Value:** Copies of the actual arguments are passed into the function's formal parameters. Modifying the parameters inside the function changes only the local copies and leaves the caller's original variables untouched.
- **Call by Reference (Simulated via Pointers in C):** Strictly speaking, C supports only pass-by-value at the language level—there are no C++ style reference parameters (`int &a`). Instead, **C uses pointers** (`int *a, int *b`) to pass the memory addresses (`&x`, `&y`) of the caller's variables by value. Dereferencing those pointers (`*a`, `*b`) inside the function directly modifies the original variables in `main()`, achieving reference-like behaviour.

## 5. Algorithm
1. Start the program.
2. Read two integers `x` and `y` in `main()` and validate input.
3. Display the initial values of `x` and `y`.
4. Call `swapByValue(x, y)`:
   - Swap local parameters `a` and `b` using `temp`.
   - Print `a` and `b` inside the function, then print `x` and `y` in `main()` to show they remain unchanged.
5. Call `swapByReference(&x, &y)`:
   - Swap `*a` and `*b` using `temp`.
   - Print `*a` and `*b` inside the function, then print `x` and `y` in `main()` to show they are swapped.
6. Stop the program.

## 6. Source Code
```c
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
```

## 7. Sample Input
```text
Enter first integer (x): 10
Enter second integer (y): 25
```

## 8. Sample Output
```text
Initial values in main(): x = 10, y = 25
Inside swapByValue(): a = 25, b = 10
After swapByValue() in main(): x = 10, y = 25 (unchanged)
Inside swapByReference(): *a = 25, *b = 10
After swapByReference() in main(): x = 25, y = 10 (swapped)
```

## 9. Explanation of the Program
- `swapByValue(x, y)` receives copies `a = 10` and `b = 25`. Swapping `a` and `b` affects only `swapByValue`'s stack frame; `x` and `y` in `main()` stay `10` and `25`.
- `swapByReference(&x, &y)` receives the memory addresses of `x` and `y` in pointer parameters `a` and `b`. Using `*a` and `*b` modifies the actual memory of `x` and `y`, persisting after the function returns.

## 10. Result
The program clearly demonstrates that call by value leaves original variables unchanged, whereas pointer-based call by reference in C successfully swaps the caller's variables.
