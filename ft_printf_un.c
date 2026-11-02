/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:43:55 by syaseen           #+#    #+#             */
/*   Updated: 2026/10/02 13:58:15 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_un(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 9)
	{
		len += ft_printf_un(nb / 10);
		len += ft_printf_un(nb % 10);
	}
	else
		len += ft_printf_chr(nb + '0');
	return (len);
}
