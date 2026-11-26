# Lab 11 - Program 2

## 1. Experiment Number
**Experiment 22** (Lab 11 — Program 2 / Set 2 — Q.2)

## 2. Original Question
Write a program that prints the ASCII values of the characters 'H' and 'f'.

## 3. Aim
To write a C program that stores the characters `'H'` and `'f'` in `char` variables and prints their corresponding ASCII integer codes.

## 4. Theory
In C, a `char` variable stores a character's numeric character code (under ASCII encoding: `'A'`–`'Z'` map to `65`–`90`, and `'a'`–`'z'` map to `97`–`122`).
- Printing a `char` with `%c` displays the character symbol.
- Printing the same `char` (cast to `int`) with `%d` displays its decimal ASCII value (`'H'` = `72`, `'f'` = `102`).

## 5. Algorithm
1. Start the program.
2. Declare two character variables: `char upperChar = 'H';` and `char lowerChar = 'f';`.
3. Print `upperChar` with `%c` and `(int)upperChar` with `%d`.
4. Print `lowerChar` with `%c` and `(int)lowerChar` with `%d`.
5. Stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 11 - Program 2 (Set 2 - Q.2 / Experiment 22)
 * Print the ASCII values of the characters 'H' and 'f' using character variables.
 */
int main(void) {
    char upperChar = 'H';
    char lowerChar = 'f';

    printf("Character '%c' has ASCII value: %d\n", upperChar, (int)upperChar);
    printf("Character '%c' has ASCII value: %d\n", lowerChar, (int)lowerChar);

    return 0;
}
```

## 7. Sample Input
No user input is required; `'H'` and `'f'` are assigned directly to character variables.

## 8. Sample Output
```text
Character 'H' has ASCII value: 72
Character 'f' has ASCII value: 102
```

## 9. Explanation of the Program
- `upperChar` stores `'H'` (ASCII code `72`), and `lowerChar` stores `'f'` (ASCII code `102`).
- Casting `(int)upperChar` and printing with `%d` explicitly shows the underlying numeric ASCII code alongside `%c` for the character itself.

## 10. Result
The program accurately displays the ASCII values of `'H'` (`72`) and `'f'` (`102`) using character variables.
