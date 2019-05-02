/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2lstaddend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 12:05:59 by plagache          #+#    #+#             */
/*   Updated: 2018/12/20 13:58:50 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_2lstaddend(t_dlist **lst, t_dlist *link)
{
	while ((*lst)->next != NULL)
		*lst = (*lst)->next;
	if ((*lst)->next == NULL)
	{
		link->prev = (*lst)->next ;
		link->next = NULL;
	}
}
