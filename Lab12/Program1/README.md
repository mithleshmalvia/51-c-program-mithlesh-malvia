# Lab 12 - Program 1

## 1. Experiment Number
**Experiment 23** (Lab 12 — Program 1 / Set 2 — Q.3)

## 2. Original Question
Write a C program that accepts the salary and age from the user and displays the same on the screen as output.

## 3. Aim
To write a C program that reads a user's salary and age from standard input, validates both values, and prints them clearly on the screen.

## 4. Theory
Different real-world quantities require appropriate C data types:
- **Salary** may contain fractional currency units, so `double` (format specifier `%lf`) is suitable.
- **Age** is a whole number of years, so `int` (format specifier `%d`) is suitable.

Validating `salary >= 0.0` and `1 <= age <= 150` prevents nonsensical or non-numeric entries.

## 5. Algorithm
1. Start the program.
2. Declare `double salary` and `int age`.
3. Prompt for `salary` and verify `scanf("%lf", &salary) == 1 && salary >= 0.0`.
4. Prompt for `age` and verify `scanf("%d", &age) == 1 && age > 0 && age <= 150`.
5. Display `salary` formatted to two decimal places and `age` in years.
6. Stop the program.

## 6. Source Code
```c
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
```

## 7. Sample Input
```text
Enter your salary: 48500.75
Enter your age (in years): 24
```

## 8. Sample Output
```text
--- User Details ---
Salary : 48500.75
Age    : 24 years
```

## 9. Explanation of the Program
- Input checks combine `scanf(...) != 1` (catches letters/symbols) with range checks (`salary < 0.0` and `age <= 0 || age > 150`).
- `%.2lf` displays salary cleanly with two decimal places, and `%d` prints the integer age.

## 10. Result
The program successfully accepts salary and age from the user and displays both accurately on the screen.
