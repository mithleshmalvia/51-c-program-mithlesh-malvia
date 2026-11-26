# Lab 18: Fibonacci Series and Greatest Common Divisor (GCD)

## Lab Number
**Lab 18** (Second Set — Experiments 15 & 16 / Overall Experiments 35 & 36)

## Aim of the Lab
To generate iterative number sequences (Fibonacci series) and implement the Euclidean algorithm to compute GCD across positive, negative, and zero inputs.

## Concepts Covered
- Iterative sequence generation using sliding state variables (`first`, `second`, `next`)
- Euclidean algorithm for GCD (`gcd(a, b) = gcd(b, a % b)`)
- Handling negative inputs and `(0, 0)` edge cases

## Questions
1. **Q.15 ([Program 1](./Program1/)):** Write a C program to display Fibonacci series.
2. **Q.16 ([Program 2](./Program2/)):** Write a C program to find the GCD (Greatest Common Divisor) of two numbers.

## Short Description of Programs
- **Program 1:** Accepts the number of terms `N` (`1` to `93`) and prints the Fibonacci sequence starting from `0, 1`.
- **Program 2:** Computes the GCD of two integers using the Euclidean algorithm, supporting negative values and zero inputs.

## Compile & Run
```powershell
gcc -Wall -Wextra -std=c11 Program1/main.c -o Program1/program.exe
.\Program1\program.exe

gcc -Wall -Wextra -std=c11 Program2/main.c -o Program2/program.exe
.\Program2\program.exe
```
