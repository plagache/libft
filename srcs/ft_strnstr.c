/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:44:12 by plagache          #+#    #+#             */
/*   Updated: 2018/12/07 16:00:35 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	c;
	unsigned int	d;
	char			*stock;

	c = 0;
	if (!(ft_strlen(needle)))
		return ((char*)haystack);
	while (haystack[c] && c < len)
	{
		d = 0;
		if (needle[d] == haystack[c])
		{
			stock = ((char*)haystack + c);
			while (needle[d] == haystack[c + d] && c + d < len)
			{
				if (needle[d + 1] == '\0')
					return (stock);
				d++;
			}
		}
		c++;
	}
	return (0);
}
