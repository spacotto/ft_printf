# ft_printf
The `printf` function serves as a pedagogical tool for understanding **variadic functions in C**. As one of the most familiar functions to C programmers, it provides a concrete, practical example that students can immediately relate to while exploring advanced function concepts.

### Table of Contents
1. [What is `printf`?](https://github.com/spacotto/ft_printf#what-is-printf)
2. [How does `printf` work?](https://github.com/spacotto/ft_printf#how-does-printf-work)

## What is `printf`?
`printf` is a **variadic function** that formats and prints data to standard output. It's one of the most commonly used functions in C, thus making it a good way to learn about variadic functions.
>[!NOTE]
> A variadic function is a function that can accept a variable number of arguments, meaning its arity is not fixed.

## How does `printf` work?
At its core, `printf`:
1. Takes a **format string** describing what to print
2. Takes a **variable number of additional arguments** based on that format string
3. Processes the format string character by character
4. When it finds a `%` specifier, it extracts the next argument and formats it
5. Writes the result to standard output (file descriptor 1)
6. Returns the **number of characters printed**

## `va_`
`va_list()` 
> Include: <stdarg>.  Alternatively, <stdio.h>, or <wchar.h>. Used by functions with a varying number of arguments of  varying types.   The  function  must  declare  an object of type va_list which is used by the macros va_start(3), va_arg(3), va_copy(3), and va_end(3) to traverse the list of arguments.

`va_start()`
> The `va_start()` **macro** initializes `ap` for subsequent use by `va_arg()` and `va_end()`, and must be called first. The argument last is the name of the last argument before the variable argument list, that is, the last argument of which the calling function knows the type. Because the address of this argument may be used in the `va_start()` macro, it should not be declared as a register variable, or as a function or an array type.

`va_arg()`
> The va_arg() macro expands to an expression that has the type and value of the next argument in the call.  The argument ap is the va_list ap initialized by va_start().  Each call to  va_arg()  modifies  ap so that the next call returns the next argument.  The argument type is a type name specified so that the type of a pointer to an object that has the specified type can be obtained simply by adding a * to type. The first use of the va_arg() macro after that of the va_start() macro returns the argument after last.  Successive invocations return the values of the remaining arguments. If there is no next argument, or if type is not compatible with the type of the actual next argument (as promoted according to the default argument promotions), random errors will occur. If ap is passed to a function that uses va_arg(ap,type), then the value of ap is undefined after the return of that function.

`va_end()`
> Each invocation of `va_start()` must be matched by a corresponding invocation of `va_end()` in the same function.  After the call `va_end(ap)` the variable ap is undefined. Multiple  traversals  of  the list, each bracketed by `va_start()` and `va_end()` are possible. `va_end()` may be a macro or a function.
