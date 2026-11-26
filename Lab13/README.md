# Lab 13: Sign Checking and Integer Division

## Lab Number
**Lab 13** (Second Set — Experiments 5 & 6 / Overall Experiments 25 & 26)

## Aim of the Lab
To classify numbers by sign using conditional statements and compute integer quotient and remainder safely while guarding against division by zero.

## Concepts Covered
- `if-else-if` sign classification (`> 0`, `< 0`, `== 0`)
- Integer division (`/`) and modulus (`%`) operators
- Division-by-zero validation

## Questions
1. **Q.5 ([Program 1](./Program1/)):** Write a program to check whether a number is positive or negative or zero.
2. **Q.6 ([Program 2](./Program2/)):** Write a C program to compute quotient and remainder.

## Short Description of Programs
- **Program 1:** Reads a number and determines whether it is positive, negative, or zero.
- **Program 2:** Reads two integers (dividend and divisor), prevents division by zero, and computes both quotient and remainder.

## Compile & Run
```powershell
gcc -Wall -Wextra -std=c11 Program1/main.c -o Program1/program.exe
.\Program1\program.exe

gcc -Wall -Wextra -std=c11 Program2/main.c -o Program2/program.exe
.\Program2\program.exe
```
