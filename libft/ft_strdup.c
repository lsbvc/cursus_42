/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:30:33 by lvelasqu          #+#    #+#             */
/*   Updated: 2022/12/09 16:48:52 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	void	*new;

	len = ft_strlen (str) + 1;
	new = malloc (len);
	if (new == 0)
		return (0);
	ft_memcpy (new, str, len);
	return ((char *) new);
}
