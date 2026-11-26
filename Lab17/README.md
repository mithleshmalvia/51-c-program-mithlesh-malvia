# Lab 17: Swapping with Temporary Variable and Iterative Factorial

## Lab Number
**Lab 17** (Second Set — Experiments 13 & 14 / Overall Experiments 33 & 34)

## Aim of the Lab
To swap two numbers cleanly using a temporary third variable and compute factorials iteratively while handling zero, negative, and overflow cases.

## Concepts Covered
- Temporary-variable swapping (`temp = a; a = b; b = temp;`)
- Iterative `for` loop factorial computation
- Handling `0! = 1`, negative-number rejection, and 64-bit integer overflow guard (`n > 20`)

## Questions
1. **Q.13 ([Program 1](./Program1/)):** Write a C program to swap two numbers with using third variable.
2. **Q.14 ([Program 2](./Program2/)):** Write a C program to find factorial of given number.

## Short Description of Programs
- **Program 1:** Exchanges two numbers entered by the user using a temporary variable `temp` and displays before/after values.
- **Program 2:** Computes `n!` iteratively using a loop, returning `1` for `0!`, rejecting negative inputs, and guarding against 64-bit overflow above `20`.

## Compile & Run
```powershell
gcc -Wall -Wextra -std=c11 Program1/main.c -o Program1/program.exe
.\Program1\program.exe

gcc -Wall -Wextra -std=c11 Program2/main.c -o Program2/program.exe
.\Program2\program.exe
```
