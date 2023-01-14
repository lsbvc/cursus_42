/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:22:28 by lvelasqu          #+#    #+#             */
/*   Updated: 2023/01/14 15:22:47 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putptr(unsigned long ptr)
{
	int	i;

	i = 2;
	write (1, "0x", 2);
		i += ft_puthex(ptr, 0);
	return (i);
}

int	ft_puthex(unsigned long long num, int capital)
{
	unsigned long long	i;

	i = 0;
	if (num >= 16)
		i += ft_puthex(num / 16, capital);
	if (capital == 0)
		ft_putchar("0123456789abcdef"[num % 16]);
	else
		ft_putchar("0123456789ABCDEF"[num % 16]);
	i++;
	return (i);
}
