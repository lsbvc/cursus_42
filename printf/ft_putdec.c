/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:24:29 by lvelasqu          #+#    #+#             */
/*   Updated: 2023/01/14 15:34:19 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_count(long x)
{
	size_t	c;

	c = 0;
	if (x <= 0)
		c++;
	while (x != 0)
	{
		x /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	n1;

	n1 = n;
	len = num_count(n1);
	str = (char *) malloc (sizeof (char) * (len + 1));
	if (!str)
		return (0);
		str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n1 < 0)
	{
		str[0] = '-';
		n1 = n1 * -1;
	}
	while (n1 > 0)
	{
		str[len] = (n1 % 10) + '0';
		n1 = n1 / 10;
		len--;
	}
	return (str);
}

int	ft_putnbr(int nb)
{
	char	*str;
	int		count;

	str = ft_itoa(nb);
	count = ft_putstr(str);
	free (str);
	return (count);
}

char	*ft_itoa2(unsigned int n)
{
	char	*str;
	size_t	len;
	long	n1;

	n1 = n;
	len = num_count(n1);
	str = (char *) malloc (sizeof (char) * (len + 1));
	if (!str)
		return (0);
		str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n1 < 0)
	{
		str[0] = '-';
		n1 = n1 * -1;
	}
	while (n1 > 0)
	{
		str[len] = (n1 % 10) + '0';
		n1 = n1 / 10;
		len--;
	}
	return (str);
}

int	ft_putnbr2(unsigned int nb)
{
	char	*str;
	int		count;

	str = ft_itoa2(nb);
	count = ft_putstr(str);
	free (str);
	return (count);
}
