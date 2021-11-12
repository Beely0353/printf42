/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:40:14 by baroun            #+#    #+#             */
/*   Updated: 2021/11/12 15:32:24 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_is_arg(char c);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putunbr(unsigned int n);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);

int		ft_putunbr_base(unsigned long nbr, char *base);
int		ft_putptr(void *ptr);
int		ft_isspace(int c);

#endif
