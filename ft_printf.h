#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int     ft_putchar(char c);
int     ft_puthex(unsigned int nb);
int	ft_puthex_up(unsigned int nb);
int     ft_putnbr(int n);
int     ft_putptr(unsigned long nb);
int     ft_putstr(char *str);
int     ft_putunsigned(unsigned int n);
int     ft_printf(const char *str, ...);

#endif
