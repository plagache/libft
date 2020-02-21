/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:04:44 by plagache          #+#    #+#             */
/*   Updated: 2018/12/17 11:57:21 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int d;

	d = -1;
	while (d < (int)ft_strlen(s) && s[d])
	{
		d++;
		if (*(s + d) == (char)c)
			return ((char*)s + d);
	}
	return (NULL);
}
