/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:28:50 by syaseen           #+#    #+#             */
/*   Updated: 2026/10/02 14:22:05 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return (write(1, "(null)", 6));
	}
	while (str[i])
	{
		ft_printf_chr(str[i]);
		i++;
	}
	return (i);
}
