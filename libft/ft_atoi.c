/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:28:28 by lvelasqu          #+#    #+#             */
/*   Updated: 2022/12/13 13:18:00 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	negativo;
	int	nbr;

	count = 0;
	negativo = 0;
	nbr = 0;
	while (str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			negativo++;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		nbr = nbr * 10 + (str[count] - '0');
		count++;
	}
	if (negativo % 2 == 1)
		return (nbr * -1);
	return (nbr);
}
