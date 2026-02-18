# C Data Structures & Algorithms

A clean, modular implementation of fundamental Data Structures and Algorithms in C.

This project is structured to follow professional C project conventions using:
- `include/` for header files
- `src/` for implementation files
- separate compilation
- generic data structures (using `void *`)

---

## 🚀 Currently Implemented

### Linear Structures
- Linked List (Doubly Linked)
  - Initialization
  - Dynamic memory management
  - Generic item storage (`void *`)

---

## 🛠 Compilation

You can compile manually using:

```bash
gcc main.c src/linear/*.c -Iinclude -o app  
```

Or use the provided script:
```bash
./compile.sh
```

Then run
```bash
./app
```

