# Lab 16: Character Classification and Overflow-Safe Swapping

## Lab Number
**Lab 16** (Second Set — Experiments 11 & 12 / Overall Experiments 31 & 32)

## Aim of the Lab
To classify input characters using `<ctype.h>` and swap two integer values without using a third variable while avoiding arithmetic overflow risks.

## Concepts Covered
- Standard character classification using `isalpha()` (`<ctype.h>`)
- Bitwise XOR swap (`a ^= b; b ^= a; a ^= b;`)
- Avoiding integer overflow in arithmetic swaps (`a + b`)

## Questions
1. **Q.11 ([Program 1](./Program1/)):** Write a C program to check whether a character is an alphabet or not.
2. **Q.12 ([Program 2](./Program2/)):** Write a C program to swap two numbers without using third variable.

## Short Description of Programs
- **Program 1:** Reads a character and checks whether it is an uppercase/lowercase alphabet letter using `isalpha()`.
- **Program 2:** Swaps two integers without a third variable using bitwise XOR so large values cannot overflow.

## Compile & Run
```powershell
gcc -Wall -Wextra -std=c11 Program1/main.c -o Program1/program.exe
.\Program1\program.exe

gcc -Wall -Wextra -std=c11 Program2/main.c -o Program2/program.exe
.\Program2\program.exe
```
