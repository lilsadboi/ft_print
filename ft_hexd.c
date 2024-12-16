/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:38:14 by gmorelli          #+#    #+#             */
/*   Updated: 2022/11/08 16:38:15 by gmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_checker(unsigned int i, char format)
{
	if (i >= 16)
	{
		ft_checker(i / 16, format);
		ft_checker(i % 16, format);
	}
	else if (i > 9)
	{
		if (format == 'x')
			i = i + 87;
		else
			i = i + 55;
		write(1, &i, 1);
	}
	else
	{
		i = i + 48;
		write(1, &i, 1);
	}
}

int	ft_hexd(unsigned int i, char format)
{
	unsigned int	x;
	int				y;

	x = i;
	y = 1;
	ft_checker(i, format);
	while (x >= 16)
	{
		x = x / 16;
		y++;
	}
	return (y);
}
