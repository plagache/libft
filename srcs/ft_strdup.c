/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:38:01 by plagache          #+#    #+#             */
/*   Updated: 2019/11/28 14:11:28 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *s1)
{
	int		count;
	int		i;
	char	*dest;

	count = 0;
	i = ft_strlen(s1) + 1;
	if (!(dest = (char*)malloc(sizeof(char) * (i))))
		return (NULL);
	while (s1[count])
	{
		dest[count] = s1[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
