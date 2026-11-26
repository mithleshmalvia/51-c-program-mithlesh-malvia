# Lab 14 - Program 1

## 1. Experiment Number
**Experiment 27** (Lab 14 — Program 1 / Set 2 — Q.7)

## 2. Original Question
Write a C program to check whether a number is even or odd using ternary operator.

## 3. Aim
To write a C program that accepts an integer from the user and determines whether it is even or odd using the conditional (ternary) operator (`? :`).

## 4. Theory
The **ternary operator** (`condition ? expression_if_true : expression_if_false`) is C's only operator that takes three operands. It acts as a compact expression-level alternative to a simple `if-else` statement.

An integer is **even** if it is divisible by `2` (`number % 2 == 0`); otherwise, it is **odd**. This rule holds for positive integers, negative integers, and zero (`0 % 2 == 0` -> even).

## 5. Algorithm
1. Start the program.
2. Declare `int number` and `const char *parity`.
3. Prompt the user for an integer and validate `scanf("%d", &number) == 1`.
4. Evaluate `parity = (number % 2 == 0) ? "even" : "odd";`.
5. Display whether `number` is `"even"` or `"odd"`.
6. Stop the program.

## 6. Source Code
```c
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
```

## 7. Sample Input
**Test Case 1 (Even):**
```text
Enter an integer: 18
```

**Test Case 2 (Negative Odd):**
```text
Enter an integer: -7
```

## 8. Sample Output
**Test Case 1:**
```text
18 is an even number.
```

**Test Case 2:**
```text
-7 is an odd number.
```

## 9. Explanation of the Program
- `(number % 2 == 0)` checks divisibility by `2`.
- When true, the ternary expression evaluates to `"even"`; otherwise it evaluates to `"odd"`.
- `parity` stores the resulting string literal and prints cleanly in a single `printf()` call.

## 10. Result
The program accurately checks whether a given integer is even or odd using the ternary operator.
