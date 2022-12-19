/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:20:54 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/19 12:02:27 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	choose_printer(const char *str, va_list ap)
{
	char	*string;

	if (*str == 'c')
	{
		ft_putchar_fd(va_arg(ap, int), 1);
		return (1);
	}
	if (*str == 's')
	{
		string = va_arg(ap, char *);
		if (string == NULL)
			string = "(null)";
		ft_putstr_fd(string, 1);
		return (ft_strlen(string));
	}
	if (*str == 'i' || *str == 'd')
		return (print_int(va_arg(ap, int)));
	if (*str == 'x' || *str == 'X' || *str == 'u')
		return (print_long((unsigned int)(va_arg(ap, unsigned long)), *str));
	if (*str == 'x' || *str == 'X' || *str == 'p')
		return (print_long(va_arg(ap, unsigned long), *str));
	return (0);
}
