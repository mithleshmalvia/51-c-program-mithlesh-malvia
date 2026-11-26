# Lab 6 - Program 1

## 1. Experiment Number
**Experiment 11** (Lab 6 — Program 1 / Question 11)

## 2. Original Question
Write a C program to print the given pattern using nested loops.

## 3. Aim
To write a C program using nested `for` loops to print the 5-row inverted star pyramid pattern.

## 4. Theory
An **inverted star pyramid** starts with the widest row at the top and narrows symmetrically toward a single star at the bottom:
- Counting `i` downward from `rows` (`5`) to `1`:
  - Leading indentation increases by `rows - i` units (`0, 2, 4, 6, 8` spaces).
  - The number of stars decreases as `2 * i - 1` (`9, 7, 5, 3, 1` stars).

## 5. Algorithm
1. Start the program.
2. Set `rows = 5` and declare loop variables `i`, `j`, and `space`.
3. Run an outer `for` loop counting down with `i` from `rows` to `1`:
   - Loop `space` from `1` to `rows - i` and print `"  "` (two spaces).
   - Loop `j` from `1` to `2 * i - 1`:
     - Print `"*"`.
     - If `j < 2 * i - 1`, print a space `" "`.
   - Print a newline `'\n'`.
4. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 6 - Program 1 (Q.11)
 * Print a 5-row Inverted Star Pyramid pattern using nested loops:
 *   * * * * * * * * *
 *     * * * * * * *
 *       * * * * *
 *         * * *
 *           *
 */
int main(void) {
    int rows = 5;
    int i, j, space;

    /* Outer loop counts down from row 5 to row 1 */
    for (i = rows; i >= 1; i--) {
        /* First inner loop prints leading spaces (2 spaces per indented step) */
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        /* Second inner loop prints (2 * i - 1) stars separated by spaces */
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
            if (j < 2 * i - 1) {
                printf(" ");
            }
        }

        /* Move to the next line after completing the row */
        printf("\n");
    }

    return 0;
}
```

## 7. Sample Input
No user input is required for this fixed 5-row pattern.

## 8. Sample Output
```text
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
```

## 9. Explanation of the Program
- Starting `i` at `5` and decrementing (`i--`) produces `9` stars on the first row (`2 * 5 - 1 = 9`) and `1` star on the last row (`2 * 1 - 1 = 1`).
- Printing `"  "` (`2` spaces) `rows - i` times shifts each subsequent row inward by one star-and-space width so the pyramid stays centered.
- Separating stars with `" "` only when `j < 2 * i - 1` keeps lines clean with no trailing whitespace.

## 10. Result
The program successfully prints the 5-row inverted star pyramid pattern using nested `for` loops.
