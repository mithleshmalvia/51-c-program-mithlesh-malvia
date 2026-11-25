# Lab 4 - Program 2

## 1. Experiment Number
**Experiment 8** (Lab 4 — Program 2 / Question 8)

## 2. Original Question
Write a C program to concatenate two strings and compare two strings using standard string library functions.

## 3. Aim
To write a C program that reads two strings, compares them using `strcmp()`, and joins them together using `strcat()`.

## 4. Theory
The `<string.h>` library provides:
- `strcmp(s1, s2)`: Compares `s1` and `s2` character by character using ASCII values. It returns:
  - `0` if both strings are identical,
  - a negative value (`< 0`) if `s1` comes before `s2` lexicographically,
  - a positive value (`> 0`) if `s1` comes after `s2` lexicographically.
- `strcat(dest, src)`: Appends `src` (and its terminating `'\0'`) to the end of `dest`, overwriting `dest`'s original `'\0'`. The `dest` buffer must have enough space for both strings plus `'\0'`.

## 5. Algorithm
1. Start the program.
2. Declare `str1[100]`, `str2[100]`, `combined[200]`, and `int cmpResult`.
3. Read `str1` and `str2` using `fgets()` and remove trailing newline characters with `strcspn()`.
4. Compare `str1` and `str2` using `cmpResult = strcmp(str1, str2)`.
5. Display whether the strings are equal, or which one is lexicographically smaller/greater.
6. Verify that `strlen(str1) + strlen(str2) < sizeof(combined)`.
7. Copy `str1` into `combined` via `strcpy()`, append `str2` via `strcat()`, and print `combined`.
8. Stop the program.

## 6. Source Code
```c
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

/*
 * Lab 4 - Program 2 (Q.8)
 * Concatenate two strings and compare two strings using
 * standard string library functions (strcat and strcmp).
 */
int main(void) {
    char str1[MAX_LEN];
    char str2[MAX_LEN];
    char combined[MAX_LEN * 2];
    int cmpResult;

    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL) {
        printf("Error reading first string.\n");
        return 1;
    }
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) {
        printf("Error reading second string.\n");
        return 1;
    }
    str2[strcspn(str2, "\n")] = '\0';

    /* Compare the two original strings using strcmp() */
    cmpResult = strcmp(str1, str2);
    printf("\nComparison Result:\n");
    if (cmpResult == 0) {
        printf("Both strings are equal.\n");
    } else if (cmpResult < 0) {
        printf("\"%s\" is lexicographically smaller than \"%s\".\n", str1, str2);
    } else {
        printf("\"%s\" is lexicographically greater than \"%s\".\n", str1, str2);
    }

    /* Concatenate str2 onto a copy of str1 using strcat() */
    if (strlen(str1) + strlen(str2) < sizeof(combined)) {
        strcpy(combined, str1);
        strcat(combined, str2);
        printf("\nConcatenated String: %s\n", combined);
    } else {
        printf("\nError: Combined string exceeds buffer capacity.\n");
        return 1;
    }

    return 0;
}
```

## 7. Sample Input
```text
Enter first string: Hello 
Enter second string: World
```
*(Input: `Hello ` followed by `World`)*

## 8. Sample Output
```text
Comparison Result:
"Hello " is lexicographically smaller than "World".

Concatenated String: Hello World
```

## 9. Explanation of the Program
- `strcmp(str1, str2)` is called before concatenation so the original strings are compared accurately.
- `combined` is sized `MAX_LEN * 2` so joining two strings of up to `99` characters each fits safely without overflowing memory.
- Checking `strlen(str1) + strlen(str2) < sizeof(combined)` ensures room for the terminating `'\0'`.

## 10. Result
The program accurately compares two strings using `strcmp()` and concatenates them safely using `strcat()`.
