/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 15:07:51 by plagache          #+#    #+#             */
/*   Updated: 2018/12/07 16:03:12 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	int *dest;

	if (!(dest = (int*)malloc(sizeof(unsigned char) * (size))))
		return (NULL);
	ft_bzero(dest, size);
	return (dest);
}
