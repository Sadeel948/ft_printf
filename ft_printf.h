/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:21:09 by syaseen           #+#    #+#             */
/*   Updated: 2026/10/02 14:12:37 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf_nbr(int n);
int	ft_printf_chr(char c);
int	ft_printf_str(char *str);
int	ft_printf_ptr(void *s);
int	ft_printf(const char *str, ...);
int	ft_printf_un(unsigned int nb);
int	ft_printf_hex(unsigned long nb);
int	ft_printf_hex_up(unsigned long nb);

#endif
