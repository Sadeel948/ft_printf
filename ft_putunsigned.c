#include "ft_printf.h"

int ft_putunsigned(unsigned int nb)
{
 unsigned int re;

 re = 0;
 if (nb > 9)
 {
    re += ft_putunsigned(nb / 10);
    re += ft_putunsigned(nb % 10);
 }
 else
    re += ft_putchar(nb + 48);
 return (re);
}
