# Lab 16 - Program 2

## 1. Experiment Number
**Experiment 32** (Lab 16 — Program 2 / Set 2 — Q.12)

## 2. Original Question
Write a C program to swap two numbers without using third variable.

## 3. Aim
To write a C program that swaps two integer variables without using a temporary third variable and without risking signed integer overflow.

## 4. Theory
A common arithmetic swap (`a = a + b; b = a - b; a = a - b;`) can cause **signed integer overflow** (undefined behavior in C) if `a + b` exceeds `INT_MAX` or falls below `INT_MIN`.

Using the **bitwise XOR (`^`)** operator avoids arithmetic overflow entirely because XOR operates bit-by-bit within the existing width of `int`:
1. `num1 = num1 ^ num2`
2. `num2 = num1 ^ num2` (becomes original `num1` because `(a ^ b) ^ b == a`)
3. `num1 = num1 ^ num2` (becomes original `num2` because `(a ^ b) ^ a == b`)

## 5. Algorithm
1. Start the program.
2. Declare two integers `num1` and `num2`.
3. Read and validate both integers from the user.
4. Print `num1` and `num2` before swapping.
5. If `num1 != num2`:
   - `num1 = num1 ^ num2;`
   - `num2 = num1 ^ num2;`
   - `num1 = num1 ^ num2;`
6. Print `num1` and `num2` after swapping.
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 16 - Program 2 (Set 2 - Q.12 / Experiment 32)
 * Swap two integers without using a third variable.
 *
 * Uses bitwise XOR instead of addition/subtraction (a = a + b) to avoid
 * signed integer overflow risks on large inputs.
 */
int main(void) {
    int num1, num2;

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

    printf("\nBefore Swapping: num1 = %d, num2 = %d\n", num1, num2);

    /* Bitwise XOR swap works safely for all integer values (including equals & negatives) */
    if (num1 != num2) {
        num1 = num1 ^ num2;
        num2 = num1 ^ num2;
        num1 = num1 ^ num2;
    }

    printf("After Swapping : num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
```

## 7. Sample Input
```text
Enter first integer: 35
Enter second integer: 80
```

## 8. Sample Output
```text
Before Swapping: num1 = 35, num2 = 80
After Swapping : num1 = 80, num2 = 35
```

## 9. Explanation of the Program
- Unlike `a + b`, bitwise XOR (`^`) never overflows, regardless of how large or negative `num1` and `num2` are.
- Guarding with `if (num1 != num2)` skips unnecessary operations when both values are already equal (and avoids any confusion with zeroing out identical variables).

## 10. Result
The program swaps two numbers without a third variable and without arithmetic overflow risks.
