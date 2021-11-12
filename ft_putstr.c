/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:53:55 by baroun            #+#    #+#             */
/*   Updated: 2021/11/12 15:32:51 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s != NULL)
		while (s[i])
			write(1, &s[i++], 1);
	else
	{
		ft_putstr("(null)");
		return (6);
	}
	return (i);
}