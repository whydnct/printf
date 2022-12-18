/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:56:19 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/18 09:34:58 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_int(int nbr)
{
	int	i;

	ft_putnbr_fd(nbr, 1);
	i = 0;
	if (nbr < 0)
		i++;
	while (nbr / 10)
	{
		i++;
		nbr /= 10;
	}
	i++;
	return (i);
}