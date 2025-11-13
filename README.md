# ft_printf
The `printf` function serves as a pedagogical tool for understanding **variadic functions in C**. As one of the most familiar functions to C programmers, it provides a concrete, practical example that students can immediately relate to while exploring advanced function concepts.

### Table of Contents
1. [What is `printf`?](https://github.com/spacotto/ft_printf#what-is-printf)
2. [How does `printf` work?](https://github.com/spacotto/ft_printf#how-does-printf-work)

## `printf`: Definition
`printf` is a **variadic function** that formats and prints data to standard output. It's one of the most commonly used functions in C, thus making it a good way to learn about variadic functions.
>[!NOTE]
> A variadic function is a function that can accept a variable number of arguments, meaning its arity is not fixed.

## `printf`: Structure
# Prototype
> `int printf(const char *format, ...);`

# Return Type
> Returns the **number of characters printed**.

# Parameters
> 1. A `const char` (conventionally called `format`) describing what to print.
> 2. A **variable number of additional arguments** based on that format string

# Behavior
> 1. Processes the format string **character by character**.
> 2. When it finds a `%` specifier, it **extracts the next argument and formats it**.
> 3. **Writes** the result **to standard output** (file descriptor `1`).
