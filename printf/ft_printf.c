/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:49:41 by lvelasqu          #+#    #+#             */
/*   Updated: 2023/01/14 15:33:38 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unit_test(va_list obj, const char str, int count)
{
	if (str == 'c')
		count += ft_putchar(va_arg(obj, int));
	else if (str == 's')
		count += ft_putstr(va_arg(obj, char *));
	else if (str == 'p')
		count += ft_putptr(va_arg(obj, unsigned long));
	else if (str == 'd' || str == 'i')
		count += ft_putnbr(va_arg(obj, int));
	else if (str == 'u')
		count += ft_putnbr2(va_arg(obj, unsigned int));
	else if (str == 'x')
		count += ft_puthex(va_arg(obj, unsigned int), 0);
	else if (str == 'X')
		count += ft_puthex(va_arg(obj, unsigned int), 1);
	else if (str == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int			unit;
	int			i;
	va_list		args;
	int			count;

	va_start(args, str);
	unit = 0;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			unit += ft_unit_test(args, str[i + 1], count);
			i++;
		}
		else
		{
			unit += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (unit);
}
