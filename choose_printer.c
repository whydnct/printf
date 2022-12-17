/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:20:54 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/15 16:42:01 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	choose_printer(char *str, va_list ap)
{
	char	*string;

	if (*str == 'c')
	{
		ft_putchar_fd(1, va_arg(ap, char));
		return (1);
	}
	if (*str == 's')
	{
		string = va_arg(ap, char *);
		ft_putstr_fd(string, 1);
		return (ft_strlen(string));
	}
	if (*str == 'p')
		return (print_hex_long(va_arg(ap, unsigned long), 1, 1));
	if (*str == 'i' || *str == 'd')
		return (print_int(va_arg(ap, int)));
	//if (*str == 'u')
	//	return (print_unsigned(va_arg(ap, unsigned int), *str));
	if (*str == 'x' || *str == 'X' || *str == 'u')
		return (print_hex_long(va_arg(ap, unsigned long), *str);
}
