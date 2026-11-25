#include <stdio.h>
#include <string.h>

/* Structure representing a student */
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

/*
 * Lab 9 - Program 2 (Q.18)
 * Use a structure to store and display the details of a student:
 * name, roll number, and marks.
 */
int main(void) {
    struct Student student;

    printf("Enter student name: ");
    if (fgets(student.name, sizeof(student.name), stdin) == NULL) {
        printf("Error reading student name.\n");
        return 1;
    }
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Enter roll number: ");
    if (scanf("%d", &student.rollNumber) != 1 || student.rollNumber <= 0) {
        printf("Invalid roll number. Must be a positive integer.\n");
        return 1;
    }

    printf("Enter marks (0 to 100): ");
    if (scanf("%f", &student.marks) != 1 || student.marks < 0.0f || student.marks > 100.0f) {
        printf("Invalid marks. Enter a number between 0 and 100.\n");
        return 1;
    }

    printf("\n--- Student Details ---\n");
    printf("Name        : %s\n", student.name);
    printf("Roll Number : %d\n", student.rollNumber);
    printf("Marks       : %.2f\n", student.marks);

    return 0;
}
