*This project has been created as part of the 42 curriculum by jacavalc.*

# Libft

## Description

**Libft** is the first library project of the 42 curriculum. Its objective is to recreate a selection of standard C library functions while developing a deeper understanding of memory management, pointers, strings, linked lists, and low-level programming.

Instead of relying on the standard C library, this project builds a personal library that can be reused in future 42 projects.

The library includes:

- Character classification and conversion functions
- String manipulation functions
- Memory management utilities
- Memory comparison and search functions
- Number conversion
- Dynamic memory allocation
- File descriptor output functions
- A complete singly linked list implementation

The project follows the 42 coding standard (Norminette) and is compiled into a static library named **libft.a**.

---

# Library Overview

The library is divided into three major sections.

## Part 1 - Reimplemented libc Functions

Functions that reproduce the behavior of the standard C library, including:

- Character checks (`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, ...)
- Character conversion (`ft_toupper`, `ft_tolower`)
- Memory manipulation (`ft_memset`, `ft_memcpy`, `ft_memmove`, ...)
- String handling (`ft_strlen`, `ft_strlcpy`, `ft_strdup`, ...)
- String searching and comparison
- Integer conversion (`ft_atoi`)
- Memory allocation (`ft_calloc`)

---

## Part 2 - Additional Functions

Functions that simplify common programming tasks, including:

- String extraction (`ft_substr`)
- String concatenation (`ft_strjoin`)
- String trimming (`ft_strtrim`)
- String splitting (`ft_split`)
- Integer to string conversion (`ft_itoa`)
- Functional string iteration (`ft_strmapi`, `ft_striteri`)
- Output functions for file descriptors

These functions provide reusable utilities that are frequently used in later 42 projects.

---

## Part 3 - Linked List Library

The project also implements a complete singly linked list API.

Available operations include:

- Creating new nodes
- Adding nodes to the front or back
- Finding the last node
- Counting list size
- Iterating through the list
- Mapping a function over a list
- Deleting nodes
- Clearing an entire list

This API allows dynamic data structures without depending on external libraries.

---

# Instructions

## Clone the repository

```bash
git clone <repository_url>
cd libft
```

## Compile

Build the library:

```bash
make
```

Remove object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Rebuild everything:

```bash
make re
```

---

# Project Structure

```
.
├── Makefile
├── libft.h
├── *.c
├── *.o
└── libft.a
```

---

# Technical Choices

This project was implemented using:

- C language
- GCC compiler
- Makefile automation
- Static library generation (`ar`)
- Dynamic memory allocation
- Pointer arithmetic
- Modular function design

The implementation follows the constraints imposed by the 42 curriculum, avoiding unnecessary dependencies and encouraging manual implementation of common library functions.

---

# Resources

Official documentation:

- https://man7.org/linux/man-pages/
- https://pubs.opengroup.org/onlinepubs/9699919799/
- https://en.cppreference.com/w/c
- https://linux.die.net/man/

Books:

- The C Programming Language – Brian W. Kernighan & Dennis M. Ritchie
- Expert C Programming – Peter van der Linden

Tutorials:

- Beej's Guide to C Programming
- GeeksforGeeks C Programming Reference

---

# AI Usage

Artificial Intelligence was used only as a learning support tool.

Specifically, AI assisted with:

- Clarifying C language concepts.
- Explaining pointer manipulation.
- Understanding memory-related functions.
- Reviewing documentation.
- Improving the project documentation (README).

All function implementations, debugging, testing, and final validation were completed by the project author.

---

# Author

**Login:** jacavalc

42 School