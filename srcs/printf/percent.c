/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <plagache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:51:31 by plagache          #+#    #+#             */
/*   Updated: 2019/11/18 18:51:32 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arg.h"
#include "libft.h"

void	minus_flag_percent(t_conv_id *s_ptr, int len)
{
	str_fill_char(s_ptr->output, ' ', len);
	s_ptr->output[0] = '%';
}

void	no_flag_percent(t_conv_id *s_ptr, int len)
{
	str_fill_char(s_ptr->output, ' ', len);
	s_ptr->output[len - 1] = '%';
}

int		calc_len_percent(t_conv_id *s_ptr)
{
	int len;

	len = (1 < s_ptr->width ? s_ptr->width : 1);
	return (len);
}

int		ft_conv_percent(t_conv_id *s_ptr, va_list *arg_ptr)
{
	int	len;

	len = calc_len_percent(s_ptr);
	if (!(s_ptr->output = (char *)malloc(sizeof(char) * (len + 1))))
		return (-1);
	s_ptr->output[len] = '\0';
	if ((s_ptr->flags & 4) == 4)
		minus_flag_percent(s_ptr, len);
	else
		no_flag_percent(s_ptr, len);
	write(1, s_ptr->output, len);
	free(s_ptr->output);
	return (len);
	len = va_arg(*arg_ptr, int);
}
