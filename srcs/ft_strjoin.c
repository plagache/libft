/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 17:25:33 by plagache          #+#    #+#             */
/*   Updated: 2018/12/21 14:21:35 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	c;
	size_t	d;
	size_t len;

	c = 0;
	d = 0;
	len = ft_strlen(s1) + ft_strlen(s2); 
	if (s1 == 0 || s2 == 0)
		return (NULL);
	if (!(dest = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (ft_strlen(s1) > c)
	{
		dest[c] = s1[c];
		c++;
	}
	while (ft_strlen(s2) > d)
	{
		dest[c + d] = s2[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}
