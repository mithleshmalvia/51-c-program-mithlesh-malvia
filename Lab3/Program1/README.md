# Lab 3 - Program 1

## 1. Experiment Number
**Experiment 5** (Lab 3 — Program 1 / Question 5)

## 2. Original Question
Write a C program to print numbers from 1 to 100 and stop the loop when the number reaches 50 using the break statement.

## 3. Aim
To demonstrate early termination of a loop using the `break` statement when the loop counter reaches `50`.

## 4. Theory
The `break` statement immediately terminates the innermost enclosing loop (`for`, `while`, or `do-while`) or `switch` statement. Program control resumes at the first statement immediately following the loop, skipping all remaining iterations.

## 5. Algorithm
1. Start the program.
2. Initialize a `for` loop with counter `i = 1`, condition `i <= 100`, and increment `i++`.
3. Inside the loop, check if `i == 50`.
4. If true, display a termination message and execute `break` to exit the loop.
5. Otherwise, print `i`.
6. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 3 - Program 1 (Q.5)
 * Print numbers from 1 to 100 and stop when the number reaches 50 using break.
 */
int main(void) {
    int i;

    printf("Printing numbers from 1 to 100 (stopping at 50):\n");

    for (i = 1; i <= 100; i++) {
        if (i == 50) {
            printf("\nNumber reached 50. Loop terminated using break.\n");
            break;
        }
        printf("%d ", i);
    }

    return 0;
}
```

## 7. Sample Input
No user input is required for this program.

## 8. Sample Output
```text
Printing numbers from 1 to 100 (stopping at 50):
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 
Number reached 50. Loop terminated using break.
```

## 9. Explanation of the Program
- Even though the loop condition allows `i` up to `100`, the `if (i == 50)` check triggers when `i` becomes `50`.
- Calling `break` exits the `for` loop immediately, preventing `50` through `100` from being processed.

## 10. Result
The program prints numbers from `1` to `49` and cleanly stops the loop as soon as `i` reaches `50` using `break`.
