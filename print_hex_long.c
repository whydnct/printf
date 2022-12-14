/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:45:40 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/14 22:51:29 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static	char	to_hex(unsigned long nbr, int lowcase)
{
	if (nbr < 10)
		return (nbr + '0');
	else
		return (nbr - 10 + 'A' + lowcase * ('a' - 'A'));
}

int	print_unsigned(unsigned long nbr, int lowcase, int prefix, char c)
{
	char			*nbr_str;
	int				i;
	char			*base;
	int				base_length;

	base = "0123456789abcdef";
	base_length = 16;
	if (c == 'u')
		base_length = 10;
	if (c == 'X')
		base = "0123456789ABCDEF";
	i = -1;
	nbr_str = malloc(17);
	while (i++ < 17)
		nbr_str[i] = 0;
	i = 15;
	while (nbr / base_length)
	{
		nbr_str[i] = base[nbr % base_length];
		nbr /= base_length;
		i--;
	}
	nbr_str[i] = base[nbr % base_length];
	i--;
	if (c == 'p')
		ft_putstr_fd("0x", 1);
	ft_putstr_fd(nbr_str + i + 1, 1);
	free(nbr_str);
	return (2 * (int)(c == 'p') + base_length - i - 1);
}
