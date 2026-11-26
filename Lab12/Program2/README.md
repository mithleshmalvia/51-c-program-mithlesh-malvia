# Lab 12 - Program 2

## 1. Experiment Number
**Experiment 24** (Lab 12 — Program 2 / Set 2 — Q.4)

## 2. Original Question
Write a C program to find the size of int, float, double and char.

## 3. Aim
To determine and display the storage size (in bytes) of the fundamental C data types `int`, `float`, `double`, and `char` using the `sizeof` operator.

## 4. Theory
`sizeof` is a compile-time unary operator in C that returns the size of a data type or expression in bytes as an unsigned integer of type `size_t`.
- By the C standard, `sizeof(char)` is always `1` byte.
- Sizes of `int`, `float`, and `double` depend on the compiler and architecture (typically `4`, `4`, and `8` bytes respectively on modern 64-bit desktop systems).
- `%zu` is the standard C99/C11 `printf` format specifier for `size_t`.

## 5. Algorithm
1. Start the program.
2. Evaluate `sizeof(int)`, `sizeof(float)`, `sizeof(double)`, and `sizeof(char)`.
3. Print each size in bytes using `%zu`.
4. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 12 - Program 2 (Set 2 - Q.4 / Experiment 24)
 * Display the memory size (in bytes) of int, float, double, and char
 * using the sizeof operator.
 */
int main(void) {
    printf("Size of primitive data types on this system:\n");
    printf("Size of int    : %zu byte(s)\n", sizeof(int));
    printf("Size of float  : %zu byte(s)\n", sizeof(float));
    printf("Size of double : %zu byte(s)\n", sizeof(double));
    printf("Size of char   : %zu byte(s)\n", sizeof(char));

    return 0;
}
```

## 7. Sample Input
No user input is required for this program.

## 8. Sample Output
*(On a typical 64-bit Windows/Linux system)*
```text
Size of primitive data types on this system:
Size of int    : 4 byte(s)
Size of float  : 4 byte(s)
Size of double : 8 byte(s)
Size of char   : 1 byte(s)
```

## 9. Explanation of the Program
- `sizeof(type)` queries the compiler for the exact byte footprint of each primitive type on the target platform.
- Using `%zu` matches `size_t` portably across 32-bit and 64-bit environments without format-specifier warnings.

## 10. Result
The program successfully reports the sizes of `int`, `float`, `double`, and `char` using the `sizeof` operator.
