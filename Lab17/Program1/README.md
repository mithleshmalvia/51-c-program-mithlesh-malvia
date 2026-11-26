# Lab 17 - Program 1

## 1. Experiment Number
**Experiment 33** (Lab 17 — Program 1 / Set 2 — Q.13)

## 2. Original Question
Write a C program to swap two numbers with using third variable.

## 3. Aim
To write a C program that swaps two numbers entered by the user using a temporary third variable and displays their values before and after swapping.

## 4. Theory
Swapping with a **temporary third variable** (`temp`) is the simplest, safest, and most general swap technique in C. It works reliably for integers, floating-point values, structures, and equal values without any overflow risk:
1. Save `num1` into `temp`.
2. Assign `num2` to `num1`.
3. Assign `temp` (original `num1`) to `num2`.

## 5. Algorithm
1. Start the program.
2. Declare `double` variables `num1`, `num2`, and `temp`.
3. Read and validate `num1` and `num2`.
4. Display the values of `num1` and `num2` before swapping.
5. Execute `temp = num1; num1 = num2; num2 = temp;`.
6. Display the values of `num1` and `num2` after swapping.
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 17 - Program 1 (Set 2 - Q.13 / Experiment 33)
 * Swap two numbers using a temporary third variable.
 */
int main(void) {
    double num1, num2, temp;

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input for the first number.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input for the second number.\n");
        return 1;
    }

    printf("\nBefore Swapping: num1 = %.2lf, num2 = %.2lf\n", num1, num2);

    /* Three-step swap using temporary third variable */
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After Swapping : num1 = %.2lf, num2 = %.2lf\n", num1, num2);

    return 0;
}
```

## 7. Sample Input
```text
Enter first number: 12.5
Enter second number: 99.0
```

## 8. Sample Output
```text
Before Swapping: num1 = 12.50, num2 = 99.00
After Swapping : num1 = 99.00, num2 = 12.50
```

## 9. Explanation of the Program
- Storing `num1` in `temp` prevents `num1`'s original value from being lost when `num1 = num2;` runs.
- Using `double` allows swapping both integers and decimal numbers cleanly.

## 10. Result
The program swaps two numbers cleanly using a temporary third variable and displays the values before and after swapping.
