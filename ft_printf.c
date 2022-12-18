/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 08:50:49 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/18 09:35:19 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	is_formatter(char c)
{
	char	*formatters;

	formatters = "cspiduxX";
	while (*formatters)
	{
		if (*formatters == c)
			return (1);
	}
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		ret;

	if (!str)
		return (0);
	va_start(ap, str);
	ret = 0;
	while (*str)
	{
		if (*str != '%')
			ret += print_char(*str);
		else
		{
			str++;
			if (is_formatter(*str))
				ret += choose_printer(str, ap);
			else if (*str == '%')
				ret += print_char(*str);
		}
	}
	va_end(ap);
	return (ret);
}
