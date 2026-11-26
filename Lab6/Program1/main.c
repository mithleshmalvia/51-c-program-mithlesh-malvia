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
