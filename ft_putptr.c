/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:32:38 by baroun            #+#    #+#             */
/*   Updated: 2021/11/12 15:32:50 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	a;

	a = (unsigned long) ptr;
	count = ft_putstr("0x");
	count += ft_putunbr_base(a, "0123456789abcdef");
	return (count);
}
