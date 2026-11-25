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
