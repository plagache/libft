/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:34:57 by plagache          #+#    #+#             */
/*   Updated: 2018/12/07 16:00:35 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		blank(char const *s)
{
	unsigned int c;

	c = 0;
	while ((s[c] == 32 || s[c] == '\n' || s[c] == '\t') && s[c])
		c++;
	if (c == ft_strlen(s))
		return (0);
	else
		return (1);
}

char			*ft_strtrim(char const *s)
{
	unsigned int	c;
	unsigned int	d;
	unsigned int	len;

	if (s == 0)
		return (0);
	d = ft_strlen(s) - 1;
	c = 0;
	if (blank(s) == 0)
		return (ft_strnew(0));
	while (s[c] == 32 || s[c] == '\n' || s[c] == '\t')
		c++;
	while (s[d] == 32 || s[d] == '\n' || s[d] == '\t')
		d--;
	len = d - c + 1;
	return (ft_strsub(s, c, len));
}
