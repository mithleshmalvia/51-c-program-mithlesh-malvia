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
