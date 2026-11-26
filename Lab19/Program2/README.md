# Lab 19 - Program 2

## 1. Experiment Number
**Experiment 38** (Lab 19 — Program 2 / Set 2 — Q.18)

## 2. Original Question
Write a C program to calculate sum of natural numbers.

## 3. Aim
To write a C program that calculates the sum of the first `N` natural numbers (`1 + 2 + ... + N`).

## 4. Theory
Natural numbers are positive counting integers starting at `1` (`1, 2, 3, ..., N`). Using a `for` loop from `i = 1` to `N`, each value `i` is added to an accumulator `sum` initialized to `0`. Using `unsigned long long` accommodates large sums without overflowing 32-bit `int`.

## 5. Algorithm
1. Start the program.
2. Declare `int n, i` and `unsigned long long sum = 0`.
3. Read `n` and validate `scanf("%d", &n) == 1 && n >= 1`.
4. Loop `i` from `1` to `n`:
   - `sum += (unsigned long long)i;`
5. Display `sum`.
6. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 19 - Program 2 (Set 2 - Q.18 / Experiment 38)
 * Calculate the sum of natural numbers from 1 up to N.
 */
int main(void) {
    int n, i;
    unsigned long long sum = 0;

    printf("Enter a positive integer N: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer (N >= 1).\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        sum += (unsigned long long)i;
    }

    printf("Sum of natural numbers from 1 to %d = %llu\n", n, sum);

    return 0;
}
```

## 7. Sample Input
```text
Enter a positive integer N: 10
```

## 8. Sample Output
```text
Sum of natural numbers from 1 to 10 = 55
```

## 9. Explanation of the Program
- Validating `n >= 1` ensures only valid natural-number upper bounds are summed.
- The `for` loop accumulates `1 + 2 + ... + 10 = 55` into `sum`.

## 10. Result
The program accurately calculates and displays the sum of natural numbers up to `N`.
