/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:10:20 by lvelasqu          #+#    #+#             */
/*   Updated: 2023/01/16 23:59:26 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	s1 = (char *)s;
	i = 0;
	if (!s || !f)
		return (0);
	s1 = (char *) malloc (sizeof(char) * ft_strlen(s) + 1);
	if (!s1)
		return (0);
	while (i < ft_strlen(s))
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
