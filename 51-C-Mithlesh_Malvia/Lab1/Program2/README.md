# Lab 1 - Program 2

## 1. Experiment Number
**Experiment 2** (Lab 1 — Program 2 / Question 2)

## 2. Original Question
Write a C program to calculate the grade of a student based on marks using if-else-if statements.

## 3. Aim
To write a C program that takes a student's marks as input, validates the range, and assigns an appropriate grade using an `if-else-if` ladder.

## 4. Theory
The `if-else-if` ladder evaluates multiple mutually exclusive conditions sequentially from top to bottom. Once a condition evaluates to true, its corresponding block executes and the remaining conditions are skipped.

### Assumed Grading Scale
Because the original question does not prescribe specific mark boundaries, the following standard 100-point grading scale is assumed and documented:

| Marks Range | Grade | Remarks |
| :--- | :--- | :--- |
| 90 – 100 | `A` | Excellent |
| 80 – 89 | `B` | Very Good |
| 70 – 79 | `C` | Good |
| 60 – 69 | `D` | Satisfactory |
| 50 – 59 | `E` | Pass |
| 0 – 49 | `F` | Fail |

## 5. Algorithm
1. Start the program.
2. Declare an integer variable `marks`.
3. Prompt the user to enter marks from `0` to `100` and validate that `scanf()` reads one integer.
4. Check if `marks < 0 || marks > 100`. If true, print an invalid-range message and exit with status `1`.
5. Otherwise, evaluate conditions in descending order using `else if`:
   - If `marks >= 90`, print `Grade: A`.
   - Else if `marks >= 80`, print `Grade: B`.
   - Else if `marks >= 70`, print `Grade: C`.
   - Else if `marks >= 60`, print `Grade: D`.
   - Else if `marks >= 50`, print `Grade: E`.
   - Else, print `Grade: F`.
6. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 1 - Program 2 (Q.2)
 * Calculate student grade based on marks using if-else-if statements.
 *
 * Assumed Grading Scale (0 - 100):
 *   90 - 100 : Grade A
 *   80 - 89  : Grade B
 *   70 - 79  : Grade C
 *   60 - 69  : Grade D
 *   50 - 59  : Grade E
 *    0 - 49  : Grade F (Fail)
 */
int main(void) {
    int marks;

    printf("Enter student marks (0 to 100): ");
    if (scanf("%d", &marks) != 1) {
        printf("Invalid input. Please enter numeric marks.\n");
        return 1;
    }

    if (marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
        return 1;
    } else if (marks >= 90) {
        printf("Marks: %d | Grade: A\n", marks);
    } else if (marks >= 80) {
        printf("Marks: %d | Grade: B\n", marks);
    } else if (marks >= 70) {
        printf("Marks: %d | Grade: C\n", marks);
    } else if (marks >= 60) {
        printf("Marks: %d | Grade: D\n", marks);
    } else if (marks >= 50) {
        printf("Marks: %d | Grade: E\n", marks);
    } else {
        printf("Marks: %d | Grade: F\n", marks);
    }

    return 0;
}
```

## 7. Sample Input
**Test Case 1:**
```text
Enter student marks (0 to 100): 85
```

**Test Case 2 (Invalid Range):**
```text
Enter student marks (0 to 100): 110
```

## 8. Sample Output
**Test Case 1:**
```text
Enter student marks (0 to 100): 85
Marks: 85 | Grade: B
```

**Test Case 2:**
```text
Enter student marks (0 to 100): 110
Invalid marks. Please enter a value between 0 and 100.
```

## 9. Explanation of the Program
- Input validation first verifies both numeric format (`scanf("%d", &marks) == 1`) and valid bounds (`0 <= marks <= 100`).
- Conditions are checked from highest (`>= 90`) to lowest (`>= 50`). Because earlier branches fail before reaching lower ones, `marks >= 80` automatically represents `80` to `89`.
- The final `else` block handles all remaining valid marks (`0` to `49`) as `Grade: F`.

## 10. Result
The program accurately computes and displays the student's grade according to the documented grading scale while rejecting out-of-range and non-numeric inputs.
