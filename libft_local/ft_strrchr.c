/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:26:53 by lvelasqu          #+#    #+#             */
/*   Updated: 2022/12/07 19:52:54 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int a)
{
	int	i;

	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if (str[i] == (char) a)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}

/*if ((!*str && (char) a == '\0'))
		return ((char *) str);
		
if (!*str)
		return (0);
		*/