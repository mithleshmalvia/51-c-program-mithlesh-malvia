# Lab 4 - Program 1

## 1. Experiment Number
**Experiment 7** (Lab 4 — Program 1 / Question 7)

## 2. Original Question
Write a C program to find the length of a string and copy one string into another using standard string functions.

## 3. Aim
To write a C program that reads a string from the user, computes its length using `strlen()`, and copies it into another character array using `strcpy()`.

## 4. Theory
In C, strings are null-terminated character arrays (`'\0'` marks the end of the string). The `<string.h>` header provides standard library functions for string processing:
- `strlen(str)`: Returns the number of characters in `str` excluding the terminating null character `'\0'` (return type `size_t`).
- `strcpy(dest, src)`: Copies all characters from `src` (including `'\0'`) into `dest`. The destination array must be large enough to hold the copied string.

For safe input that includes spaces, `fgets()` is used instead of `scanf("%s", ...)` or the deprecated `gets()`.

## 5. Algorithm
1. Start the program.
2. Declare two character arrays `source[100]` and `destination[100]`, and `size_t length`.
3. Read a line of text into `source` using `fgets()`, checking for input failure.
4. Remove any trailing newline `'\n'` from `source` using `strcspn()`.
5. Calculate `length = strlen(source)`.
6. Copy `source` into `destination` using `strcpy(destination, source)`.
7. Print `source`, `length`, and `destination`.
8. Stop the program.

## 6. Source Code
```c
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

/*
 * Lab 4 - Program 1 (Q.7)
 * Find the length of a string and copy one string into another
 * using standard string functions (strlen and strcpy).
 */
int main(void) {
    char source[MAX_LEN];
    char destination[MAX_LEN];
    size_t length;

    printf("Enter a string: ");
    if (fgets(source, sizeof(source), stdin) == NULL) {
        printf("Error reading input string.\n");
        return 1;
    }

    /* Remove trailing newline character added by fgets, if present */
    source[strcspn(source, "\n")] = '\0';

    /* Find string length using strlen() */
    length = strlen(source);

    /* Copy source string into destination using strcpy() */
    strcpy(destination, source);

    printf("\nSource string      : %s\n", source);
    printf("Length of string   : %zu\n", length);
    printf("Copied string      : %s\n", destination);

    return 0;
}
```

## 7. Sample Input
```text
Enter a string: Hello C Programming
```

## 8. Sample Output
```text
Source string      : Hello C Programming
Length of string   : 19
Copied string      : Hello C Programming
```

## 9. Explanation of the Program
- `fgets(source, sizeof(source), stdin)` safely reads spaces and prevents buffer overflow by limiting characters read to `MAX_LEN - 1`.
- `source[strcspn(source, "\n")] = '\0'` strips the newline character captured by `fgets()` so `strlen()` measures only the typed characters.
- `strlen(source)` returns `size_t`, printed using the standard `%zu` format specifier.
- `strcpy(destination, source)` duplicates the string into `destination`, which has the same `MAX_LEN` capacity.

## 10. Result
The program successfully determines the length of an input string using `strlen()` and copies it into another character array using `strcpy()`.
