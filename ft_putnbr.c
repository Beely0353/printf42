/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:22:12 by baroun            #+#    #+#             */
/*   Updated: 2021/11/12 15:32:31 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lennbr(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	unsigned int	s;
	int				i;

	i = ft_lennbr(n);
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		s = -n;
	}
	else
		s = n;
	if (s > 9)
	{
		ft_putnbr(s / 10);
		s %= 10;
	}
	ft_putchar(s + '0');
	return (i);
}
