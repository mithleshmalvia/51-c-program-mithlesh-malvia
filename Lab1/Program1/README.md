# Lab 1 - Program 1

## 1. Experiment Number
**Experiment 1** (Lab 1 — Program 1 / Question 1)

## 2. Original Question
Write a C program to check whether a given number is prime or not.

## 3. Aim
To write and execute a C program that accepts an integer from the user, validates the input, and determines whether the number is prime or not.

## 4. Theory
A **prime number** is a natural number greater than `1` that has exactly two positive divisors: `1` and itself (e.g., `2, 3, 5, 7, 11`). Numbers less than or equal to `1` (including `0`, `1`, and negative integers) are not prime.

If a number $n > 1$ has a divisor greater than $\sqrt{n}$, it must also have a corresponding divisor less than or equal to $\sqrt{n}$. Therefore, checking divisors from `2` up to `number / i` (equivalent to $i \le \sqrt{n}$ without overflow or floating-point rounding) is sufficient to determine primality.

## 5. Algorithm
1. Start the program.
2. Declare integer variables `number`, `i`, and a flag `isPrime = 1`.
3. Prompt the user to enter an integer and validate that `scanf()` reads one integer. If invalid, print an error message and exit with status `1`.
4. If `number <= 1`, set `isPrime = 0`.
5. Otherwise, loop `i` from `2` while `i <= number / i`:
   - If `number % i == 0`, set `isPrime = 0` and exit the loop using `break`.
6. If `isPrime == 1`, print that `number` is a prime number; otherwise print that `number` is not a prime number.
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 1 - Program 1 (Q.1)
 * Check whether a given integer is a prime number or not.
 */
int main(void) {
    int number;
    int i;
    int isPrime = 1;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    /* Numbers less than or equal to 1 are not prime */
    if (number <= 1) {
        isPrime = 0;
    } else {
        /* Check divisibility from 2 up to sqrt(number) safely using number / i */
        for (i = 2; i <= number / i; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
```

## 7. Sample Input
**Test Case 1 (Prime):**
```text
Enter an integer: 17
```

**Test Case 2 (Composite):**
```text
Enter an integer: 24
```

**Test Case 3 (Edge Case):**
```text
Enter an integer: 1
```

## 8. Sample Output
**Test Case 1:**
```text
Enter an integer: 17
17 is a prime number.
```

**Test Case 2:**
```text
Enter an integer: 24
24 is not a prime number.
```

**Test Case 3:**
```text
Enter an integer: 1
1 is not a prime number.
```

## 9. Explanation of the Program
- `scanf("%d", &number) != 1` checks whether the user entered a valid integer; non-numeric input is rejected safely.
- `isPrime` acts as a boolean flag initialized to `1` (assuming prime until a divisor is found).
- The `if (number <= 1)` branch immediately marks `0`, `1`, and negative numbers as non-prime.
- In the `for` loop, using `i <= number / i` avoids integer overflow from `i * i` and avoids using `<math.h>`.
- As soon as a divisor is found (`number % i == 0`), `break` stops unnecessary iterations.

## 10. Result
The program correctly checks whether a given integer is prime or not and handles edge cases such as `0`, `1`, negative numbers, and non-numeric inputs.
