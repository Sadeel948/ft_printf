/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:36:15 by syaseen           #+#    #+#             */
/*   Updated: 2026/10/02 13:58:50 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_nbr(int n)
{
	long	nb;
	int		len;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		len += write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		len += ft_printf_nbr(nb / 10);
		len += ft_printf_nbr(nb % 10);
	}
	else
		len += ft_printf_chr(nb + '0');
	return (len);
}
