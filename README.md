# Libft

![42 Logo](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTXfAZMOWHDQ3DKE63A9jWhIqQaKcKqUIXvzg&s)

Libft is a custom implementation of some key functions from the C standard library, built as part of the curriculum at [42 School](https://42.fr/). The goal of this project is to deepen our understanding of low-level programming, memory management, and code optimization.

---

## Features

- **Standard C Functions**: Replicates many standard library functions such as `strlen`, `strcpy`, `strcat`, and more.
- **Memory Management**: Includes functions like `malloc`, `calloc`, and custom implementations for memory manipulation (`memset`, `memcpy`, etc.).
- **String Manipulation**: Custom implementations for string operations (`strdup`, `strchr`, `strncat`, etc.).
- **Additional Utilities**: Includes useful utility functions not found in the standard library (e.g., `ft_split`, `ft_itoa`).

---

## Table of Contents

1. [Getting Started](#getting-started)
2. [Functions Overview](#functions-overview)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Project Structure](#project-structure)
6. [Contact](#contact)

---

## Getting Started

### Prerequisites

- A Unix-like operating system (Linux, macOS, etc.).
- A C compiler (e.g., `gcc`).

### Cloning the Repository

To clone the repository, run the following command:

```bash
git clone https://github.com/<your-username>/libft.git
cd libft
```

---

## Functions Overview

Here is a quick list of the main functions implemented in this project:

### Part 1: Libc Functions
- **String Functions**: `ft_strlen`, `ft_strcpy`, `ft_strcmp`, etc.
- **Memory Functions**: `ft_memset`, `ft_bzero`, `ft_memcpy`, etc.
- **Character Functions**: `ft_isalpha`, `ft_isdigit`, `ft_toupper`, etc.

### Part 2: Additional Functions
- **String Utilities**: `ft_substr`, `ft_strjoin`, `ft_split`, etc.
- **Number Conversions**: `ft_itoa`, `ft_atoi`.

### Bonus Functions
- **Linked List Functions**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstdelone`, etc.

---

## Installation

To build the library, simply run:

```bash
make
```

This will generate a `libft.a` file that can be linked to your projects.

### Cleaning Up

To clean up compiled files, use:

```bash
make clean
```

To remove everything including the library file:

```bash
make fclean
```

---

## Usage

To use the library in your project, include the `libft.h` header and link the library:

```c
#include "libft.h"

int main(void) {
    char *str = ft_strdup("Hello, Libft!");
    ft_putstr_fd(str, 1);
    free(str);
    return 0;
}
```

Compile and link with:

```bash
gcc main.c -L. -lft -o my_program
```

---

## Project Structure

```
.
├── includes      # Header files (e.g., libft.h)
├── src           # Source files
├── Makefile      # Makefile for building the library
├── README.md     # Project documentation
└── libft.a       # Compiled library (generated after `make`)
```

---

## Contact

If you have any questions or suggestions, feel free to reach me out.

---

Thank you for checking out my Libft project! 😊
