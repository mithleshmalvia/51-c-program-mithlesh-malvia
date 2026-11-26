# Lab 19 - Program 1

## 1. Experiment Number
**Experiment 37** (Lab 19 — Program 1 / Set 2 — Q.17)

## 2. Original Question
Write a C program to find the LCM (Least Common Multiple) of two numbers.

## 3. Aim
To write a C program that calculates the Least Common Multiple (LCM) of two integers using their Greatest Common Divisor (GCD), while handling zero and negative inputs safely.

## 4. Theory
The **Least Common Multiple (LCM)** of two non-zero integers $a$ and $b$ is the smallest positive integer divisible by both $a$ and $b$. It relates directly to GCD:

$$\text{LCM}(a, b) = \left(\frac{|a|}{\gcd(|a|, |b|)}\right) \times |b|$$

- Dividing $|a|$ by $\gcd$ *before* multiplying by $|b|$ avoids unnecessary intermediate integer overflow.
- If either number is `0`, `0` is a multiple of every integer and $\text{LCM}(a, 0) = 0$. Checking `num1 == 0 || num2 == 0` upfront also prevents dividing by `0` when both inputs are `0`.

## 5. Algorithm
1. Start the program.
2. Read and validate integers `num1` and `num2`.
3. If `num1 == 0 || num2 == 0`, print `LCM = 0` and exit.
4. Compute positive `long long` magnitudes `a = |num1|` and `b = |num2|`.
5. Compute `gcd` (`x`) of `a` and `b` using the Euclidean algorithm.
6. Compute `lcm = ((unsigned long long)a / (unsigned long long)x) * (unsigned long long)b`.
7. Display `gcd` and `lcm`.
8. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 19 - Program 1 (Set 2 - Q.17 / Experiment 37)
 * Find the LCM (Least Common Multiple) of two numbers using GCD,
 * handling zero and negative inputs safely.
 */
int main(void) {
    int num1, num2;
    long long a, b, x, y, temp;
    unsigned long long lcm;

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

    /* LCM with 0 is defined as 0; avoids division by zero when both are 0 */
    if (num1 == 0 || num2 == 0) {
        printf("LCM of %d and %d = 0\n", num1, num2);
        return 0;
    }

    a = (num1 < 0) ? -(long long)num1 : (long long)num1;
    b = (num2 < 0) ? -(long long)num2 : (long long)num2;

    x = a;
    y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    /* x now holds gcd(|num1|, |num2|); divide before multiplying to prevent overflow */
    lcm = ((unsigned long long)a / (unsigned long long)x) * (unsigned long long)b;

    printf("GCD of %d and %d = %lld\n", num1, num2, x);
    printf("LCM of %d and %d = %llu\n", num1, num2, lcm);

    return 0;
}
```

## 7. Sample Input
**Test Case 1:**
```text
Enter first integer: 12
Enter second integer: 18
```

**Test Case 2 (Zero Input):**
```text
Enter first integer: 0
Enter second integer: 25
```

## 8. Sample Output
**Test Case 1:**
```text
GCD of 12 and 18 = 6
LCM of 12 and 18 = 36
```

**Test Case 2:**
```text
LCM of 0 and 25 = 0
```

## 9. Explanation of the Program
- The zero check handles `(0, x)`, `(x, 0)`, and `(0, 0)` cleanly without risking division by zero.
- Since `x` (`gcd`) always divides `a` evenly, `(a / x) * b` is exact and produces the minimum intermediate value before multiplying.

## 10. Result
The program accurately calculates the LCM using GCD and safely handles zero and negative inputs.
