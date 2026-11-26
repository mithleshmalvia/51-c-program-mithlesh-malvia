# Lab 14 - Program 2

## 1. Experiment Number
**Experiment 28** (Lab 14 — Program 2 / Set 2 — Q.8)

## 2. Original Question
Write a C program to find the largest number among three numbers.

## 3. Aim
To write a C program that compares three numbers entered by the user and identifies the largest number while handling equal numbers accurately.

## 4. Theory
When finding the maximum of three numbers $a, b, c$, using strict `>` comparisons (`a > b && a > c`) can misclassify tied values (such as `25, 25, 10`). Using non-strict `>=` comparisons guarantees the true maximum is selected even when two values tie, and checking `num1 == num2 && num2 == num3` explicitly identifies the case where all three values are identical.

## 5. Algorithm
1. Start the program.
2. Declare `double` variables `num1`, `num2`, `num3`, and `largest`.
3. Read three numbers and validate `scanf("%lf %lf %lf", &num1, &num2, &num3) == 3`.
4. If `num1 == num2 && num2 == num3`, print that all three numbers are equal.
5. Otherwise:
   - If `num1 >= num2 && num1 >= num3`, set `largest = num1`.
   - Else if `num2 >= num1 && num2 >= num3`, set `largest = num2`.
   - Else, set `largest = num3`.
   - Print `largest`.
6. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 14 - Program 2 (Set 2 - Q.8 / Experiment 28)
 * Find the largest number among three numbers, handling equal values cleanly.
 */
int main(void) {
    double num1, num2, num3, largest;

    printf("Enter three numbers separated by spaces: ");
    if (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter three numeric values.\n");
        return 1;
    }

    if (num1 == num2 && num2 == num3) {
        printf("All three numbers are equal (%.2lf).\n", num1);
    } else {
        /* Using >= ensures tied largest values (e.g., 25, 25, 10) are handled properly */
        if (num1 >= num2 && num1 >= num3) {
            largest = num1;
        } else if (num2 >= num1 && num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
        printf("The largest number among %.2lf, %.2lf, and %.2lf is: %.2lf\n",
               num1, num2, num3, largest);
    }

    return 0;
}
```

## 7. Sample Input
**Test Case 1 (Distinct Numbers):**
```text
Enter three numbers separated by spaces: 14 52 37
```

**Test Case 2 (Two Equal Largest):**
```text
Enter three numbers separated by spaces: 25 25 10
```

**Test Case 3 (All Equal):**
```text
Enter three numbers separated by spaces: 9 9 9
```

## 8. Sample Output
**Test Case 1:**
```text
The largest number among 14.00, 52.00, and 37.00 is: 52.00
```

**Test Case 2:**
```text
The largest number among 25.00, 25.00, and 10.00 is: 25.00
```

**Test Case 3:**
```text
All three numbers are equal (9.00).
```

## 9. Explanation of the Program
- `scanf("%lf %lf %lf", ...) != 3` validates all three numeric inputs at once.
- Checking `num1 == num2 && num2 == num3` handles the all-equal case cleanly.
- Using `>=` prevents ties like `25, 25, 10` from falling through to the wrong `else` branch.

## 10. Result
The program accurately determines the largest of three numbers and handles tied and equal inputs properly.
