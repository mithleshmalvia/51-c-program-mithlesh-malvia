# Lab 18 - Program 1

## 1. Experiment Number
**Experiment 35** (Lab 18 — Program 1 / Set 2 — Q.15)

## 2. Original Question
Write a C program to display Fibonacci series.

## 3. Aim
To write a C program that accepts the number of terms from the user and displays the Fibonacci series accurately.

## 4. Theory
The **Fibonacci series** starts with `0` and `1`, and every subsequent term equals the sum of the two preceding terms:

$$F_0 = 0,\quad F_1 = 1,\quad F_n = F_{n-1} + F_{n-2} \text{ for } n \ge 2$$

The first 10 terms are `0, 1, 1, 2, 3, 5, 8, 13, 21, 34`. Because $F_{93}$ (`12200160415121876738`) is the largest term that fits in an unsigned 64-bit integer (`unsigned long long`), valid term counts are bounded to `1..93`.

## 5. Algorithm
1. Start the program.
2. Declare `int terms, i` and `unsigned long long first = 0, second = 1, next`.
3. Read `terms` and validate `1 <= terms <= 93`.
4. Loop `i` from `1` to `terms`:
   - Print `first`.
   - If `i < terms`, print `" "`, compute `next = first + second`, set `first = second`, and `second = next`.
5. Print a newline and stop the program.

## 6. Source Code
```c
#include <stdio.h>

/*
 * Lab 18 - Program 1 (Set 2 - Q.15 / Experiment 35)
 * Accept the number of terms and display the Fibonacci series.
 */
int main(void) {
    int terms, i;
    unsigned long long first = 0, second = 1, next;

    printf("Enter the number of terms (1 to 93): ");
    if (scanf("%d", &terms) != 1 || terms < 1 || terms > 93) {
        printf("Invalid input. Please enter an integer between 1 and 93.\n");
        return 1;
    }

    printf("Fibonacci Series (%d terms):\n", terms);
    for (i = 1; i <= terms; i++) {
        printf("%llu", first);
        if (i < terms) {
            printf(" ");
            /* Compute next term only while more terms remain */
            next = first + second;
            first = second;
            second = next;
        }
    }
    printf("\n");

    return 0;
}
```

## 7. Sample Input
**Test Case 1:**
```text
Enter the number of terms (1 to 93): 8
```

**Test Case 2 (Single Term):**
```text
Enter the number of terms (1 to 93): 1
```

## 8. Sample Output
**Test Case 1:**
```text
Fibonacci Series (8 terms):
0 1 1 2 3 5 8 13
```

**Test Case 2:**
```text
Fibonacci Series (1 terms):
0
```

## 9. Explanation of the Program
- `first` holds the current term to print (`0`, then `1`, then `1`, `2`, `3`, ...).
- Updating `next = first + second` inside `if (i < terms)` prints spaces cleanly between terms and avoids an unnecessary final addition after the last term.

## 10. Result
The program accepts the desired number of terms and displays the Fibonacci series accurately for valid counts up to `93`.
