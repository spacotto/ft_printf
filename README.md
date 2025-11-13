# ft_printf
The `printf` function serves as a pedagogical tool for understanding **variadic functions in C**. As one of the most familiar functions to C programmers, it provides a concrete, practical example that students can immediately relate to while exploring advanced function concepts.

## `printf`: Definition
`printf` is a **variadic function** that formats and prints data to standard output. It's one of the most commonly used functions in C, thus making it a good way to learn about variadic functions.
>[!NOTE]
> A variadic function is a function that can accept a variable number of arguments, meaning its arity is not fixed.

## `printf`: Behaviour
### Prototype
`int printf(const char *format, ...);`

### Return Type
Returns the **number of characters printed**.

### Parameters
1. A `const char` (conventionally called `format`) describing what to print.
2. A **variable number of additional arguments** based on that format string

### General Behaviour
1. Processes the format string **character by character**.
2. When it finds a `%` specifier, it **extracts the next argument and formats it**.
3. **Writes** the result **to standard output** (file descriptor `1`).

## Variadic Type & Macros: `va_start`, `va_list`, `va_arg`, `va_end`
To handle the variable number of arguments that `printf` accepts, C provides a set of macros defined in `<stdarg.h>`. These macros allow functions to access arguments when the number and types aren't known at compile time.

### va_list
`va_list` holds the information needed to retrieve additional arguments with `va_arg`. 
>[!WARNING]
>`va_list` can be a macro or a type alias depending on your OS and compiler.

### va_start
`va_start` initialises a `va_list` variable to point to the first variadic argument. 
It takes the `va_list` object and the last-named parameter before the ellipsis (`...`).

### va_arg
`va_arg` retrieves the next argument from the list. 
It takes the `va_list` and the type of the argument to retrieve. 
Each call advances the internal pointer to the next argument.

>[!IMPORTANT]
>You must know the correct type of each argument. Passing the wrong type leads to undefined behavior.

### va_end
`va_end` performs cleanup after you're done processing variadic arguments. 
It must be called before the function returns.

## Format Specifiers
Format specifiers tell `printf` how to interpret and display the variadic arguments. 
Each specifier begins with a `%` character followed by a conversion character.

### Supported Format Specifiers

| Specifier | Description                                        | 
|-----------|----------------------------------------------------|
| `%c`      | Prints a single character                          |
| `%s`      | Prints a null-terminated string                    |
| `%p`      | Prints a pointer address in hexadecimal format     |
| `%d`      | Prints a signed decimal integer (base 10)          |
| `%i`      | Prints a signed integer in base 10                 |
| `%u`      | Prints an unsigned decimal integer (base 10)       |
| `%x`      | Prints a number in lowercase hexadecimal (base 16) | 
| `%X`      | Prints a number in uppercase hexadecimal (base 16) | 
| `%%`      | Prints a literal percent sign                      | 

>[!NOTE]
>**%d vs %i**: Both print signed integers in base 10. In `printf`, they behave identically, but they differ in `scanf` (where `%i` can parse octal and hexadecimal).
