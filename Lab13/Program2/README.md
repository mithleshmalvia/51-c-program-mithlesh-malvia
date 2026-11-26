# Lab 13 - Program 2

## 1. Experiment Number
**Experiment 26** (Lab 13 — Program 2 / Set 2 — Q.6)

## 2. Original Question
Write a C program to compute quotient and remainder.

## 3. Aim
To write a C program that reads an integer dividend and divisor, guards against division by zero, and computes both the quotient and remainder.

## 4. Theory
For integers $a$ (dividend) and $b \neq 0$ (divisor):
- The **division operator (`/`)** performs truncating integer division to yield the `quotient`.
- The **modulus operator (`%`)** computes the `remainder` after integer division (applicable only to integer types in C).

Dividing by `0` triggers undefined behavior in C, so checking `divisor == 0` beforehand is essential.

## 5. Algorithm
1. Start the program.
2. Declare integer variables `dividend`, `divisor`, `quotient`, and `remainder`.
3. Read and validate `dividend` and `divisor`.
4. Check if `divisor == 0`; if true, print an error message and exit with status `1`.
5. Compute `quotient = dividend / divisor` and `remainder = dividend % divisor`.
6. Display `quotient` and `remainder`.
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 13 - Program 2 (Set 2 - Q.6 / Experiment 26)
 * Compute the quotient and remainder of two integers,
 * safely handling division by zero.
 */
int main(void) {
    int dividend, divisor;
    int quotient, remainder;

    printf("Enter dividend (integer): ");
    if (scanf("%d", &dividend) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter divisor (non-zero integer): ");
    if (scanf("%d", &divisor) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("\nQuotient  (%d / %d) = %d\n", dividend, divisor, quotient);
    printf("Remainder (%d %% %d) = %d\n", dividend, divisor, remainder);

    return 0;
}
```

## 7. Sample Input
**Test Case 1:**
```text
Enter dividend (integer): 29
Enter divisor (non-zero integer): 5
```

**Test Case 2 (Division by Zero):**
```text
Enter dividend (integer): 29
Enter divisor (non-zero integer): 0
```

## 8. Sample Output
**Test Case 1:**
```text
Quotient  (29 / 5) = 5
Remainder (29 % 5) = 4
```

**Test Case 2:**
```text
Error: Division by zero is not allowed.
```

## 9. Explanation of the Program
- Both `dividend / divisor` and `dividend % divisor` execute only after confirming `divisor != 0`.
- In `printf("Remainder (%d %% %d) = %d\n", ...)`, `%%` prints a literal `%` character.

## 10. Result
The program computes integer quotient and remainder accurately while safely rejecting zero divisors and invalid inputs.
