/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:45:40 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/14 20:36:13 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	print_long(unsigned long nbr, int lowcase, int prefix)
{
	char			*nbr_str;
	int				i;

	i = -1;
	nbr_str = malloc(17);
	while (i++ < 17)
		nbr_str[i] = 0;
	i = 15;
	while (nbr / 16)
	{
		nbr_str[i] = to_hex((nbr % 16), lowcase);
		nbr /= 16;
		i--;
	}
	nbr_str[i] = to_hex((nbr % 16), lowcase);
	i--;
	if (prefix == 1)
		ft_putstr_fd("0x", 1);
	ft_putstr_fd(nbr_str + i + 1, 1);
	free(nbr_str);
	return (2*(int)(prefix == 1) + 16 - i - 1);
}
