/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:20:54 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/12 20:56:17 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	choose_printer(char *str, int flags_nbr, void *arg)
{
	char	formatter;
	char	*form_lst;

	formatter = *(str - flags_nbr);
	if (formatter == 'c')
	{
		ft_putchar_fd(*((char *)arg), 1);
		return (1);
	}
	if (formatter == 's')
	{
		ft_putstr_fd((char *)arg, 1);
		return (ft_strlen((char *arg)));
	}
	if (formatter == 'p')
		return (print_memory (arg, 1, 1));
	if (formatter == 'i' || formatter == 'd')
	{
		ft_putstr(1, itoa(*((int *)arg)));
		return (ft_strlength(itoa(*(int *)arg);
	}
	if (formatter == 'u')
	{
		ft_pustr(itoa(*())ft_putnbr(*(int *) + 1 + 4294967295);
		return(int_length(*(int *) + 1))
	}
	if (formatter == 'x')
		return (print_memory (arg, 1, 0));
	if (formatter == 'X')
		return (print_memory (arg, 0, 0));
}
