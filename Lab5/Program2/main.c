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
