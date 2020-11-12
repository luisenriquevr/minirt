/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:33:34 by lvarela           #+#    #+#             */
/*   Updated: 2020/11/05 15:28:55 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

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
		aux = ft_strdup(*str + len + 1);
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

int	returns(int n_bytes, char **str, char **line)
{
	if (n_bytes < 0)
		return (-1);
	else if (n_bytes == 0 && *str == '\0')
	{
		*line = ft_strdup("");
		return (0);
	}
	else
		return (save_in_line(str, line));
}

int	get_next_line(int fd, char **line)
{
	char			buff[BUFFER_SIZE + 1];
	int				n_bytes;
	static char		*str;
	char			*aux;

	if (fd < 0 || !line || BUFFER_SIZE < 1)
		return (-1);
	while ((n_bytes = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[n_bytes] = '\0';
		if (str == NULL)
			str = ft_strdup(buff);
		else
		{
			aux = ft_strjoin(str, buff);
			free(str);
			str = aux;
		}
		if (ft_strchr(str, '\n'))
			break ;
	}
	return (returns(n_bytes, &str, line));
}
