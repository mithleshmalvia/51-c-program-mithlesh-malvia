# Lab 17 - Program 2

## 1. Experiment Number
**Experiment 34** (Lab 17 — Program 2 / Set 2 — Q.14)

## 2. Original Question
Write a C program to find factorial of given number.

## 3. Aim
To write a C program that calculates the factorial of a given number iteratively using a `for` loop while handling zero, negative, and overflow cases appropriately.

## 4. Theory
The **factorial** of a non-negative integer $n$ is the product of all positive integers from $1$ up to $n$:

$$n! = 1 \times 2 \times 3 \times \dots \times n, \quad \text{with } 0! = 1$$

Factorials are undefined for negative integers. Because $21!$ exceeds the capacity of a 64-bit `unsigned long long`, capping valid input at `20` prevents silent arithmetic overflow.

## 5. Algorithm
1. Start the program.
2. Declare `int n, i` and `unsigned long long factorial = 1`.
3. Read `n` and validate `scanf("%d", &n) == 1`.
4. If `n < 0`, print that factorial is not defined for negative numbers and return `1`.
5. If `n > 20`, print an overflow-limit message and return `1`.
6. Loop `i` from `1` to `n`, updating `factorial *= (unsigned long long)i`.
7. Print `factorial` using `%llu`.
8. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 17 - Program 2 (Set 2 - Q.14 / Experiment 34)
 * Find the factorial of a given non-negative integer using an iterative loop.
 */
int main(void) {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer (0 to 20): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    /* 21! overflows 64-bit unsigned long long */
    if (n > 20) {
        printf("Input too large (%d! overflows 64-bit unsigned integer). Enter 0 to 20.\n", n);
        return 1;
    }

    /* For n = 0, the loop does not run and factorial stays 1 (0! = 1) */
    for (i = 1; i <= n; i++) {
        factorial *= (unsigned long long)i;
    }

    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}
```

## 7. Sample Input
**Test Case 1 (Positive):**
```text
Enter a non-negative integer (0 to 20): 5
```

**Test Case 2 (Zero):**
```text
Enter a non-negative integer (0 to 20): 0
```

**Test Case 3 (Negative):**
```text
Enter a non-negative integer (0 to 20): -4
```

## 8. Sample Output
**Test Case 1:**
```text
Factorial of 5 = 120
```

**Test Case 2:**
```text
Factorial of 0 = 1
```

**Test Case 3:**
```text
Factorial is not defined for negative numbers.
```

## 9. Explanation of the Program
- Initializing `factorial = 1` handles `0!` naturally because the loop condition `i <= 0` is immediately false.
- Iterative multiplication computes `n!` in $O(n)$ time and $O(1)$ space without recursion call-stack overhead.

## 10. Result
The program accurately computes the factorial of any integer from `0` to `20` and safely handles negative and out-of-range inputs.
