/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:49:46 by syaseen           #+#    #+#             */
/*   Updated: 2026/10/02 14:25:12 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_ptr(void *s)
{
	int		len;

	len = 0;
	if (s == 0)
		return (ft_printf_str("(nil)"));
	len += ft_printf_str("0x");
	len += ft_printf_hex((unsigned long)s);
	return (len);
}
