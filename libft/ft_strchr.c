/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:44:47 by lvelasqu          #+#    #+#             */
/*   Updated: 2022/12/07 19:43:08 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	if ((!*str && (char) a == '\0'))
		return ((char *) str);
	while (*str != '\0')
	{
		if (*str == (char) a)
			return ((char *) str);
		str++;
		if (*str == (char) a)
			return ((char *) str);
	}
	return (0);
}
/*
int	main(void)
{
	// char cadena[] = {'H', 'o', 'l', 'a'};
	char caden[] = {'\0'};

	printf("%s\n", ft_strchr(caden, 'a'));
	printf("%s\n", strchr(caden, 'a'));
}*/