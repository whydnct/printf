/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:45:40 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/12 17:57:13 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

char	to_hex(int nbr)
{
	char	c;

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

int	main(int argc, char **argv)
{
	void 	*arg;

	(void)argc;
	arg = (void *)1;
	printf("%p\n", arg);
	printf("\n%d",print_memory(arg));
	printf("\n");
}
