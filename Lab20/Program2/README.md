# Lab 20 - Program 2

## 1. Experiment Number
**Experiment 40** (Lab 20 — Program 2 / Set 2 — Q.20)

## 2. Original Question
Write a C program to check given number is an Armstrong or not.

## 3. Aim
To write a C program that checks whether a given integer is an Armstrong (narcissistic) number for any number of digits.

## 4. Theory
An **$n$-digit Armstrong number** (narcissistic number) is a non-negative integer equal to the sum of its own digits each raised to the power $n$ (the total number of digits):
- **1-digit:** $0 = 0^1$, $5 = 5^1$
- **3-digit:** $153 = 1^3 + 5^3 + 3^3$
- **4-digit:** $1634 = 1^4 + 6^4 + 3^4 + 4^4$, $9474 = 9^4 + 4^4 + 7^4 + 4^4$
- **5-digit:** $54748 = 5^5 + 4^5 + 7^5 + 4^5 + 8^5$

Using integer multiplication instead of floating-point `pow()` avoids rounding inaccuracies (such as `pow(5, 3)` evaluating to `124.999999` and truncating to `124` on some libraries).

## 5. Algorithm
1. Start the program.
2. Read integer `number` and validate `scanf("%d", &number) == 1`.
3. If `number < 0`, print that negative numbers are not Armstrong numbers and exit.
4. Count the total digits `digits`:
   - If `number == 0`, set `digits = 1`.
   - Otherwise, divide `temp = number` by `10` repeatedly while incrementing `digits`.
5. Reset `temp = number` and `sum = 0`. While `temp > 0`:
   - Extract `digit = temp % 10`.
   - Compute `power = digit^digits` via an integer `for` loop.
   - Add `power` to `sum` and set `temp /= 10`.
6. Compare `sum == (unsigned long long)number` and display whether `number` is an Armstrong number.
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 20 - Program 2 (Set 2 - Q.20 / Experiment 40)
 * Check whether a given integer is an Armstrong (narcissistic) number
 * for ANY number of digits (not only 3-digit numbers).
 */
int main(void) {
    int number, temp;
    int digits = 0;
    int digit, i;
    unsigned long long sum = 0;
    unsigned long long power;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (number < 0) {
        printf("%d is not an Armstrong number (negative numbers are not Armstrong numbers).\n", number);
        return 0;
    }

    /* Step 1: Count total number of digits */
    if (number == 0) {
        digits = 1;
    } else {
        temp = number;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }

    /* Step 2: Sum each digit raised to the power of total digits using integer math */
    temp = number;
    while (temp > 0) {
        digit = temp % 10;
        power = 1;
        for (i = 0; i < digits; i++) {
            power *= (unsigned long long)digit;
        }
        sum += power;
        temp /= 10;
    }

    if (sum == (unsigned long long)number) {
        printf("%d is an Armstrong number (%d-digit).\n", number, digits);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
```

## 7. Sample Input
**Test Case 1 (3-Digit Armstrong):**
```text
Enter an integer: 153
```

**Test Case 2 (4-Digit Armstrong):**
```text
Enter an integer: 1634
```

**Test Case 3 (Non-Armstrong):**
```text
Enter an integer: 125
```

## 8. Sample Output
**Test Case 1:**
```text
153 is an Armstrong number (3-digit).
```

**Test Case 2:**
```text
1634 is an Armstrong number (4-digit).
```

**Test Case 3:**
```text
125 is not an Armstrong number.
```

## 9. Explanation of the Program
- Counting `digits` dynamically before computing powers makes the check work for 1-digit, 3-digit, 4-digit, 5-digit, and larger Armstrong numbers.
- When `number == 0`, `digits = 1`, `sum` stays `0`, and `0 == 0` correctly reports `0` as a 1-digit Armstrong number.
- Pure integer multiplication guarantees exact powers without `<math.h>` floating-point truncation bugs.

## 10. Result
The program accurately determines whether any integer (regardless of digit count) is an Armstrong number.
