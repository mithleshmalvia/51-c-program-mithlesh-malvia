# Lab 12: User Record Input and `sizeof` Operator

## Lab Number
**Lab 12** (Second Set — Experiments 3 & 4 / Overall Experiments 23 & 24)

## Aim of the Lab
To read and validate mixed-type user details (salary and age) and inspect memory sizes of primitive C data types using the `sizeof` operator.

## Concepts Covered
- Reading `double` and `int` inputs with validation
- Range checks for realistic age and non-negative salary
- Compile-time `sizeof` operator and `%zu` format specifier

## Questions
1. **Q.3 ([Program 1](./Program1/)):** Write a C program that accepts the salary and age from the user and displays the same on the screen as output.
2. **Q.4 ([Program 2](./Program2/)):** Write a C program to find the size of int, float, double and char.

## Short Description of Programs
- **Program 1:** Accepts salary and age from the user, validates non-negative salary and positive age, and displays both cleanly.
- **Program 2:** Uses the `sizeof` operator to display the memory size (in bytes) of `int`, `float`, `double`, and `char`.

## Compile & Run
```powershell
gcc -Wall -Wextra -std=c11 Program1/main.c -o Program1/program.exe
.\Program1\program.exe

gcc -Wall -Wextra -std=c11 Program2/main.c -o Program2/program.exe
.\Program2\program.exe
```
