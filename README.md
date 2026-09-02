*This project has been created as part of the 42 curriculum by wngamkri.*

# Libft - Your Very First C Library

## Description

The **Libft** project consists of creating a custom C standard library containing basic essential functions that will be reused in future 42 projects.

The goal is to deeply understand C fundamentals, memory management, string manipulation, and dynamic data structures such as singly linked lists.

---

## Instructions

### Compilation

The library is compiled using `make`. You can use the following commands:

* `make` or `make all`: Compiles the mandatory part and creates `libft.a`.
* `make clean`: Removes all compiled object (`.o`) files.
* `make fclean`: Removes object files and the generated `libft.a` library file.
* `make re`: Performs `fclean` and recompiles everything from scratch.

### Usage

To use this library in your own C project, include the header file:

```c
#include "libft.h"
```

Then compile your C code and link it with `libft.a`:

```bash
cc main.c -L. -lft -o my_program
```

---

## Library Overview

### Part 1 - C Standard Library Functions

Re-implementation of standard C library functions (`libc`):

| Category                    | Functions                                                                                                                  |
| --------------------------- | -------------------------------------------------------------------------------------------------------------------------- |
| **Character Checks**        | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`                                                       |
| **String Utilities**        | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` |
| **Memory Manipulation**     | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`                                               |
| **Conversion & Allocation** | `ft_atoi`, `ft_calloc`, `ft_strdup`                                                                                        |

### Part 2 - Additional Functions

Custom non-standard utility functions for strings and file descriptors:

* **String Manipulation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
* **File Descriptor Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3 - Linked List Utilities

Data structure functions for manipulating singly linked lists using `t_list`:

* `ft_lstnew`: Creates a new list node.
* `ft_lstadd_front`: Adds a node at the beginning of the list.
* `ft_lstsize`: Counts the number of nodes in the list.
* `ft_lstlast`: Returns the last node of the list.
* `ft_lstadd_back`: Adds a node at the end of the list.
* `ft_lstdelone`: Deletes and frees a single node.
* `ft_lstclear`: Deletes and frees an entire list from a given node.
* `ft_lstiter`: Applies a function to the content of every node in the list.
* `ft_lstmap`: Iterates through a list and creates a new list from function transformations.

---

## Resources

### References

* [C Standard Library Reference (cppreference.com)](https://en.cppreference.com/w/c)
* 42 Libft Subject Specification

### AI Usage & Assistance Transparency

AI (**Gemini**) was utilized during the development of this project for the following tasks:

* **Code Reviews & Debugging:** Identifying logic edge cases, potential memory leaks (e.g., in `ft_lstmap`), and ensuring strict adherence to the 42 Norm.
* **Concept Explanation:** Breaking down dynamic memory management, double pointers (`t_list **`), function pointers (`void (*del)(void *)`), and singly linked list traversal.
* **Scaffolding & Templates:** Assisting with code reviews, Makefile structure, and README documentation.
