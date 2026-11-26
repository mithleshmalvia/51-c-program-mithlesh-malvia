# Lab 20 - Program 1

## 1. Experiment Number
**Experiment 39** (Lab 20 — Program 1 / Set 2 — Q.19)

## 2. Original Question
Write a C program to check whether a number is a palindrome or not.

## 3. Aim
To write a C program that checks whether a given integer reads the same forward and backward (palindrome), handling negative inputs appropriately.

## 4. Theory
A **palindrome number** remains identical when its decimal digits are reversed (e.g., `0`, `121`, `1331`). Negative numbers (such as `-121`) have a leading minus sign (`-121` reversed is `121-`), so they are not palindromes.

Using `long long` for `reversed` avoids 32-bit `int` overflow when reversing large non-palindrome integers near `INT_MAX`.

## 5. Algorithm
1. Start the program.
2. Declare `int number, temp` and `long long reversed = 0`.
3. Read `number` and validate `scanf("%d", &number) == 1`.
4. If `number < 0`, print that negative numbers are not palindromes and exit.
5. Set `temp = number`.
6. While `temp > 0`:
   - `reversed = (reversed * 10) + (temp % 10);`
   - `temp /= 10;`
7. If `(long long)number == reversed`, print that `number` is a palindrome; otherwise print that it is not.
8. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 20 - Program 1 (Set 2 - Q.19 / Experiment 39)
 * Check whether an integer is a palindrome number or not,
 * handling negative numbers appropriately.
 */
int main(void) {
    int number, temp;
    long long reversed = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (number < 0) {
        printf("%d is not a palindrome number (negative numbers are not palindromes).\n", number);
        return 0;
    }

    temp = number;
    while (temp > 0) {
        reversed = (reversed * 10) + (temp % 10);
        temp /= 10;
    }

    if ((long long)number == reversed) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}
```

## 7. Sample Input
**Test Case 1 (Palindrome):**
```text
Enter an integer: 12321
```

**Test Case 2 (Negative):**
```text
Enter an integer: -121
```

## 8. Sample Output
**Test Case 1:**
```text
12321 is a palindrome number.
```

**Test Case 2:**
```text
-121 is not a palindrome number (negative numbers are not palindromes).
```

## 9. Explanation of the Program
- When `number = 0`, the `while (temp > 0)` loop does not run, `reversed` remains `0`, and `0 == 0` correctly reports `0` as a palindrome.
- `% 10` extracts the rightmost digit and `/ 10` drops it on each iteration until all digits are reversed.

## 10. Result
The program accurately identifies palindrome numbers and handles `0` and negative inputs appropriately.
