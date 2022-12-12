/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:45:40 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/12 18:09:19 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

char	to_hex(int nbr)
{
	if (nbr < 10)
		return (nbr + '0');
	else
		return (nbr - 10 + 'a');
}

int	print_memory(void *arg)
{
	unsigned long	nbr;
	char			*nbr_str;
	int				i;

	i = -1;
	nbr_str = malloc(17);
	while (i++ < 17)
		nbr_str[i] = 0;
	i = 15;
	nbr = (unsigned long)arg;
	while (nbr / 16)
	{
		nbr_str[i] = to_hex((int)(nbr % 16));
		nbr /= 16;
		i--;
	}
	nbr_str[i] = to_hex((int)(nbr % 16));
	i--;
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(nbr_str + i + 1, 1);
	free(nbr_str);
	return (2 + 16 - i - 1);
}
