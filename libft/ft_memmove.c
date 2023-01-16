/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:18:49 by lvelasqu          #+#    #+#             */
/*   Updated: 2023/01/16 23:20:28 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dst1;
	char	*src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if (!dst && !src)
		return (dst);
	if (dst > src)
	{
		while (n--)
		{
			dst1[n] = src1[n];
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
