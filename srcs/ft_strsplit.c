/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 13:57:54 by plagache          #+#    #+#             */
/*   Updated: 2018/12/17 11:51:16 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t		countwords(char const *s, char c)
{
	unsigned int w;
	unsigned int m;

	m = 0;
	w = 0;
	while (s[m])
	{
		if (s[m] != c && s[m])
		{
			w++;
			while (s[m] != c && s[m])
				m++;
		}
		while (s[m] == c && s[m])
			m++;
	}
	return (w);
}

static size_t		lenword(char const *s, char c)
{
	size_t			lenword;
	unsigned int	ms;

	lenword = 0;
	ms = 0;
	while (s[ms] == c && s[ms])
		ms++;
	while (s[ms] != c && s[ms])
	{
		lenword++;
		ms++;
	}
	return (lenword);
}

char				**ft_strsplit(char const *s, char c)
{
	unsigned int	ms;
	unsigned int	m;
	unsigned int	mw;
	char			**mboard;

	ms = 0;
	m = 0;
	if (!s)
		return (NULL);
	if (!(mboard = (char**)malloc(sizeof(char*) * (countwords(s, c) + 1))))
		return (NULL);
	while (m < countwords(s, c))
	{
		if (!(mboard[m] = ft_strnew(lenword(&(s[ms]), c) + 1)))
			mboard[m] = 0;
		mw = 0;
		while (s[ms] == c && s[ms])
			ms++;
		while (s[ms] != c && s[ms])
			mboard[m][mw++] = s[ms++];
		m++;
	}
	mboard[m] = 0;
	return (mboard);
}
