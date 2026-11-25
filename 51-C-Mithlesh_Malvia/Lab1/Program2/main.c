#include <stdio.h>

/*
 * Lab 1 - Program 2 (Q.2)
 * Calculate student grade based on marks using if-else-if statements.
 *
 * Assumed Grading Scale (0 - 100):
 *   90 - 100 : Grade A
 *   80 - 89  : Grade B
 *   70 - 79  : Grade C
 *   60 - 69  : Grade D
 *   50 - 59  : Grade E
 *    0 - 49  : Grade F (Fail)
 */
int main(void) {
    int marks;

    printf("Enter student marks (0 to 100): ");
    if (scanf("%d", &marks) != 1) {
        printf("Invalid input. Please enter numeric marks.\n");
        return 1;
    }

    if (marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
        return 1;
    } else if (marks >= 90) {
        printf("Marks: %d | Grade: A\n", marks);
    } else if (marks >= 80) {
        printf("Marks: %d | Grade: B\n", marks);
    } else if (marks >= 70) {
        printf("Marks: %d | Grade: C\n", marks);
    } else if (marks >= 60) {
        printf("Marks: %d | Grade: D\n", marks);
    } else if (marks >= 50) {
        printf("Marks: %d | Grade: E\n", marks);
    } else {
        printf("Marks: %d | Grade: F\n", marks);
    }

    return 0;
}
