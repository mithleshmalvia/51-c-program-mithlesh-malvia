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
