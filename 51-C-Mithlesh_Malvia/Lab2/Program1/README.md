# Lab 2 - Program 1

## 1. Experiment Number
**Experiment 3** (Lab 2 — Program 1 / Question 3)

## 2. Original Question
Write a C program to create a simple calculator using switch-case for addition, subtraction, multiplication and division.

## 3. Aim
To write a C program that performs basic arithmetic operations (addition, subtraction, multiplication, and division) based on user input using a `switch-case` statement.

## 4. Theory
The `switch-case` statement selects one of several execution paths based on the value of an integral or character expression. Each `case` label corresponds to a constant value (`'+'`, `'-'`, `'*'`, `'/'`), and `break` prevents fall-through into subsequent cases. The `default` label handles any unrecognized operator.

## 5. Algorithm
1. Start the program.
2. Declare `double` variables `num1`, `num2`, `result`, and `char` variable `op`.
3. Read `num1`, `op` (using `" %c"` to skip leading whitespace), and `num2`, validating each `scanf()` call.
4. Evaluate `op` inside a `switch (op)` block:
   - `case '+'`: compute `num1 + num2` and print the result.
   - `case '-'`: compute `num1 - num2` and print the result.
   - `case '*'`: compute `num1 * num2` and print the result.
   - `case '/'`: check if `num2 == 0.0`. If true, print a division-by-zero error and return `1`; otherwise compute `num1 / num2` and print the result.
   - `default`: print an invalid-operator error and return `1`.
5. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 2 - Program 1 (Q.3)
 * Simple calculator using switch-case for +, -, *, and /.
 */
int main(void) {
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input for the first number.\n");
        return 1;
    }

    printf("Enter an operator (+, -, *, /): ");
    if (scanf(" %c", &op) != 1) {
        printf("Invalid input for operator.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input for the second number.\n");
        return 1;
    }

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0.0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            break;

        default:
            printf("Error: Invalid operator '%c'. Use +, -, *, or /.\n", op);
            return 1;
    }

    return 0;
}
```

## 7. Sample Input
**Test Case 1:**
```text
Enter first number: 25
Enter an operator (+, -, *, /): *
Enter second number: 4
```

**Test Case 2 (Division by Zero):**
```text
Enter first number: 10
Enter an operator (+, -, *, /): /
Enter second number: 0
```

## 8. Sample Output
**Test Case 1:**
```text
Enter first number: 25
Enter an operator (+, -, *, /): *
Enter second number: 4
25.00 * 4.00 = 100.00
```

**Test Case 2:**
```text
Enter first number: 10
Enter an operator (+, -, *, /): /
Enter second number: 0
Error: Division by zero is not allowed.
```

## 9. Explanation of the Program
- `double` supports both integers and decimal numbers cleanly.
- `" %c"` in `scanf` has a leading space so leftover newline characters in the input buffer are ignored before reading the operator.
- In `case '/'`, checking `num2 == 0.0` prevents undefined division-by-zero behavior.
- The `default` case catches invalid operators such as `%` or `@`.

## 10. Result
The calculator program successfully performs addition, subtraction, multiplication, and division using `switch-case` while safely handling invalid operators and division by zero.
