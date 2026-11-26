# Lab 7 - Program 1

## 1. Experiment Number
**Experiment 13** (Lab 7 — Program 1 / Question 13)

## 2. Original Question
Write a C program using a function with arguments and a return value to calculate the sum of two numbers.

## 3. Aim
To write a modular C program that passes two numbers as arguments to a user-defined function and receives their sum via the function's return value.

## 4. Theory
A **function with arguments and a return value** receives input data through parameters from the calling function (`main()`) and sends the processed result back using the `return` statement. Function prototypes declared before `main()` allow the compiler to verify argument types and return types at compile time.

## 5. Algorithm
1. Start the program.
2. Declare the function prototype `int calculateSum(int a, int b);`.
3. In `main()`, declare `num1`, `num2`, and `sum`.
4. Read `num1` and `num2` from the user with `scanf()` validation.
5. Call `sum = calculateSum(num1, num2)`.
6. Inside `calculateSum(int a, int b)`, compute and return `a + b`.
7. Display `sum` in `main()`.
8. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/* Function prototype: accepts two integers and returns their sum */
int calculateSum(int a, int b);

/*
 * Lab 7 - Program 1 (Q.13)
 * Calculate the sum of two numbers using a function with arguments
 * and a return value.
 */
int main(void) {
    int num1, num2, sum;

    printf("Enter first integer: ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input for the first integer.\n");
        return 1;
    }

    printf("Enter second integer: ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input for the second integer.\n");
        return 1;
    }

    sum = calculateSum(num1, num2);
    printf("Sum of %d and %d = %d\n", num1, num2, sum);

    return 0;
}

/* Function definition */
int calculateSum(int a, int b) {
    return a + b;
}
```

## 7. Sample Input
```text
Enter first integer: 18
Enter second integer: 27
```

## 8. Sample Output
```text
Sum of 18 and 27 = 45
```

## 9. Explanation of the Program
- `int calculateSum(int a, int b);` declares the function signature before `main()`.
- When `calculateSum(num1, num2)` is invoked, copies of `num1` and `num2` are passed into parameters `a` and `b`.
- `return a + b;` sends the integer sum back to `main()`, where it is stored in `sum` and printed.

## 10. Result
The program successfully computes and displays the sum of two integers using a user-defined function with arguments and a return value.
