/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:04:01 by lvelasqu          #+#    #+#             */
/*   Updated: 2022/12/10 23:57:20 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < n)
		{
			if (needle[++j] == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char	*s1 = "Hola Mundo";
	char	*s2 = "Mu";

	puts(ft_strnstr(s1, s2, ft_strlen(s1)));
}
*/