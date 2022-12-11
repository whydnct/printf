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
	if (formatter == 'u')
	if (formatter == 'x')
	if (formatter == 'X')
}
