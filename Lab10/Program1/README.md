# Lab 10 - Program 1

## 1. Experiment Number
**Experiment 19** (Lab 10 — Program 1 / Question 19)

## 2. Original Question
Write a C program using an array of structures to store the details of 5 employees and display the details of an employee based on a given condition.

## 3. Aim
To write a C program using an array of `struct Employee` records to store data for 5 employees and filter/display employee records that satisfy a clearly defined selection condition.

## 4. Theory
An **array of structures** stores multiple structured records consecutively in memory (`struct Employee employees[5]`). Each element `employees[i]` holds its own `id`, `name`, `department`, and `salary` fields.

### Assumed Selection Condition
The original question states *"based on a given condition"* without specifying the exact filter rule. Therefore, this implementation clearly defines and documents the condition:
- **Condition:** Display all employees whose **`salary > 50000.00`** (`SALARY_THRESHOLD`).
- If no employee satisfies the condition, the program prints an informative message instead of blank output.

## 5. Algorithm
1. Start the program.
2. Define `struct Employee` (`id`, `name`, `department`, `salary`) and constant `NUM_EMPLOYEES = 5`, `SALARY_THRESHOLD = 50000.0f`.
3. Loop `i` from `0` to `4` to read each employee's ID, name, department, and salary, clearing the input buffer after `scanf()` before reading strings with `fgets()`.
4. Initialize `matchCount = 0`.
5. Loop `i` from `0` to `4`:
   - If `employees[i].salary > SALARY_THRESHOLD`, display the employee's full details and increment `matchCount`.
6. If `matchCount == 0`, print `"No employees found with salary greater than 50000.00."`
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>
#include <string.h>

#define NUM_EMPLOYEES 5
#define SALARY_THRESHOLD 50000.0f

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

/* Helper to discard remaining characters up to newline after scanf() */
static void clearInputBuffer(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        /* discard */
    }
}

/*
 * Lab 10 - Program 1 (Q.19)
 * Store details of 5 employees using an array of structures and display
 * employees matching a given condition.
 *
 * Assumed Selection Condition:
 *   Because the original question does not specify a filter condition, this
 *   program selects and displays employees whose salary is greater than 50000.00.
 */
int main(void) {
    struct Employee employees[NUM_EMPLOYEES];
    int i;
    int matchCount = 0;

    printf("Enter details for %d employees:\n", NUM_EMPLOYEES);
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        printf("\n--- Employee %d ---\n", i + 1);

        printf("Employee ID: ");
        if (scanf("%d", &employees[i].id) != 1 || employees[i].id <= 0) {
            printf("Invalid Employee ID. Must be a positive integer.\n");
            return 1;
        }
        clearInputBuffer();

        printf("Name: ");
        if (fgets(employees[i].name, sizeof(employees[i].name), stdin) == NULL) {
            printf("Error reading employee name.\n");
            return 1;
        }
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';

        printf("Department: ");
        if (fgets(employees[i].department, sizeof(employees[i].department), stdin) == NULL) {
            printf("Error reading department.\n");
            return 1;
        }
        employees[i].department[strcspn(employees[i].department, "\n")] = '\0';

        printf("Salary: ");
        if (scanf("%f", &employees[i].salary) != 1 || employees[i].salary < 0.0f) {
            printf("Invalid salary. Must be a non-negative number.\n");
            return 1;
        }
        clearInputBuffer();
    }

    printf("\n=== Employees with Salary > %.2f ===\n", SALARY_THRESHOLD);
    for (i = 0; i < NUM_EMPLOYEES; i++) {
        if (employees[i].salary > SALARY_THRESHOLD) {
            printf("\nID         : %d\n", employees[i].id);
            printf("Name       : %s\n", employees[i].name);
            printf("Department : %s\n", employees[i].department);
            printf("Salary     : %.2f\n", employees[i].salary);
            matchCount++;
        }
    }

    if (matchCount == 0) {
        printf("No employees found with salary greater than %.2f.\n", SALARY_THRESHOLD);
    }

    return 0;
}
```

## 7. Sample Input
```text
Enter details for 5 employees:

--- Employee 1 ---
Employee ID: 101
Name: Aarav Sharma
Department: IT
Salary: 62000

--- Employee 2 ---
Employee ID: 102
Name: Priya Nair
Department: HR
Salary: 45000

--- Employee 3 ---
Employee ID: 103
Name: Rohan Verma
Department: Engineering
Salary: 75000

--- Employee 4 ---
Employee ID: 104
Name: Sneha Patel
Department: Finance
Salary: 48000

--- Employee 5 ---
Employee ID: 105
Name: Kabir Joshi
Department: Operations
Salary: 51000
```

## 8. Sample Output
```text
=== Employees with Salary > 50000.00 ===

ID         : 101
Name       : Aarav Sharma
Department : IT
Salary     : 62000.00

ID         : 103
Name       : Rohan Verma
Department : Engineering
Salary     : 75000.00

ID         : 105
Name       : Kabir Joshi
Department : Operations
Salary     : 51000.00
```

## 9. Explanation of the Program
- `clearInputBuffer()` safely consumes trailing newline characters left in `stdin` by `scanf()` without using non-standard `fflush(stdin)`.
- The selection condition (`salary > 50000.00`) is defined as a named constant `SALARY_THRESHOLD`, making the assumption explicit and easy to adjust.
- `matchCount` handles the edge case where none of the 5 employees earn above `50000.00`.

## 10. Result
The program successfully stores 5 employee records in an array of structures and displays those satisfying the documented salary condition (`salary > 50000.00`).
