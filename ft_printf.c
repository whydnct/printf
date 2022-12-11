/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 08:50:49 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/11 21:07:23 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		ret;
	int		flags_nbr;

	va_start(ap, str);
	if (!str)
		return (0);
	while (*str)
	{
		if (*str != '%')
		{
			ft_putchar_fd(str, 1);
			ret++;
			str++;
		}
		else
		{
			str++;
			flags_nbr = 0;
			while (is_flag(str*))
			{
				str++;
				flags_nbr++;
			}
			if (is_formatter(str*))
			{
				if (flags_compatible(str, flags_nbr))
					ret += choose_printer(str, flags_nbr, va_arg);
				else
					return (abort_execution());
			}
			else
				return (abort_execution());
		str++; 
	}
	return (ret)
}
