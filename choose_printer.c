/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:20:54 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/18 09:35:27 by aperez-m         ###   ########.fr       */
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
		ft_putstr_fd(string, 1);
		return (ft_strlen(string));
	}
	if (*str == 'i' || *str == 'd')
		return (print_int(va_arg(ap, int)));
	if (*str == 'x' || *str == 'X' || *str == 'u' || *str == 'p')
		return (print_unsigned(va_arg(ap, unsigned long), *str));
	return (0);
}
