# Lab 11 - Program 1

## 1. Experiment Number
**Experiment 21** (Lab 11 — Program 1 / Set 2 — Q.1)

## 2. Original Question
Write a program to add two numbers that accept numbers from the user console.

## 3. Aim
To write a C program that reads two numbers entered by the user on the console, computes their sum, and displays the result.

## 4. Theory
In C, `<stdio.h>` provides `printf()` to display prompts and results on the console and `scanf()` to read formatted input from standard input (`stdin`). Using `double` with the `%lf` format specifier allows adding both integers and floating-point numbers accurately. Checking the return value of `scanf()` ensures non-numeric inputs are caught safely.

## 5. Algorithm
1. Start the program.
2. Declare `double` variables `num1`, `num2`, and `sum`.
3. Prompt the user for `num1` and validate that `scanf("%lf", &num1) == 1`.
4. Prompt the user for `num2` and validate that `scanf("%lf", &num2) == 1`.
5. Compute `sum = num1 + num2`.
6. Display `num1`, `num2`, and `sum`.
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 11 - Program 1 (Set 2 - Q.1 / Experiment 21)
 * Accept two numbers from the user console and display their sum.
 */
int main(void) {
    double num1, num2, sum;

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    sum = num1 + num2;
    printf("Sum of %.2lf and %.2lf = %.2lf\n", num1, num2, sum);

    return 0;
}
```

## 7. Sample Input
```text
Enter first number: 24.5
Enter second number: 15.5
```

## 8. Sample Output
```text
Sum of 24.50 and 15.50 = 40.00
```

## 9. Explanation of the Program
- `scanf("%lf", &num1) != 1` verifies that one valid floating-point or integer number was parsed; otherwise, the program reports an error and exits with status `1`.
- `sum = num1 + num2;` adds the two values.
- `%.2lf` formats the output cleanly to two decimal places.

## 10. Result
The program successfully accepts two numbers from the user console, validates them, and displays their sum.
