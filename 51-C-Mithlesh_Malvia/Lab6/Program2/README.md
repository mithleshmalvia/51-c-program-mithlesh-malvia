# Lab 6 - Program 2

## 1. Experiment Number
**Experiment 12** (Lab 6 — Program 2 / Question 12)

## 2. Original Question
Write a C program to add two matrices using two-dimensional arrays.

## 3. Aim
To write a C program that reads two matrices of the same dimensions into two-dimensional arrays, computes their element-wise sum, and displays the resulting matrix.

## 4. Theory
A **two-dimensional (2D) array** in C represents a table of rows and columns (`array[row][col]`). Matrix addition is defined only for two matrices $A$ and $B$ of identical dimensions ($r \times c$). Each element of the resulting matrix $S$ is calculated as:

$$S[i][j] = A[i][j] + B[i][j] \quad \text{for } 0 \le i < r,\ 0 \le j < c$$

## 5. Algorithm
1. Start the program.
2. Declare 2D arrays `matrixA[10][10]`, `matrixB[10][10]`, and `sum[10][10]`, along with `rows`, `cols`, `i`, and `j`.
3. Read `rows` and `cols` and validate that both lie in `1..10`.
4. Use nested `for` loops to read `rows * cols` elements into `matrixA` and `matrixB`.
5. Compute `sum[i][j] = matrixA[i][j] + matrixB[i][j]` for all `0 <= i < rows` and `0 <= j < cols`.
6. Print the `sum` matrix row by row.
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

/*
 * Lab 6 - Program 2 (Q.12)
 * Add two matrices using two-dimensional arrays.
 */
int main(void) {
    int matrixA[MAX_ROWS][MAX_COLS];
    int matrixB[MAX_ROWS][MAX_COLS];
    int sum[MAX_ROWS][MAX_COLS];
    int rows, cols;
    int i, j;

    printf("Enter number of rows (1 to %d): ", MAX_ROWS);
    if (scanf("%d", &rows) != 1 || rows < 1 || rows > MAX_ROWS) {
        printf("Invalid number of rows.\n");
        return 1;
    }

    printf("Enter number of columns (1 to %d): ", MAX_COLS);
    if (scanf("%d", &cols) != 1 || cols < 1 || cols > MAX_COLS) {
        printf("Invalid number of columns.\n");
        return 1;
    }

    printf("\nEnter elements of Matrix A (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("A[%d][%d]: ", i, j);
            if (scanf("%d", &matrixA[i][j]) != 1) {
                printf("Invalid input. Please enter integers only.\n");
                return 1;
            }
        }
    }

    printf("\nEnter elements of Matrix B (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("B[%d][%d]: ", i, j);
            if (scanf("%d", &matrixB[i][j]) != 1) {
                printf("Invalid input. Please enter integers only.\n");
                return 1;
            }
        }
    }

    /* Compute sum matrix */
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    printf("\nSum of Matrix A and Matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%5d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

## 7. Sample Input
```text
Enter number of rows (1 to 10): 2
Enter number of columns (1 to 10): 2

Enter elements of Matrix A (2 x 2):
A[0][0]: 1
A[0][1]: 2
A[1][0]: 3
A[1][1]: 4

Enter elements of Matrix B (2 x 2):
B[0][0]: 5
B[0][1]: 6
B[1][0]: 7
B[1][1]: 8
```

## 8. Sample Output
```text
Sum of Matrix A and Matrix B:
    6     8 
   10    12 
```

## 9. Explanation of the Program
- Row and column limits (`MAX_ROWS`, `MAX_COLS`) protect the static 2D arrays from out-of-bounds indexing.
- Using nested `for` loops (`i` for rows, `j` for columns) visits every element in row-major order, matching how C stores 2D arrays in memory.
- `%5d` right-aligns each output number in a 5-character column for clean tabular formatting.

## 10. Result
The program accurately reads two matrices of equal dimensions, computes their element-wise sum, and displays the resulting matrix.
