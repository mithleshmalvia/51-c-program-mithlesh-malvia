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
