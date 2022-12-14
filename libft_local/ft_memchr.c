/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:26:43 by lvelasqu          #+#    #+#             */
/*   Updated: 2022/12/08 02:26:51 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *buf, int ch, size_t n)
{
	unsigned char	*buf1;
	size_t			i;

	i = 0;
	buf1 = (unsigned char *) buf;
	while (i < n)
	{
		if (buf1[i] == (unsigned char)ch)
			return (buf1 + i);
		i++;
	}
	return (0);
}
