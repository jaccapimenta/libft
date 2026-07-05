# Libft

*This project has been created as part of the 42 curriculum by jacavalc.*  
*Este projeto foi criado como parte do currículo da 42 por jacavalc.*

### **Description**:
### **Descrição**:

The Libft project consists of creating a custom C library that reimplements several general-purpose functions from the C standard library, also known as libc, along with additional utility functions.

O projeto Libft consiste na criação de uma biblioteca personalizada em C que reimplementa várias funções de uso geral da biblioteca padrão da linguagem C, também conhecida como libc, além de funções utilitárias adicionais.

Working in C without access to common standard functions can be limiting. The main goal of this project is to understand how these fundamental functions work internally by rebuilding them from scratch. Through this process, the project reinforces important concepts such as memory allocation, pointer manipulation, string handling, and linked list management.

Trabalhar em C sem acesso às funções padrão mais comuns pode ser limitante. O principal objetivo deste projeto é entender como essas funções fundamentais funcionam internamente, reconstruindo-as do zero. Durante esse processo, o projeto reforça conceitos importantes como alocação de memória, manipulação de ponteiros, tratamento de strings e gerenciamento de listas encadeadas.

The final result is a reusable static library that can be used in future 42 projects.

O resultado final é uma biblioteca estática reutilizável que pode ser usada em futuros projetos da 42.

## Library Description

The final output of this project is a static library file named `libft.a`.

The functions are divided into three main parts:

### 1. Libc Functions

Reimplementation of standard libc functions, following their expected behavior and using the `ft_` prefix.

**Character classification and conversion:**

`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

**String manipulation:**

`ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`

**Memory manipulation:**

`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`

**Conversion and allocation:**

`ft_atoi`, `ft_calloc`, `ft_strdup`

### 2. Additional Functions

Additional functions created to expand the basic capabilities of the standard library, mainly focused on string manipulation and file descriptor output.

**String creation and manipulation:**

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`

**Function application:**

`ft_strmapi`, `ft_striteri`

**File descriptor output:**

`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Linked List Functions

Functions used to create, traverse, modify, and clear linked lists using the `t_list` structure.

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

### **Instructions**:
### **Instruções**:

### Technical Considerations

- Global variables are not allowed.
- The code follows the 42 Norm.
- Source files are compiled with `cc`.
- The mandatory compilation flags are:

```bash
-Wall -Wextra -Werror
```

### Compilation

Compile the library:

```bash
make
```

Remove object files:

```bash
make clean
```

Remove object files and the static library:

```bash
make fclean
```

Recompile the full project:

```bash
make re
```

### Usage

To use `libft.a` in another C project, include the header file:

```c
#include "libft.h"
```

Then compile your program linking the library:

```bash
cc main.c -L. -lft -o my_program
```

### **Resources**:
### **Recursos**:

- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [Linked Lists in C - GeeksforGeeks](https://www.geeksforgeeks.org/linked-list-data-structure/)
- 42 Libft project subject