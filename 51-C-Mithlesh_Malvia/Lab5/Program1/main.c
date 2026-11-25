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
