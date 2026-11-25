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
