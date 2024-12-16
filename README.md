# Unexpected Pointer Behavior in C

This repository demonstrates a potential error when working with pointers in C.  The `bug.c` file contains code that might appear correct but contains a subtle issue. The `bugSolution.c` file demonstrates a corrected and more robust approach.

## Bug Description

The `bug.c` file showcases a situation where pointer manipulation might not work as intuitively expected, particularly when dealing with memory allocation or data structures.

## Solution

The `bugSolution.c` file provides an improved version, highlighting techniques to mitigate this type of potential problem.

## How to run

1. Clone this repository.
2. Compile the `bug.c` and `bugSolution.c` files using a C compiler (like GCC):
   ```bash
   gcc bug.c -o bug
   gcc bugSolution.c -o bugSolution
   ```
3. Run the compiled executables:
   ```bash
   ./bug
   ./bugSolution
   ```