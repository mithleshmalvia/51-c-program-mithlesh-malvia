# Lab 3 - Program 2

## 1. Experiment Number
**Experiment 6** (Lab 3 — Program 2 / Question 6)

## 2. Original Question
Write a C program to find the largest and smallest elements in a one-dimensional array.

## 3. Aim
To write a C program that reads elements into a one-dimensional array and determines both the largest and smallest elements using a single pass.

## 4. Theory
A **one-dimensional array** stores a fixed-size sequential collection of elements of the same data type in contiguous memory locations. To find the maximum and minimum values, we initialize both `largest` and `smallest` with the first element (`arr[0]`) and compare every subsequent element (`arr[1]` to `arr[n - 1]`), updating `largest` or `smallest` whenever a larger or smaller value is encountered.

## 5. Algorithm
1. Start the program.
2. Declare an array `arr[100]`, size `n`, loop counter `i`, and variables `largest` and `smallest`.
3. Read `n` and validate that `1 <= n <= 100`.
4. Read `n` integers into `arr[0..n-1]`, validating each input.
5. Set `largest = arr[0]` and `smallest = arr[0]`.
6. Loop `i` from `1` to `n - 1`:
   - If `arr[i] > largest`, update `largest = arr[i]`.
   - If `arr[i] < smallest`, update `smallest = arr[i]`.
7. Display `largest` and `smallest`.
8. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

#define MAX_SIZE 100

/*
 * Lab 3 - Program 2 (Q.6)
 * Find the largest and smallest elements in a one-dimensional array.
 */
int main(void) {
    int arr[MAX_SIZE];
    int n, i;
    int largest, smallest;

    printf("Enter the number of elements (1 to %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_SIZE) {
        printf("Invalid array size. Enter an integer between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d integer(s):\n", n);
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    largest = arr[0];
    smallest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("\nLargest element : %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
```

## 7. Sample Input
```text
Enter the number of elements (1 to 100): 5
Enter 5 integer(s):
Element [0]: 12
Element [1]: -7
Element [2]: 45
Element [3]: 3
Element [4]: 19
```

## 8. Sample Output
```text
Largest element : 45
Smallest element: -7
```

## 9. Explanation of the Program
- `MAX_SIZE` bounds the array length to prevent out-of-bounds memory writes.
- Initializing `largest` and `smallest` to `arr[0]` instead of `0` ensures correct results even when all array elements are negative or all are positive.
- A single traversal (`i = 1` to `n - 1`) finds both extremes in $O(n)$ time.

## 10. Result
The program successfully reads elements into a 1D array and accurately finds both the largest and smallest elements.
