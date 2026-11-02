/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:51:56 by syaseen           #+#    #+#             */
/*   Updated: 2026/10/02 14:22:42 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_hex(unsigned long nb)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (nb > 15)
	{
		len += ft_printf_hex(nb / 16);
		len += ft_printf_hex(nb % 16);
	}
	else
		len += ft_printf_chr(base[nb % 16]);
	return (len);
}
