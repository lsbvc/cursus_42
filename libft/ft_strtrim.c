/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:38:01 by lvelasqu          #+#    #+#             */
/*   Updated: 2022/12/13 13:33:12 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	if (s1[count] == '\0' && len == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[count]))
	{
		count++;
	}
	while (ft_strchr(set, s1[len]))
	{
		len--;
	}
	return (ft_substr(s1, count, len - count + 1));
}
