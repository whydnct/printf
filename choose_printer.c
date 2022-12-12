/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:20:54 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/11 20:56:32 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf"

int	choose_printer(char *str, int flags_nbr, void *arg)
{
	char	form;
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
		print_memory (arg);
		return (14);
	}
	if (formatter == 'd')
	{
		retunr ()
	}
	if (formatter == 'i')
	{
		ft_putnbr(*((int *)arg));
		return (int_lenght(*(int *)arg));
	}
	if (formatter == 'x')
		return (print_memory (arg, 1, 0));
	if (formatter == 'X')
		return (print_memory (arg, 0, 0));
}
