# Lab 8 - Program 1

## 1. Experiment Number
**Experiment 15** (Lab 8 — Program 1 / Question 15)

## 2. Original Question
Write a C program to find the factorial of a number using recursion.

## 3. Aim
To write a C program that calculates the factorial of a non-negative integer using a recursive function, while guarding against negative numbers and integer overflow.

## 4. Theory
**Recursion** is a programming technique in which a function calls itself directly or indirectly to solve smaller instances of the same problem until reaching a **base case**.

The factorial of a non-negative integer $n$ (denoted $n!$) is defined recursively as:
- **Base case:** $0! = 1$ and $1! = 1$
- **Recursive step:** $n! = n \times (n - 1)!$ for $n > 1$

Because factorials grow rapidly ($20! = 2432902008176640000$, while $21!$ overflows a 64-bit `unsigned long long`), restricting input to `0..20` prevents silent arithmetic overflow.

## 5. Algorithm
1. Start the program.
2. Declare `int n` and recursive function `unsigned long long factorial(int n)`.
3. Read `n` and validate that `scanf()` succeeds.
4. Check if `n < 0` (undefined) or `n > 20` (64-bit overflow); if so, print an error message and exit with `1`.
5. Call `factorial(n)`:
   - If `n == 0 || n == 1`, return `1`.
   - Otherwise, return `(unsigned long long)n * factorial(n - 1)`.
6. Print the returned factorial value.
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

unsigned long long factorial(int n);

/*
 * Lab 8 - Program 1 (Q.15)
 * Find the factorial of a non-negative integer using recursion.
 */
int main(void) {
    int n;

    printf("Enter a non-negative integer (0 to 20): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    /* 21! exceeds the 64-bit unsigned long long maximum */
    if (n > 20) {
        printf("Input too large (%d! overflows 64-bit unsigned integer). Enter 0 to 20.\n", n);
        return 1;
    }

    printf("Factorial of %d = %llu\n", n, factorial(n));

    return 0;
}

/* Recursive function to compute n! */
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return (unsigned long long)n * factorial(n - 1);
}
```

## 7. Sample Input
**Test Case 1:**
```text
Enter a non-negative integer (0 to 20): 6
```

**Test Case 2 (Negative Input):**
```text
Enter a non-negative integer (0 to 20): -3
```

## 8. Sample Output
**Test Case 1:**
```text
Factorial of 6 = 720
```

**Test Case 2:**
```text
Factorial is not defined for negative numbers.
```

## 9. Explanation of the Program
- Calling `factorial(6)` pushes frames for `6`, `5`, `4`, `3`, `2`, `1` onto the call stack.
- Once `factorial(1)` hits the base case and returns `1`, each waiting frame multiplies and returns back up: `2 * 1 = 2`, `3 * 2 = 6`, `4 * 6 = 24`, `5 * 24 = 120`, `6 * 120 = 720`.
- `unsigned long long` with `%llu` safely stores results up to `20!`.

## 10. Result
The program accurately computes factorials using recursion and safely handles negative and overflow-prone inputs.
