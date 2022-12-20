/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:49:41 by lvelasqu          #+#    #+#             */
/*   Updated: 2022/12/20 20:41:08 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unit_test(const char *str, va_list obj)
{
	int	unit;

	unit = 0;
	if (str == 'c')
		ft_putchar(va_arg(obj, int));
	else if (str == 's')
		ft_putstr(va_arg(obj, char *));
	else if (str == 'p')
		ft_putptr(va_arg(obj, uintptr_t));
	else if (str == 'd' || str == 'i')
		ft_putdec(va_arg(obj, int));
	else if (str == 'u')
		ft_putnbr(va_arg(obj, unsigned int));
	else if (str == 'x' || str == 'X')
		ft_puthex(va_arg(obj, unsigned int));
	else if (str == '%')
		ft_putchar(va_arg(obj, int));
	return (unit);
}

int	ft_printf(const char *str, ...)
{
	int			unit;
	int			i;
	va_list		args;

	va_start(args, str);

	if ()
	va_end(args);
}
