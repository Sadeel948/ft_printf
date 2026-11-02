/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:11:18 by syaseen           #+#    #+#             */
/*   Updated: 2026/10/02 14:18:23 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_conversion(const char type, va_list vargs)
{
	int		len;

	len = 0;
	if (type == 'c')
		len += ft_printf_chr(va_arg(vargs, int));
	else if (type == 's')
		len += ft_printf_str(va_arg(vargs, char *));
	else if (type == 'p')
		len += ft_printf_ptr(va_arg(vargs, void *));
	else if (type == 'd' || type == 'i')
		len += ft_printf_nbr(va_arg(vargs, int));
	else if (type == 'u')
		len += ft_printf_un(va_arg(vargs, unsigned int));
	else if (type == 'x')
		len += ft_printf_hex(va_arg(vargs, unsigned long));
	else if (type == 'X')
		len += ft_printf_hex_up(va_arg(vargs, unsigned long));
	else if (type == '%')
		return (ft_printf_chr('%'));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	vargs;

	if (!str)
		return (-1);
	len = 0;
	i = 0;
	va_start(vargs, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] != '\0')
				len += ft_conversion(str[++i], vargs);
		}
		else
			len += ft_printf_chr(str[i]);
		i++;
	}
	va_end(vargs);
	return (len);
}
