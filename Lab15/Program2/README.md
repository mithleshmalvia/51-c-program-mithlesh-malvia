# Lab 15 - Program 2

## 1. Experiment Number
**Experiment 30** (Lab 15 — Program 2 / Set 2 — Q.10)

## 2. Original Question
Write a C program to calculate area and perimeter of rectangle.

## 3. Aim
To write a C program that reads the length and breadth of a rectangle, validates that both dimensions are positive, and calculates its area and perimeter.

## 4. Theory
For a rectangle with length $l > 0$ and breadth $b > 0$:
- **Area:** $\text{Area} = l \times b$
- **Perimeter:** $\text{Perimeter} = 2 \times (l + b)$

Because physical dimensions cannot be zero or negative, validating `length > 0.0` and `breadth > 0.0` ensures meaningful geometric output.

## 5. Algorithm
1. Start the program.
2. Declare `double` variables `length`, `breadth`, `area`, and `perimeter`.
3. Read `length` and validate `scanf("%lf", &length) == 1 && length > 0.0`.
4. Read `breadth` and validate `scanf("%lf", &breadth) == 1 && breadth > 0.0`.
5. Compute `area = length * breadth;` and `perimeter = 2.0 * (length + breadth);`.
6. Display `area` and `perimeter`.
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 15 - Program 2 (Set 2 - Q.10 / Experiment 30)
 * Calculate the area and perimeter of a rectangle:
 *   Area = length * breadth
 *   Perimeter = 2 * (length + breadth)
 */
int main(void) {
    double length, breadth;
    double area, perimeter;

    printf("Enter length of rectangle: ");
    if (scanf("%lf", &length) != 1 || length <= 0.0) {
        printf("Invalid input. Length must be a positive number.\n");
        return 1;
    }

    printf("Enter breadth of rectangle: ");
    if (scanf("%lf", &breadth) != 1 || breadth <= 0.0) {
        printf("Invalid input. Breadth must be a positive number.\n");
        return 1;
    }

    area = length * breadth;
    perimeter = 2.0 * (length + breadth);

    printf("\nArea of rectangle      : %.2lf\n", area);
    printf("Perimeter of rectangle : %.2lf\n", perimeter);

    return 0;
}
```

## 7. Sample Input
```text
Enter length of rectangle: 12.5
Enter breadth of rectangle: 4
```

## 8. Sample Output
```text
Area of rectangle      : 50.00
Perimeter of rectangle : 33.00
```

## 9. Explanation of the Program
- Both `length` and `breadth` are checked to ensure they are positive numeric values.
- `area` multiplies `length` by `breadth`, and `perimeter` doubles their sum.

## 10. Result
The program accurately calculates and displays the area and perimeter of a rectangle while rejecting invalid dimensions.
