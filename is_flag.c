/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:06:22 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/11 21:07:09 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	is_flag(char c)
{
	char	*flags_str = "0123456789.+- lh";

	flags_str = ;
	if (!ft_strchr(flags_str, c))
		return (NULL);
	return (1);
}	
