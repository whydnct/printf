/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-m <aperez-m@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 08:55:06 by aperez-m          #+#    #+#             */
/*   Updated: 2022/12/18 09:36:40 by aperez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	choose_printer(const char *str, va_list ap);
int	ft_printf(char const *str, ...);
int	print_char(char c);
int	print_int(int nbr);
int	print_unsigned(unsigned long ul, char c);
#endif