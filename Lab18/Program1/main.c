#include <stdio.h>

/*
 * Lab 18 - Program 1 (Set 2 - Q.15 / Experiment 35)
 * Accept the number of terms and display the Fibonacci series.
 */
int main(void) {
    int terms, i;
    unsigned long long first = 0, second = 1, next;

    printf("Enter the number of terms (1 to 93): ");
    if (scanf("%d", &terms) != 1 || terms < 1 || terms > 93) {
        printf("Invalid input. Please enter an integer between 1 and 93.\n");
        return 1;
    }

    printf("Fibonacci Series (%d terms):\n", terms);
    for (i = 1; i <= terms; i++) {
        printf("%llu", first);
        if (i < terms) {
            printf(" ");
            /* Compute next term only while more terms remain */
            next = first + second;
            first = second;
            second = next;
        }
    }
    printf("\n");

    return 0;
}
