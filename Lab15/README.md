# Lab 15: Temperature Conversion and Rectangle Geometry

## Lab Number
**Lab 15** (Second Set — Experiments 9 & 10 / Overall Experiments 29 & 30)

## Aim of the Lab
To apply standard arithmetic formulas in C while avoiding integer-division pitfalls and validating geometric dimensions.

## Concepts Covered
- Floating-point temperature conversion formula: $\text{Celsius} = (\text{Fahrenheit} - 32) \times 5 / 9$
- Geometry formulas for rectangle area and perimeter
- Validation of positive rectangle dimensions

## Questions
1. **Q.9 ([Program 1](./Program1/)):** Write a C program to calculate Fahrenheit to Celsius.
2. **Q.10 ([Program 2](./Program2/)):** Write a C program to calculate area and perimeter of rectangle.

## Short Description of Programs
- **Program 1:** Converts a temperature in degrees Fahrenheit to degrees Celsius using floating-point arithmetic.
- **Program 2:** Accepts length and breadth of a rectangle, validates positive values, and computes both area and perimeter.

## Compile & Run
```powershell
gcc -Wall -Wextra -std=c11 Program1/main.c -o Program1/program.exe
.\Program1\program.exe

gcc -Wall -Wextra -std=c11 Program2/main.c -o Program2/program.exe
.\Program2\program.exe
```
