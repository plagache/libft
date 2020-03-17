/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:12:45 by plagache          #+#    #+#             */
/*   Updated: 2018/12/07 16:00:35 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		c;
	int		d;
	char	*stock;

	c = 0;
	if (!(ft_strlen(needle)))
		return ((char*)haystack);
	while (haystack[c])
	{
		d = 0;
		if (needle[d] == haystack[c])
		{
			stock = ((char*)haystack + c);
			while (needle[d] == haystack[c + d])
			{
				if (needle[d + 1] == '\0')
					return (stock);
				d++;
			}
		}
		c++;
	}
	return (NULL);
}
