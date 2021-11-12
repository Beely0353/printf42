/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:30:28 by baroun            #+#    #+#             */
/*   Updated: 2021/11/12 15:32:54 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenunbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_putunbr(unsigned int n)
{
	int				i;

	i = ft_lenunbr(n);
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (n > 9)
	{
		ft_putunbr(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
	return (i);
}
