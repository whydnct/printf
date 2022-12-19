/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 08:55:06 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/19 12:31:46 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	choose_printer(const char *str, va_list ap);
int	ft_printf(char const *str, ...);
int	print_char(char c);
int	print_int(int nbr);
int	print_long(unsigned long ul, char c);
#endif