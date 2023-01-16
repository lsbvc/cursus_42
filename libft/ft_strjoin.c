/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 21:18:20 by lvelasqu          #+#    #+#             */
/*   Updated: 2023/01/16 23:44:52 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	size;

	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc (size + 1);
	if (!newstr)
		return (0);
	ft_memcpy(newstr, s1, ft_strlen(s1));
	ft_memcpy(newstr + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (newstr);
}
