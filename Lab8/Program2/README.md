# Lab 8 - Program 2

## 1. Experiment Number
**Experiment 16** (Lab 8 — Program 2 / Question 16)

## 2. Original Question
Write a C program to demonstrate the use of the exit() function with a suitable condition.

## 3. Aim
To demonstrate how the standard library function `exit()` from `<stdlib.h>` immediately terminates program execution from any function when a critical condition (such as division by zero or invalid input) occurs.

## 4. Theory
The `exit(int status)` function (declared in `<stdlib.h>`) immediately terminates the entire running program regardless of how deeply nested the current function call is, flushes open output buffers, and returns `status` to the operating system:
- `EXIT_SUCCESS` (`0`): Indicates normal, successful completion.
- `EXIT_FAILURE` (non-zero, typically `1`): Indicates abnormal termination or an error condition.

Unlike `return`, which exits only the current function, `exit()` terminates the whole process immediately.

## 5. Algorithm
1. Start the program.
2. Prompt for `dividend` and `divisor`, calling `exit(EXIT_FAILURE)` if `scanf()` fails.
3. Call `validateDivisor(divisor)`:
   - If `divisor == 0.0`, print an error message and invoke `exit(EXIT_FAILURE)` to terminate immediately.
4. If `validateDivisor()` does not terminate the program, compute `quotient = dividend / divisor` and print the result.
5. Stop the program normally with `return 0`.

## 6. Source Code
```c
#include <stdio.h>
#include <stdlib.h>

void validateDivisor(double divisor);

/*
 * Lab 8 - Program 2 (Q.16)
 * Demonstrate the use of the exit() function with a suitable condition
 * (terminating immediately if a user enters zero or non-numeric divisor).
 */
int main(void) {
    double dividend, divisor, quotient;

    printf("Enter dividend: ");
    if (scanf("%lf", &dividend) != 1) {
        printf("Invalid input for dividend. Exiting program.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter divisor (must be non-zero): ");
    if (scanf("%lf", &divisor) != 1) {
        printf("Invalid input for divisor. Exiting program.\n");
        exit(EXIT_FAILURE);
    }

    /* Helper calls exit() directly if divisor == 0 */
    validateDivisor(divisor);

    /* This code only executes if exit() was NOT called */
    quotient = dividend / divisor;
    printf("%.2lf / %.2lf = %.2lf\n", dividend, divisor, quotient);
    printf("Program completed normally.\n");

    return 0;
}

void validateDivisor(double divisor) {
    if (divisor == 0.0) {
        printf("Critical Error: Divisor cannot be zero. Terminating immediately using exit().\n");
        exit(EXIT_FAILURE);
    }
}
```

## 7. Sample Input
**Test Case 1 (Triggering `exit()`):**
```text
Enter dividend: 50
Enter divisor (must be non-zero): 0
```

**Test Case 2 (Normal Execution):**
```text
Enter dividend: 50
Enter divisor (must be non-zero): 4
```

## 8. Sample Output
**Test Case 1:**
```text
Critical Error: Divisor cannot be zero. Terminating immediately using exit().
```

**Test Case 2:**
```text
50.00 / 4.00 = 12.50
Program completed normally.
```

## 9. Explanation of the Program
- `validateDivisor()` is a `void` helper function called from `main()`. When `divisor == 0.0`, calling `exit(EXIT_FAILURE)` inside `validateDivisor()` terminates the entire process immediately—control never returns to `main()`, so the division and `"Program completed normally."` lines do not execute.
- When `divisor` is non-zero, `validateDivisor()` returns normally and the quotient is computed and printed.

## 10. Result
The program successfully demonstrates immediate process termination using `exit()` from `<stdlib.h>` when an invalid division-by-zero condition is encountered.
