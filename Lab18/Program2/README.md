# Lab 18 - Program 2

## 1. Experiment Number
**Experiment 36** (Lab 18 — Program 2 / Set 2 — Q.16)

## 2. Original Question
Write a C program to find the GCD (Greatest Common Divisor) of two numbers.

## 3. Aim
To write a C program that calculates the Greatest Common Divisor (GCD) of two integers using the Euclidean algorithm, including proper handling of negative numbers and zero inputs.

## 4. Theory
The **Greatest Common Divisor (GCD)** of two integers $a$ and $b$ (not both zero) is the largest positive integer that divides both without a remainder.
- Since divisors are symmetric in sign, $\gcd(a, b) = \gcd(|a|, |b|)$.
- **Zero cases:** $\gcd(a, 0) = |a|$ for $a \neq 0$, while $\gcd(0, 0)$ is mathematically undefined because every positive integer divides `0`.
- **Euclidean Algorithm:** Repeatedly replace $(a, b)$ with $(b, a \bmod b)$ until $b = 0$; the final value of $a$ is the GCD.

## 5. Algorithm
1. Start the program.
2. Read two integers `num1` and `num2` with validation.
3. Convert both to non-negative `long long` magnitudes `a` and `b`.
4. If `a == 0 && b == 0`, print `"GCD of 0 and 0 is undefined."` and exit.
5. While `b != 0`:
   - `temp = b;`
   - `b = a % b;`
   - `a = temp;`
6. Display `a` as the GCD of `num1` and `num2`.
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 18 - Program 2 (Set 2 - Q.16 / Experiment 36)
 * Find the GCD (Greatest Common Divisor) of two integers using the
 * Euclidean algorithm, handling negative numbers and zero cases safely.
 */
int main(void) {
    int num1, num2;
    long long a, b, temp;

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

    /* Use positive magnitudes in long long to handle negative inputs safely */
    a = (num1 < 0) ? -(long long)num1 : (long long)num1;
    b = (num2 < 0) ? -(long long)num2 : (long long)num2;

    if (a == 0 && b == 0) {
        printf("GCD of 0 and 0 is undefined.\n");
        return 0;
    }

    /* Euclidean algorithm */
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD of %d and %d = %lld\n", num1, num2, a);

    return 0;
}
```

## 7. Sample Input
**Test Case 1 (Negative Input):**
```text
Enter first integer: -36
Enter second integer: 24
```

**Test Case 2 (One Zero):**
```text
Enter first integer: 0
Enter second integer: 15
```

**Test Case 3 (Both Zero):**
```text
Enter first integer: 0
Enter second integer: 0
```

## 8. Sample Output
**Test Case 1:**
```text
GCD of -36 and 24 = 12
```

**Test Case 2:**
```text
GCD of 0 and 15 = 15
```

**Test Case 3:**
```text
GCD of 0 and 0 is undefined.
```

## 9. Explanation of the Program
- Converting `num1` and `num2` to `long long` before negating prevents signed overflow even if an input equals `INT_MIN`.
- When `num1 = 0` and `num2 = 15`, `b = 15` swaps into `a` on the first iteration (`15 % 15` is not run; `0 % 15 == 0`), so the loop finishes immediately with `a = 15`.

## 10. Result
The program computes the GCD accurately using the Euclidean algorithm for positive, negative, and zero inputs.
