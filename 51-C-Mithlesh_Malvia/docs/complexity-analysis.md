# Time and Space Complexity Analysis

This document summarizes the **time complexity** and **space complexity** of all 20 practical programs implemented in `51-C-Mithlesh_Malvia/`.

---

## Summary Table

| Lab | Program | Q. No. | Problem | Time Complexity | Space Complexity | Notes |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **Lab 1** | Program 1 | Q.1 | Prime number check | $O(\sqrt{n})$ | $O(1)$ | Checks divisors up to `i <= number / i` with early `break`. |
| **Lab 1** | Program 2 | Q.2 | Student grade (`if-else-if`) | $O(1)$ | $O(1)$ | Fixed number of conditional comparisons (`<= 6` checks). |
| **Lab 2** | Program 1 | Q.3 | Switch-case calculator | $O(1)$ | $O(1)$ | Single `switch` dispatch and arithmetic operation. |
| **Lab 2** | Program 2 | Q.4 | Print 1–50 skipping multiples of 5 | $O(1)$ (fixed 50 steps) | $O(1)$ | Generalizes to $O(N)$ for upper bound $N = 50$. |
| **Lab 3** | Program 1 | Q.5 | Print 1–100, stop at 50 (`break`) | $O(1)$ (fixed 50 steps) | $O(1)$ | Terminates at iteration `50` regardless of bound `100`. |
| **Lab 3** | Program 2 | Q.6 | Largest & smallest in 1D array | $O(n)$ | $O(n)$ | Single traversal over `n` elements (`MAX_SIZE = 100`). |
| **Lab 4** | Program 1 | Q.7 | `strlen()` and `strcpy()` | $O(n)$ | $O(n)$ | `strlen` and `strcpy` each scan up to $n$ chars until `'\0'`. |
| **Lab 4** | Program 2 | Q.8 | `strcmp()` and `strcat()` | $O(n + m)$ | $O(n + m)$ | `n = strlen(str1)`, `m = strlen(str2)`; compares & joins strings. |
| **Lab 5** | Program 1 | Q.9 | Number Triangle (nested loops) | $O(1)$ (fixed $R=5$; $O(R^2)$ general) | $O(1)$ | Prints $1 + 2 + \dots + R = R(R+1)/2$ numbers. |
| **Lab 5** | Program 2 | Q.10 | Centered Number Pyramid (nested loops) | $O(1)$ (fixed $R=5$; $O(R^2)$ general) | $O(1)$ | Prints spaces plus $2i - 1$ numbers per row $i$. |
| **Lab 6** | Program 1 | Q.11 | Inverted Star Pyramid (nested loops) | $O(1)$ (fixed $R=5$; $O(R^2)$ general) | $O(1)$ | Prints spaces plus $2i - 1$ stars from $i=R$ down to $1$. |
| **Lab 6** | Program 2 | Q.12 | Matrix addition (2D arrays) | $O(r \times c)$ | $O(r \times c)$ | Visits each of the $r \times c$ cells once (`MAX_ROWS = 10`, `MAX_COLS = 10`). |
| **Lab 7** | Program 1 | Q.13 | Sum using function | $O(1)$ | $O(1)$ | Constant-time addition inside `calculateSum()`. |
| **Lab 7** | Program 2 | Q.14 | Swap: call by value vs reference | $O(1)$ | $O(1)$ | Fixed number of assignments and pointer dereferences. |
| **Lab 8** | Program 1 | Q.15 | Recursive factorial | $O(n)$ | $O(n)$ | `n` recursive calls; each adds one stack frame (`0 <= n <= 20`). |
| **Lab 8** | Program 2 | Q.16 | `exit()` demonstration | $O(1)$ | $O(1)$ | Constant-time validation and division. |
| **Lab 9** | Program 1 | Q.17 | Swap using pointers | $O(1)$ | $O(1)$ | Three assignments using `temp`, `*ptr1`, `*ptr2`. |
| **Lab 9** | Program 2 | Q.18 | Single `struct Student` | $O(1)$ | $O(1)$ | Fixed-size struct (`name[50]`, `rollNumber`, `marks`). |
| **Lab 10** | Program 1 | Q.19 | Array of 5 `Employee` structs | $O(1)$ (fixed $K=5$) | $O(1)$ (fixed $K=5$) | Generalizes to $O(K)$ time and space for $K$ employees. |
| **Lab 10** | Program 2 | Q.20 | `union Data` demonstration | $O(1)$ | $O(1)$ | Shared memory equal to largest member (`20` bytes for `strVal`). |

---

## Detailed Notes on Key Algorithms

### 1. Primality Testing (`Lab1/Program1`)
- **Naive approach:** Testing `2` to `n - 1` takes $O(n)$ time.
- **Implemented optimization:** Testing `i` from `2` while `i <= number / i` reduces worst-case iterations for prime numbers from $n - 2$ to $\lfloor \sqrt{n} \rfloor - 1$, giving **$O(\sqrt{n})$** time and **$O(1)$** auxiliary space.

### 2. Array & Matrix Operations (`Lab3/Program2`, `Lab6/Program2`)
- **1D Min/Max (`Q.6`):** Computes both `largest` and `smallest` in a single pass (`n - 1` iterations), avoiding a second pass or sorting ($O(n \log n)$).
- **2D Matrix Addition (`Q.12`):** Nested loops iterate over `rows` and `cols`, performing $r \times c$ additions in **$O(r \times c)$** time.

### 3. Recursive Factorial (`Lab8/Program1`)
- **Time:** Makes $n$ recursive calls (`n, n-1, ..., 1`), performing one multiplication per call: **$O(n)$**.
- **Space:** Unlike an iterative loop ($O(1)$ space), recursion keeps $n$ active stack frames in memory simultaneously until reaching the base case, resulting in **$O(n)$** call-stack space.

### 4. Struct vs. Union Memory Footprint (`Lab9/Program2`, `Lab10/Program1`, `Lab10/Program2`)
- **`struct` (`Q.18`, `Q.19`):** Allocates separate contiguous memory for every member (plus any compiler alignment padding).
- **`union` (`Q.20`):** Allocates only enough memory for its largest member (`char strVal[20]` -> `20` bytes), achieving $O(1)$ minimal memory usage when only one field is active at a time.
