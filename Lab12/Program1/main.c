#include <stdio.h>

/*
 * Lab 12 - Program 1 (Set 2 - Q.3 / Experiment 23)
 * Accept salary and age from the user and display both on the screen.
 */
int main(void) {
    double salary;
    int age;

    printf("Enter your salary: ");
    if (scanf("%lf", &salary) != 1 || salary < 0.0) {
        printf("Invalid input. Salary must be a non-negative number.\n");
        return 1;
    }

    printf("Enter your age (in years): ");
    if (scanf("%d", &age) != 1 || age <= 0 || age > 150) {
        printf("Invalid input. Age must be an integer between 1 and 150.\n");
        return 1;
    }

    printf("\n--- User Details ---\n");
    printf("Salary : %.2lf\n", salary);
    printf("Age    : %d years\n", age);

    return 0;
}
