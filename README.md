# ft_printf
The `printf` function serves as a pedagogical tool for understanding **variadic functions in C**. As one of the most familiar functions to C programmers, it provides a concrete, practical example that students can immediately relate to while exploring advanced function concepts.

### Table of Contents
1. [What is `printf`?](https://github.com/spacotto/ft_printf#what-is-printf)
2. [How does `printf` work?](https://github.com/spacotto/ft_printf#how-does-printf-work)

## What is `printf`?
`printf` is a **variadic function** that formats and prints data to standard output. It's one of the most commonly used functions in C, thus making it a good way to learn about variadic functions.
>[NOTE]
> A variadic function is a function that can accept a variable number of arguments, meaning its arity is not fixed.

## How does `printf` work?
At its core, `printf`:
1. Takes a **format string** describing what to print
2. Takes a **variable number of additional arguments** based on that format string
3. Processes the format string character by character
4. When it finds a `%` specifier, it extracts the next argument and formats it
5. Writes the result to standard output (file descriptor 1)
6. Returns the **number of characters printed**

