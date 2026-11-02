/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_up.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:47:38 by syaseen           #+#    #+#             */
/*   Updated: 2026/10/02 14:22:52 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_hex_up(unsigned long nb)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789ABCDEF";
	if (nb > 15)
	{
		len += ft_printf_hex_up(nb / 16);
		len += ft_printf_hex_up(nb % 16);
	}
	else
		len += ft_printf_chr(base[nb % 16]);
	return (len);
}
