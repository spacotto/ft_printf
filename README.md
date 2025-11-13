# ft_printf
The `printf` function serves as a pedagogical tool for understanding **variadic functions in C**. As one of the most familiar functions to C programmers, it provides a concrete, practical example that students can immediately relate to while exploring advanced function concepts. But... Why `printf`?

1. **Immediate Familiarity**
We all used `printf` for our tests several times. This familiarity removes the cognitive load of understanding *what* the function does, allowing us to focus entirely on *how* it works internally.

2. **Clear Motivation**
Unlike contrived examples, `printf` solves a real problem: formatting output with an unknown number of arguments at compile time. We can immediately see why variadic functions exist.

3. **Type Diversity**
`printf` handles multiple data types (`int`, `float`, `char*`, etc.), which illustrates both the power and the challenges of variadic functions, particularly the lack of type safety.
