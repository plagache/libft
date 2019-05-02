/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 13:22:57 by plagache          #+#    #+#             */
/*   Updated: 2018/12/07 16:00:35 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			c;
	long long	stock;
	int			sign;

	sign = 1;
	stock = 0;
	c = 0;
	while (str[c] == 32 || str[c] == '\n' || str[c] == '\t' || str[c] == '\v' ||
			str[c] == '\f' || str[c] == '\r')
		c++;
	if (str[c] == '-')
		sign = -1;
	if (str[c] == '+' || str[c] == '-')
		c++;
	while (str[c] <= 57 && str[c] >= 48)
	{
		stock = str[c] - '0' + (10 * stock);
		c++;
	}
	return (stock * sign);
}
