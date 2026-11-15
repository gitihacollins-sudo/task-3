# C Programming Assignments

This folder contains separate programs for questions 4–7. Each C file has its
own `main` function, so compile and run one program at a time.

## Programs

| Question | File | Description |
| --- | --- | --- |
| 4a | [q4a_recursive_sum.c](q4a_recursive_sum.c) | Recursively sums the first N natural numbers. |
| 4b | [q4b_recursive_factorial.c](q4b_recursive_factorial.c) | Recursively calculates a number's factorial. |
| 4c | [q4c_recursive_fibonacci_term.c](q4c_recursive_fibonacci_term.c) | Finds a Fibonacci term using recursion and memoization. Positions start at 0. |
| 4d | [q4d_recursive_fibonacci_series.c](q4d_recursive_fibonacci_series.c) | Recursively prints the requested number of Fibonacci terms. |
| 5 | [q5_queue.c](q5_queue.c) | Implements a circular queue with enqueue, dequeue, and display operations. |
| 6 | [q6_sparse_matrix.c](q6_sparse_matrix.c) | Represents a matrix in triplet form using arrays. |
| 7 | [q7_deque.c](q7_deque.c) | Implements front/rear insertion and deletion in a deque. |

## Requirements

- GCC and G++ (installed under `C:\msys64\ucrt64\bin`)
- Python 3 (installed under `C:\Users\HP\AppData\Local\Programs\Python\Python313`)

Python is not required by the C programs; it is available in this workspace for
Python files.

## Build and run

From the VS Code task picker (**Terminal → Run Task**), choose:

- **C: build active file** or **C: run active file**
- **C++: build active file** or **C++: run active file**
- **Python: run active file**

The C build task is also the default build task and can be run with
**Ctrl+Shift+B**. The C and C++ tasks build the active source file into an
executable beside it. Each assignment file has its own interactive prompts.

To compile and run a C program manually in PowerShell:

```powershell
gcc -std=c11 -Wall -Wextra q4a_recursive_sum.c -o q4a_recursive_sum.exe
.\q4a_recursive_sum.exe
```

Replace `q4a_recursive_sum.c` with the source file you want to run.

## Input limits

- Recursive sum: N from 0 to 10,000.
- Factorial: 0 to 20.
- Fibonacci term: position 0 to 93.
- Fibonacci series: 1 to 94 terms.
- Queue and deque: capacity is 5.
- Sparse matrix: up to 10 rows and 10 columns.
