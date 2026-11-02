*This activity has been created as part of the 42 curriculum by syaseen*

# *ft_printf*

# Description
*ft_printf* is a re-implementation of the C standard library function printf. The goal of the project is to learn how to write variadic functions in C ( <stdarg.h> ) and to build a small, well-structured and reusable formatting library.
 The function has the following prototype:
 int *ft_printf(const char *format, ...);*
 It writes the formatted output to the standard output and returns the number of       characters printed (or -1 on error), like the original printf.

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

The project is compiled into a static library, libftprintf.a , which can be linked    with any other C program.

# Instructions
## Compilation
The project is compiled with the flags -Wall -Wextra -Werror .
make # builds libftprintf.a
make clean # removes object files
make fclean # removes object files and libftprintf.a
make re # rebuilds everything from scratch

# Resources
## References
man 3 printf — behavior and formats of the original function
man 3 stdarg — *va_start* , *va_arg* , *va_copy* , *va_end*
GNU C Library — Formatted Output
cppreference — printf family
cppreference — Variadic arguments

## AI Usage
*Used for: explaining how va_list / va_arg work, suggesting edge cases to test
( INT_MIN , NULL pointers, empty strings), and helping structure and proofread this
README.*
