/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <plagache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 15:49:07 by plagache          #+#    #+#             */
/*   Updated: 2020/04/13 17:50:59 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		free_arr(void **arr)
{
	int c;

	c = 0;
	while (arr[c] != NULL)
	{
		free(arr[c]);
		c++;
	}
	free(arr);
}
