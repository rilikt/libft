# 🧰 Libft

The very first project of 42, building our own C library.
These are functions that range from very simple to more intermediate and are meant to be used for our future projects using C.

---

## 📚 Project Overview

**Libft** is a static C library (`libft.a`) composed of a wide range of general-purpose functions, including:
- Memory and string manipulation
- Character checks and conversions
- Output functions
- Basic data structure handling (bonus)

---

## 🛠️ Features

### ✅ Part 1 – Libc Reimplementations
Rewriting core functions using only basic C, including:
- `ft_strlen`, `ft_memcpy`, `ft_strncmp`, `ft_atoi`, ...
- `ft_isalpha`, `ft_isdigit`, ...
- `ft_calloc`, `ft_strdup`

### 🧩 Part 2 – Additional Useful Functions
Functions not present in `libc`, but highly useful:
- `ft_substr`, `ft_strjoin`, `ft_split`
- `ft_itoa`, `ft_strtrim`, `ft_strmapi`
- File descriptor I/O: `ft_putchar_fd`, `ft_putstr_fd`, etc.

---

### 🔧 Build

```bash
make        # Build libft.a
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Rebuild everything

