/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2lstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 11:36:12 by plagache          #+#    #+#             */
/*   Updated: 2018/12/20 14:22:26 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_2lstdelone(t_dlist **lst)
{
	t_dlist *prevlnk;
	t_dlist	*nextlnk;

	prevlnk = (*lst)->prev;
	nextlnk = (*lst)->next;
	prevlnk->next = nextlnk;
	nextlnk->prev = prevlnk;
	free(*lst);
	*lst = NULL;
}
