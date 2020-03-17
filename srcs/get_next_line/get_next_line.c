/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 16:54:19 by plagache          #+#    #+#             */
/*   Updated: 2019/05/11 17:12:11 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_data			*init(int fd, t_list **lst)
{
	t_data	*node;
	t_list	*poslst;

	poslst = *lst;
	while (poslst)
	{
		node = (t_data*)(poslst->content);
		if (fd == node->fd)
			return (node);
		poslst = (poslst)->next;
	}
	poslst = ft_lstnew(NULL, 0);
	poslst->content_size = sizeof(t_data);
	if (!(poslst->content = (malloc(poslst->content_size))))
		return (NULL);
	node = (t_data*)(poslst->content);
	node->fd = fd;
	node->content = NULL;
	ft_lstadd(lst, poslst);
	return (node);
}

void			free_struct(t_data *current, t_list **lst)
{
	t_list *poslst;
	t_list *tmplst;

	poslst = *lst;
	while ((t_data*)(poslst->content) != current)
	{
		tmplst = poslst;
		poslst = poslst->next;
	}
	if (poslst == *lst)
		*lst = (*lst)->next;
	else
		tmplst->next = poslst->next;
	free(poslst->content);
	free(poslst);
}

int				readline(t_data *current)
{
	char	buff[BUFF_SIZE + 1];
	char	*tmp;
	int		lsr;

	lsr = 0;
	if (!current->content)
	{
		if ((current->content = ft_strnew(0)) == NULL)
			return (-1);
	}
	while (ft_strchr(current->content, '\n') == NULL &&
			(lsr = read(current->fd, buff, BUFF_SIZE)) > 0)
	{
		buff[lsr] = '\0';
		tmp = ft_strjoin(current->content, buff);
		free(current->content);
		current->content = tmp;
	}
	return (lsr);
}

void			filline(t_data *current, char **line)
{
	size_t	i;
	char	*tmp;
	char	*ptr;

	ptr = ft_strchr(current->content, '\n');
	i = ptr - current->content;
	if (ptr != NULL)
	{
		*line = ft_strsub(current->content, 0, i);
		tmp = ft_strdup(ptr + 1);
		free(current->content);
		current->content = tmp;
	}
	else
	{
		*line = current->content;
		current->content = NULL;
	}
}

int				get_next_line(const int fd, char **line)
{
	static	t_list	*head = NULL;
	t_data			*current;
	int				lsr;

	if (fd < 0 || line == NULL || BUFF_SIZE < 1)
		return (-1);
	current = init(fd, &head);
	if ((lsr = readline(current)) < 0)
		return (-1);
	filline(current, line);
	if (current->content == NULL && ft_strlen(*line) == 0)
	{
		free_struct(current, &head);
		return (0);
	}
	return (1);
}
