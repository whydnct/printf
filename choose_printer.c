/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:20:54 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/14 20:35:56 by aperez-m         ###   ########.fr       */
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
	if (*str == 'u')
		return (print_unsigned(va_arg(ap, unsigned int)));
	if (*str == 'x')
		return (print_hex_long(va_arg(ap, unsigned long), 1, 0));
	if (*str == 'X')
		return (print_hex_long(va_arg(ap, unsigned long), 0, 0));
}
