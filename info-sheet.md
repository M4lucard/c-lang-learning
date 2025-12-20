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

## Code example:

```c
#include <stdio.h>

int main(void) {
    int apples = 5;
    int bananas = 2;
    double price = 0.40;
    char initial = 'G';

    int total_fruit = apples + bananas;
    double avg_per_type = total_fruit / 2.0;
    double total_cost = total_fruit * price;

    printf("apples=%d bananas=%d\n", apples, bananas);
    printf("total_fruit=%d\n", total_fruit);
    printf("avg_per_type=%f\n", avg_per_type);
    printf("total_cost=%f\n", total_cost);
    printf("initial=%c\n", initial);

    return 0;
}
```


# Lesson 3 - Expressions, operators, and precedence

An expression is something C can evaluate to a value (like apples + bananas).

## Common operators:

    Arithmetic: + - * / %

    Assignment: =, compound: += -= *= /= %=

    Increment/decrement: ++ -- (careful: prefix vs postfix)

    Comparisons: == != < <= > >=

    Logical: && || !

## Precedence 

Precedence decides how expressions group without parentheses

## Code Examples:

### Example A: integer division + remainder
```c
#include <stdio.h>

int main(void) {
    int a = 17, b = 5;
    printf("a/b=%d\n", a / b);  // 3
    printf("a%%b=%d\n", a % b); // 2
    return 0;
}

```

### Example B: compound assignments
```c
#include <stdio.h>

int main(void) {
    int x = 10;
    x += 3;  // x = x + 3
    x *= 2;  // x = x * 2
    printf("x=%d\n", x); // 26
    return 0;
}

```

### Example C: prefix vs postfix increment
```c
#include <stdio.h>

int main(void) {
    int x = 5;
    printf("%d\n", x++); // prints 5, then x becomes 6
    printf("%d\n", ++x); // x becomes 7, prints 7
    return 0;
}

```

### Example D: comparisons + logical operators
```c
#include <stdio.h>

int main(void) {
    int temp = 35;
    if (temp > 30 && temp < 40) {
        printf("warm\n");
    }
    return 0;
}

```

# Lesson 4 - Control Flow
Control flow is how your program decides what to do next: conditionals choose a path, loops repeat work.

- `if / else`
- `while`
- `for`
- `break` and `continue`

## Code Examples - Control Flow

### if - else

```c
int x = 7;
if (x > 10) {
    printf("big\n");
} else {
    printf("not big\n");
}
```

### while
```c
int i = 0;
while (i < 3) {
    printf("i=%d\n", i);
    i++;
}
```

### for
```c
for (int i = 0; i < 3; i++) {
    printf("i=%d\n", i);
}
```

### break and continue
```c
for (int i = 0; i < 5; i++) {
    if (i == 2) continue;   // skip printing 2
    if (i == 4) break;      // stop early
    printf("%d\n", i);
}
```