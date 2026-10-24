# Core Data Structures: C vs. Python

A comparative implementation of foundational data structures demonstrating manual memory management in C alongside object-oriented design in Python. This repository contrasts pointer-based architecture and explicit memory allocation with Python's dynamic typing and class structures.

### Structures Implemented
*   **3D Array:** Demonstrates manual multidimensional memory allocation and nested pointer traversal in C (`array3d.c`) versus list comprehensions in Python (`array3d.py`).
*   **Linked List:** Features pointer-based node insertion and memory cleanup in C (`linked_list.c`) versus object reference chaining in Python (`linked_list.py`).
*   **Stack:** Implements a capacity-limited array stack with manual index tracking in C (`stack.c`) versus dynamic list operations in Python (`stack.py`).

### Tech Stack
*   **Languages:** C, Python 3
*   **Environment:** Linux (Ubuntu / WSL 2), GCC compiler

### How to Run

**C Implementations**
Compile using GCC, then execute the output binary:
> gcc linked_list.c -o linked_list
> ./linked_list

**Python Implementations**
Execute directly using the Python interpreter:
> python3 linked_list.py
