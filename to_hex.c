/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:19:27 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/14 20:36:47 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static	char	to_hex(unsigned long nbr, int lowcase)
{
	if (nbr < 10)
		return (nbr + '0');
	else
		return (nbr - 10 + 'A' + lowcase * ('a' - 'A'));
}
