# Lab 10 - Program 2

## 1. Experiment Number
**Experiment 20** (Lab 10 — Program 2 / Question 20)

## 2. Original Question
Write a C program to demonstrate the use of a union and display its members.

## 3. Aim
To demonstrate how a `union` allocates shared memory for its members and to assign and display each member safely, one at a time.

## 4. Theory
A **union** (`union`) is a user-defined data type similar to a `struct`, except **all members of a union share the same memory location**.
- The total size of a union is at least the size of its largest member (rounded up for alignment if needed). Here, `char strVal[20]` is 20 bytes, so `sizeof(union Data)` is `20` bytes (or aligned multiple).
- Because memory is shared, assigning a value to one member overwrites the bytes previously held by another member. Therefore, **only the most recently written member holds a valid value** and should be read safely one member at a time.

## 5. Algorithm
1. Start the program.
2. Define `union Data` with members `int intVal`, `float floatVal`, and `char strVal[20]`.
3. Declare `union Data data` and print `sizeof(data)`.
4. Assign `data.intVal = 42` and immediately display `data.intVal`.
5. Assign `data.floatVal = 98.6f` and immediately display `data.floatVal`.
6. Copy `"C Programming"` into `data.strVal` via `strcpy()` and immediately display `data.strVal`.
7. Stop the program.

## 6. Source Code
```c
#include <stdio.h>
#include <string.h>

/*
 * Union members share the exact same memory location.
 * Only ONE member should be stored and read at a time.
 */
union Data {
    int intVal;
    float floatVal;
    char strVal[20];
};

/*
 * Lab 10 - Program 2 (Q.20)
 * Demonstrate the use of a union and display its members safely,
 * one member at a time.
 */
int main(void) {
    union Data data;

    printf("Size of union Data: %zu bytes\n\n", sizeof(data));

    /* 1. Store and display integer member */
    data.intVal = 42;
    printf("After assigning data.intVal = 42:\n");
    printf("  data.intVal   = %d\n\n", data.intVal);

    /* 2. Store and display float member (overwrites previous shared memory) */
    data.floatVal = 98.6f;
    printf("After assigning data.floatVal = 98.6f:\n");
    printf("  data.floatVal = %.2f\n\n", data.floatVal);

    /* 3. Store and display string member (overwrites previous shared memory) */
    strcpy(data.strVal, "C Programming");
    printf("After assigning data.strVal = \"C Programming\":\n");
    printf("  data.strVal   = %s\n", data.strVal);

    return 0;
}
```

## 7. Sample Input
No user input is required for this program.

## 8. Sample Output
```text
Size of union Data: 20 bytes

After assigning data.intVal = 42:
  data.intVal   = 42

After assigning data.floatVal = 98.6f:
  data.floatVal = 98.60

After assigning data.strVal = "C Programming":
  data.strVal   = C Programming
```

## 9. Explanation of the Program
- Printing `sizeof(data)` highlights memory efficiency: `20` bytes total rather than `sizeof(int) + sizeof(float) + 20` bytes as a `struct` would require.
- Each member (`intVal`, `floatVal`, `strVal`) is written and immediately printed before moving to the next member, avoiding reading stale/corrupted bytes from inactive members.

## 10. Result
The program successfully demonstrates how union members share memory and safely displays each member one at a time.
