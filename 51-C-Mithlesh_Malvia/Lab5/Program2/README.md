# Lab 5 - Program 2

## 1. Experiment Number
**Experiment 10** (Lab 5 — Program 2 / Question 10)

## 2. Original Question
Write a C program to print the given pattern using nested loops.

## 3. Aim
To write a C program using nested `for` loops to print the 5-row centered palindromic number pyramid pattern.

## 4. Theory
Printing a centered pyramid requires coordinating three inner loops inside each iteration of the outer row loop (`i = 1` to `5`):
1. **Leading spaces:** Row `i` skips `rows - i` number positions on the left. Since each number position plus its separating space takes 2 characters, `rows - i` pairs of `"  "` are printed.
2. **Ascending sequence:** Prints `i` consecutive integers starting at `i` and peaking at `2 * i - 1`.
3. **Descending sequence:** Prints `i - 1` consecutive integers decreasing from `2 * i - 2` back down to `i`.

## 5. Algorithm
1. Start the program.
2. Set `rows = 5` and declare `i`, `j`, `space`, and `num`.
3. Loop `i` from `1` to `rows`:
   - Loop `space` from `1` to `rows - i` and print `"  "` (two spaces).
   - Set `num = i`; loop `j` from `1` to `i` to print `num` (followed by `" "` when more numbers follow in the row) and increment `num`.
   - Set `num = 2 * i - 2`; loop `j` from `1` to `i - 1` to print `num` (followed by `" "` when `j < i - 1`) and decrement `num`.
   - Print a newline `'\n'`.
4. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 5 - Program 2 (Q.10)
 * Print a 5-row Centered Number Pyramid pattern using nested loops:
 *         1
 *       2 3 2
 *     3 4 5 4 3
 *   4 5 6 7 6 5 4
 * 5 6 7 8 9 8 7 6 5
 */
int main(void) {
    int rows = 5;
    int i, j, space, num;

    /* Outer loop controls each row from 1 to 5 */
    for (i = 1; i <= rows; i++) {
        /* First inner loop prints leading spaces (2 spaces per missing column) */
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        /* Second inner loop prints ascending numbers from i up to (2 * i - 1) */
        num = i;
        for (j = 1; j <= i; j++) {
            printf("%d", num);
            if (j < i || i > 1) {
                printf(" ");
            }
            num++;
        }

        /* Third inner loop prints descending numbers from (2 * i - 2) down to i */
        num = 2 * i - 2;
        for (j = 1; j <= i - 1; j++) {
            printf("%d", num);
            if (j < i - 1) {
                printf(" ");
            }
            num--;
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
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
```

## 9. Explanation of the Program
- On row `1`, `rows - i = 4`, so `8` spaces align `1` directly above the center peak `9` on row `5`.
- On row `3`, `num` climbs `3, 4, 5` (first number loop) and descends `4, 3` (second number loop), forming `3 4 5 4 3`.
- Conditional space printing prevents trailing spaces at the end of every row.

## 10. Result
The program accurately prints the 5-row centered palindromic number pyramid using nested `for` loops.
