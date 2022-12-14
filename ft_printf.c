/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 08:50:49 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/14 19:17:41 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		ret;

	if (!str)
		return (0);
	va_start(ap, str);
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
			if (is_formatter(*str))
				ret += choose_printer(str, ap);
			else
				return (abort_execution());
		}
	}
	return (ret);
}
