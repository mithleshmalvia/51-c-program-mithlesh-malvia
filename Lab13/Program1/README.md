# Lab 13 - Program 1

## 1. Experiment Number
**Experiment 25** (Lab 13 — Program 1 / Set 2 — Q.5)

## 2. Original Question
Write a program to check whether a number is positive or negative or zero.

## 3. Aim
To write a C program that accepts a number from the user and determines whether it is positive, negative, or zero.

## 4. Theory
Any real number falls into exactly one of three mutually exclusive categories relative to `0`:
- **Positive:** `number > 0`
- **Negative:** `number < 0`
- **Zero:** `number == 0`

An `if-else-if-else` ladder evaluates these three conditions cleanly.

## 5. Algorithm
1. Start the program.
2. Declare `double number`.
3. Prompt the user and validate `scanf("%lf", &number) == 1`.
4. If `number > 0.0`, print that the number is positive.
5. Else if `number < 0.0`, print that the number is negative.
6. Else, print that the number is zero.
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 13 - Program 1 (Set 2 - Q.5 / Experiment 25)
 * Check whether a given number is positive, negative, or zero.
 */
int main(void) {
    double number;

    printf("Enter a number: ");
    if (scanf("%lf", &number) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    if (number > 0.0) {
        printf("%.2lf is a positive number.\n", number);
    } else if (number < 0.0) {
        printf("%.2lf is a negative number.\n", number);
    } else {
        printf("The entered number is zero.\n");
    }

    return 0;
}
```

## 7. Sample Input
**Test Case 1 (Positive):**
```text
Enter a number: 42
```

**Test Case 2 (Negative):**
```text
Enter a number: -18.5
```

**Test Case 3 (Zero):**
```text
Enter a number: 0
```

## 8. Sample Output
**Test Case 1:**
```text
42.00 is a positive number.
```

**Test Case 2:**
```text
-18.50 is a negative number.
```

**Test Case 3:**
```text
The entered number is zero.
```

## 9. Explanation of the Program
- Using `double` allows both whole numbers and decimals to be tested.
- The three branches cover every numeric possibility without overlap, and `scanf()` validation rejects non-numeric inputs.

## 10. Result
The program accurately identifies positive, negative, and zero inputs.
