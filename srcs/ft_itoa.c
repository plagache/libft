/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:24:33 by plagache          #+#    #+#             */
/*   Updated: 2018/12/07 16:00:35 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_lenn(int n)
{
	int len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		stock;

	stock = n;
	len = ft_lenn(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		n = -n;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	if (stock < 0)
		str[0] = '-';
	return (str);
}
