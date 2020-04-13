/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2lstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <plagache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 12:09:59 by plagache          #+#    #+#             */
/*   Updated: 2020/04/13 16:01:28 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_dlist		*ft_2lstnew(void *content)
{
	t_dlist	*link;

	if (!(link = (t_dlist*)malloc(sizeof(t_dlist))))
		return (NULL);
	if (content == 0)
		link->content = NULL;
	else
	{
		if (!(link->content = (void*)malloc(sizeof(*content))))
		{
			free(link);
			return (NULL);
		}
		link->content = ft_memmove(link->content, content, sizeof(*content));
	}
	link->next = NULL;
	link->prev = NULL;
	return (link);
}
