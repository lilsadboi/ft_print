/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:33:46 by gmorelli          #+#    #+#             */
/*   Updated: 2022/11/08 16:33:48 by gmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_checker(int i)
{
	if (i == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
	}
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

int	ft_digit(int i)
{
	long int	x;
	int			y;

	x = i;
	y = 1;
	ft_checker(i);
	if (x < 0)
	{
		y++;
		x = -x;
	}
	while (x >= 10)
	{
		x = x / 10;
		y++;
	}
	return (y);
}
