/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:26:41 by gmorelli          #+#    #+#             */
/*   Updated: 2022/11/21 13:53:21 by gmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int	ft_char(int c);
int	ft_string(char *str);
int	ft_pointer(unsigned long int i);
int	ft_digit(int i);
int	ft_unsigned(unsigned int i);
int	ft_hexd(unsigned int i, char format);
int	ft_printf(const char *str, ...);

#endif
