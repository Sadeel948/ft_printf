#include "ft_printf.h"

int ft_check(va_list args, char c)
{
 int re;

 re = 0;
 if (c == 'd' || c == 'i')
    re = ft_putnbr(va_arg(args, int));
 else if (c == 'c')
    re = ft_putchar(va_arg(args, int));
 else if (c == 's')
    re = ft_putstr(va_arg(args, char *));
 else if (c == 'x')
    re = ft_puthex(va_arg(args, unsigned int));
 else if (c == 'X')
    re = ft_puthex_up(va_arg(args, unsigned int));
 else if (c == 'p')
 {
    unsigned long p = va_arg(args, unsigned long);
    if (p == 0)
        return (ft_putstr("(nil)"));
    re = ft_putstr("0x");
    re += ft_putptr(p);
 }
 else if (c == 'u')
    re = ft_putunsigned(va_arg(args, unsigned int));
 else if (c == '%')
    return (ft_putchar('%'));
 return (re);
}

int ft_printf(const char *str, ...)
{
 int  i;
 va_list args;
 int  re;

 va_start(args, str);
 re = 0;
 i = 0;
 while (str[i])
 {
  if (str[i] == '%')
  {
   if (str[i + 1] != '\0')
      re += ft_check(args, str[++i]);
  }
  else
      re += ft_putchar(str[i]);
 i++;
 }
 va_end(args);
 return (re);
}
