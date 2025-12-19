# Lesson 1 - Hello World!
## Lesson notes

`#include <stdio.h>`: pulls in declarations for standard input/output functions (like printf).

`int main(void)`: the program’s entry point. Execution starts here.

`printf("...")`: prints formatted text to the terminal.

`return 0;`: signals “success” to the operating system.

## Example code block
```c
#include <stdio.h>

int main(void) {
    printf("Hello, world!\n");
    return 0;
}
```

## Additional notes:\

Why int main(void) and not void main()?

By the C standard, main returns an int status code to the operating system:

    return 0; means “success”

    nonzero means “something went wrong”


# Lesson 2 - Variables and basic types

A variable is a named chunk of memory that holds a value of some type. The type tells C:

- how many bytes to use (roughly),

- how to interpret the bits,

- what operations make sense.

## Common beginner types:

    int — whole numbers (size varies by platform, commonly 32-bit on desktops)

    double — floating point (usually 64-bit)

    char — a single character byte (also just a small integer type)

    size_t — an unsigned type used for sizes/counts (we’ll see it more with arrays/strings)

## Printing values: 

printf uses format specifiers:

    %d for int

    %f for double (prints decimals; default 6 digits after the dot)

    %c for char

    %zu for size_t