# Lab 5 - Program 1

## 1. Experiment Number
**Experiment 9** (Lab 5 — Program 1 / Question 9)

## 2. Original Question
Write a C program to print the given pattern using nested loops.

## 3. Aim
To write a C program using nested `for` loops to print the 5-row left-aligned number triangle pattern.

## 4. Theory
**Nested loops** consist of an outer loop and one or more inner loops placed inside the outer loop's body. For every single iteration of the outer loop (representing a row `i`), the inner loop executes completely from its starting condition to its termination condition (representing columns `1` through `i`).

In this number triangle:
- Row `1` prints `1`
- Row `2` prints `1 2`
- ...
- Row `5` prints `1 2 3 4 5`

## 5. Algorithm
1. Start the program.
2. Set `rows = 5` and declare loop counters `i` and `j`.
3. Run an outer `for` loop with `i` from `1` to `rows`:
   - Run an inner `for` loop with `j` from `1` to `i`:
     - Print `j`.
     - If `j < i`, print a single space `" "`.
   - Print a newline character `'\n'`.
4. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 5 - Program 1 (Q.9)
 * Print a 5-row Number Triangle pattern using nested loops:
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 * 1 2 3 4 5
 */
int main(void) {
    int rows = 5;
    int i, j;

    /* Outer loop controls the row number (1 to 5) */
    for (i = 1; i <= rows; i++) {
        /* Inner loop prints numbers from 1 up to the current row number i */
        for (j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf(" ");
            }
        }
        /* Move to the next line after completing each row */
        printf("\n");
    }

    return 0;
}
```

## 7. Sample Input
No user input is required for this fixed 5-row pattern.

## 8. Sample Output
```text
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

## 9. Explanation of the Program
- The outer loop `for (i = 1; i <= rows; i++)` iterates once for each of the 5 rows.
- The inner loop `for (j = 1; j <= i; j++)` prints integers starting from `1` up to the current row number `i`.
- Printing a space only when `j < i` separates numbers cleanly without leaving trailing spaces at the end of a line.
- `printf("\n")` advances the cursor to a new line after each row finishes.

## 10. Result
The program successfully prints the 5-row number triangle pattern using nested `for` loops.
