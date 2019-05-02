/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:38:01 by plagache          #+#    #+#             */
/*   Updated: 2018/12/07 16:00:35 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		c;
	int		i;
	char	*dest;

	c = 0;
	i = ft_strlen(s1) + 1;
	if (!(dest = (char*)malloc(sizeof(char) * (i))))
		return (0);
	while (s1[c])
	{
		dest[c] = s1[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
