# Lab 20: Palindrome and Armstrong Numbers

## Lab Number
**Lab 20** (Second Set — Experiments 19 & 20 / Overall Experiments 39 & 40)

## Aim of the Lab
To decompose integers digit-by-digit using `% 10` and `/ 10` to check for palindrome numbers and general $n$-digit Armstrong numbers.

## Concepts Covered
- Digit extraction and reversal (`digit = temp % 10; temp /= 10;`)
- Negative-number handling for palindrome and Armstrong checks
- Arbitrary-digit Armstrong calculation using integer exponentiation (avoiding `pow()` floating-point precision loss)

## Questions
1. **Q.19 ([Program 1](./Program1/)):** Write a C program to check whether a number is a palindrome or not.
2. **Q.20 ([Program 2](./Program2/)):** Write a C program to check given number is an Armstrong or not.

## Short Description of Programs
- **Program 1:** Reverses the digits of a non-negative integer using `long long` arithmetic and checks if it equals the original number.
- **Program 2:** Counts the number of digits $d$ in a non-negative integer, sums each digit raised to power $d$ using exact integer multiplication, and verifies Armstrong property for any digit count.

## Compile & Run
```powershell
gcc -Wall -Wextra -std=c11 Program1/main.c -o Program1/program.exe
.\Program1\program.exe

gcc -Wall -Wextra -std=c11 Program2/main.c -o Program2/program.exe
.\Program2\program.exe
```
