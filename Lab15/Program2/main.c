#include <stdio.h>

/*
 * Lab 15 - Program 2 (Set 2 - Q.10 / Experiment 30)
 * Calculate the area and perimeter of a rectangle:
 *   Area = length * breadth
 *   Perimeter = 2 * (length + breadth)
 */
int main(void) {
    double length, breadth;
    double area, perimeter;

    printf("Enter length of rectangle: ");
    if (scanf("%lf", &length) != 1 || length <= 0.0) {
        printf("Invalid input. Length must be a positive number.\n");
        return 1;
    }

    printf("Enter breadth of rectangle: ");
    if (scanf("%lf", &breadth) != 1 || breadth <= 0.0) {
        printf("Invalid input. Breadth must be a positive number.\n");
        return 1;
    }

    area = length * breadth;
    perimeter = 2.0 * (length + breadth);

    printf("\nArea of rectangle      : %.2lf\n", area);
    printf("Perimeter of rectangle : %.2lf\n", perimeter);

    return 0;
}
