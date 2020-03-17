/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:38:23 by plagache          #+#    #+#             */
/*   Updated: 2018/12/07 16:00:35 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int m;
	unsigned int l;

	m = 0;
	l = 0;
	while (dst[m] && m < size)
		m++;
	while (src[l] && m + l + 1 < size)
	{
		dst[m + l] = src[l];
		l++;
	}
	if (m != size)
		dst[m + l] = '\0';
	return (m + ft_strlen(src));
}
