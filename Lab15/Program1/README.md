# Lab 15 - Program 1

## 1. Experiment Number
**Experiment 29** (Lab 15 — Program 1 / Set 2 — Q.9)

## 2. Original Question
Write a C program to calculate Fahrenheit to Celsius.

## 3. Aim
To write a C program that reads a temperature in degrees Fahrenheit and converts it into degrees Celsius using the standard conversion formula.

## 4. Theory
The relationship between Fahrenheit ($F$) and Celsius ($C$) is:

$$C = \frac{(F - 32) \times 5}{9}$$

In C, writing `(5 / 9)` alone performs integer division and evaluates to `0`. Using floating-point literals (`5.0 / 9.0`) and `double` variables preserves exact fractional precision.

## 5. Algorithm
1. Start the program.
2. Declare `double fahrenheit` and `double celsius`.
3. Prompt the user for `fahrenheit` and validate `scanf("%lf", &fahrenheit) == 1`.
4. Compute `celsius = (fahrenheit - 32.0) * 5.0 / 9.0;`.
5. Print the converted temperature rounded to two decimal places.
6. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 15 - Program 1 (Set 2 - Q.9 / Experiment 29)
 * Convert temperature from Fahrenheit to Celsius using:
 *   Celsius = (Fahrenheit - 32) * 5 / 9
 */
int main(void) {
    double fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &fahrenheit) != 1) {
        printf("Invalid input. Please enter a numeric temperature.\n");
        return 1;
    }

    /* Perform floating-point multiplication before division (avoid 5 / 9 integer division) */
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    printf("%.2lf F = %.2lf C\n", fahrenheit, celsius);

    return 0;
}
```

## 7. Sample Input
**Test Case 1:**
```text
Enter temperature in Fahrenheit: 98.6
```

**Test Case 2 (Freezing Point):**
```text
Enter temperature in Fahrenheit: 32
```

## 8. Sample Output
**Test Case 1:**
```text
98.60 F = 37.00 C
```

**Test Case 2:**
```text
32.00 F = 0.00 C
```

## 9. Explanation of the Program
- `(fahrenheit - 32.0)` subtracts the freezing-point offset.
- Multiplying by `5.0` and dividing by `9.0` performs full `double` arithmetic, avoiding truncation errors.

## 10. Result
The program accurately converts Fahrenheit temperatures to Celsius using the standard formula.
