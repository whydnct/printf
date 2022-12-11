/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 08:50:49 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/11 16:11:03 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printf(char const *fmt, ...)
{
	va_list	ap;
	int		ret;

	va_start(ap, fmt);
	if (!fmt)
		return (0);
	while (*fmt)
	{
		if (*fmt != '%')
			ft_putchar_fd(fmt, 1);
		else
			fmt += choose_printer(fmt, va_arg);
		fmt++; 
	}
	return (ret)
}
