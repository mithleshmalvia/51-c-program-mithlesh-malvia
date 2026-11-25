# Final Practical Assignment Report

## 1. Project Introduction
This repository (`51-C-Mithlesh_Malvia`) contains a structured collection of 20 C programming practical assignments organized into 10 laboratory modules (`Lab1` through `Lab10`). Every experiment includes clean, beginner-friendly standard C source code (`main.c`) and a complete 10-section practical record (`README.md`) covering theory, step-by-step algorithms, sample inputs/outputs, and code explanations.

---

## 2. Objectives
- Build strong fluency in standard C syntax, control structures, arrays, strings, functions, recursion, pointers, structures, and unions.
- Follow modern, portable C practices (ISO C99/C11) without legacy Turbo C extensions (`clrscr()`, `getch()`, or `gets()`).
- Enforce defensive programming habits: checking `scanf()`/`fgets()` return values, validating array/matrix bounds, guarding against division by zero, and preventing integer/buffer overflows.
- Document every experiment with clear algorithms, complexity analysis, and logic/memory diagrams.

---

## 3. Implementation Summary

### Completed Experiments (All 20 of 20 Programs)

| Lab | Topics Covered | Experiments Completed |
| :--- | :--- | :--- |
| **Lab 1** | Conditional logic & divisibility loops | Q.1 (Prime Check), Q.2 (Student Grade via `if-else-if`) |
| **Lab 2** | Multi-way branching & `continue` | Q.3 (`switch-case` Calculator), Q.4 (Skip Multiples of 5) |
| **Lab 3** | Early loop exit (`break`) & 1D arrays | Q.5 (Stop at 50 with `break`), Q.6 (Largest & Smallest in Array) |
| **Lab 4** | Standard string library (`<string.h>`) | Q.7 (`strlen` & `strcpy`), Q.8 (`strcat` & `strcmp`) |
| **Lab 5** | Nested loop number patterns | Q.9 (Number Triangle), Q.10 (Centered Number Pyramid) |
| **Lab 6** | Star patterns & 2D arrays | Q.11 (Inverted Star Pyramid), Q.12 (Matrix Addition) |
| **Lab 7** | Modular functions & parameter passing | Q.13 (Function with Args & Return), Q.14 (Call by Value vs Reference) |
| **Lab 8** | Recursion & process termination | Q.15 (Recursive Factorial), Q.16 (`exit()` Demonstration) |
| **Lab 9** | Pointers & structures | Q.17 (Pointer Swap), Q.18 (`struct Student`) |
| **Lab 10** | Array of structures & unions | Q.19 (5 `struct Employee` Filter), Q.20 (`union Data` Shared Memory) |

### Documented Design Assumptions
- **Q.2 (Grading Scale):** Standard 100-point scale assumed and documented (`90–100: A`, `80–89: B`, `70–79: C`, `60–69: D`, `50–59: E`, `0–49: F`).
- **Q.14 (Call by Reference in C):** Documented that C passes all arguments by value and achieves reference-like behaviour by passing memory addresses via pointers.
- **Q.19 (Employee Filter Condition):** Because no condition was specified in the question, the program documents and applies `salary > 50000.00` as the selection criterion.
- **Q.20 (Union Access):** Because union members share memory, members are written and displayed safely one at a time.

---

## 4. Pending Items

### Pending Local Compilation Verification
- No C compiler (`gcc`, `clang`, or MSVC `cl.exe`) is currently installed in the local environment.
- As a result, **compilation and runtime execution verification are pending** until a C compiler (such as MinGW-w64 / GCC) is installed. Once GCC is available, each program can be compiled with:
  ```powershell
  gcc -Wall -Wextra -std=c11 main.c -o program.exe
  ```

---

## 5. Conclusion
All 10 Lab directories, all 20 Program folders (complete C source code and 10-section practical records), lab summaries, complexity analysis, logic/memory diagrams, and main project documentation have been organized cleanly while preserving all pre-existing repository files (`README.md` and `Programs/`). Once a C compiler is installed, all 20 programs can be compiled and verified locally.
