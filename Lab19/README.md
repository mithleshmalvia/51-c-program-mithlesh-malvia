# Lab 19: Least Common Multiple (LCM) and Sum of Natural Numbers

## Lab Number
**Lab 19** (Second Set — Experiments 17 & 18 / Overall Experiments 37 & 38)

## Aim of the Lab
To compute the LCM of two integers using their GCD (handling zero inputs safely) and calculate the sum of the first `N` natural numbers.

## Concepts Covered
- Identity $\text{LCM}(a, b) = (|a| / \gcd(a, b)) \times |b|$
- Overflow-safe division before multiplication and zero handling (`LCM(0, x) = 0`)
- Iterative summation of natural numbers from `1` to `N`

## Questions
1. **Q.17 ([Program 1](./Program1/)):** Write a C program to find the LCM (Least Common Multiple) of two numbers.
2. **Q.18 ([Program 2](./Program2/)):** Write a C program to calculate sum of natural numbers.

## Short Description of Programs
- **Program 1:** Computes GCD via the Euclidean algorithm and derives LCM safely, returning `0` whenever either input is `0`.
- **Program 2:** Accepts a positive integer `N` and sums the natural numbers `1` through `N`.

## Compile & Run
```powershell
gcc -Wall -Wextra -std=c11 Program1/main.c -o Program1/program.exe
.\Program1\program.exe

gcc -Wall -Wextra -std=c11 Program2/main.c -o Program2/program.exe
.\Program2\program.exe
```
