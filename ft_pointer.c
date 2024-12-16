/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:32:20 by gmorelli          #+#    #+#             */
/*   Updated: 2022/11/08 16:32:22 by gmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_checker(unsigned long int i)
{
	if (i >= 16)
	{
		ft_checker(i / 16);
		ft_checker(i % 16);
	}
	else
	{
		if (i > 9)
			i = i + 87;
		else
			i = i + 48;
		write(1, &i, 1);
	}
}

int	ft_pointer(unsigned long int i)
{
	unsigned long int	x;
	int					y;

	x = i;
	y = 1;
	if (x == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	ft_checker(i);
	while (x >= 16)
	{
		x = x / 16;
		y++;
	}
	return (y + 2);
}
