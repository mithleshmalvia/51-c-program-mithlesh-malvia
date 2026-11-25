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
