/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 16:54:47 by plagache          #+#    #+#             */
/*   Updated: 2019/05/23 16:41:06 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_data
{
	int				fd;
	char			*content;
}					t_data;

int					get_next_line(const int fd, char **line);

#endif
