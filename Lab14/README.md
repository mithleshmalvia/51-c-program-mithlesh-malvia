# Lab 14: Ternary Operator and Finding the Largest Number

## Lab Number
**Lab 14** (Second Set — Experiments 7 & 8 / Overall Experiments 27 & 28)

## Aim of the Lab
To apply the conditional (ternary) operator for concise decision-making and compare three numbers reliably, including equal-value edge cases.

## Concepts Covered
- Conditional (ternary) operator (`condition ? expr1 : expr2`)
- Modulus parity test (`number % 2 == 0`)
- Multi-way comparisons handling ties (`>=`) and all-equal numbers

## Questions
1. **Q.7 ([Program 1](./Program1/)):** Write a C program to check whether a number is even or odd using ternary operator.
2. **Q.8 ([Program 2](./Program2/)):** Write a C program to find the largest number among three numbers.

## Short Description of Programs
- **Program 1:** Checks whether an entered integer is even or odd using the `? :` ternary operator.
- **Program 2:** Finds the largest among three numbers and handles tied or all-equal inputs properly.

## Compile & Run
```powershell
gcc -Wall -Wextra -std=c11 Program1/main.c -o Program1/program.exe
.\Program1\program.exe

gcc -Wall -Wextra -std=c11 Program2/main.c -o Program2/program.exe
.\Program2\program.exe
```
