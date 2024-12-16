/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:35:45 by gmorelli          #+#    #+#             */
/*   Updated: 2022/11/08 16:35:47 by gmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_checker(unsigned int i)
{
	if (i >= 10)
	{
		ft_checker(i / 10);
		ft_checker(i % 10);
	}
	else
	{
		i = i + 48;
		write(1, &i, 1);
	}
}

int	ft_unsigned(unsigned int i)
{
	long	x;
	int		y;

	x = i;
	y = 1;
	ft_checker(i);
	while (x >= 10)
	{
		x = x / 10;
		y++;
	}
	return (y);
}
