# Lab 16 - Program 1

## 1. Experiment Number
**Experiment 31** (Lab 16 — Program 1 / Set 2 — Q.11)

## 2. Original Question
Write a C program to check whether a character is an alphabet or not.

## 3. Aim
To write a C program that reads a single character from the user and determines whether it is an alphabetic letter (`A`–`Z` or `a`–`z`) or not.

## 4. Theory
The standard header `<ctype.h>` provides `isalpha(int c)`, which returns a non-zero (true) value if `c` is an uppercase (`'A'`–`'Z'`) or lowercase (`'a'`–`'z'`) alphabetic letter, and `0` otherwise (digits, punctuation, whitespace). Per the C standard, a `char` argument should be cast to `(unsigned char)` before calling `isalpha()` to avoid undefined behavior for negative signed `char` values.

## 5. Algorithm
1. Start the program.
2. Declare `char ch`.
3. Read a character from `stdin` using `scanf("%c", &ch)` and validate success.
4. Check `isalpha((unsigned char)ch)`.
5. If non-zero, print that `ch` is an alphabet; otherwise, print that `ch` is not an alphabet.
6. Stop the program.

## 6. Source Code
```c
#include <ctype.h>
#include <stdio.h>

/*
 * Lab 16 - Program 1 (Set 2 - Q.11 / Experiment 31)
 * Check whether a given character is an alphabet or not using <ctype.h>.
 */
int main(void) {
    char ch;

    printf("Enter a character: ");
    if (scanf("%c", &ch) != 1) {
        printf("Error reading character input.\n");
        return 1;
    }

    /* Cast to unsigned char before passing to isalpha() as required by standard C */
    if (isalpha((unsigned char)ch)) {
        printf("'%c' is an alphabet.\n", ch);
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}
```

## 7. Sample Input
**Test Case 1 (Alphabet):**
```text
Enter a character: G
```

**Test Case 2 (Digit / Non-Alphabet):**
```text
Enter a character: 7
```

## 8. Sample Output
**Test Case 1:**
```text
'G' is an alphabet.
```

**Test Case 2:**
```text
'7' is not an alphabet.
```

## 9. Explanation of the Program
- `scanf("%c", &ch)` captures any character entered by the user (letters, digits, symbols, or space).
- `isalpha((unsigned char)ch)` cleanly tests whether the character is alphabetic without relying on manual ASCII range assumptions.

## 10. Result
The program accurately identifies whether the input character is an alphabet or not using standard `<ctype.h>` handling.
