# Lab 11: Console Input/Output and ASCII Character Values

## Lab Number
**Lab 11** (Second Set — Experiments 1 & 2 / Overall Experiments 21 & 22)

## Aim of the Lab
To practice reading numeric input from the user console using `scanf()`, performing basic addition, and inspecting the integer ASCII representation of character variables in C.

## Concepts Covered
- Console input and formatted output (`scanf()`, `printf()`)
- Input validation for numeric values
- `char` data type and ASCII encoding in C

## Questions
1. **Q.1 ([Program 1](./Program1/)):** Write a program to add two numbers that accept numbers from the user console.
2. **Q.2 ([Program 2](./Program2/)):** Write a program that prints the ASCII values of the characters 'H' and 'f'.

## Short Description of Programs
- **Program 1:** Accepts two numbers from the user console, validates both inputs, computes their sum, and displays the formatted result.
- **Program 2:** Stores `'H'` and `'f'` in character variables and prints their corresponding decimal ASCII values (`72` and `102`).

## Compile & Run
```powershell
gcc -Wall -Wextra -std=c11 Program1/main.c -o Program1/program.exe
.\Program1\program.exe

gcc -Wall -Wextra -std=c11 Program2/main.c -o Program2/program.exe
.\Program2\program.exe
```
