#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks (0 to 100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter a value from 0 to 100.\n");
    } else if (marks >= 90) {
        printf("Marks: %d, Grade: A\n", marks);
    } else if (marks >= 80) {
        printf("Marks: %d, Grade: B\n", marks);
    } else if (marks >= 70) {
        printf("Marks: %d, Grade: C\n", marks);
    } else if (marks >= 60) {
        printf("Marks: %d, Grade: D\n", marks);
    } else if (marks >= 50) {
        printf("Marks: %d, Grade: E\n", marks);
    } else {
        printf("Marks: %d, Grade: F\n", marks);
    }

    return 0;
}
