#include <stdio.h>

/*
 * Lab 12 - Program 2 (Set 2 - Q.4 / Experiment 24)
 * Display the memory size (in bytes) of int, float, double, and char
 * using the sizeof operator.
 */
int main(void) {
    printf("Size of primitive data types on this system:\n");
    printf("Size of int    : %zu byte(s)\n", sizeof(int));
    printf("Size of float  : %zu byte(s)\n", sizeof(float));
    printf("Size of double : %zu byte(s)\n", sizeof(double));
    printf("Size of char   : %zu byte(s)\n", sizeof(char));

    return 0;
}
