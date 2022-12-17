/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:45:40 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/15 16:47:46 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	to_hex(unsigned long nbr, char *nbr_str, char *base, int base_length)
{
	int	i;

	i = 15;
	while (nbr / base_length)
	{
		nbr_str[i] = base[nbr % base_length];
		nbr /= base_length;
		i--;
	}
	nbr_str[i] = base[nbr % base_length];
	i--;
	return (i);
}

int	print_unsigned(unsigned long nbr, char c)
{
	char			*nbr_str;
	int				i;
	char			*base;
	int				base_length;

	if (c != 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	base_length = 16 - 6 * (int)(c == 'u');
	nbr_str = malloc(17);
	if (nbr_str == NULL)
		return (NULL);
	ft_bzero(nbr_str, 17);
	i = to_hex(nbr, nbr_str, base, base_length);
	if (c == 'p')
		ft_putstr_fd("0x", 1);
	ft_putstr_fd(nbr_str + i + 1, 1);
	free(nbr_str);
	return (2 * (int)(c == 'p') + base_length - i - 1);
}
