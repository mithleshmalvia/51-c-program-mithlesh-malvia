#include <stdio.h>

/*
 * Lab 14 - Program 2 (Set 2 - Q.8 / Experiment 28)
 * Find the largest number among three numbers, handling equal values cleanly.
 */
int main(void) {
    double num1, num2, num3, largest;

    printf("Enter three numbers separated by spaces: ");
    if (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter three numeric values.\n");
        return 1;
    }

    if (num1 == num2 && num2 == num3) {
        printf("All three numbers are equal (%.2lf).\n", num1);
    } else {
        /* Using >= ensures tied largest values (e.g., 25, 25, 10) are handled properly */
        if (num1 >= num2 && num1 >= num3) {
            largest = num1;
        } else if (num2 >= num1 && num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
        printf("The largest number among %.2lf, %.2lf, and %.2lf is: %.2lf\n",
               num1, num2, num3, largest);
    }

    return 0;
}
