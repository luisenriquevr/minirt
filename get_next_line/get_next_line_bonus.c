/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:46:59 by lvarela           #+#    #+#             */
/*   Updated: 2020/01/23 12:55:34 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	save_in_line(char **str, char **line)
{
	int		len;
	char	*aux;

	len = 0;
	while ((*str)[len] != '\n' && (*str)[len] != '\0')
		len++;
	if ((*str)[len] == '\n')
	{
		*line = ft_substr(*str, 0, len);
		aux = ft_strdup(&(*str)[len + 1]);
		free(*str);
		*str = aux;
	}
	else
	{
		*line = ft_strdup(*str);
		free(*str);
		*str = NULL;
		return (0);
	}
	return (1);
}

int	returns(int fd, int n_bytes, char **str, char **line)
{
	if (n_bytes < 0)
		return (-1);
	else if (n_bytes == 0 && str[fd] == '\0')
	{
		*line = ft_strdup("");
		return (0);
	}
	else
		return (save_in_line(&str[fd], line));
}

int	get_next_line(int fd, char **line)
{
	char			buff[BUFFER_SIZE + 1];
	int				n_bytes;
	static char		*str[FD_SIZE];
	char			*aux;

	if (fd < 0 || !line || BUFFER_SIZE < 1)
		return (-1);
	while ((n_bytes = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[n_bytes] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strdup(buff);
		else
		{
			aux = ft_strjoin(str[fd], buff);
			free(str[fd]);
			str[fd] = aux;
		}
		if (ft_strchr(str[fd], '\n'))
			break ;
	}
	return (returns(fd, n_bytes, str, line));
}
