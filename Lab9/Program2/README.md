# Lab 9 - Program 2

## 1. Experiment Number
**Experiment 18** (Lab 9 — Program 2 / Question 18)

## 2. Original Question
Write a C program using a structure to store and display the details of a student, including name, roll number and marks.

## 3. Aim
To define a `struct Student` in C to store a student's name, roll number, and marks, and display the stored record cleanly.

## 4. Theory
A **structure** (`struct`) in C is a user-defined composite data type that groups variables of different data types under a single name. Unlike arrays (which hold elements of the same type), a structure can combine character arrays (`char name[50]`), integers (`int rollNumber`), and floating-point numbers (`float marks`). Structure members are accessed using the dot operator (`.`).

## 5. Algorithm
1. Start the program.
2. Define `struct Student` containing `char name[50]`, `int rollNumber`, and `float marks`.
3. Declare a structure variable `struct Student student`.
4. Read `student.name` using `fgets()` and remove the trailing `'\n'` via `strcspn()`.
5. Read and validate `student.rollNumber` (`> 0`) and `student.marks` (`0.0` to `100.0`).
6. Display all fields of `student` using the dot operator (`.`).
7. Stop the program.

## 6. Source Code
```c
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
```

## 7. Sample Input
```text
Enter student name: Mithlesh Malvia
Enter roll number: 51
Enter marks (0 to 100): 88.5
```

## 8. Sample Output
```text
--- Student Details ---
Name        : Mithlesh Malvia
Roll Number : 51
Marks       : 88.50
```

## 9. Explanation of the Program
- Reading `student.name` first with `fgets()` supports full names with spaces and avoids leftover newline issues from an earlier `scanf()`.
- Validation ensures roll numbers are positive and marks fall within `0` to `100`.
- Each member (`student.name`, `student.rollNumber`, `student.marks`) is accessed and displayed using the `.` operator.

## 10. Result
The program successfully stores a student's name, roll number, and marks in a `struct` and displays the details accurately.
