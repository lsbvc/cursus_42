/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:31:54 by lvelasqu          #+#    #+#             */
/*   Updated: 2023/01/16 22:39:15 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int a, size_t n)
{
	size_t			i;
	unsigned char	*str1;

	str1 = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		str1[i] = (unsigned char)a;
		i++;
	}
	return (str);
}
