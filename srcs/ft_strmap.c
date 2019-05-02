/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 15:30:02 by plagache          #+#    #+#             */
/*   Updated: 2018/12/07 16:00:35 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		c;
	char	*dest;

	c = 0;
	if (s == 0)
		return (0);
	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	while (s[c])
	{
		dest[c] = f(s[c]);
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
