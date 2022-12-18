/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:55:18 by lvelasqu          #+#    #+#             */
/*   Updated: 2022/12/16 18:02:31 by lvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	aux = *lst;
	if (lst || *lst)
	{
		while (*lst)
		{
			*lst = aux->next;
			del(aux->content);
			free(aux);
			aux = *lst;
		}
	}
}
