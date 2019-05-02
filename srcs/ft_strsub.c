/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 18:42:07 by plagache          #+#    #+#             */
/*   Updated: 2018/12/07 16:00:35 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	c;
	char			*str;

	c = 0;
	if (s == 0)
		return (0);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (c < len)
	{
		str[c] = s[start + c];
		c++;
	}
	str[c] = '\0';
	return (str);
}
