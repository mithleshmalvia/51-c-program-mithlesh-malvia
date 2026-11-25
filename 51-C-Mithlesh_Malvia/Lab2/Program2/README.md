# Lab 2 - Program 2

## 1. Experiment Number
**Experiment 4** (Lab 2 — Program 2 / Question 4)

## 2. Original Question
Write a C program to print numbers from 1 to 50 using a loop, but skip the multiples of 5 using the continue statement.

## 3. Aim
To demonstrate the working of the `continue` jump statement in a `for` loop by printing numbers from `1` to `50` while skipping multiples of `5`.

## 4. Theory
The `continue` statement skips the remainder of the current loop iteration and immediately transfers control to the loop update step (for a `for` loop, `i++`) followed by the loop condition check. Unlike `break`, `continue` does not terminate the loop; it only bypasses one iteration.

## 5. Algorithm
1. Start the program.
2. Initialize a `for` loop with counter `i = 1` running while `i <= 50`, incrementing `i` by `1` each step.
3. Inside the loop, check if `i % 5 == 0`.
4. If true, execute `continue` to skip printing `i`.
5. Otherwise, print the value of `i`.
6. After the loop ends, print a newline and stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 2 - Program 2 (Q.4)
 * Print numbers from 1 to 50, skipping multiples of 5 using continue.
 */
int main(void) {
    int i;

    printf("Numbers from 1 to 50 (skipping multiples of 5):\n");

    for (i = 1; i <= 50; i++) {
        if (i % 5 == 0) {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
```

## 7. Sample Input
No user input is required for this program.

## 8. Sample Output
```text
Numbers from 1 to 50 (skipping multiples of 5):
1 2 3 4 6 7 8 9 11 12 13 14 16 17 18 19 21 22 23 24 26 27 28 29 31 32 33 34 36 37 38 39 41 42 43 44 46 47 48 49
```

## 9. Explanation of the Program
- The `for` loop iterates `i` from `1` to `50`.
- `i % 5 == 0` checks whether `i` is divisible by `5` (`5, 10, 15, ..., 50`).
- Whenever the condition is true, `continue` jumps past `printf("%d ", i);` straight to `i++`, so multiples of `5` are omitted from the output.

## 10. Result
The program prints all numbers from `1` to `50` except multiples of `5` (40 numbers total), demonstrating the `continue` statement.
